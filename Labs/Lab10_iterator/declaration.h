//
// Created by march on 23.04.2022.
//

#ifndef LAB10_ITERATOR_DECLARATION_H
#define LAB10_ITERATOR_DECLARATION_H

#endif //LAB10_ITERATOR_DECLARATION_H
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

Fraction operator+ (const Fraction &a, const Fraction &b){
    return Fraction::sum(a, b);
}

class Fractions {
private:
    Fraction* arr;
    int size;
public:
    class Iterator;
    explicit Fractions(Fraction *s, int _size) : arr(s), size(_size){}

    Fraction& operator[] (const int& i) { return arr[i]; }

    Iterator begin() { return arr; }
    Iterator end() { return arr + size - 1; }

    class Iterator{
        Fraction* cur;
    public:
        Iterator(Fraction* first) : cur(first){}

        Fraction&  operator++ (int) { return *(cur++); }

        bool operator!= (const Iterator& it) {return cur != it.cur; }
        bool operator== (const Iterator& it) {return cur == it.cur; }

        Iterator operator+=(Fraction x){
            *cur = *cur + x;
            //Fractions::arr
            return *this;
        }
        Fraction operator* (){
            return *cur + *(cur + 1);
        }
    };
};

Fraction::Fraction(int a, int b) {
    this->a = a;
    this->b = b;
    simplify();
}

Fraction::Fraction(){
    this->a = 1;
    this->b = 1;
    simplify();
}

//Fraction::Fraction(Fraction &x){
//    this->a = x.getNumerator();
//    this->b = x.getDenominator();
//}

void Fraction::simplify(){
    int t = gcd(a, b);
    this->a = a / t;
    this->b = b / t;
}

int Fraction::gcd(int a, int b) {
    return b?gcd(b,a%b):a;
}

int Fraction::getNumerator() {
    return this->a;
}

int Fraction::getDenominator(){
    return this->b;
}

Fraction Fraction::sum(Fraction a, Fraction b) {
    int a1 = a.getNumerator(), a2 = a.getDenominator();
    int b1 = b.getNumerator(), b2 = b.getDenominator();
    int y = (a2 * b2) / gcd(a2, b2);
    a1 *= y / a2;
    b1 *= y / b2;
    int x = a1 + b1;
    return Fraction(x, y);
}





