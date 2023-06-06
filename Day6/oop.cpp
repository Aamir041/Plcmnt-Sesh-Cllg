#include<iostream>
using namespace std;

class Shape{
    public:
    int len;
    int breadth;
    Shape(int len, int breadth){
        this->len = len;
        this->breadth = breadth;
    }
    int area(){
        return len*breadth;
    }
};

int main(){
    int l;
    int b;
    cin>>l>>b;
    Shape s1(l,b);
    cout<<s1.area()<<endl;
}