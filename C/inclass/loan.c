#include <stdio.h>

int main()
{
    float loan , percent , monthly , payment , monthsum = 0 , paymentsum = 0;
    scanf("%f" , &loan);
    scanf("%f" , &percent);
    payment = loan * (percent / 100.0);
    printf("- First Year [Year | Month] : %.2f | %.2f\n", payment, payment / 12.0);
    scanf("%f" , &monthly);
    while(loan > 0){
        float interest_month = loan * (percent / 100.0) / 12.0; // ดอกเบี้ยเดือนนี้
        float principal_month = monthly - interest_month;        // เงินต้นที่ถูกหักเดือนนี้   
        loan -= principal_month;      // หักเงินต้นออก
        paymentsum += interest_month; // สะสมเฉพาะดอกเบี้ย
        monthsum++;                   // นับจำนวนเดือน
    }
    printf("Years : %.0f\n" , monthsum / 12.0);
    printf("Money (percent of loan) : %.2f\n" , paymentsum);
    return 0;
}