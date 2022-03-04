#include<iostream>
using namespace std;
class constructor
{
private:
    int height;
    int width;

public:
    constructor():height(0),width(0){
        cout<<"constructor called"<<height;
    }
};
int main(){
    constructor c ;
    return 0;
}



