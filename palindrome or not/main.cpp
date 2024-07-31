//palindrome or not

#include <iostream>
using namespace std;

class number{
    unsigned short int num;
private:
    int input(){
        int rev=0,rem=0;
        cout<<"enter number: ";
        cin>>num;
        int a = num;
        while (a!=0) {
            rem = a%10;
            rev = rev*10+rem;
            a= a/10;
        }
        if (rev==num)
            return 1;
            else
            return 0;
        
    }
    
public:
    void display(){
        int x = input();
        if (x==1)
            cout<<num<<" is a palindrome number"<<endl;
        else if (x==0)
            cout<<num<<" is not a palindrome number"<<endl;
        
        
    }
};

int main() {
    number a;
    a.display();
    return 0;
}
