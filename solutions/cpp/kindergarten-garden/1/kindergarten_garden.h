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
    enum students{
        Alice, Bob, Charlie, David, Eve, Fred, Ginny, Harriet, Ileana, Joseph, Kincaid, Larry
    };

    students string_to_student(const std::string&);

    Plants char_to_plant(char);

    std::array<Plants, 4> plants(const std::string&, const std::string&);


    
}  // namespace kindergarten_garden