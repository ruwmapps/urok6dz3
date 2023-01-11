#pragma once
#include "Figura.h"

class Quatro : public Figura
{
protected:
    // углы
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    // стороны
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

public:
    Quatro(int A, int B, int C, int D, int a, int b, int c, int d);
    std::string get_info_storona() override;
    std::string get_info_ugol() override;
};
