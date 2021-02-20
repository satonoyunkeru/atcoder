#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
    //input
    int n; cin >> n;
    int t1=0,x1=0,y1=0;
    int t2,x2,y2;
    bool flag = true;
    for(int i=0; i<n; i++){
        cin >> t2 >> x2 >> y2;
        int dist = t2 - t1;
        int x_dist = abs(x2 - x1);
        int y_dist = abs(y2 - y1);

        if(dist < x_dist + y_dist || (dist - x_dist - y_dist)%2 != 0){
            flag = false;
        }
        t1 = t2; x1 = x2; y1 = y2;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}