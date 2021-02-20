#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
    //input
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a.at(i);
    int sum = 0;

    //cal
    sort(a.begin(), a.end(), greater<int>());

    for(int i=0; i<n; i++){
        if(i%2 == 0) sum += a.at(i);
        else sum -= a.at(i);
    }

    //output
    cout << sum << endl;
    return 0;
}