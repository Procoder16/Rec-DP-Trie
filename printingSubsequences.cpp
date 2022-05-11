#include<iostream>
#include<vector>
using namespace std;

void subseq(int arr[], int i, int n, vector<int> &ans){
    if(i == n){
        for(auto it : ans){
                cout<<it<<" ";
        }
        if(ans.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    subseq(arr, i + 1, n, ans);
    ans.pop_back();
    subseq(arr, i + 1, n, ans);
}
 
int main(){

    int arr[] = {3, 1, 2};

    vector<int> ans = {};
    subseq(arr, 0, 3, ans);

    return 0;
}