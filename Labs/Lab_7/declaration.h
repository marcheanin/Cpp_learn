//
// Created by march on 30.03.2022.
//

#include <iostream>

using namespace std;

class Fraction{
private:
    int a, b;
    void simplify();
public:
    Fraction();
    Fraction(int a, int b);
   // Fraction(Fraction &x);
    int getNumerator();
    int getDenominator();
    static Fraction sum(Fraction a, Fraction b);
    static Fraction oneDivision(Fraction a);
    friend ostream& operator<< (ostream &output, const Fraction &frac){
        output << frac.a << " / " << frac.b;
        return output;
    }
    friend istream& operator>> (istream &in, Fraction &frac){
        in >> frac.a >> frac.b;
        frac.simplify();
        return in;
    }

    static int gcd(int a, int b);
};

class chainFraction{
private:
    int Size;
    int capacity;
    Fraction *frac;
public:
    chainFraction();
    chainFraction(Fraction x);
    int getSize();
    Fraction& getElem(int index);
    void appendElem(Fraction elem);
    Fraction getValue();
    Fraction& operator[](int i);
    void addMemory();
    ~chainFraction();

    friend ostream& operator<< (ostream &out, const chainFraction &frac){
        for (int i = 0; i < frac.Size; i++){
            out << frac.frac[i] << endl;
        }
        return out;
    }
};

#ifndef LAB_7_DECLARATION_H
#define LAB_7_DECLARATION_H

#endif //LAB_7_DECLARATION_H
