#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int s;
    cin >> s;
    int second, minute, hour;
    hour = s / 60 / 60;
    minute = s / 60 % 60;
    second = s % 60;
    cout << hour << ":" << minute << ":" << second << endl;
}
