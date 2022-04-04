#pragma once
#include "Window.h"
#include "windows.h"
#include "Time.h"

class App
{
public:
	App();
	int Run();

private:
	void DoFrame();

	Window wnd;
	Time timer;
};