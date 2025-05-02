#ifndef HRMANAGER_H
#define HRMANAGER_H

#include "Angajat.h"

class HrManager : public Angajat {
public:
    HrManager(const std::string& nume, int varsta, double salariu);
    void afiseazaDetalii() const override;
    std::shared_ptr<Angajat> clone() const override;

    void concediaza(std::vector<std::shared_ptr<Angajat>>& lista, const std::string& numeAngajat);
    void promoveazaAngajat(std::vector<std::shared_ptr<Angajat>>& lista, const std::string& numeAngajat, double procent);
};

#endif