#include<iostream>
#include<vector>
using namespace std;

bool printSubseqWithSumK(int arr[], int sum, int currSum, vector<int> &ans, int ind, int n){
	if(ind == n){
		if(currSum == sum){
			for(auto it : ans){
				cout<<it<<" ";
			}
            cout<<endl;
            return true;
		}
		else return false;
	}

	ans.push_back(arr[ind]);
	if(printSubseqWithSumK(arr, sum, currSum + arr[ind], ans, ind + 1, n) == true){
        return true;
    }
	ans.pop_back();
	if(printSubseqWithSumK(arr, sum, currSum, ans, ind + 1, n) == true){
        return true;
    }

    return false;
}

int main(){

	int arr[] = {1, 2, 1};
	int sum = 2;
	vector<int> ans;

	printSubseqWithSumK(arr, sum, 0, ans, 0, 3);

	return 0;
}