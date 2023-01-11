#pragma once

#include <string>
#include <iostream>

class Figura
{
protected:
    std::string name_figura;

    virtual std::string get_info_storona();
    virtual std::string get_info_ugol();

public:
    Figura();
    void print_info(Figura* f);
};
