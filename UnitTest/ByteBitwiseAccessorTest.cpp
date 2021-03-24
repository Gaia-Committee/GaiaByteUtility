#include <gtest/gtest.h>
#include <GaiaByteUtility/GaiaByteUtility.hpp>
#include <iostream>

using namespace Gaia;

TEST(ByteBitwiseAccessorTest, BasicThrow)
{
	ByteUtility::Bitwise::ByteBitwiseAccessor accessor {};
	accessor.AsByte = 0xFF;
	accessor.AsBits.Bit3 = false;
	std::cout << ByteUtility::Bitwise::BitwisePrinter::PrintToString(accessor.AsByte) << std::endl;
}