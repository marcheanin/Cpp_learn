#include "implementation.cpp"

int main() {
    NumSet <int> a(1);
    NumSet <int> b(2);
    a = a + b;
    a.print();

    set <int> s1 = {1, 2, 3, 4};
    set <int> s2 = {3, 4 ,5 ,6};
    a.putSet(s1), b.putSet(s2);
    a = a * b;
    a.print();

    cout << a(3);
}
