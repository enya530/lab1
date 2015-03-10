#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input a number: "<<endl;
    cin>>n;

    while(n != 1){
        
        if(n % 2 == 1){
            n = 3*n + 1;
            cout<<n<<endl;
        }//end of if
        else{
            n = n/2;
            cout<<n<<endl;
        }//end of else
    }//end of while

    return 0;
}
