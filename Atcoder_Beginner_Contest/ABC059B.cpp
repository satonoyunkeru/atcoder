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
    string o,e,str; cin >> o >> e;
    int num1=0, num2=0;
    str = o + e;

    string pw="";
    for(int i=1; i<=str.length(); i++){
      if(i%2 == 1){
          pw += o.at(num1);
          num1++;
      }else{
        pw += e.at(num2);
        num2++;
      } 
    }

    cout << pw << endl;
    return 0;
}