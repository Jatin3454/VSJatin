#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string";
    getline(cin,str);

    int vowel=0,constants=0;
    for(char ch : str){
        ch = tolower(ch);

        if(isalpha(ch)){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowel++;
            }else{
                constants++;
            }
        }
    }
    cout<<"Vowels:"<<vowel<<endl;
    cout<<"Constants:"<<constants;
    return 0;
}