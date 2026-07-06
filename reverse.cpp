#include<iostream>
using namespace std;
int reverse(int x){
    int ans=0;
    while(ans!=0){
        int digit=x%10;
        ans=(ans*10)+digit;
        x=x/10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    reverse(n);
    return 0;

}