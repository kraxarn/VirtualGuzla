#pragma once

#include <string>

using namespace std;

namespace ce
{
	class Config
	{
	public:
		/// @brief Loads config from file or creates new file
		Config();

		/// @brief Get a string from config
		string getString(const string& key, const string& fallback);

		/// @brief Get a string from config
		int getInt(const string& key, int fallback);

		/// @brief Get a string from config
		float getFloat(const string& key, float fallback);

		/// @brief Get a string from config
		bool getBool(const string& key, bool fallback);

		/// @brief Set a string to config
		void setString(const string& key, const string& value);

		/// @brief Set a string to config
		void setInt(const string& key, int value);

		/// @brief Set a string to config
		void setFloat(const string& key, float value);

		/// @brief Set a string to config
		void setBool(const string& key, bool value);

		/// @brief Save changes to disk
		void save();
	};
}