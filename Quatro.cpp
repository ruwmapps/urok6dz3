#include "Quatro.h"

Quatro::Quatro(int A, int B, int C, int D, int a, int b, int c, int d) {
    name_figura = "�������";
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
};


std::string Quatro::get_info_storona() {
    return "�������: a=" + std::to_string(this->a) + " b=" + std::to_string(this->b) + " c=" + std::to_string(this->c) + " d=" + std::to_string(this->d);
};

std::string Quatro::get_info_ugol() {
    return "����: A=" + std::to_string(this->A) + " B=" + std::to_string(this->B) + " C=" + std::to_string(this->C) + " D=" + std::to_string(this->D);
};