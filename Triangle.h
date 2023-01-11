#pragma once
#include "Figura.h"

class Triangle : public Figura
{
protected:
    // углы
    int A = 0;
    int B = 0;
    int C = 0;
    // стороны
    int a = 0;
    int b = 0;
    int c = 0;

public:
    Triangle(int A, int B, int C, int a, int b, int c);

    std::string get_info_storona() override;

    std::string get_info_ugol() override;
};
