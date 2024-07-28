#include "PixieUI.h"

using namespace PixieUI;

bool PixieUI::Init() {
	return Renderer::Init();
}

void PixieUI::SetCanvaseSize(uint32_t width, uint32_t height) {
	Renderer::SetCanvasSize(width, height);
}
