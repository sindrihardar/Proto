#include <Proto.h>

class Sandbox : public Proto::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox()
	{
		
	}

};

Proto::Application* Proto::CreateApplication()
{
	return new Sandbox();
}