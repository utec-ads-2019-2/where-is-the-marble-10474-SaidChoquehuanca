#include <iostream>
#include <algorithm>

#define limit  10000

using namespace std;


int main()
{
     int marbles;
     int input;
     int arr[limit];
     int k=0;
     while(scanf("%d%d",&marbles,&input)==2 && marbles!=NULL  &&input !=NULL ){
         for(int i=0 ; i < marbles ; i++)
             scanf("%d",&arr[i]);
         printf("CASE# %d:\n",++k);
         sort(arr,arr+marbles);
         while(input--){
             int x;
             scanf("%d",&x) ;
             int temp = lower_bound(arr,arr+marbles,x) - arr;
             if(arr[temp] == x)
                 printf("%d found at %d\n",x,temp+1) ;
             else
                 printf("%d not found\n",x) ;
         }
     }
     return 0;
}