#include <iostream>
#include <windows.h>
#include <string>
#include "Triangle.h"
#include "Triangle90.h"
#include "Triangle2line.h"
#include "Triangle3line.h"
#include "Quatro.h"
#include "Parrallelogram.h"
#include "Romb.h"
#include "Pramougolnik.h"
#include "Kvadrat.h"




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



    //Figura figura;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Triangle90 triangle90(10, 20, 30, 50, 60);
    Triangle2line triangle2line(10, 20, 50, 60);
    Triangle3line triangle3line(30);
    Quatro quatro(10, 20, 30, 40, 50, 60, 70, 80);
    Parrallelogram parrallelogram(20, 30, 30, 40);
    Romb romb(30, 40, 30);
    Pramougolnik pramougolnik(10, 20);
    Kvadrat kvadrat(20);

    triangle.print_info(&triangle);
    triangle90.print_info(&triangle90);
    triangle2line.print_info(&triangle2line);
    triangle3line.print_info(&triangle3line);
    quatro.print_info(&quatro);
    parrallelogram.print_info(&parrallelogram);
    romb.print_info(&romb);
    pramougolnik.print_info(&pramougolnik);
    kvadrat.print_info(&kvadrat);
}