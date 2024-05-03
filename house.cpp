#include "house.hpp"

#include <iostream>

void house::set_roof(std::string const & roof_style)
{
    roof = roof_style;
}

void house::set_walls(std::string const & wall_style)
{
    walls = wall_style;
}

void house::set_door(std::string const & door_style)
{
    door = door_style;
}

std::string house::get()
{
    return (roof + " " + walls + " " + door);
}