#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i< n;i++) cin >> a[i];
    for(int i = 1; i < n; i++) {
        int j = 0;
        while(a[i] > a[j]){
            ++j;
        }
        int m = a[i];
        for(int k = 0; k <= i-j-1; k++) {
            a[i-k] = a[i-k-1];
        }
        a[j] = m;
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
