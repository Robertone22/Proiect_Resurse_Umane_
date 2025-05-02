#include "Intern.h"
#include <iostream>

Intern::Intern(const std::string& nume, int varsta, double salariu)
    : Angajat(nume, varsta, salariu) {}

void Intern::afiseazaDetalii() const {
    std::cout << "Intern: " << nume << ", Varsta: " << varsta << ", Salariu: " << salariu << "\n";
}

std::shared_ptr<Angajat> Intern::clone() const {
    return std::make_shared<Intern>(*this);
}