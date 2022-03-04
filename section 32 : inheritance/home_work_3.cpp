#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// class A
// {
// private:
//     /* data */
// public:
//     A(string str){
//         cout<<"constructor A"<<str<<endl;
//     }
//     ~A(){
//         cout<<"!A\n";
//     }
// };

// class B
// {
// A a;
// public:
//     B():a(A("most")){
//         cout<<"constructor B"<<endl;
//     }
//     ~B(){
//         cout<<"!B\n";
//     }
// };

// class C : public B
// {
// A a;
// public:
//     C():a(A("ALi")){
//         cout<<"constructor C"<<endl;
//     }
//     ~C(){
//         cout<<"!C\n";
//     }
// };
class A
{
public:
int x =  1;
    void print(){
        cout<<"I 'm A \n";
    }
    ~A(){
        cout<<"~A\n";
    }
};

class B : public A
{
A a;
public:
int y =  2;    void print(){
        cout<<"I 'm B \n";
    }
    ~B(){
        cout<<"~B\n";
    }
};

class C : public B
{
A a;
public:
int z =  3;
    void print(){
        cout<<"I 'm C \n";
    }
    ~C(){
        cout<<"~C\n";
    }
};
void hello(A* a){
    a->x =1;
    a->print();
}
int main()
{
    //C c1;
    C* c2 = new C();// only instansiate withpit base class
    hello(c2);
    A* A_point_c = new C();
    cout<<"A_VAL"<<c2->x<<endl;
    hello(A_point_c);
    c2->print();
    A_point_c->print();
    delete c2;
    delete A_point_c;
    return 0;
}