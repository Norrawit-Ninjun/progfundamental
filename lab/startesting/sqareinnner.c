#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++){          // 1. เปลี่ยน j <= i เป็น j <= size   
            // 2. เช็คว่าเป็นขอบด้านใดด้านหนึ่งหรือไม่
            if(i == 1 || i == size || j == 1 || j == size){
                printf("*");
            } else {
                printf(" ");                    // ข้างในพิมพ์ช่องว่าง
            }

        }
        printf("\n");
    }
    return 0;
}