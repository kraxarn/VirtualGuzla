#pragma once

#include <iostream>
#include <fstream>
#include <random>

using namespace std;

#pragma region Global vars

// Engine vars
const string GameName    = "Virtual Guzla Sound";
const string ProjectName = "VGS";

#pragma endregion 

namespace ce
{
	class Engine
	{
	public:
		/// @brief Loads the engine
		/// @param devMode Enable developer mode
		explicit Engine(bool devMode);

		/// @brief Logs to console or file
		/// @param message Message to log (without new line)
		static void log(string message);

		/// @brief Shows error messages and closes the game
		/// @param message Message to show
		static void error(string message);

		/// @brief Shows a warning message, but doesn't close the game
		/// @param message Message to show
		static void warning(string message);

		/// @brief Gets the path to a writable directory
		/// @param file Optional file to concatenate
		static string getWritePath(string file);

		/// @brief Checks if file exists in write directory
		/// @param fileName File to check
		static bool fileExists(string fileName);
	};
}