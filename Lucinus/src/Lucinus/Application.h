#pragma once

#include "Core.h"

namespace Lucinus {

	class LUCINUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};


	Application* CreateApplication();

}
