#include <iostream>
using namespace std;
int x, y, d;
void gcd(int a, int b) {
    if(b == 0){
        x = 1;
        y = 0;
        d = a;
    } else {
        int tmp = x;
        x = y;
        y = tmp - a/b*y;
    }
}

void inverse(int e, int phi) {
     gcd(e, phi);
     if(d != 1) cout << " khong ton tai";
     else cout << (x%phi+phi)%phi << endl;
}

int main(){
    int e, phi; cin >> e >> phi;
    inverse(e, phi);
    return 0;
}
