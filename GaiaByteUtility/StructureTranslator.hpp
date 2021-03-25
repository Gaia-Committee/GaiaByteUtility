#pragma once

#include "Byte.hpp"

namespace Gaia::ByteUtility
{
	/**
	 * @brief This union is designed for easily translate a structure into a bytes array.
	 * @tparam StructureType The type of the structure.
	 * @details Pay attention to the align of the structure which may cause the actual size of it is bigger than the
	 *          total size of all its members.
	 *          Remember that the bytes array is using the memory of the structure.
	 */
	template <typename StructureType>
	union StructureTranslator
	{
		StructureType Structure;
		Byte BytesData[sizeof (StructureType)];
	};
}