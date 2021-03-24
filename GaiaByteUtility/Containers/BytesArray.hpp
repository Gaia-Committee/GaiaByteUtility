#pragma once

#include "../BytesAddress.hpp"

#include <array>

namespace Gaia::ByteUtility
{
	/// To represents a memory space of const length.
	template<std::size_t LengthArgument>
	using BytesArray = std::array<Byte, LengthArgument>;

	/// Cast BytesArray into BytesAddress
	template<std::size_t LengthArgument>
	inline BytesAddress ToBytesAddress(BytesArray<LengthArgument>& array)
	{
		return BytesAddress(array.data(), array.size());
	}
}