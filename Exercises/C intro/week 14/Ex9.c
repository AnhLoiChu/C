#include <stdio.h>
#include<string.h>

typedef struct wt{
int total_rain; // in mm
int high_temp; // in celcius
int low_temp;
} weather;
const int MONTHS = 12;
int main() {
weather data[MONTHS];
int i;
char months[12][10] ={"January", "February", "March",
"April", "May", "June", "July", "August",
"September", "October", "November","December"
};
int total_rain = 0;
int max_temp =-100;
int max_month = 0;
int min_temp = 100;
int min_month = 0;
float rainTB=0.0;

for(int i=0;i<12;i++){
    scanf("%d %d %d ",&data[i].total_rain,&data[i].high_temp,&data[i].low_temp);
    if(data[i].total_rain<=0||data[i].high_temp <= data[i].low_temp){
    printf("Data error");
    }
    if (data[i].high_temp > data[i].low_temp){
        if(data[i].high_temp>50||data[i].low_temp<-40) printf("Data error");
    }
    total_rain+=data[i].total_rain;
    if(data[i].high_temp>max_temp) max_temp = data[i].high_temp;
    if(data[i].low_temp<min_temp) min_temp = data[i].low_temp;
}

rainTB=(float)total_rain/MONTHS;
printf("Tong luong mua la %d\n",total_rain);
printf("Luong mua TB là %.2f\n",rainTB);
printf("Nhiet do cao nhat la %d\n",max_temp);
printf("Nhiet do nhap nhat la %d\n",min_temp);

for(int j=0;j<MONTHS;j++){
    for(int k=j+1;k<MONTHS;k++){
        if(data[k].total_rain< data[j].total_rain){
            weather temp = data[j];
            data[j]=data[k];
            data[k]=temp;

            char temp_name[15];
            strcpy(temp_name,months[j]);
            strcpy(months[j],months[k]);
            strcpy(months[k],temp_name);
        }
    }
}
printf("Thang      Luong mua      Nhiet do cao nhat     Nhiet do thap nhat\n");
for(int i=0;i<MONTHS;i++){
    printf("%s         %d                 %d                      %d\n",months[i],data[i].total_rain,data[i].high_temp,data[i].low_temp);
}

return 0;
}
