#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n+1;i++){
        
        for(int j=0;j<2*n+1;j++){
            if(j>(n-i) && j<(n+i)){
                printf(" ");
                
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<2*n+1;j++){
            if(j<=i | j>=2*n-i){
            printf("*");}
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}