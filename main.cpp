#include <iostream>
using namespace std;

int main() {
    int x=0,n=0,k=1,y=1;
    cin>>n;
    if (n>=2) {
        cout<<1<<endl;
        while (k<n) {
            cout<<x+y<<endl;
            if (x<y) {
                x=x+y;
            } else {
                y=x+y;
            }
            k++;
        }
    } else {
        cout<<"errore"<<endl;
    }
    return 0;
}
