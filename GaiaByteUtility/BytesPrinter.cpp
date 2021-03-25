#include "BytesPrinter.hpp"

#include <sstream>
#include <iomanip>

namespace Gaia::ByteUtility
{
	/// Print the content of a bytes array into a string in human-readable style.
	std::string BytesPrinter::PrintToString(const BytesAddress &address)
	{
		std::stringstream builder;

		for (long long index = static_cast<long long>(address.Length) - 1; index >= 0; --index)
		{
			builder << " " << std::uppercase << std::setfill('0') << std::setw(2) << std::hex << (unsigned int)(address.Data[index]);
		}

		return builder.str();
	}

	/// Print the content of a bytes array into multiply strings in human-readable style.
	std::vector<std::string> BytesPrinter::PrintToStrings(const BytesAddress &address)
	{
		std::stringstream builder;

		std::vector<std::string> result_strings;
		result_strings.reserve(address.Length);

		for (unsigned int index = 0; index < address.Length; ++index)
		{
			builder << " " << std::uppercase << std::setfill('0') << std::setw(2) << std::hex << (unsigned int)(address.Data[index]);
			result_strings.emplace_back(builder.str());
			// Clear the string stream.
			builder.str("");
		}

		return result_strings;
	}
}