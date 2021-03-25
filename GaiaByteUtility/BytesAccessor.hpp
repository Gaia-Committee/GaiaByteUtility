#pragma once

#include "BytesAddress.hpp"

#include <GaiaExceptions/GaiaExceptions.hpp>

namespace Gaia::ByteUtility
{
	/**
	 * @brief Reinterpret certain bytes as another certain type of value and access its value.
	 * @tparam ValueType Target type which certain bytes will be reinterpreted into.
	 * @param address The beginning byte of the bytes to reinterpret.
	 * @return Const reference of the value on the given adress.
	 */
	template<typename ValueType>
	inline ValueType& AccessBytesAs(const Byte* address)
	{
		return *reinterpret_cast<ValueType*>(address);
	}

	/**
	 * @brief This class is designed for easily access certain index of a bytes array as other types of values.
	 * @details This class should be used only as a kind of converter rather than a container which holds memory.
	 */
	class BytesAccessor
	{
	public:
		/// Bytes to access.
		BytesAddress SourceBytes;

		/**
		 * @brief Access the bytes from the given beginning index as another type of value.
		 * @tparam ValueType Type which souce bytes will be reinterpreted into.
		 * @param index The beginning index of the bytes to reinterpret.
		 * @return Const reference of the value on the given bytes.
		 */
		template<typename ValueType>
		ValueType& Access(unsigned int index)
		{
			// index plus the size of the ValueType equals the index of the endpoint + 1,
			// which should be less or equal to the length of the source bytes.
			if (index + sizeof (ValueType) > SourceBytes.Length)
			{
				throw Exceptions::ExceptionWrapper<std::out_of_range>(
						"Access index (" + std::to_string(index) + ") out of length (" +
						std::to_string(SourceBytes.Length) + ").");
			}
			return *reinterpret_cast<ValueType*>(SourceBytes.Data + index);
		}
	};
}