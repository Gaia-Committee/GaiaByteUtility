#include "ByteBitwiseAccessor.hpp"

namespace Gaia::ByteUtility::Bitwise
{
	/// Set the value of a certain bit of a byte.
	void SetBit(Byte& byte, unsigned int index, bool enable)
	{
		unsigned char mask = 1 << index;
		if (enable)
		{
			byte |= mask;
		}
		else
		{
			mask = ~mask;
			byte &= mask;
		}
	}
}