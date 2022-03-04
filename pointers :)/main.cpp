#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void changeByReferance(int &a){
    int temp ;
    cin>>temp;
    a = temp;
}


struct employee{
    int number =  15;
};
int main()
{
    map<int,employee> mp;
    employee e;
    mp[12] = e;

    employee& s = mp[12];
    mp[12].number = 20;
    cout<<s.number;
    return 0;
}
