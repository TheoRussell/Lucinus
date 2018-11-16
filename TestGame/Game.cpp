#include <Lucinus.h>

class Game : public Lucinus::Application
{
public:
	Game() {

	}

	~Game() {

	}
};

Lucinus::Application* Lucinus::CreateApplication() {
	return new Game();
}