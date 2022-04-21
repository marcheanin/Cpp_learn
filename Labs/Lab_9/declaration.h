//
// Created by march on 21.04.2022.
//

#ifndef LAB_9_DECLARATION_H
#define LAB_9_DECLARATION_H

#endif //LAB_9_DECLARATION_H

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

template <typename T>
class NumSet{
private:
    set <T> data;
public:
    NumSet(T x);
    NumSet();
    void putSet(set <T> x);
    void add(T x);
    NumSet(NumSet<T> const &x);
    //~NumSet();
    set <T> getSet() const;
    void print();
    bool operator() (T x);
};
