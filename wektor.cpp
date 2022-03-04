#include "wektor.h"

std::ostream& operator<< (std::ostream& stream, Wektor v) {
    return stream << "Wektor(" << v.x << ", " << v.y << ")\n"
    << "      (" << v.ang << ", " << v.mag << ")";
}

// ----------- Private ----------
void Wektor::CalculatePolar() {
    ang = atan((y/x));
    mag = sqrt( (pow(x, 2) + pow(y, 2)) );
}
void Wektor::CalculateCartesian() {
    x = mag * cos(ang);
    y = mag * sin(ang);
}

// ----------- Public -----------
Wektor::Wektor(double x_, double y_) : x(x_), y(y_) {
    CalculatePolar();
}
void Wektor::SetCart(double x_, double y_) {
    this->x = x_;
    this->y = y_;
    CalculatePolar();
}
void Wektor::SetPolar(double ang_, double mag_) {
    this->ang = ang_;
    this->mag = mag_;
    CalculateCartesian();
}
Wektor Wektor::operator+ (Wektor& v) const {
    return {x + v.x, y + v.y};
}
Wektor Wektor::operator- (Wektor& v) const {
    return {x - v.x, y - v.y};
}
Wektor Wektor::operator* (Wektor& v) const {
    return {x * v.x - y * v.y, x * v.y + y * v.x};
}
Wektor Wektor::operator* (double& d) const {
    return {x * d, y * d};
}
void Wektor::Show(bool b) const {
    if (b) {
        std::cout << "Wektor(" << x << ", " << y << ")";
    }
    else {
        std::cout << "Wektor(" << ang << ", " << mag << ")";
    }
}

