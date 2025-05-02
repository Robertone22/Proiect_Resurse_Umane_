#include "Angajat.h"
#include <iostream>

Angajat::Angajat(const std::string& nume, int varsta, double salariu)
    : nume(nume), varsta(varsta), salariu(salariu) {}

double Angajat::getSalariu() const {
    return salariu;
}

std::string Angajat::getNume() const {
    return nume;
}

void Angajat::promoveaza(double procent) {
    salariu += salariu * procent / 100.0;
}