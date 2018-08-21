#include "main.hpp"

int main(int argc, char** argv)
{
	// Load engine
	Engine(true);

	// Load window
	auto window = Window(Window::windowed, Vector2<int>(1280, 720), true);

	// Main loop
	while (true)
	{
		window.Clear();
		window.Flip();
	}
}