#include "implementation.cpp"

int main() {
    int n;
    cin >> n;
    Fraction x;
    chainFraction s;
    for (int i = 0; i < n; i++){
        cin >> x;
        s.appendElem(x);
    }

    for (int i = 0; i < n; i++){
        cout << s[i] << " ";
    }
    cout << endl;
    cout << s;
    cout << s.getValue();
    return 0;
}
