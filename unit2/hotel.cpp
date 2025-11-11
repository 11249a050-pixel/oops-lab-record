#include<iostream>
using namespace std;
class hotelroom{
    private:
    int roomnumber;
    string guestname;
    int daysbooked;
    public:
    hotelroom(int r,string g,int d){
        roomnumber=r;
        guestname=g;
        daysbooked=d;
        cout<<"room"<<roomnumber<<"booked for"<<guestname<<"for"<<daysbooked<<"days"<<endl;
    }
    hotelroom(){
        cout<<"room"<<roomnumber<<"is now free checkout completed for"<<guestname<<"."<<endl;
    }
    void display(){
        cout<<"guest:"<<guestname;
        cout<<",roomno:"<<roomnumber;
        cout<<",daysbooked:"<<daysbooked<<endl;
    }
};
int main(){
    cout<<"hotel booking system\n";
    {
        hotelroom r1(101,"jhansi",3);
        hotelroom r2(102,"priya",2);
        cout<<"\n booking details:\n";
        r1.display();
        r2.display();
    }
    cout<<"\n end of program.\n";
    return 0;
}

    
