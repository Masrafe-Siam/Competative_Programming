#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int t, case_num = 0;
    cin >> t;
    while (t--) {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        int g = gcd(a, gcd(b, c));
        cout << "Case " << ++case_num << ": ";
        if (k % g == 0) cout << "Peaceful" << endl;
        else cout << "Fight" << endl;
    }
    return 0;
}
