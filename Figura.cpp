#include "Figura.h"


 std::string Figura::get_info_storona() { return ""; }
 std::string Figura::get_info_ugol() { return ""; }
 Figura::Figura() {};
 void Figura::print_info(Figura* f) {
     std::cout << this->name_figura << ":\n" << f->get_info_storona() << "\n" << f->get_info_ugol() << "\n\n";
 };