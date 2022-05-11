#include<iostream>
#include<vector>
using namespace std;

int countSubseqWithSumK(int arr[], int sum, int currSum, vector<int> &ans, int ind, int n){
	if(ind == n){
		if(currSum == sum){
            return 1;
		}
		return 0;
	}

	ans.push_back(arr[ind]);
	int pick = countSubseqWithSumK(arr, sum, currSum + arr[ind], ans, ind + 1, n);
	ans.pop_back();
	int notPick = countSubseqWithSumK(arr, sum, currSum, ans, ind + 1, n);

    return pick + notPick;
}

int main(){

	int arr[] = {1, 2, 1};
	int sum = 2;
	vector<int> ans;

	int subseq = countSubseqWithSumK(arr, sum, 0, ans, 0, 3);

    cout<<subseq;

	return 0;
}