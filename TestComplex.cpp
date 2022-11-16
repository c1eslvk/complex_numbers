#include <iostream>
#include "Complex.h"

using namespace std;

void testArythmeticOperators(Complex a, Complex b);
void testArythmeticAssignmetOperators(Complex a, Complex b);
void testCompatisonOperators(Complex a, Complex b);
void testOtherCases(Complex a, Complex b);
void testAmpAndPhase(Complex a);
void printABC(Complex a, Complex b, Complex c);


int main() {
    Complex a(3, 5);
    Complex b(2, 8);

    cout << endl << "--------------------------" << endl;
    testArythmeticOperators(a, b);
    cout << endl << "--------------------------" << endl;
    testArythmeticAssignmetOperators(a, b);
    cout << endl << "--------------------------" << endl;
    testCompatisonOperators(a, b);
    cout << endl << "--------------------------" << endl;
    testAmpAndPhase(a);
    cout << endl << "--------------------------" << endl;
    testOtherCases(a, b);

    return 0;
}

void testArythmeticOperators(Complex a, Complex b) {
    cout << "Testing Arythmetic Operators" << endl;
    
    cout << "a + b = ";
    cout << a + b << endl; // 5 + 13i
    
    cout << "a - b = ";
    cout << a - b << endl; //1 - 3i
    
    cout << "a * b = ";
    cout << a * b << endl; // -34 + 34i
    
    cout << "a / b = ";
    cout << a / b << endl; // 0.676 - 0.205i
    
    cout << endl;
}

void testArythmeticAssignmetOperators(Complex a, Complex b) {
    cout << "Testing Arythmetic Assignment Operators" << endl;
    
    cout << "a += b ---> a = ";
    a += b;
    cout << a << endl; // 5 + 13i
    
    cout << "a -= b ---> a = ";
    a -= b;
    cout << a << endl; // 3 + 5i
    
    cout << "a *= b ---> a = ";
    a *= b;
    cout << a << endl; // -34 + 34i
    
    cout << "a /= b ---> a = ";
    a /= b;
    cout << a << endl; // 3 + 5i
    
    cout << endl;
}

void testCompatisonOperators(Complex a, Complex b) {
    Complex c(a);
    
    cout << "Testing Comparison Operators" << endl;
    
    cout << "a == b ---> "; // false
    if (a == b) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    cout << "a == c ---> "; // true
    if (a == c) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    cout << "a != b ---> "; //true
    if (a != b) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    cout << "a != c ---> "; // false
    if (a != c) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    cout << endl;
}

void testAmpAndPhase(Complex a) {
    cout << "Testing Amplitude and Phase" << endl;
    
    cout << "Amplitude = ";
    cout << a.getAmplitude() << endl; // 5.83
    
    cout << "Phase = ";
    cout << a.getPhase() << endl; // 1.03
    
    cout << endl;
}

void testOtherCases(Complex a, Complex b) {
    Complex c(4, 2);
    Complex d(3.5);

    cout << "Testing Other Cases" << endl;
    
    cout << "a += b += c" << endl;
    a += b += c;
    printABC(a, b, c);
    // a = 9 + 15i
    // b = 6 + 10i
    // c = 4 + 2i
    cout << endl;
    
    cout << "(a += b) += c" << endl;
    (a += b) += c;
    printABC(a, b, c);
    // a = 19 + 27i
    // b = 6 + 10i
    // c = 4 + 2i
    cout << endl;
    
    cout << "a *= b *= c" << endl;
    a *= b *= c;
    printABC(a, b, c);
    // a = -1328 - 1096i
    // b = 4 + 52i
    // c = 4 + 2i
    cout << endl;
    
    cout << "(a *= b) *= c" << endl;
    (a *= b) *= c;
    printABC(a, b, c);
    // a = -119872 - 383296i
    // b = 4 + 52i
    // c = 4 + 2i
    cout << endl;

    Complex e(5, 8);

    cout << "e + 7 = "; 
    cout << e + 7 << endl; // 12 + 8i
    
    cout << "7 + e = ";
    cout << 7 + e << endl; // 12 + 8i
    
    cout << "e * 5 = ";
    cout << e * 5 << endl; // 25 + 40i
    
    cout << "e * 5 = ";
    cout << 5 * e << endl; // 25 + 40i
    
    cout << "d == 3.5 ---> "; // true
    if (d == 3.5) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    
    cout << "3.5 == d ---> "; // true
    if (3.5 == d) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    cout << endl;
}

void printABC(Complex a, Complex b, Complex c) {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}