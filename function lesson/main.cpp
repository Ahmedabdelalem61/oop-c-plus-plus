#include <iostream>

using namespace std;
void changeIndexZero(int arr[]){
arr[0] = 25;
}
int main()
{
    // Note that we can change the array value in functions as it referenced by dafault
    int arr[5];
    arr[0] = 20;
    cout<<arr[0]<<endl;
    changeIndexZero(arr);
    cout<<arr[0]<<endl;
    return 0;
}
