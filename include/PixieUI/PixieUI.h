#ifndef PIXIE_UI
#define PIXIE_UI

#include "FrameBuffer.h"
#include "ShaderLibrary.h"
#include "Color.h"
#include "Style.h"
#include "BMPDecoder.h"
#include "Shaders.h"
#include "Renderer.h"
#include "Element.h"
#include "Text.h"
#include "Texture.h"
#include "Layout.h"
#include "Button.h"
#include "ButtonList.h"
#include "MenuButton.h"
#include "Menu.h"
#include "Window.h"

namespace PixieUI {
	bool Init();
	void SetCanvasSize(uint32_t width, uint32_t height);
}

#endif // PIXIE_UI