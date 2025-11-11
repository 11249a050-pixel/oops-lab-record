#include<iostream>
using namespace std;
class temperature{
    float celsius;
    public:
    void getdata(){
        cout<<"enter temperature in celsius:";
        cin>>celsius;
    }
    void operator-(){
        float fahrenheit=(celsius*9/5)+32;
        cout<<"temperature in fahrenheit:"<< fahrenheit<<endl;
    }
};
int main(){
    temperature t;
    t.getdata();
    -t;
    return 0;
}