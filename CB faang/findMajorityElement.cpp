#include <bits/stdc++.h>
using namespace std;

vector<int> answer(vector<int> arr) {
	int elOne = arr[0], elTwo = 0;
	int countOne = 1, countTwo = 0;

	for(int i = 1; i < arr.size(); i++) {
		if(arr[i] == elOne) countOne++;
		else if(arr[i] == elTwo) countTwo++;
		else if(countOne == 0) {
			elOne = arr[i];
			countOne = 1;
		}
		else if(countTwo == 0) {
			elTwo = arr[i];
			countTwo = 1;
		}
		else {
			countOne--;
			countTwo--;
		}
	}

	//check the occurances of two elements
	int tempC1 = 0;
	int tempC2 = 0;
	for(int i = 0; i < arr.size(); i++) {
		if(arr[i] == elOne) tempC1++;
		else if(arr[i] == elTwo) tempC2++;
	}

	vector<int> ans;
	if(tempC1 > arr.size() / 3) ans.push_back(elOne);
	if(tempC2 > arr.size() / 3) ans.push_back(elTwo);
	return ans;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for(auto &x: arr) cin >> x;
	// ans
	vector<int> ans = answer(arr);
	if(ans.size() == 0) cout << "No Majority Elements" << endl;
	else {
		for(int x: ans) cout << x << " ";
	}
	cout << endl;
	return 0;
}

/*	Boyer-moore voting algorithm
	Leetcode - https://leetcode.com/problems/majority-element-ii/
*/