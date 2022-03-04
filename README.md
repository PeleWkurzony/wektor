# ***Wektor***

### Konstruktor:
```c++
    Wektor(double x, double y);
```

### Funkcje:

```c++
    void SetCart(double x, double y);
    void SetPolar(double ang, double mag);
    Wektor operator+(Wektor& u) const;
    Wektor operator-(Wektor& u) const;
    Wektor operator*(Wektor& u) const;
    Wektor operator*(double& d) const;
    
    
    void Show(bool) const;
    /// true - wyświetla kartezjańskie współrzędne
    /// false - wyświetla biegunowe współrzędne
```

### Przeładowania:
```c++
    std::ostream& operator<<(std::ostream&, Wektor);
```