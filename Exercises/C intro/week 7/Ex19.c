#include<stdio.h>
int main(){
int n,m,max,min,BCNN,UCLN;
scanf("%d %d",&n,&m);
max = m;
if(m<n) max =n;
else max =m;
//BCNN
for(int i=0;i<m*n;i++){
    if(max%n==0 && max%m==0){
        BCNN = max;
        break;
        }
    else{
        max++;
        }
    }
//UCLN
min = m;
if(n<m) min=n;
else min =m;

for(int j=0;j<m*n;j++){
    if(m%min==0 && n%min==0){
        UCLN=min;
        break;
        }
    else{
        min--;
        }
    }

printf("BCNN la %d\n",BCNN);
printf("UCLN la %d\n",UCLN);

return 0;
}
