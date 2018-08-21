#include "main.hpp"

int main(int argc, char** argv)
{
	// Load engine
	cout << "Loading engine..." << endl;
	Engine(false);

	// Load window
	cout << "Creating window..." << endl;
	auto window = Window(Window::windowed, Vector2<int>(1280, 720), true);

	// Main loop
	cout << "Entering main loop..." << endl;
	while (true)
	{
		
	}
}