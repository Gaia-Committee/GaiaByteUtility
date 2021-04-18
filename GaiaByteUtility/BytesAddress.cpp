#include "BytesAddress.hpp"

namespace Gaia::ByteUtility
{
    /// Convert the data on this address into a string.
    std::string BytesAddress::ToString() const
    {
        std::string text;
        text.resize(Length);
        for (int index = 0; index < Length; ++index)
        {
            text[index] = static_cast<char>(Data[index]);
        }
        return text;
    }
}
