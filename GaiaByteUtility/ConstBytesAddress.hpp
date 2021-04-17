#pragma once

#include "BytesAddress.hpp"

namespace Gaia::ByteUtility
{
    /**
	 * @brief This class is used to describe a part of read-only bytes data.
	 * @details
	 *  To transfer data conveniently among raw array, std::vector, and other containers, this structure
	 *  use raw pointer and the length of the bytes to describe the beginning and the ending address of the data.
	 *  This class only store the information of the data and is not responsible for maintaining the memory of the data.
	 */
    class ConstBytesAddress
    {
    public:
        Byte const * Data {nullptr};
        /// The length of the memory it actually holds.
        std::size_t Length {0};

    public:
        /// Default constructors which will initialize data to nullptr.
        ConstBytesAddress() = default;

        /// Constructor with given address and length of the data.
        ConstBytesAddress(Byte const * data, std::size_t length) : Data(data), Length(length)
        {}

        /// Constructor with a given BytesAddress
        explicit ConstBytesAddress(BytesAddress address) : Data(address.Data), Length(address.Length)
        {}

        /// Converter to Byte* aka. the address of a bytes array.
        explicit operator Byte const *() const
        {
            return Data;
        }

        /// Get the BytesAddress of the memory of a variable.
        template<typename ValueType>
        static ConstBytesAddress FromValue(ValueType& value)
        {
            return ConstBytesAddress(&value, sizeof (ValueType));
        }
    };
}