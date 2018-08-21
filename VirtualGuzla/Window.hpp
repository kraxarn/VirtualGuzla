#pragma once

#include "Vector2.hpp"
#include "Color.hpp"

namespace ce
{
	class Window
	{
	public:
		enum WindowMode
		{
			windowed,
			fullscreenWindow,
			fullscreen,
			frameless
		};

		/// @brief Creates window
		/// @param mode Window video mode
		/// @param size Window size
		/// @param vsync Enable vsync
		Window(WindowMode mode, Vector2<int> size, bool vsync);

		/// @brief Centers the current window
		void centerWindow();

		/// @brief Set size and center current window
		void setSize(Vector2<int> size);

		/// @brief Clear window with color
		void Clear(Color color = Color::black);

		/// @brief Flip renderer
		void Flip();
	};
}