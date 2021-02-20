#include<iostream>
#include<vector>


using namespace std;

int main(){
    //input
    int n;
    cin >> n;

    vector<int> a(n);
    int count = 0;

    for(int i=0; i<n; i++) cin >> a[i];

    //cal
    while(1){
        int flag=0;
        for(int i=0; i<n; i++){
            if(a[i]%2 == 1) flag=1;
            a[i] = a[i]/2;
        }
        if(flag == 1) break;
        count++;
    }

    //output
    cout << count << endl;
    return 0;
}