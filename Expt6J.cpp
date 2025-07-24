//PRIYANSHA GOUR
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;
int main() {
    int i, j, k;
    int n=4;
    for(i=1;i<=n;i++){
        for(k=0;k<=i;k++){
            cout<<" ";
        }
        for(j=i;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(i=1;i<=n;i++){
        for(k=i;k<=n;k++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    
    

    return 0;
}



