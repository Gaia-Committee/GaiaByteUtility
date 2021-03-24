#pragma once

#include "../Byte.hpp"

#include <array>

namespace Gaia::ByteUtility::Bitwise
{
	/**
	 * @brief Analyse a byte into an array of 8 bits.
	 * @param byte Byte to analyse.
	 * @return Array of 8 bool, where 'true' stands for '1' and 'false' stands for '0'.
	 *         The sequence of bit index is [7][6][5][4][3][2][1][0], which means that bit on higher address will
	 *         appear ahead of that on lower address.
	 */
	std::array<bool, 8> ReadBitwiseByte(const Byte& byte);
}