#ifndef HOUSE_HPP
#define HOUSE_HPP

#include <string>

class house{

public:

    void set_roof(std::string const & roof_style);
    void set_walls(std::string const & wall_style);
    void set_door(std::string const & door_style);

    std::string get();

private:

    std::string roof;
    std::string walls;
    std::string door;
};

#endif // HOUSE_HPP