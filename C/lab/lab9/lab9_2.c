#include <stdio.h> //รับค่า3จำนวนหา max

int main()
{
    int findmax(int , int , int);
    int number[3];
    for(int i = 0; i < 3; i++){
        printf("Input number %d : " , i+1);
        scanf("%d" , &number[i]);
    }
    int result = findmax(number[0] , number[1] , number[2]);
    printf("%d" , result);
}
int findmax(int a , int b , int c)
    {
        int max;
        if(a < b){
            if(b < c){
                max = c;
            }if(b > c){
                max = b;
            }
        }else{
            if(a < c){
                max = c;
            }if(a > c){
                max = c;
            }
        }
        return max;
    }