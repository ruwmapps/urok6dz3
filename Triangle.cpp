#include "Triangle.h"

    Triangle::Triangle(int A, int B, int C, int a, int b, int c) {
        name_figura = "�����������";
        this->A = A;
        this->B = B;
        this->C = C;
        this->a = a;
        this->b = b;
        this->c = c;
    };

    std::string Triangle::get_info_storona() {
        return "�������: a=" + std::to_string(this->a) + " b=" + std::to_string(this->b) + " c=" + std::to_string(this->c);
    }

    std::string Triangle::get_info_ugol() {
        return "����: A=" + std::to_string(this->A) + " B=" + std::to_string(this->B) + " C=" + std::to_string(this->C);
    }
