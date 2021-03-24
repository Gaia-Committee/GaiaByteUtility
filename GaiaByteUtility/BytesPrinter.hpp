#pragma once

#include "BytesAddress.hpp"

#include <string>
#include <vector>

namespace Gaia::ByteUtility
{
	/**
	 * @brief This class contains some static methods designed for easily formatting a bytes array.
	 */
	class BytesPrinter
	{
	public:
		/**
		 * @brief Print the content of a bytes array into a single string in human-readable style.
		 * @param address The address information of the bytes to print.
		 * @return Readable text of the content of the given bytes array.
		 */
		static std::string PrintToString(const BytesAddress& address);

		/**
		 * @brief Print the content of a bytes array into multiply strings in human-readable style.
		 * @param address The address information of the bytes to print.
		 * @return Readable text of the content of the given bytes array.
		 */
		static std::vector<std::string> PrintToStrings(const BytesAddress& address);
	};
}