#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// home work 1.1
class Shape{};
class TwoDimensionalShape : public Shape {};
class ThreeDimensionalShape: public Shape{};
class Circle: public TwoDimensionalShape{}  ;
class Square: public TwoDimensionalShape{};
class Triangle: public TwoDimensionalShape{};
class Sphere: public ThreeDimensionalShape{};
class Cube: public ThreeDimensionalShape{};
class Tetrahendron: public ThreeDimensionalShape{};
// home work 1.2
class CommunityMember{};
class Studen : public CommunityMember {};
class Employee : public CommunityMember {};
class Alumnus : public CommunityMember {};
class Fuclty : public Employee {};
class Staff : public Employee {};
class Teacher : public Fuclty {};
class Adminstrator : public Fuclty {};
class AdminstratorTeacher : public Teacher , public Adminstrator{};
// home work 1.3

int main(){

    Tetrahendron tetrahendron;
    return 0;
}
