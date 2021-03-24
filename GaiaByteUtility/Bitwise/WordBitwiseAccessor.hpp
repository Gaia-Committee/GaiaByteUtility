#pragma once

#include "ByteBitwiseAccessor.hpp"

namespace Gaia::ByteUtility::Bitwise
{
	/**
	 * @brief This union is designed for accessing every single byte of a word.
	 * @details It is supposed to be used as a converter or an accessor rather than a certain type of data.
	 */
	union WordBitwiseAccessor
	{
		/// Access this word as two bytes.
		struct
		{
			/// Byte of 8 bits on lower address.
			ByteBitwiseAccessor Byte0;
			/// Byte of 8 bits on higher address.
			ByteBitwiseAccessor Byte1;
		}AsBytes;
		/// Access this word as a whole.
		Word AsWord;
	};
}