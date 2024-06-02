static const GLchar *OPENGL_QUAD_VS =
"#version 100\n"
"attribute vec2 a_position;\n"
"varying vec2 v_texCoord;\n"
"\n"
"void main() {\n"
"    gl_Position = vec4(a_position, 0.0, 1.0);\n"
"    v_texCoord = a_position * 0.5 + 0.5;\n"
"}\n";

static const GLchar *OPENGL_QUAD_FS =
"#version 100\n"
"precision mediump float;\n"
"varying vec2 v_texCoord;\n"
"uniform sampler2D s_texture;\n"
"\n"
"void main() {\n"
"    gl_FragColor = texture2D(s_texture, v_texCoord);\n"
"}\n";

static GLfloat OPENGL_QUAD_VERTS[] = {
    -1.0f, -1.0f,
    -1.0f,  1.0f,
     1.0f, -1.0f,
     1.0f,  1.0f
};