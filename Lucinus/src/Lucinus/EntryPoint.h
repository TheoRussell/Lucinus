#pragma once

#ifdef LC_PLATFORM_WINDOWS

extern Lucinus::Application* Lucinus::CreateApplication();

int main(int argc, char** argv) {

	auto app = Lucinus::CreateApplication();
	app->run();
	delete app;
}

#else
	#error Only windows
#endif