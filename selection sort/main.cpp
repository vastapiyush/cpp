#include <iostream>
using namespace std;
class select{
private:
    short int list[30];
    short unsigned int n;
    void sort(){
        int min,i,j,temp;
        for (i=0; i<=n-1; i++) {
            min=i;
            for (j=i+1; j<=n-1; j++) {
                if (list[min]>list[j]) {
                    min=j;
                }
            }
            if (min!=i){
                temp=list[min];
                list[min]=list[i];
                list[i]=temp;
            }
        }
    }
    
    void show(){
        cout<<"the sorted array is:"<<endl;
        for (int i=0; i<n; i++) {
            cout<<list[i]<<" ";
        }
    }
public:
    select(){
        cout<<"enter value of n";
        cin>>n;
        cout<<"enter element of array";
        for (int i=0; i<n; i++) {
            cin>>list[i];
        }
        sort();
        show();
    }
};

int main(){
    select a;
}
