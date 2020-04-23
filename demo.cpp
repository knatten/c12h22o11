#include "c12h22o11.h"

#include <type_traits>

int main()
{
    
    static_assert(std::is_same<c12h22o11::white_sugar_t, decltype(c12h22o11::brown_sugar - c12h22o11::molasses)>::value);
    static_assert(std::is_same<c12h22o11::brown_sugar_t, decltype(c12h22o11::white_sugar + c12h22o11::molasses)>::value);
    static_assert(std::is_same<c12h22o11::molasses_t, decltype(c12h22o11::brown_sugar - c12h22o11::white_sugar)>::value);

    // c12h22o11::white_sugar - c12h22o11::molasses; // doesn't compile
    // c12h22o11::brown_sugar + c12h22o11::molasses // doesn't compile
}
