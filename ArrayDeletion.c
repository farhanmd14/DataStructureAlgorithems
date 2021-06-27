#include<stdio.h>  
#define N 10

int main(){      
int i=0;    
int array[10]={10,20,30,40,50,60,70,80,90,100};  
printf("Array:");
for(i=0;i<N;i++){      
printf("%d " ,array[i]);    
}    
int x;
printf("\nenter element you want to delete:");
scanf("%d",&x);
int j;
for(i=0;i<10;i++){
    if(x==array[i]){
        for(j=i;j<10;j++){
            array[j]=array[j+1];
        }
        break;
    }
}
printf("\nnew array:");
for(i=0;i<N-1;i++)   
printf("%d " ,array[i]);  
return 0;  
}