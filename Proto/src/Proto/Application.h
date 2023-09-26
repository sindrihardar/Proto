#pragma once

#include "Core.h"


namespace Proto {

	class PROTO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Verður skilgreint í client
	Application* CreateApplication();

}