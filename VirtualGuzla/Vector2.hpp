#pragma once

namespace ce
{
	template <typename T>
	class Vector2
	{
	public:
		T x;
		T y;

		/// @brief Creates a Vector2(0, 0)
		Vector2() : x(0), y(0) {}

		/// @brief Create Vector2 from coordinates
		Vector2(T x, T y) : x(x), y(y) {}

		/// @brief Create Vector2 from another typer of Vector2
		template <typename U>
		explicit Vector2(const Vector2<U>& vector2) : x(static_cast<T>(vector2.x)), y(static_cast<T>(vector2.y)) {}
	};
}