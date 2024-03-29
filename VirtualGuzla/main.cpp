#include "main.hpp"

int main(int argc, char** argv)
{
	// Load engine
	Engine(true);

	// Load window
	auto window = Window(Window::windowed, Vector2<int>(1280, 720), true);

	// Get config
	auto config = new Config();
	config->setString("engine", "crowengine_2_lite");
	config->save();

	// Main loop
	while (true)
	{
		window.clear(Color::blue);
		window.flip();
	}
}