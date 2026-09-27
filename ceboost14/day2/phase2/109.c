#include <stdio.h>

int main()
{
    int N ,famnum = 0, digimon;
    scanf("%d" , &N);
    if(N >= 1 && N <= 100){
        for(int i = 0; i < N ; i++){
            int age[i];
            scanf("%d" , &age[i]);
                if(age[i] >= 1 && age[i] <= 120){
                    if(age[i] >= 16){
                        famnum++;
                }
            }
        }
        digimon = 10000*famnum;
        printf("%d" , digimon);
    }
    return 0;
}