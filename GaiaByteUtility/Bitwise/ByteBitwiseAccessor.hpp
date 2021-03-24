#pragma once

#include "../Byte.hpp"

namespace Gaia::ByteUtility::Bitwise
{
	/**
	 * @brief This union is designed for accessing every single bit of a byte.
	 * @details It is supposed to be used as a converter or an accessor rather than a certain type of data.
	 */
	union ByteBitwiseAccessor
	{
		/// Access this byte as a set of bits.
		struct
		{
			bool Bit0 : 1;
			bool Bit1 : 1;
			bool Bit2 : 1;
			bool Bit3 : 1;
			bool Bit4 : 1;
			bool Bit5 : 1;
			bool Bit6 : 1;
			bool Bit7 : 1;
		}AsBits;
		/// Access this byte as a whole.
		Byte AsByte;
	};

	/**
	 * @brief Set the value of a certain bit of a byte.
	 * @param byte The byte which will be edited.
	 * @param index The index of the bit which will be edited.
	 * @param enable 'true' stands for '1' and 'false' stands for '0'.
	 */
	void SetBit(Byte& byte, unsigned int index, bool enable);
}