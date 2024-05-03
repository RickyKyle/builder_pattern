#include <iostream>

#include "brick_house_builder.hpp"
#include "glass_house_builder.hpp"
#include "house_director.hpp"

int main() {

    house_director director;

    director.set(new glass_house_builder);
    director.construct_house();
    house glass_house = director.get();

    director.set(new brick_house_builder);
    director.construct_house();
    house brick_house = director.get();

    std::cout << glass_house.get() << std::endl;
    std::cout << brick_house.get() << std::endl;

    return 0;
}
