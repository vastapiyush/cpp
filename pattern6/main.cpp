
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n=5,sp=n,spo=0;
    for(int i=0;i<n;i++){
        for (int j=0; j<sp; j++) {
            cout<<" ";
        }
        sp--;
        cout<<i+1;
        for (int j=0; j<spo; j++) {
            cout<<" ";
        }
        cout<<i+1;
        spo+=2;
        cout<<endl;
    }
    sp=1;
    spo=n+n-4;
    int count=n-1;
    for (int i=1; i<n; i++) {
        for(int j=0;j<=sp;j++){
            cout<<" ";
        }
        sp++;
        cout<<count;
        for (int j=0; j<spo; j++) {
            cout<<" ";
        }
        spo-=2;
        cout<<count;
        cout<<endl;
        count--;
    }
    return 0;
}
