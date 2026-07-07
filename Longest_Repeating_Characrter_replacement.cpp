#include<iostream>
#include<string>
using namespace std;
int main(){
    vector<int>freq(26,0);
    string s;
    cout<<"Enter the string";
    cin>>s;
    int k;
    cout<<"Enter k:";
    cin>>k;

    int left =0,maxfreq=0,maxlength=0;
    for(int right=0;right<s.length();right++){
        freq[s[right]-'A']++;

        maxfreq=max(maxfreq,freq[s[right]-'A']);

        int maxWindow=right-left+1;

        if(maxWindow-maxfreq>k){
            freq[s[left]-'A']--;
            left++;
        }
        maxWindow=right-left+1;
        maxlength=max(maxWindow,maxlength);

    }
    cout<<"Maximum Lenghth.  "<<maxlength;
    return 0;
}