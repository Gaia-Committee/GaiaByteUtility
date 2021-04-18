#pragma once

#include "Byte.hpp"
#include <cstddef>
#include <string>

namespace Gaia::ByteUtility
{
	/**
	 * @brief This class is used to describe a part of bytes data.
	 * @details
	 *  To transfer data conveniently among raw array, std::vector, and other containers, this structure
	 *  use raw pointer and the length of the bytes to describe the beginning and the ending address of the data.
	 *  This class only store the information of the data and is not responsible for maintaining the memory of the data.
	 */
	class BytesAddress
	{
	public:
		Byte* Data {nullptr};
		/// The length of the memory it actually holds.
		std::size_t Length {0};

	public:
		/// Default constructors which will initialize data to nullptr.
		BytesAddress() = default;

		/// Constructors with given address and length of the data.
		BytesAddress(Byte* data, std::size_t length) : Data(data), Length(length)
		{}

		/// Converter to Byte* aka. the address of a bytes array.
		explicit operator Byte *() const
		{
			return Data;
		}

		/// Get the BytesAddress of the memory of a variable.
		template<typename ValueType>
		static BytesAddress FromValue(ValueType& value)
        {
		    return BytesAddress(&value, sizeof (ValueType));
        }

        /// Get the BytesAddress of the characters of a string.
        static BytesAddress FromString(std::string& text)
        {
		    return BytesAddress(reinterpret_cast<unsigned char*>(text.data()), text.size());
        }
	};
}