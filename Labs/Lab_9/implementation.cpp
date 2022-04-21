//
// Created by march on 21.04.2022.
//

#include "declaration.h"

template <typename T>
NumSet<T>::NumSet(T x) {
    data.insert(x);
}

template<typename T>
set<T> NumSet<T>::getSet() const{
    return data;
}

template<typename T>
NumSet<T>::NumSet(const NumSet<T> &x) {
    data = x.getSet();
}

template<typename T>
void NumSet<T>::print() {
    for(auto i : data){
        cout << i << " ";
    }
    cout << endl;
}

template<typename T>
void NumSet<T>::add(T x) {
    data.insert(x);
}

template<typename T>
NumSet<T>::NumSet() {}

template<typename T>
void NumSet<T>::putSet(set <T> x) {
    data = x;
}

template<typename T>
bool NumSet<T>::operator() (T x) {
    return data.count(x);
}

template <typename T>
NumSet<T> operator+(const NumSet<T> &a, const NumSet<T> &b){
    NumSet <T> x;
    set <T> r;
    set <T> aset = a.getSet();
    set <T> bset = b.getSet();
    for (auto i : aset){
        r.insert(i);
    }
    for (auto i : bset){
        r.insert(i);
    }
    x.putSet(r);
    return x;
}

template <typename T>
NumSet<T> operator*(const NumSet<T> &a, const NumSet<T> &b){
    NumSet <T> x;
    set <T> r;
    set <T> aset = a.getSet();
    set <T> bset = b.getSet();
    set_intersection(aset.begin(), aset.end(), bset.begin(), bset.end(), inserter(r, r.begin()));
    x.putSet(r);
    return x;
}





