#ifndef PIXIE_UI_SHADER_LIBRARY
#define PIXIE_UI_SHADER_LIBRARY

#include <GL/glew.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

namespace PixieUI {

	class ShaderLibrary {
	public:
		static GLuint LoadShaders(const char* vertex_file_path, const char* fragment_file_path);
		static GLuint CreateShaderProgramm(const std::string& vsSource, const std::string& fsSource);
		static GLuint LoadComputeShader(const char* path);
	};

}

#endif // PIXIE_UI_SHADER_LIBRARY