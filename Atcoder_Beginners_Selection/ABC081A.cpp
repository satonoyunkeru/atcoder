#include<iostream>

using namespace std;

int main(){
    string a;
    cin >> a;
    
    int sum=0;
    for(int i=0; i<3; i++){
        if(a[i] == '1')
            sum++;
    }

    cout << sum << endl;
    return 0;
}