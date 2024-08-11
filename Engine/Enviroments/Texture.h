/*
Copyright (C) 2023-2024 Excilious

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

//-------------------Texture.h-------------------//
//  Author: Excilious
//  Date: 05/04/24
//  Abstraction: Header file for texture.
//
//----------------------------------------------//

#ifndef TEXTURE_HEADER
#define TEXTURE_HEADER

#include "../Dependancies/glad/glad.h"
#include "../Dependancies/stb/stb_image.h"
#include "Shader.h"

class Texture
{
    public: 
        GLuint TextureID;
        GLuint Unit;
        const char* Type;

        Texture(const char* Image,const char* TextureType,GLuint Slot);
        void TextureUnit(Shader& NewShader,const char* Uniform,GLuint Unit);
        void Bind();
        void Unbind();
        void Delete();
};

#endif 
