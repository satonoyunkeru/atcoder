#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<functional>
#include<regex>
#include<iomanip>

using namespace std;

int main(){
    int a,b,c; cin >> a >> b >> c;

    if(a > b && a > c) cout << 1 << endl;
    else if(a > b || a > c) cout << 2 << endl;
    else cout << 3 << endl;

    if(b > a && b > c) cout << 1 << endl;
    else if(b > a || b > c) cout << 2 << endl;
    else cout << 3 << endl;
    
    if(c > a && c > b) cout << 1 << endl;
    else if(c > a || c > b) cout << 2 << endl;
    else cout << 3 << endl;

    return 0;
}