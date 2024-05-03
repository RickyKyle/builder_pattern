#include "house_director.hpp"

house_director::house_director() : builder_(){}

void house_director::set(house_builder * builder)
{
    if(builder_)
    {
        delete builder_;
    }

    builder_ = builder;
}

house house_director::get()
{
    return builder_->get();
}

void house_director::construct_house()
{
    builder_->build_door();
    builder_->build_roof();
    builder_->build_walls();
}