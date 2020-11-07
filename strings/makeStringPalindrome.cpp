// given a string change the char to make it palindrom printe the
// minimum no of changes required

#include <bits/stdc++.h>
using namespace std;

int make_palindrome(string s) {
  int n = s.length();
  int actions = 0;

  // using a two pointer method
  for(int i = 0, j = n-1; i < j; i++, j--)
    if (s[i] != s[j])
      actions ++;
  return actions;
}

int main() {
	cout << make_palindrome("mbdam") << endl;
	
	return 0;
}