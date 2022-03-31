#include "declaration.h"

//chainFraction

chainFraction::chainFraction(Fraction x) {
    this->Size = 1;
    this->capacity = 10;
    this->frac = new Fraction[capacity];
    frac[0] = x;
}

chainFraction::chainFraction(){
    this->Size = 0;
    this->capacity = 10;
    this->frac = new Fraction[capacity];
}

void chainFraction::appendElem(Fraction elem) {
    if (Size >= capacity){
        addMemory();
    }
    Size++;
    frac[Size-1] = elem;
}

Fraction& chainFraction::operator[](int i){
    return frac[i];
}

int chainFraction::getSize() {
    return this->Size;
}

Fraction& chainFraction::getElem(int index){
    return this->frac[index];
}

chainFraction::~chainFraction() {
    delete [](frac);
}

void chainFraction::addMemory() {
    capacity *= 2;
    Fraction *tmp = frac;
    frac = new Fraction[capacity];
    for (int i = 0; i < Size; i++){
        frac[i] = tmp[i];
    }
    delete[] tmp;
}

Fraction chainFraction::getValue() {
    Fraction res = frac[Size - 1];
    for (int i = Size - 2; i >= 0; i--){
        res = Fraction::sum(frac[i], Fraction::oneDivision(res));
    }
    return res;
}

//Fraction& chainFraction::operator[](int i){
//    return frac[i];
//}

//Fraction

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

Fraction Fraction::oneDivision(Fraction a) {
    return Fraction(a.getDenominator(), a.getNumerator());
}





