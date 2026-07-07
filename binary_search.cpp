#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(5);
    
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int search;
    cout<<"Enter the elment";
    cin>>search;
    int low=0,high=arr.size()-1;
    bool found=false;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==search){
            found=true;
            break;
        }

        else if(arr[mid]<search)low=mid+1;
        else high=mid-1;
        
        
    }
    if(found)
        cout << "Element Found";
    else
        cout << "Element Not Found";
    return 0;

     
}