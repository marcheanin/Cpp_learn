#include "declaration.h"

int main() {
    Fraction a[10] = {{1, 2}, {1, 3}, {3, 4}};
    Fractions s(a, 3);
    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << s[i] << " ";
    }
    cout << endl;
    auto it1 = Fractions::Iterator(s.begin());

    for (;it1 != s.end(); it1++){

        cout << *it1 << " ";
    }
    cout << endl;
    auto it = Fractions::Iterator(s.begin());

    for (;it != s.end(); it++){
        it += {1, 3};
        cout << *it << " ";
    }

    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << s[i] << " ";
    }
    return 0;
}
