#include "ByteBitwiseReader.hpp"

#include "ByteBitwiseAccessor.hpp"

namespace Gaia::ByteUtility::Bitwise
{
	/// Analyse a byte into an array of 8 bits.
	std::array<bool, 8> ReadBitwiseByte(const Byte& byte)
	{
		ByteBitwiseAccessor accessor {};
		accessor.AsByte = byte;
		std::array<bool, 8> bits{};

		bits[0] = accessor.AsBits.Bit0;
		bits[1] = accessor.AsBits.Bit1;
		bits[2] = accessor.AsBits.Bit2;
		bits[3] = accessor.AsBits.Bit3;
		bits[4] = accessor.AsBits.Bit4;
		bits[5] = accessor.AsBits.Bit5;
		bits[6] = accessor.AsBits.Bit6;
		bits[7] = accessor.AsBits.Bit7;

		return bits;
	}
}