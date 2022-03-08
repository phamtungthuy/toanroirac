#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i < n; i++) {
        int j = i - 1, k = 0, selected = a[i];
        while(k < j) {
            int m = (j + k) / 2;
            if(selected > a[m]) k = m + 1;
            else j = m;
        }
        int location;
        if(selected >= a[k]) location = k + 1;
        else location = k;
        for(int v = i - 1; v >= location; v--){
            a[v+1] = a[v];
        }
        a[location] = selected;
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}
