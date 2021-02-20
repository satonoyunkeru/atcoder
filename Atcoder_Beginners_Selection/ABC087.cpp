#include<iostream>
#include<vector>

using namespace std;

int main(){
    //input
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int count = 0;

    //cal
    for(int i=0; i<=a; i++){
        for(int j=0; j<=b; j++){
            for(int k=0; k<=c; k++){
                if(500*i + 100*j + 50*k == x) count++;
            }
        }
    }

    //output
    cout << count << endl;
    return 0;
}