

#include <iostream>
using namespace std;
class base1{
private:int x;
public:
    base1(int a){
        x=a;
    }
};

class base2{
private:float y;
    char z[20];
public:
    base2(float a, char b[20]){
        y=a;
        strcpy(z, b);
    }
};

class sweet:public base1,public base2{
protected: char w;
public:
    sweet(char a,int b,float z,char m[20]):base1(b), base2(z,m){
        w=a;
    }
};

int main(){
    sweet a('a',1,1,"hello world");
}
