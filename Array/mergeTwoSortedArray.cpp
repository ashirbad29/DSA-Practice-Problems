#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> A, vector<int> B) {
	int i = 0, j = 0;
	vector<int> mergedArray;
	while(i < A.size() && j < B.size()) {
		if(A[i] < B[j]) 
			mergedArray.push_back(A[i++]);
		else
			mergedArray.push_back(B[j++]);
	}

	// one of A or B will exhaust first, we'll copy the remaining to mergedArray
	while(i < A.size()) 
		mergedArray.push_back(A[i++]);

	while(j < B.size()) 
		mergedArray.push_back(B[j++]);
	
	return mergedArray;
}

int main() {
	vector<int> A = {2, 4, 6};
	vector<int> B = {1, 5, 7};

	vector<int> merged_array = merge(A, B);

	for(auto x: merged_array)
		cout << x << " ";
	cout << endl;
	
	return 0;
}