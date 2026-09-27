#include <stdio.h>

int main()
{
    int n , k , sum = 0;
    scanf("%d %d" , &n , &k);
    if(n <= 1000 && n >= 1 && k >= 1 && k <= n){
        for(int i = 1 ; i <= n ; i++){
            if(i % k == 0){
                sum+=i;
        }
    }
}
    printf("%d" , sum);
    return 0;
}