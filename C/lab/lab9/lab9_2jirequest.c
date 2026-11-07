#include <stdio.h> //หา max รับ 3 ตัว แต่มีพารามีเตอร์ 2 ตัว

int main()
{
    int findmax(int , int);
    int number[3];
    for(int i = 0; i < 3; i++){
        printf("Input number %d : " , i+1);
        scanf("%d" , &number[i]);
    }
    int test2 = findmax(number[0] , number[1]);
    int result = findmax(test2 , number[2]);
    printf("%d" , result);
}
int findmax(int a , int b)
    {
        int max;
        if( a < b){
                max = b;
            }else {
                max = a;
            }
        return max;
    }