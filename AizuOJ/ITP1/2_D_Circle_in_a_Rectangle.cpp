#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    
    if ((x + r) > W || (x - r) < 0 || (y + r) > H || (y - r) < 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
