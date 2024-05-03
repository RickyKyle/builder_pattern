#ifndef HOUSE_DIRECTOR_HPP
#define HOUSE_DIRECTOR_HPP

#include "house_builder.hpp"

#include <memory>


class house_director
{

public:

    house_director();

    void set(house_builder * builder);
    house get();
    void construct_house();

private:

    house_builder * builder_;

};

#endif // HOUSE_DIRECTOR_HPP