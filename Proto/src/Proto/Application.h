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

	// Ver�ur skilgreint � client
	Application* CreateApplication();

}