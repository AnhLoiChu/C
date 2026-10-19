#include <stdio.h>

double* maximum(double *a, int size){
    if(size <= 0||a==NULL ) return NULL;
    double *max=a;
    for(int i=0;i<size;i++){
        if(*(a+i)>*max) max = (a+i);
    }
    return max;
}


int main(){
    double x[100];
    int n;
    double *pS;
    scanf("%d",&n);
    if(n<0) return NULL;
    if(n>=0){
        for(int i=0;i<n;i++){
            scanf("%lf",&x[i]);
        }

        pS=maximum(x,n);
    }
    if(pS!=NULL){
        printf("Dia chi pS la %p\n",pS);
        printf("Gia tri pS la %lf\n",*pS);
    }

    return 0;

}
