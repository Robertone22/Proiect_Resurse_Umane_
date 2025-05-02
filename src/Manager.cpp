#include "Manager.h"
#include <iostream>

Manager::Manager(const std::string& nume, int varsta, double salariu)
    : Angajat(nume, varsta, salariu) {}

void Manager::afiseazaDetalii() const {
    std::cout << "Manager: " << nume << ", Varsta: " << varsta << ", Salariu: " << salariu << "\n";
}

std::shared_ptr<Angajat> Manager::clone() const {
    return std::make_shared<Manager>(*this);
}