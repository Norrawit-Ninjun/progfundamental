#include <stdio.h>
#define N 4

int main()
{
    float profit , totalcost , allin = 0;
    struct product
    {
        char productid[20];
        char productname[50];
        struct pricedetail
        {
            float cost;
            float sell;
        } productpricedetail;
        int remain;
        struct location
        {
            int row;
            int shelf;
            char zone;
        } protductlocation;
    } productdata[N];
    printf("----------------------BEGIN OF SCANF----------------------\n");
    for(int i = 0; i < N; i++){
        printf("\nProduct number %d details \n", i+1);        
        printf("Product id : ");
        scanf("%s", productdata[i].productid);       
        printf("Product name : ");
        scanf("%s", productdata[i].productname);
        printf("Amount : ");
        scanf("%d", &productdata[i].remain);
        printf("Cost and Sell price : ");
        scanf("%f %f", &productdata[i].productpricedetail.cost, &productdata[i].productpricedetail.sell); 
        printf("Row, Shelf, and Zone (e.g. 1 2 A) : ");
        scanf("%d %d %c", &productdata[i].protductlocation.row, 
                          &productdata[i].protductlocation.shelf, 
                          &productdata[i].protductlocation.zone);
    }
    printf("----------------------END OF SCANF------------------------\n\n");
    for(int i = 0; i < N; i++){
        profit = productdata[i].productpricedetail.sell - productdata[i].productpricedetail.cost;
        totalcost = productdata[i].remain * productdata[i].productpricedetail.cost;
        allin += totalcost;
        printf("--- Product %d: %s --- \n", i+1, productdata[i].productname);
        printf("Profit per unit : %.2f baht\n", profit);
        printf("Total Cost value : %.2f baht\n", totalcost);
        if(productdata[i].protductlocation.zone == 'A' || productdata[i].protductlocation.zone == 'a'){
            printf("[Location Zone A] ID: %s | Name: %s\n", productdata[i].productid, productdata[i].productname);
        }
        printf("\n");
    }
    printf("==================================================\n");
    printf("Total inventory value in warehouse : %.2f baht\n", allin);
    printf("==================================================\n");
    
    return 0;
}