#include<stdio.h>

float kineticEnergy(float m, float v){
return m*v*v/2;
}

int main(){
float m,v,ke;
scanf("%f %f",&m,&v);
ke = kineticEnergy(m,v);
printf("%.2f\n",ke);
return 0;
}
