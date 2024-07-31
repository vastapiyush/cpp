

#include <iostream>
using namespace std;
int main() {
    int i,j,n,max=1,sp;
    cout<<"enter the number of lines: ";
    cin>>n;
    sp=n;
    for(i=0;i<n;i++){
        for(int k=0;k<sp;k++){
            cout<<" ";
        }
        sp--;
        for(j=0;j<max;j++){
            cout<<"/\\";
        }
        cout<<endl;
         max++;
    }
    sp=1;
    
    for(i=0;i<n*2;i++){
        for(int k=0;k<sp;k++){
            cout<<" ";
        }
        sp++;
        for(j=1;j<max;j++){
            cout<<"\\/";
        }
        cout<<endl;
        max--;
    }
    return 0;
}

