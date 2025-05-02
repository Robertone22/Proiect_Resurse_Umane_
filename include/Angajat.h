#ifndef ANGAJAT_H
#define ANGAJAT_H

#include <string>
#include <memory>

class Angajat {
protected:
    std::string nume;
    int varsta;
    double salariu;

public:
    Angajat(const std::string& nume, int varsta, double salariu);
    virtual ~Angajat() = default;

    virtual void afiseazaDetalii() const = 0;
    virtual std::shared_ptr<Angajat> clone() const = 0;

    double getSalariu() const;
    std::string getNume() const;

    virtual void promoveaza(double procent);
};

#endif