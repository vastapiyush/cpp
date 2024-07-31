#include <iostream>
using namespace std;

class base{
    float num1;
public:
    float num2;
    
    void input_data(){
        cout<<"enter value of num1:";
        cin>>num1;
    }
    float get_num1(){
        return num1;
    }
};

class derived: public base{
    float sum;
public:
    void get_data(){
        cout<<"enter value of num2:";
        cin>>num2;
        input_data();
        sum = get_num1()+num2;
    }
    
    void show_data(){
        cout<<"num1 is "<<get_num1()<<endl;
        cout<<"num2 is "<<num2<<endl;
        cout<<"sum is "<<sum<<endl;
    }
};

int main() {

    derived a;
    a.get_data();
    a.show_data();
    
    return 0;
}
