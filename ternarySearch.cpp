#include <iostream>
#include <algorithm>

using namespace std;

int n, x;
const int MAX_N = 1000;
int a[1000];

int ternarySearch(int l, int r) {

    return -1;
}

int main() {
    cin >> n >> x;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int i = 1, j = n;
    int location = 0;
    while(i <= j) {
        int m1 = i + (j-i)/3;
        int m2 = j - (j-i)/3;
        if(a[m1] == x) {
            location = m1;
            break;
        }
        if(a[m2] == x) {
            location = m2;
            break;
        }
        if(x < a[m1]) j = m1 - 1;
        else if(x > a[m2])i = m2 + 1;
        else {
            i = m1 + 1;
            j = m2 - 1;
        }
    }
    cout << location << endl;
    return 0;
}
