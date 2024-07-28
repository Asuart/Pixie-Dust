# PixieUI
OpenGL based library for simple UI. I do not recomend to use it, because it's made as placeholder UI for my other projects and requires a lot more work to be decent. It doesn't provide a lot of utility at the moment, isn't optimized and can be buggy. 
The purpose of this code is to create small scale primitive UI (approximately 600 by 400 pixels) and upscale it to your screen. All sizes are set in pixel values and everything is absolutely positioned.
It allows you to set up UI that can:
- Render text in 5x7 pixel font.
- Draw rectangles with border.
- Draw textures.
- Set colors of text, background, border for default and hover state.
- Trigger click and scroll event on UI and set Click and Scroll callbacks for elements. 

## Requirements
C++ 20 standard is recommended.
PixieUI requires `GLEW` library to be installed on your system.

## Build
Premake5 is used for project generation.
Build is configured and tested for Visual Studio 2022 on Windows 10.
To generate project solution file execute `scripts/Setup-Windows.bat`.

## Usage
To start using library in your project follow these steps:
1) Build this project as a static library.
2) Add `.lib` file as dependency in your project.
3) Add `include/PixieUI` to yout include directories.
4) Add `#include "PixieUI.h"` to your file.
5) Call `PixieUI::Init();` after OpenGL is initialized in your project.
6) Call `PixieUI::SetCanvasSize(width, height);` to set resolution that `Renderer` will use to map from layout space to screen space.

### Usage with `PixieUI::Layout`
Allows you to create tree of elements and configure interactivity as you need.
This exemplary code will render "Hello, World!" text at position `x: 20`, `y: 20` in layout space.
1) Create a layout variable. `PixieUI::Layout* ui = new PixieUI::Layout(600, 400);`
2) Create new element. `PixieUI::Element* text = new PixieUI::Text("Hello, World!", 20, 20);`
3) Attach element to layout. `ui->AttachElement(text);`
4) Call `ui->Draw();` in your render loop to call `Draw();` function on every attached element.
Elements are drawn by calling `PixieUI::Renderer` in their `Draw()` functions.

To make element interactive follow these steps:
1) Create new element. `PixieUI::Element* clickableText = new PixieUI::Text("Hello, World!", 20, 20);`
2) Attach function or lambda to element. `clickableText->SetClickCallback([&](int32_t x, int32_t y) { std::cout << x << " " << y << "\n"; return true;});`. On click it will print `x` and `y` coordinates relative to the left top corner of the element. `return true;` means that `event` should stop propagation.
3) Attach element to layout. `ui->AttachElement(clickableText);`
4) Trigger click event. `ui->Click(x, y);`. `x` and `y` must be in layout space.

### Usage with `PixieUI::Renderer`
`PixieUI::Renderer` allows you to draw to the screen without creating layout and elements, but can't be interactive.
`PixieUI::renderer::DrawText("Hello, world", 20, 20, Color(255, 255, 255));` called in render loop, will be identical to "Hello, World!" example using layout. 

## License
- UNLICENSE for this repository (see `UNLICENSE.txt` for more details)
- Premake is licensed under BSD 3-Clause (see included LICENSE.txt file for more details)