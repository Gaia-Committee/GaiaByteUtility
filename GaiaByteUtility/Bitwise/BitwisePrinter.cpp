#include "BitwisePrinter.hpp"

#include "ByteBitwiseReader.hpp"

#include <sstream>

namespace Gaia::ByteUtility::Bitwise
{
	/// Print every bit of a byte into a string in human-readable style.
	std::string BitwisePrinter::PrintToString(Byte byte)
	{
		const auto& bits_data = ReadBitwiseByte(byte);

		std::stringstream builder;
		for (const auto& enable : bits_data)
		{
			builder << std::noboolalpha << enable;
		}
		return builder.str();
	}
}