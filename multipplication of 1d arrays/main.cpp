#include <iostream>
using namespace std;

class multiply{
private:
    int a[10],b[10],c[10],n;
    void prod(){
        for(int i=0;i<n;i++){
            c[i]=a[i]*b[i];
        }
    }
    void show(){
        cout<<"multiplied list is:\n";
        for (int i=0; i<n; i++) {
            cout<<c[i]<<"\t";
        }
        cout<<endl;
    }
public:
    multiply(){
        cout<<"enter number of terms:";
        cin>>n;
        cout<<"enter elements of array a:";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"enter elements of array b:";
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        prod();
        show();
    }
};

int main(){
    multiply a;
}
