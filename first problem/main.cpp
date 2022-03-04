#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    string num;
    int t;
    cin>>t;
    while(t--){
    cin>>num;
        if(num[0]=='0')
        {
            num[0] = '1';
        }
        int temp = stoi(num);
        if(stoi(num)%7 == 0){
            cout<<num<<endl;
            continue;
        }else{
        while(temp%7!=0 && temp % pow(10,num.length())!=0){
        temp++;
        }
        cout<<temp<<endl;
        continue;
        }
    }
 return 0;
}
