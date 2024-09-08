

#include <iostream>
using namespace std;
int main() {
    int r1,c1,r2;
    int a[10][10],b[10][10],c[10][10];
    cout<<"enter r1 c and r2:"<<endl;
    cin>>r1>>c1>>r2;
    cout<<"enter elements of a:"<<endl;
    for(int i=0;i<r1;i++){
        for (int j=0; j<c1; j++) {
            cin>>a[i][j];
        }
    }
    cout<<"enter elements of b"<<endl;
    for(int i=0;i<c1;i++){
        for (int j=0; j<r2; j++) {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<r2;j++){
            c[i][j]=0;
            for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    
    cout<<"multiplied matrix is:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<r2;j++){
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
