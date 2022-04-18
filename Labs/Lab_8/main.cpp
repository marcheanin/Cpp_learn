#include "implementation.cpp"

int main() {
    IntQueue<0, 500> s(8);
    cout << s.getQueueType() << endl;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 8; i++)
        s.Add(a[i]);
    s.Pop();
    s.Add(9);
    s.Add(-1);

    IntQueue<0, 10> b (9);
    b.Add(12);
    b.Add(3), b.Add(4), b.Add(7);
    cout << b.Top() << endl;

}
