#include <iostream>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
//read file lines // write file lines
int toInt(string str){
    istringstream stream(str);
    int num;
    stream>>num;
    return num;
}
int readInt(int i,int h){
    int num;
    cout<<"\n enter range from "<<i<<" to "<<h<<"\n";
    cin>>num;
    if(num>h || num<i)
    {
        cout<<"\n ERROR MESSAGE invaild range try again \n";
        readInt(i,h);
    }
    return num;
}
int showReadMenue(vector<string> choices){
    cout<<"\n menu : \n";
    for(int i=0;i<choices.size();i++){
        cout<<i+1<<" : "<<choices[i]<<"\n";
    }
    return readInt(1,choices.size());
}

vector<string> splitString(string str,char splitter=',' ){
    vector<string> splited ;
    int pos = 0;
    string substring;
    while((pos = (int)str.find(splitter))!=-1){
        substring = str.substr(0,pos);
        str.erase(0,pos+1);
        splited.push_back(substring);
    }
    splited.push_back(str);
    return splited;
}

int main()
{
    string line = "101,-1,11,13,0,Should I learn C++ first or Java,I think C++ is a better Start";
    vector<string> s = splitString(line);
    cout<<s[4];
    return 0;
}
