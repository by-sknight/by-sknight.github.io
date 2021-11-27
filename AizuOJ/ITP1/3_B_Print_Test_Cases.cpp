#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int x;
    int cnt = 0;
    cin >> x;
    while (x != 0) {
        ++cnt;
        cout << "Case " << cnt << ": " << x << endl;
        cin >> x;
    }
}
