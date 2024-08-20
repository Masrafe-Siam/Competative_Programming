#include <bits/stdc++.h>
using namespace std;

const int N = 500000 + 5;
int T, n, a[N], b[N];

bool check_alice(int x, int y) {
    if (x == y) return true;
    if (x > y) return false;
    if (y % x == 0) return true;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0 && check_alice(x / i, y))
            return true;
    return false;
}

bool check_bob(int x, int y) {
    while (y % x == 0) y /= x;
    return y == 1;
}

int main() {
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        string p = "no", q = "no";
        for (int i = 0; i < n; i++) {
            if (!check_alice(a[i], b[i])) {
                p = "yes";
                break;
            }
            if (!check_bob(a[i], b[i])) {
                q = "yes";
                break;
            }
        }
        cout << "Case " << t << ": " << p << ' ' << q << endl;
    }
    return 0;
}