#pragma once

#include "Containers/BytesBuffer.hpp"

namespace Gaia::ByteUtility
{
	/**
	 * @brief This class is designed for construct a bytes array with values in sequence.
	 */
	class BytesBuilder
	{
	public:
		/// Container for bytes storage.
		BytesBuffer BytesData;

		/**
		 * @brief Add a value to the end of the bytes array.
		 * @tparam ValueType The type of the value.
		 * @param value Value to add.
		 */
		template<typename ValueType>
		void AddValue(ValueType value)
		{
			auto *data = reinterpret_cast<unsigned char*>(&value);
			for (int index = sizeof(ValueType) - 1; index >= 0; --index)
			{
				BytesData.push_back(data[index]);
			}
		}
	};
}