#include <iostream> 
using namespace std; 

main(){  
    int i, j, n, m;  
    cout<<"Input number of roads: ";
    cin>>n;
    for (i = 1; i <= n; i++)  
    {  
        for (j = 1; j <= m; j++)  
        {  
            if (i == 1 || i == n ||  j == 1 || j == m)          
                cout << "*";              
            else
                cout << " "; 
        }  
        cout << endl; 
    }  
  
}  
