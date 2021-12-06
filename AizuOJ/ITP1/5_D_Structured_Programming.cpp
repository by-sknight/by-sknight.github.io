#include <bits/stdc++.h>
using namespace std;

void my_fun(int n) {
    for (int i = 1; i <= n; i++) {
        int x = i;
        if (x % 3 == 0) {
            cout << " " << i;
            continue;
        }
        while (x != 0) {
            if (x % 10 == 3) {
                cout << " " << i;
                break;
            }    
            x = x / 10;
        }
    }
}

int main(void) {
    int n;
    cin >> n;
    my_fun(n);
}
