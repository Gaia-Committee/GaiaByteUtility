#pragma once

#include "../BytesAddress.hpp"

#include <vector>

namespace Gaia::ByteUtility
{
	/**
	 * @brief Use std::vector as the container of bytes, because it can represents a part of consistent memory,
	 *        and can change the size of the buffer dynamically.
	 */
	using BytesBuffer = std::vector<Byte>;

	/// Cast BytesBuffer into BytesAddress
	inline BytesAddress ToBytesAddress(BytesBuffer& buffer)
	{
		return BytesAddress(buffer.data(), buffer.size());
	}
}