// problem link
// https://www.codechef.com/problems/STONES


#include <iostream>
#include <set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	   string str1, str2;
	   cin >> str1 >> str2;
	   int count = 0;
	   set<char> st;

	  if(str1.length() > 0 && str2.length() > 0){
	       for(char i : str1){
	           st.insert(i);
	       }

	       for(char i : str2){
	           if(st.find(i) != st.end()){
	               count++;
	           }
	       }
	  }

// 	  cout << str1 << " " << str2 << endl;

	   cout << count << endl;


	}
	return 0;
}
