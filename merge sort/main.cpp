
#include <iostream>
using namespace std;
class merge1{
private:
    short int a[50],b[50],c[50];
    short unsigned int m,n;
    void process(){
        int i=0,k=0,j=0;
        while(i<=m-1&&j<n-1){
            if (a[i]<=b[j]) {
                c[k]=a[i];
                i++;
                k++;
            }
        }
        while (i<=m-1) {
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<=n-1){
            c[k]=b[j];
            j++;
            k++;
        }
        cout<<"sorted list is"<<endl;
        for(int i=0;i<m+n;i++){
            cout<<c[i]<<" ";
        }
    }
public:
    merge1(){
        cout<<"enter m and n";
        cin>>m>>n;
        cout<<"enter the elements of the array a";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"enter the elements of the array b";
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        process();
    }
};

int main(){
    merge1 a;
    return 0;
}
