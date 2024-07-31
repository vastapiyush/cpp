#include <iostream>
using namespace std;

class base1{
    int a;
public:
    
    inline base1(int x){
        a=x;
    }
    
protected:
    
    inline int get_a(){
        return a;
    }
};

class base2{
    int b;
public:
    inline base2(int x){
        b=x;
    }
protected:
    
    inline int get_b(){
        return b;
    }
};


class derived:public base1, protected base2{
    int z;
    inline void show(){
        cout<<"the value of z is "<<z<<endl;
    }
public:
    inline derived(int x1,int x2):base1(x1),base2(x2){
        z=get_a()+get_b();
        show();
    }
};
int main(int argc, const char * argv[]) {
    derived d(10,20);
    return 0;
}
