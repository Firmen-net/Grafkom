#version 330 core
out vec4 FragColor; 

in vec2 TexCoord;
in vec3 ourColor;  


// Texture samplers
uniform sampler2D ourTexture;
uniform vec3 color

void main()
{
    FragColor = texture(ourTexture, TexCoord) * vec4(ourColor, 1.0);  
}