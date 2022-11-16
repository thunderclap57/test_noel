#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
   int sum = 0,pro = 1;
       long long int i=1;
    int ans;
	// Write your code here.
    while(i<=n ){
        if(q == 1){
       sum+= i;
      ans = sum;
        }
         if(q == 2){
      pro =(pro*i)%1000000007;
             ans = pro;
     
         }
           i++;
    }
    return ans;
}