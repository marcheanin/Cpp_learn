//
// Created by march on 18.04.2022.
//

#ifndef LAB_8_DECLARATION_H
#define LAB_8_DECLARATION_H

#endif //LAB_8_DECLARATION_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <int L, int H, bool CheckRange = (H - L <= 128) >
class IntQueue{
private:
    int* data;
    int size;
    int start;
    int end;
public:
    IntQueue(int _size);
    ~IntQueue();
    void Add(int val);
    int Pop();
    int Top();
    string getQueueType();
};

template<int L, int H>
class IntQueue<L, H, true>{
private:
    char* data;
    int size;
    int start;
    int end;
public:
    IntQueue(int _size);
    ~IntQueue();
    void Add(int val);
    int Pop();
    int Top();
    string getQueueType();
};
