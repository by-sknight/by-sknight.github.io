#include <bits/stdc++.h>

using namespace std;

void my_swap(int& a, int& b) {
    int c = a;
    a = b;
    b= c;
}

int main(void) {
    int a, b;
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        if (a > b) {
            my_swap(a, b);
        }
        cout << a << " " << b << endl;
    }
}
