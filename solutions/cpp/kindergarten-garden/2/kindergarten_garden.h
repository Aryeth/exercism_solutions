#pragma once

#include <string>
#include <array>
#include <unordered_map>
#include <vector>

namespace kindergarten_garden {
    enum class Plants{
        grass,
        clover,
        violets,
        radishes
    };

    Plants char_to_plant(char);

    std::array<Plants, 4> plants(const std::string&, const std::string&);

}  // namespace kindergarten_garden