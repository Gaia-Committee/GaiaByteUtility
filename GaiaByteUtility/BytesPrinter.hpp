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
		 *         The byte on higher address is printed ahead of those in lower address, e.g. :
		 *         a decimal integer number (int) '3' will be printed as '00 00 00 03'.
		 *
		 */
		static std::string PrintToString(const BytesAddress& address);

		/**
		 * @brief Print the content of a bytes array into multiply strings in human-readable style.
		 * @param address The address information of the bytes to print.
		 * @return Readable text of the content of the given bytes array.
		 *         The index of the string in std::vector<std::string> is same to the index of a byte in bytes array,
		 *         e.g.:
		 *         a decimal integer number (int) '3' will be printed as '03' '00' '00' '00'.
		 */
		static std::vector<std::string> PrintToStrings(const BytesAddress& address);
	};
}