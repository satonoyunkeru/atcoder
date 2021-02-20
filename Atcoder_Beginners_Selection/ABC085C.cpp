#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<functional>
#include<regex>

using namespace std;

int main(){
    int n,y; cin >> n >> y;
    bool flag = false;
    int i, j, k;
    for(i=0; i<=n; i++){
        for(j=0; j+i<=n; j++){
            k = n - i - j;
            if(10000*i + 5000*j + 1000*k == y){
                flag = true;
                break;
            }
        }if(flag) break;
    }
    
    if(flag) cout << i << " " << j << " " << k << endl;
    else cout << "-1 -1 -1" << endl;
}