#ifndef GLASS_HOUSE_BUILDER_HPP
#define GLASS_HOUSE_BUILDER_HPP

#include "house_builder.hpp"

class glass_house_builder : public house_builder
{

public:

    void build_roof();
    void build_walls();
    void build_door();
};

#endif // GLASS_HOUSE_BUILDER_HPP