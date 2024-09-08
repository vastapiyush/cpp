#include <iostream>
using namespace std;
int main() {
    int inp;
    cout<<"1:jan \n 2:feb \n 3:mar \n 4:apr \n 5:may \n 6:jun \n 7:jul \n 8:aug \n 9:sep \n 10:oct \n 11:nov \n 12:dec"<<endl;
    cout<<"enter the month";
    cin>>inp;
    switch (inp) {
        case 1:
        case 3:case 5:case 7:case 8:case 10:case 12:
            cout<<"the number of days is 31"<<endl;
            break;
        case 4:case 6:case 9:case 11:
            cout<<"the number of days is 30"<<endl;
            break;
        case 2:
            cout<<"the number of days is 29 or 28"<<endl;
            break;
        default:
            cout<<"error";
            break;
    }
    return 0;
}
