#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    
    public:
        Complex();
        Complex(float r);
        Complex(float r, float i);
        Complex(const Complex& c);
        ~Complex();
        float getReal();
        float getImag();
        void setReal(float r);
        void setImag(float i);
        float getAmplitude();
        float getPhase();
        friend bool operator==(const Complex& c1, const Complex& c2);
        friend bool operator!=(const Complex& c1, const Complex& c2);
        Complex& operator=(const Complex& c);
        Complex& operator+=(const Complex& c);
        Complex& operator-=(const Complex& c);
        Complex& operator*=(const Complex& c);
        Complex& operator/=(const Complex& c);
        friend ostream& operator<<(ostream& os, const Complex& c);
        friend Complex operator+(const Complex& c1, const Complex& c2);
        friend Complex operator-(const Complex& c1, const Complex& c2);
        friend Complex operator*(const Complex& c1, const Complex& c2);
        friend Complex operator/(const Complex& c1, const Complex& c2);
};