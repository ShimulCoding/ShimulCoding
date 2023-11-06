/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
int i,j,p,q,r,x=0,y=0,z=0,d=0,e=0,f=0;
  int a1[n*k];
  int a2[n*k];
  int a3[n*k];
  //r1=factorial(n)/factorial(2)*factorial(n-2);
  for(i=1;i<=n-1;i++){
      for(j=i+1;j<=n;j++){
          p=(i&j);
          
          q=(i|j);
          
          r=(i^j);
          
          if(p<k ){
              a1[x]=p;
              x++;
          }
          else{
              a1[x]=0;
              x++;
          }
          
          if(q<k ){
              a2[y]=q;
              y++;
          }
          else{
              a2[y]=0;
              y++;
          }
          
          if(r<k){
              a3[z]=r;
              z++;
          }
          else{
              a3[z]=0;
              z++;
          }
          
      }
  }
  for(i=k-1;i>=0;i--){
      for(j=0;j<=x;j++){
          if(a1[j]==i){
              printf("%d\n",a1[j]);
              d++;
              break;
          }
          
      }
      if(d>0){
          break;
      }
      }
          if(d==0){
              printf("0\n");
          }
          
          for(i=k-1;i>=0;i--){
      for(j=0;j<=y;j++){
          if(a2[j]==i){
              printf("%d\n",a2[j]);
              e++;
              break;
          }
          
      }
      if(e>0){
          break;
      }
      }
          if(e==0){
              printf("0\n");
          }
          
      
      for(i=k-1;i>=0;i--){
      for(j=0;j<=z;j++){
          if(a3[j]==i){
              printf("%d\n",a3[j]);
              f++;
              break;
          }
      }
      if(f>0){
          break;
      }
      }
          if(f==0){
              printf("0\n");
          }
          return;
}        
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}     
          