#include <bits/stdc++.h>
using namespace std;

vector<int> wiggleSort(vector<int> &arr , int n) {


      for(int i = 0; i < n - 1; i+=1){
         if((i % 2 == 0) == ( arr[i] > arr[i + 1])){
            swap(arr[i], arr[i + 1]);
         }
      } 
    return arr;
}


int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	vector<int> ans = wiggleSort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}

}