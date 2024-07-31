
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n=4,a=1,b=a+1;
    for (int i=0; i<n; i++) {
        for (int j=a; j>=1; j--) {
            cout<<j;
        }
        cout<<endl;
        a++;
    }
    return 0;
}
