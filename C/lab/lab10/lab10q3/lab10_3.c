#include <stdio.h>
#include <stdbool.h>

    struct product 
    {
        char productname[50];
        float sellperproduct;
        int numberofproduct;
    }productinfo[100];
void updatestock(struct product productinfo[], int N);
int main()
{
    int N; char choice;
    int choicenumforcaseb , addproductcaseb ,choiceforcasec;
    float allsellpriceforcasec;
    printf("Number of product : ");
    scanf("%d" , &N);
    int number[N];
    FILE *fp;
    fp = fopen("stock.txt" , "a");
    if(fp == NULL){
        printf("can't open/create file\n");
    }
    for(int i = 0; i < N; i++){
        printf("Product name : ");
        scanf("%s" , productinfo[i].productname);
        printf("Product price : ");
        scanf("%f" , &productinfo[i].sellperproduct);
        printf("Remain product : ");
        scanf("%d" , &productinfo[i].numberofproduct);
    }
    fprintf(fp , "************************************\n");
    for(int i = 0; i < N; i++){
        fprintf(fp , "Product in stock number %d\n" , i+1);
        fprintf(fp , "Product name %s\nProduct Price %.2f\nProduct Remain %d\n" , 
            productinfo[i].productname , 
            productinfo[i].sellperproduct , 
            productinfo[i].numberofproduct);
    }
    fprintf(fp , "************************************\n");
    fclose(fp);
    while(true){
    printf("Choose Choice (a , b , c , d) : ");
    scanf(" %c" , &choice);
    int addnum;
    switch(choice){
        case 'a' : {
        printf("Number of add product : ");
        scanf("%d" , &addnum);
            fp = fopen("stock.txt" , "a");
            if(fp == NULL){
                printf("can't open file");
            }
            for(int i = 0; i < addnum; i++){
                printf("Product name : ");
                scanf("%s", productinfo[N + i].productname);
                printf("Product price : ");
                scanf("%f", &productinfo[N + i].sellperproduct);
                printf("Remain product : ");
                scanf("%d", &productinfo[N + i].numberofproduct);
            }
            for(int i = 0; i < addnum; i++){
                fprintf(fp, "Product name: %s\nProduct Price: %.2f\nProduct Remain: %d\n", 
                        productinfo[N + i].productname, 
                        productinfo[N + i].sellperproduct, 
                        productinfo[N + i].numberofproduct);   
            }
            N = N + addnum;
            updatestock(productinfo , N);
            break; 
        }
        case 'b' : {
            printf("Choose number of product you want to add in : ");
            scanf("%d" , &choicenumforcaseb);
            printf("Number u want to add in this product : ");
            scanf("%d" , &addproductcaseb);
            int targetIndex = choicenumforcaseb - 1;
            for(int i = 0; i < N; i++){
                if(i == targetIndex){
                    productinfo[i].numberofproduct += addproductcaseb;
                }
            }
            updatestock(productinfo , N);
            printf("Stock updated successfully!\n");
            break;
        }
        case 'c' : {
            printf("Choose number your product to show : ");
            scanf("%d" , &choiceforcasec);
            int targetIndexC = choiceforcasec - 1;
            for(int i = 0; i < N; i++){
                if(i == targetIndexC){
                    allsellpriceforcasec = productinfo[i].sellperproduct * productinfo[i].numberofproduct;
                    fp = fopen("stock.txt" , "w");
                    if(fp != NULL) {
                        fprintf(fp , "********SELECTED PRODUCT SUMMARY********\n");
                        fprintf(fp , "Product in stock number %d\n" , i+1);
                        fprintf(fp , "Product name %s\nProduct Price %.2f\nProduct Remain %d\nAll Product sell price %.2f\n" , 
                            productinfo[i].productname , 
                            productinfo[i].sellperproduct , 
                            productinfo[i].numberofproduct,
                            allsellpriceforcasec);
                        fprintf(fp , "****************************************\n");
                        fclose(fp);
                    }
                }
            }
            break;
        }
        case 'd' : {
            printf("exit");
            return 0;
            break;
        }
    }
    }
}
void updatestock(struct product productinfo[] , int N){
    FILE *fp;
    fp = fopen("stock.txt" , "w");
    if(fp == NULL){
        printf("can't open file for update\n");
        return;
    }
    fprintf(fp , "************************************\n");
    for(int i = 0; i < N; i++){
        fprintf(fp, "Product in stock number %d\n", i+1);
        fprintf(fp, "Product name %s\nProduct Price %.2f\nProduct Remain %d\n", 
                        productinfo[i].productname, 
                        productinfo[i].sellperproduct, 
                        productinfo[i].numberofproduct);
    }
    fprintf(fp , "************************************\n");
    fclose(fp);
}