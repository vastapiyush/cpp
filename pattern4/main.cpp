
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n=4,a=2,sp=1,pri=1,spi=n+1;
    for (int i=0; i<n; i++) {
        for (int z=0; z<sp; z++) {
            cout<<" ";
        }
        for (int j=1; j<a; j++) {
            cout<<pri;
        }
        for (int k=0;k<spi ; k++) {
            cout<<" ";
        }
        spi-=2;
        while (i<n-1) {
            cout<<pri;
            break;
        }
        
        pri++;
        
        cout<<endl;
        sp++;
    }
    return 0;
}
        
