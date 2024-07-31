
#include <iostream>
using namespace std;

class time{
private:
    int sec,hours;
public:
    time(int a1,int a2){
        hours=a1;
        sec=a2;
    }
    
    void calc(time a1,time a2){
        sec=a1.sec+a2.sec;
        hours=sec/60;
        sec=sec%60;
        
        hours=hours+a1.hours+a2.hours;
    }
    
    void display(){
        cout<<"hours is "<<hours<<" mins is "<<sec<<endl;
    }
};

int main(int argc, const char * argv[]) {
    
   class time a(12,50),b(12,30),z(0,0);
    z.calc(a, b);
    a.display();
    b.display();
    z.display();
    return 0;
}
