//
// Created by march on 18.04.2022.
//

#include "declaration.h"

template <int L, int H, bool CheckRange>
IntQueue<L, H, CheckRange>::IntQueue(int _size): size(_size){
    data = new int[size];
    start = 0;
    end = 0;
}

template <int L, int H, bool CheckRange>
IntQueue<L, H, CheckRange>::~IntQueue() {
    delete[] data;
}

template <int L, int H, bool CheckRange>
void IntQueue<L, H, CheckRange>::Add(int val) {
    if (!(val >= L && val <= H)){
        cout << val << ": out of range" << endl;
        return;
    }
    data[end] = val;
    end = (end + 1) % size;
    cout << start << " " << end << endl;
}

template <int L, int H, bool CheckRange>
int IntQueue<L, H, CheckRange>::Pop() {
    //if (start == end) throw "Buffer is empty";
    int res = data[start];
    start = (start + 1) % size;
    cout << start << " " << end << endl;
    return res;
}

template <int L, int H, bool CheckRange>
int IntQueue<L, H, CheckRange>::Top() {
    if (start == end) throw "Buffer is empty";
    return data[start];
}

template <int L, int H, bool CheckRange>
string IntQueue<L, H, CheckRange>::getQueueType() {
    return "It's buff queue on ints";
}

//char queue

template <int L, int H>
IntQueue<L, H, true>::IntQueue(int _size): size(_size){
    data = new char[size];
    start = 0;
    end = 0;
}

template <int L, int H>
IntQueue<L, H, true>::~IntQueue() {
    delete[] data;
}

template <int L, int H>
void IntQueue<L, H, true>::Add(int val) {
    if (!(val >= L && val <= H)){
        cout << val << ": out of range" << endl;
        return;
    }
    data[end] = val - L;
    end = (end + 1) % size;
}

template <int L, int H>
int IntQueue<L, H, true>::Pop() {
    if (start == end) throw "Buffer is empty";
    int res = data[start];
    start = (start + 1) % size;
    return res + L;
}

template <int L, int H>
int IntQueue<L, H, true>::Top() {
    //if (start == end) throw "Buffer is empty";
    return data[start];
}

template <int L, int H>
string IntQueue<L, H, true>::getQueueType() {
    return "It's buff queue on chars";
}

