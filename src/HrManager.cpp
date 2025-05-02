#include "HrManager.h"
#include <iostream>
#include <algorithm>

HrManager::HrManager(const std::string& nume, int varsta, double salariu)
    : Angajat(nume, varsta, salariu) {}

void HrManager::afiseazaDetalii() const {
    std::cout << "HR Manager: " << nume << ", Varsta: " << varsta << ", Salariu: " << salariu << "\n";
}

std::shared_ptr<Angajat> HrManager::clone() const {
    return std::make_shared<HrManager>(*this);
}

void HrManager::concediaza(std::vector<std::shared_ptr<Angajat>>& lista, const std::string& numeAngajat) {
    lista.erase(std::remove_if(lista.begin(), lista.end(),
        [&](const std::shared_ptr<Angajat>& a) { return a->getNume() == numeAngajat; }), lista.end());
}

void HrManager::promoveazaAngajat(std::vector<std::shared_ptr<Angajat>>& lista, const std::string& numeAngajat, double procent) {
    for (auto& a : lista) {
        if (a->getNume() == numeAngajat) {
            a->promoveaza(procent);
        }
    }
}