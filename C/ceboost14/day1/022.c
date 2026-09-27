#include <stdio.h>

void checkprimenumber(int n){
    if(n <= 1){
        printf("NOT PRIME");
        return;
    }
    int nimeprot = 1;
    for(int j = 2 ; j < n ; j++){
        if(n % j == 0){
            nimeprot = 0;
            break;
        }
    }
    if(nimeprot == 1){
        printf("PRIME\n");
    } if(nimeprot == 0){
        printf("NOT PRIME\n");
    }
}
int main()
{
    int Q;
    scanf("%d" , &Q);
    int N[Q];
    if(Q >= 1 && Q <= 1000 && N >= 1 && N >= 1000000){
    for(int i = 0 ; i < Q ; i++){
        scanf("%d" , &N[i]);
    }
    for(int k = 0; k < Q ; k++){
        checkprimenumber(N[k]);
        }
    }
    return 0;
}