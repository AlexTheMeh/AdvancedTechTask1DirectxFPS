#include "App.h"

int SCREEN_WIDTH = 800;
int SCREEN_HEIGHT = 600;

App::App()
	:
	wnd(SCREEN_WIDTH, SCREEN_HEIGHT, "DirectX11 First Person Shooter")
{}

int App::Run()
{
	while (true)
	{
		if (const auto ecode = Window::ProcessMessage())
		{
			return *ecode;
		}
		DoFrame();
	}
}

void App::DoFrame()
{
	const float c = sin(timer.Peek()) / 2.0f + 0.5f;
	//wnd.Gfx().ClearBuffer(c, c, 1.0f);

	wnd.Gfx().ClearBuffer(255.0f, 105.0f, 180.0f);
	wnd.Gfx().DrawTestTriangle(timer.Peek(), 0, 0.5, 5);
	wnd.Gfx().RenderFrame();
}