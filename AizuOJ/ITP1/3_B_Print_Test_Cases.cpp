#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int x;
    int cnt = 0;
    while (1) {
        cin >> x;
        if (0 == x) break;
        ++cnt;
        cout << "Case " << cnt << ": " << x << endl;
    }
}
