#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<functional>
#include<regex>

using namespace std;

int main(){
    string s; cin >> s;

    regex pattern("(dream|dreamer|erase|eraser)*");
    cout << (regex_match(s,pattern)?"Yes":"No") << endl;
}