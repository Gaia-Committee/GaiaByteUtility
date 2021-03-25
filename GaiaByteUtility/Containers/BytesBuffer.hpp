#pragma once

#include "../BytesAddress.hpp"

#include <vector>
#include <string>

namespace Gaia::ByteUtility
{
	/**
	 * @brief Use std::vector as the container of bytes, because it can represents a part of consistent memory,
	 *        and can change the size of the buffer dynamically.
	 */
	using BytesBuffer = std::vector<Byte>;

	/// Cast BytesBuffer into BytesAddress
	inline BytesAddress ToBytesAddress(const BytesBuffer& buffer)
	{
		return BytesAddress(const_cast<unsigned char*>(buffer.data()), buffer.size());
	}

	/// Cast BytesBuffer into BytesAddress
	inline BytesAddress ToBytesAddress(const std::string& text)
	{
		return BytesAddress(reinterpret_cast<unsigned char*>(const_cast<char*>(text.data())), text.size());
	}
}