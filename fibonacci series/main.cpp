//fibonacci series

#include <iostream>
using namespace std;
class fibo{
private:
    unsigned short int n;
    void input(){
        cout<<"enter the value of n: ";
        cin>>n;
    }
    public:
        void display(){
           input();
            int a=0,b=1,c;
            for (int i=0; i<n; i++) {
                cout<<a<<" ";
                c = a+b;
                a = b;
                b = c;
                
            }
        }
    
};

int main() {
    fibo a;
    a.display();
    return 0;
}
