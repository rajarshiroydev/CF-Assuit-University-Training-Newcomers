#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    string a, b; cin >> a >> b;
    cout << a.size() << ' ' << b.size() << endl;
    cout << a << b << endl;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << ' ' << b;
}