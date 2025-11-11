#include<iostream>
using namespace std;
class student{
    int m1,m2,m3;
    public:
    void getmarks(){
        cout<<"enter marks in 3 subjects:";
        cin>>m1>>m2>>m3;
    }
    friend class result;
};
class result{
    public:
    void displayresult(student s){
        float avg=(s.m1+s.m2+s.m3)/3;
        cout<<"average marks:"<<avg<<endl;
    }
};
int main(){
    student s;
    s.getmarks();
    result r;
    r.displayresult(s);
    return 0;
}