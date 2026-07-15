#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Array size";
    cin>>n;
    vector<int>arr(n);
    n=arr.size();
    cout<<"Enter the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target";
    int target;
    cin>>target;
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            ans[0]=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==target){
            ans[1]=i;
            break;
        }
    }
    cout<<arr[0]<<" "<<arr[1];
    return 0;
}