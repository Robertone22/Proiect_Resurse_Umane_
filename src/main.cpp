#include <iostream>
#include <vector>
#include <memory>
#include <fstream>
#include <sstream>
#include "../include/Manager.h"
#include "../include/Intern.h"
#include "../include/HrManager.h"

int main() {
    std::vector<std::shared_ptr<Angajat>> angajati;

    std::ifstream in("angajati.txt");
    std::string line;
    while (std::getline(in, line)) {
        std::istringstream iss(line);
        std::string tip, nume;
        int varsta;
        double salariu;
        iss >> tip >> nume >> varsta >> salariu;
        if (tip == "Manager") {
            angajati.push_back(std::make_shared<Manager>(nume, varsta, salariu));
        } else if (tip == "Intern") {
            angajati.push_back(std::make_shared<Intern>(nume, varsta, salariu));
        } else if (tip == "HR") {
            angajati.push_back(std::make_shared<HrManager>(nume, varsta, salariu));
        }
    }

    for (const auto& a : angajati) {
        a->afiseazaDetalii();
    }

    return 0;
}