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
    long double time, l;
    int n, va, vb; cin >> n >> va >> vb >> l;

    for(int i=0; i<n; i++){
        time = l/va;
        l = vb*time;
    }
    cout << fixed << setprecision(10) << l << endl;
    return 0;
}