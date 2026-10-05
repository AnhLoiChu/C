#include<stdio.h>

int main(){
int sodien;
float money,VAT,total;
scanf("%d",&sodien);
    if(sodien < 0) {
    printf("so dien khong hop le ");
    return 0;
    }
    else if(0<=sodien && sodien <=50){
    money = 1.678 * sodien;
    }
    else if (51<=sodien && sodien <=100){
    money = 1.678*50 + (sodien-50)*1.734;
    }
    else if (101<=sodien && sodien <=200){
    money = 1.678*50 + 50*1.734 + (sodien-100)*2.014;
    }
    else if (201<=sodien && sodien <=300){
    money = 1.678*50 + 50*1.734 + 100*2.014 + (sodien-200)*2.536;
    }
    else if (301<=sodien && sodien <=400){
    money = 1.678*50 + 50*1.734 + 100*2.014 + 100*2.536 + (sodien-300)*2.834;
    }
    else {
    money = 1.678*50 + 50*1.734 + 100*2.014 + 100*2.536 + 100*2.834 + (sodien-400)*2.927;
    }
VAT = 0.08 * money;
total = money + VAT;
printf("STT           Ten hang hoa,dich vu        DVT    So luong        Don gia     Thanh Tien\n");
printf("1                dien tieu thu             kWh       %d          _____        %.2f\n",sodien,money);
printf("                                              Cong tien hang                    %.2f\n",money);
printf("thue suat GTGT                                Tien thue GTGT                    %.2f\n",VAT);
printf("Ty gia                                        Tong cong tien                    %.2f\n",total);
return 0;
}
