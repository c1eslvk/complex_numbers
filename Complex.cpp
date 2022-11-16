#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex() {
    real = 0;
    imag = 0;
}

Complex::Complex(float r) {
    real = r;
    imag = 0;
}

Complex::Complex(float r, float i) {
    real = r;
    imag = i;
}

Complex::Complex(const Complex& c) {
    real = c.real;
    imag = c.imag;
}

Complex::~Complex() {}

float Complex::getReal() {
    return real;
}

float Complex::getImag() {
    return imag;
}

void Complex::setReal(float r) {
    real = r;
}

void Complex::setImag(float i) {
    imag = i;
}

float Complex::getAmplitude() {
    float amp;
    
    amp = sqrt(pow(real, 2) + pow(imag, 2));

    return amp;
}

float Complex::getPhase() {
    return atan2(imag, real);
}

bool operator==(const Complex& c1, const Complex& c2) {
    if (fabs(c1.real - c2.real) < __DBL_EPSILON__) {
        if (fabs(c1.imag - c2.imag) < __DBL_EPSILON__) {
            return true;
        }
    }

    return false;
}

bool operator!=(const Complex& c1, const Complex& c2 ) {
    if (c1 == c2) {
        return false;
    }

    return true;
}

Complex& Complex::operator=(const Complex& c) {
    real = c.real;
    imag = c.imag;

    return *this;
}

Complex& Complex::operator+=(const Complex& c) {
    real = real + c.real;
    imag = imag + c.imag;

    return *this;
}

Complex& Complex::operator-=(const Complex& c) {
    real = real - c.real;
    imag = imag - c.imag;

    return *this;
}

Complex& Complex::operator*=(const Complex& c) {
    Complex temp;

    temp = *this * c;
    *this = temp;

    return *this;
}

Complex& Complex::operator/=(const Complex& c) {
    Complex temp;

    temp = *this / c;
    *this = temp;

    return *this;
}

// ostream& operator<<(ostream& os, const Complex& c) {
//     if (c.real != 0 && c.imag != 0) {
//         os << "(" << c.real << ", " << c.imag << "i)";
//     }
//     else if(c.real == 0) {
//         os << "(" << c.imag << "i)";
//     }
//     else {
//         os << "(" << c.real << ")";
//     }

//     return os;
// }

ostream& operator<<(ostream& os, const Complex& c) {
    if (c.real != 0 && c.imag > 0) {
        os << c.real << " + " << c.imag << "i";
    }
    else if (c.real != 0 && c.imag < 0) {
        os << c.real << " - " << -c.imag << "i";
    }
    else if (c.real == 0 && c.imag != 0) {
        os << c.imag << "i";
    }
    else {
        os << c.real;
    }

    return os;
}

Complex operator+(const Complex& c1, const Complex& c2) {
    Complex temp;

    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}

Complex operator-(const Complex& c1, const Complex& c2) {
    Complex temp;

    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;

    return temp;
}

Complex operator*(const Complex& c1, const Complex& c2) {
    Complex temp;

    temp.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    temp.imag = (c1.real * c2.imag) + (c2.real * c1.imag);

    return temp; 
}

Complex operator/(const Complex& c1, const Complex& c2) {
    Complex temp;

    temp.real = ((c1.real * c2.real) + (c1.imag * c2.imag)) / (pow(c2.real, 2) + pow(c2.imag, 2));
    temp.imag = ((c2.real * c1.imag) - (c1.real * c2.imag)) / (pow(c2.real, 2) + pow(c2.imag, 2));

    return temp;
}