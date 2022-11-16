#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    //Write your code here
  
    int n,cost =  1;
    cin>>n;
     int a[n];
    for(int i =0;i<n;i++)
    {
 
     cin>>a[i];
       
    }   
      sort(a, a+n);
    int p = a[0];//selecting a type of flower
   for(int i = 0 ;i<n; i++){
   if(a[i]>p+4){ //if flower is between  p to p+4 its free else there is a cost
     
       cost++;
       p = a[i];
   }
     
     }
    cout<<cost;
    return 0;
}