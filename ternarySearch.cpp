#include <iostream>
#include <algorithm>

using namespace std;

int n, x;
const int MAX_N = 1000;
int a[1000];

int ternarySearch(int l, int r) {
    while(l <= r) {
        int m1 = l + (r-l)/3;
        int m2 = r - (r-l)/3;
        cout << l << " " << m1 << " " << m2 << " " << r << endl;
        if(a[m1] == x) return m1;
        else if(a[m2] == x) return m2;
        if(x < a[m1]) r = m1 -1;
        else if(x > a[m2])l = m2 + 1;
        else {
            l = m1 + 1;
            r = m2 - 1;
        }
        cout << l << " " << m1 << " " << m2 << " " << r << endl;
    }
    return -1;
}

int main() {
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cout << ternarySearch(0, n-1);
    return 0;
}
