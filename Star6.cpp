#include <iostream>
using namespace std;
int main()
{
    int i,j,rows;
    char ch;
    cout<<"Enter the number of rows\n";
    cin>>rows;
    cout<<"\n";
    for(i=1; i<=rows; i++){
   for(j=1; j<=rows-i; j++){
   cout<<" ";
   }
   for(j=1; j<=rows; j++){
   if(i==1 || i==rows || j==1 || j==rows){
   cout<<ch;
   }
   else{
       cout<<" ";
   }
}
 cout<<"\n";
}
    return 0;
}
