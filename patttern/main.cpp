#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int i,j,num=3,sp=num-1,n=1,z=1;
    
    for (i=0; i<num; i++) {
        for (j=0; j<sp; j++) {
            cout<<" ";
        }
        sp--;
        for (int k=1; k<=n; k++) {
            cout<<z;
            z++;
        }
        cout<<endl;
        n=n+2;
    }
    
    return 0;
}
