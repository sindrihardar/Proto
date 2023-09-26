#pragma once


#ifdef PT_PLATFORM_WINDOWS

extern Proto::Application* Proto::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Proto::CreateApplication();
	app->Run();
	delete app;
}

#endif