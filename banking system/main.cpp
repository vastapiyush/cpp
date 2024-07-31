#include <iostream>
using namespace std;
class bank{
    int amount,cust_name;
private:
    void credit(int amt){
        amount = amount+amt;
    }
    void debit(int amt){
        amount = amount-amt;
    }
    
    void transaction(){
        int a,b;
        cout<<"enter the type of process to be made"<<endl<<"1:credit"<<endl<<"2:debit";
        cin>>a;
        switch(a){
            case 1:cout<<"enter amount to be credited";
                cin>>b;
                credit(b);
                break;
            case 2:cout<<"enter amount to be debited";
                cin>>b;
                debit(b);
                break;
        }
        }

public:
//    user information
    void userinfo(){
        int x;
        cout<<"enter name:";
        cin>>x;
        transaction();
    }
    
        
};



int main(int argc, const char * argv[]) {
    bank cust;
    cust.userinfo();
    return 0;
}
