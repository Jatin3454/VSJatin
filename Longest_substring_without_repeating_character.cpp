#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string:-";
    cin>>s;

    unordered_set<char>st;
    int maxlen=0,left=0;

    for(int right=0;right<s.length();right++){
        while(st.count(s[right])){//count!=0
            st.erase(s[left]);
            left++;
    }
    st.insert(s[right]);
    maxlen=max(maxlen,right-left+1);
}   
cout<<"Maximum substring length="<<maxlen;
return 0;
}