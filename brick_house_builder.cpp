#include "brick_house_builder.hpp"


void brick_house_builder::build_roof()
{
    constructed_house_.set_roof("Brick Roof");
}

void brick_house_builder::build_walls()
{
    constructed_house_.set_walls("Brick Wars");
}

void brick_house_builder::build_door()
{
    constructed_house_.set_door("Brick Door");
}