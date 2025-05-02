#ifndef MANAGER_H
#define MANAGER_H

#include "Angajat.h"

class Manager : public Angajat {
public:
    Manager(const std::string& nume, int varsta, double salariu);
    void afiseazaDetalii() const override;
    std::shared_ptr<Angajat> clone() const override;
};

#endif