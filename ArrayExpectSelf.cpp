#include<iostream>
#include <vector>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    n=arr.size();
    vector<int>ans(n,1);

    int prefix=1;
    for(int i=0;i<n;i++){
        ans[i]=prefix;
        prefix*=arr[i];
    }
    int postfix=1;
    for(int i=n-1;i>=0;i--){
        ans[i]*=postfix;
        postfix*=arr[i];
    }
    for(int x : ans)
    cout << x << " ";
    return 0;
}