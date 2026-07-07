#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the arr size";
    cin>>n;
    vector<int>arr(n);
    vector<vector<int>>ans;
    n=arr.size();
    
    if(n<3){
        cout<<"pls enter abve 3";
    return 0;
    }

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1])continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
        int sum = arr[i]+arr[j]+arr[k];
        if(sum<0)j++;
        else if(sum>0)k--;
        else{
            ans.push_back({arr[i],arr[j],arr[k]});
            j++;
            k--;
        }
        while(j<k && arr[j]==arr[j-1])j++;
                while(j<k && arr[k]==arr[k-1])k--;

    }
}   
    cout<<"Annswer is =";
    
    for(auto v: ans){
        cout<<"[";
        for(auto x: v){
            cout<<x<<" ";
        }
        cout<<"]";
    }
    return 0;
}