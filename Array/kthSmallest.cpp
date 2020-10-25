// problem link - https://practice.geeksforgeeks.org/problems/kth-smallest-element/0#
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthSmallest(vector<int> arr, int k) {
    priority_queue <int> maxHeap;
    
    for(auto x: arr) {
        maxHeap.push(x);
        if(maxHeap.size() > k) maxHeap.pop();
    }
    return maxHeap.top();
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int T;
	cin >> T;
	while(T--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    for(auto &x: arr) cin >> x;
	    int k;
	    cin >> k;
	    cout << kthSmallest(arr, k) << endl;
	}
	return 0;
}