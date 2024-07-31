//pattern 3
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n=5,a=n,b=5;
    for (int i=0; i<n; i++) {
        for (int z=b; z<=n; z++) {
            cout<<z;
        }
        b--;
        for (int j=0; j<a; j++){
            cout<<n;
        }
        a--;
        cout<<endl;
    }
    return 0;
}
