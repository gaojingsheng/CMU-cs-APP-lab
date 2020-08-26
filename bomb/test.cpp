#include<stdio.h>
int func4(int x,int y,int z){
    int mid1=x-y;
    int mid2=(mid1>>31);
 //  printf("x=%d y=%d z=%d mid2=%d\n",x,y,z,mid2);
     mid1+=mid2;
     mid1/=2;
     mid1+=y;
     if(mid1<=z){
         y=0;
         if(mid1>=z){
             return 0;
         }
         return 2*func4(x,mid1+1,z)+1;
 
     }
     return 2*func4(mid1-1,y,z);
}
int main(){
     int in;
     for(int i=0;i<5;i++){
         scanf("%d",&in);
         printf("%d\n",func4(14,0,in));
     }
     return 0;
}
