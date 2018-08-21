#pragma once
#include <cstdint>

namespace ce
{
	class Color
	{
	public:
		static const Color black;
		static const Color white;
		static const Color transparent;

		static const Color red;
		static const Color pink;
		static const Color purple;
		static const Color blue;
		static const Color cyan;
		static const Color green;
		static const Color yellow;
		static const Color orange;

		uint8_t r;
		uint8_t g;
		uint8_t b;
		uint8_t a;

		/// @brief Default black color, Color(0, 0, 0, 255)
		Color();

		/// @brief Create color from 4 RGBA channels
		Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 255);

		/// @brief Create color from 32-bit unsigned int
		explicit Color(uint32_t color);

		/// @brief Return color as 32-bit int
		uint32_t toInt() const;
	};
}
