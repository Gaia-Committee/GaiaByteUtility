#include <gtest/gtest.h>
#include <GaiaByteUtility/GaiaByteUtility.hpp>
#include <iostream>

using namespace Gaia;

TEST(BytesBuilderTest, BasicUsage)
{
	ByteUtility::BytesBuilder builder;
	builder.AddValue(15);
	builder.AddValue(char('A'));
	builder.AddValue(4);

	std::cout << ByteUtility::BytesPrinter::PrintToString(ByteUtility::ToBytesAddress(builder.BytesData)) << std::endl;
}