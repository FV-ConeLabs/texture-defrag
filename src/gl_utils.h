/*******************************************************************************
    Copyright (c) 2021, Andrea Maggiordomo, Paolo Cignoni and Marco Tarini

    This file is part of TextureDefrag, a reference implementation for
    the paper ``Texture Defragmentation for Photo-Reconstructed 3D Models''
    by Andrea Maggiordomo, Paolo Cignoni and Marco Tarini.

    TextureDefrag is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    TextureDefrag is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with TextureDefrag. If not, see <https://www.gnu.org/licenses/>.
*******************************************************************************/

#ifndef GL_UTILS_H
#define GL_UTILS_H

#include <vector>
#include <memory>
#include <cstdint>

#include <QOpenGLFunctions_4_1_Core>

using OpenGLFunctionsVersion = QOpenGLFunctions_4_1_Core;
using OpenGLFunctionsHandle = OpenGLFunctionsVersion*;

OpenGLFunctionsHandle GetOpenGLFunctionsHandle();


/* Prints the last OpenGL error code */
void CheckGLError(const char* file, int line);
// Add a macro for convenience
#define CHECK_GL_ERROR() CheckGLError(__FILE__, __LINE__)

/* Reads a shader from path into a string and returns it */
std::string ReadShader(const char *path);

/* Compiles a vertex shader source and a fragment shader source into a program */
uint32_t CompileShaders(const char **vs_text, const char **fs_text);


#endif // GL_UTIL_H

