#ifndef WEKTOR_MAT_WEKTOR_H
#define WEKTOR_MAT_WEKTOR_H

#include <iostream>
#include <cmath>

class Wektor {
    friend std::ostream& operator<<(std::ostream&, Wektor);
private:
    double x{}, y{};
    double ang{}, mag{};

    void CalculatePolar();
    void CalculateCartesian();
public:

    Wektor(double, double);
    void SetCart(double, double);
    void SetPolar(double, double);
    Wektor operator+(Wektor&) const;
    Wektor operator-(Wektor&) const;
    Wektor operator*(Wektor&) const;
    Wektor operator*(double&) const;
    void Show(bool) const;

};

#endif //WEKTOR_MAT_WEKTOR_H
