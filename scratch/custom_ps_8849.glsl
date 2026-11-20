#version 330 compatibility
in vec4 v_col0;
in vec4 v_col1;
in vec3 v_uv0;
in vec3 v_uv1;
in vec3 v_uv2;
in vec3 v_uv3;
in vec3 v_uv4;
in vec3 v_uv5;
in vec3 v_uv6;
in vec3 v_uv7;
uniform sampler2D u_tex[8];
uniform vec4 u_tev_reg[4];
uniform vec4 u_konst[4];
uniform vec4 u_tex_inv_wh[8];
uniform vec4 u_su_scale[8];
uniform int u_tex_mode[8];
uniform vec2 u_alpha_ref;
uniform vec2 u_const_alpha;
out vec4 o_color;

ivec4 sample_gx_tex(sampler2D s, int tm, vec3 stq, int tc) {
    vec2 proj_uv = (abs(stq.z) > 1e-7) ? (stq.xy / stq.z) : clamp(stq.xy * 0.5, vec2(-1.0), vec2(1.0));
    vec2 uv = proj_uv * u_su_scale[tc].xy * u_tex_inv_wh[tm].xy;
    ivec4 c = ivec4(round(clamp(texture(s, uv), 0.0, 1.0) * 255.0));
    int m = u_tex_mode[tm];
    if (m == 1) c.a = 255;
    else if (m == 2) c = ivec4(c.r);
    else if (m == 3) c = ivec4(c.rrr, c.a);
    return c;
}

int idot(ivec3 x, ivec3 y) { return x.r * y.r + x.g * y.g + x.b * y.b; }

void main() {
    ivec4 reg_prev = ivec4(round(u_tev_reg[0] * 255.0));
    ivec4 reg_c0   = ivec4(round(u_tev_reg[1] * 255.0));
    ivec4 reg_c1   = ivec4(round(u_tev_reg[2] * 255.0));
    ivec4 reg_c2   = ivec4(round(u_tev_reg[3] * 255.0));
    ivec4 kreg[4];
    for (int i = 0; i < 4; ++i) kreg[i] = ivec4(round(clamp(u_konst[i], 0.0, 1.0) * 255.0));
    ivec4 col0_i = ivec4(round(clamp(v_col0, 0.0, 1.0) * 255.0));
    ivec4 col1_i = ivec4(round(clamp(v_col1, 0.0, 1.0) * 255.0));
    ivec4 rastemp, textemp, konsttemp, tevin_a, tevin_b, tevin_c, tevin_d;
    const ivec3 comp16 = ivec3(1, 256, 0);
    const ivec3 comp24 = ivec3(1, 256, 65536);
    // TEV Stage 0
    rastemp = col0_i.rgba;
    textemp = sample_gx_tex(u_tex[0], 0, v_uv0, 0).rgba;
    konsttemp = ivec4(ivec3(64), 255);
    tevin_a = ivec4(ivec3(0), 0) & ivec4(255);
    tevin_b = ivec4(textemp.rgb, textemp.a) & ivec4(255);
    tevin_c = ivec4(rastemp.rgb, rastemp.a) & ivec4(255);
    tevin_d = ivec4(ivec3(0), 0);
    reg_prev.rgb = clamp((((tevin_d.rgb)) + (((((tevin_a.rgb << 8) + (tevin_b.rgb - tevin_a.rgb) * (tevin_c.rgb + (tevin_c.rgb >> 7)))) + 128) >> 8)), ivec3(0), ivec3(255));
    reg_prev.a = clamp((((tevin_d.a)) + (((((tevin_a.a << 8) + (tevin_b.a - tevin_a.a) * (tevin_c.a + (tevin_c.a >> 7)))) + 128) >> 8)), 0, 255);
    ivec4 out_i = reg_prev & ivec4(255);
    o_color = vec4(vec3(out_i.rgb) / 255.0, float(out_i.a) / 255.0);
}
