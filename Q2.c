#include<stdio.h>
int main(){

// HCF OF TWO NUMBERS!
    int n,m; 
    int small,hcf=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&n,&m);

    if(n>m){
        small=m;
    }
    else{small=n;}

    for(int i=1; i<=small; i++){
        if(n%i==0 && m%i==0){
            if(i>hcf){
                hcf=i;
            }
        }
        
    }
    printf("HCF: %d",hcf);
    return 0;
}