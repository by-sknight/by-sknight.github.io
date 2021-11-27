#include <bits/stdc++.h>

using namespace std;

void my_swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a > b) {
        my_swap(a, b);
    }
    if (a > c) {
        my_swap(a, c);
    }
    if (b > c) {
        my_swap(b, c);
    }
    cout << a << " " << b << " " << c << endl;
}
