#include <variant>

namespace c12h22o11
{
    struct white_sugar_t;
    struct molasses_t;

    struct brown_sugar_t
    {
        white_sugar_t operator-(molasses_t);
    
    };
    brown_sugar_t brown_sugar;

    struct white_sugar_t
    {
        brown_sugar_t operator+(molasses_t);
    };
    white_sugar_t white_sugar;
    
    struct molasses_t{};
    molasses_t molasses;

    using sugar = std::variant<white_sugar_t, brown_sugar_t>;

    white_sugar_t brown_sugar_t::operator-(molasses_t)
    {
        return white_sugar;
    }

    brown_sugar_t white_sugar_t::operator+(molasses_t)
    {
        return brown_sugar;
    }
}
