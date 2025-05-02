#ifndef INTERN_H
#define INTERN_H

#include "Angajat.h"

class Intern : public Angajat {
public:
    Intern(const std::string& nume, int varsta, double salariu);
    void afiseazaDetalii() const override;
    std::shared_ptr<Angajat> clone() const override;
};

#endif