#include <iostream>
using namespace std;

int main()
{
    int i,j,size;
    cout << "Please enter the size: ";
    cin>>size;
    for(i=1; i<=size; i++){
        for(j=1; j<=size; j++){
        cout<<"*";
    }
    	cout<<"\n";
    }

    return 0;
}
