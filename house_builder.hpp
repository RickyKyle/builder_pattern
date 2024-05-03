#ifndef HOUSE_BUILDER_HPP
#define HOUSE_BUILDER_HPP

#include "house.hpp"

class house_builder
{

public:

    virtual ~house_builder(){}

    house get()
    {
        return constructed_house_;
    }

    virtual void build_roof() = 0;
    virtual void build_walls() = 0;
    virtual void build_door() = 0;

protected:

    house constructed_house_;
};

#endif // HOUSE_BUILDER_HPP