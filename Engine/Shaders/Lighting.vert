#version 330 core
layout (location = 0) in vec3 aPos;
uniform mat4 projection;
uniform mat4 view;
uniform mat4 matrix;
uniform mat4 translation;

void main()
{
    gl_Position = projection*view*translation*matrix*vec4(aPos,1.0f);
}

