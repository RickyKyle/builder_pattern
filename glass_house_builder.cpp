#include "glass_house_builder.hpp"


void glass_house_builder::build_roof()
{
    constructed_house_.set_roof("Glass Roof");
}

void glass_house_builder::build_walls()
{
    constructed_house_.set_walls("Glass Wars");
}

void glass_house_builder::build_door()
{
    constructed_house_.set_door("Glass Door");
}