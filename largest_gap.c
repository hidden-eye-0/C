#include<stdio.h>
int main(){
    int start, end, prime, n=0, gap;
    printf("\n Enter the range: ");
    scanf("%d %d",&start, &end);
    int prime_store[end];
    for(int i=start;i<end;i++){
        if(i%2==0 || i==1)
            prime = 0;
        else{
            for(int j=3;j<i;j++){
                if(i%j==0){
                    prime = 0;
                    break;
                }
                else 
                    prime = 1;
            }
            if(prime){
                prime_store[n] = i;
                n++;
            }
        }
    }
    int diff[n];
    for(int i=0;i<n;i++)
        diff[i] = prime_store[i+1] - prime_store[i];
    for(int i=0;i<n;i++){
        gap = diff[i];
        if(diff[i+1]>gap){
            gap = diff[i+1];
        }
        // else{
        //     gap = diff[i+1];
        // }
    }
    printf("\n Largest gap: %d", gap);
}