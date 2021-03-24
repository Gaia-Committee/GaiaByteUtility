#pragma once

#include "../Byte.hpp"

#include <string>

namespace Gaia::ByteUtility::Bitwise
{
	/**
	 * @brief This class contains some static methods designed for easily bitwise print a byte.
	 */
	class BitwisePrinter
	{
	public:
		/**
		 * @brief Print every bit of a byte into a string in human-readable style.
		 * @param byte The byte to print.
		 * @return The text of the bits of the given byte.
		 */
		static std::string PrintToString(Byte byte);
	};
}