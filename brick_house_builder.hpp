#ifndef BRICK_HOUSE_BUILDER_HPP
#define BRICK_HOUSE_BUILDER_HPP

#include "house_builder.hpp"

class brick_house_builder : public house_builder
{

public:

    void build_roof();
    void build_walls();
    void build_door();
};

#endif // BRICK_HOUSE_BUILDER_HPP