// problem link
// https://codeforces.com/problemset/problem/978/B


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for(int i = 0;i <= n-3;i++){
        if(str[i] == 'x' && str[i+1] == 'x' && str[i+2] == 'x'){
            count++;
        }
    }

    cout << count << endl;
}
