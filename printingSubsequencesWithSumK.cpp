#include<iostream>
#include<vector>
using namespace std;

void printSubseqWithSumK(int arr[], int sum, int currSum, vector<int> &ans, int ind, int n){
	if(ind == n){
		if(currSum == sum){
			for(auto it : ans){
				cout<<it<<" ";
			}
			cout<<endl;
		}
		return;
	}

	ans.push_back(arr[ind]);
	printSubseqWithSumK(arr, sum, currSum + arr[ind], ans, ind + 1, n);
	ans.pop_back();
	printSubseqWithSumK(arr, sum, currSum, ans, ind + 1, n);
}

int main(){

	int arr[] = {1, 2, 1};
	int sum = 2;
	vector<int> ans;

	printSubseqWithSumK(arr, sum, 0, ans, 0, 3);

	return 0;
}