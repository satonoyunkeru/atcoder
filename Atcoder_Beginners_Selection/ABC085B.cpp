#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    //input
    int n; cin >> n;
    vector<int> d(n);
    for(int i=0; i<n; i++) cin >> d.at(i);
    int count = 1;

    //cal
    sort(d.begin(), d.end());
    cout << "dsafdads" << endl;

    for(int i=0; i<n-1; i++){
    cout << d.at(i) << endl;
        if(d.at(i) < d.at(i+1)) count++;
    }

    //output
    cout << count << endl;
    return 0;
}