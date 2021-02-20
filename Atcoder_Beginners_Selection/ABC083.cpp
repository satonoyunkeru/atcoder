#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    //input
    int n,a,b;
    cin >> n >> a >> b;
    int count = 0;

    //cal
    for(int i=0; i<=n; i++){
        int sum=0;
        for(int j=0; j<5; j++) sum += int(i/pow(10,j)) % 10;
        if(sum >= a && sum <= b) count+=i;
    }

    //output
    cout << count << endl;
    return 0;
}