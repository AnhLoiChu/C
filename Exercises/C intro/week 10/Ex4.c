#include<stdio.h>

int main(){
    int A[20];
    int n;
    int sum =0;
    scanf("%d",&n);
    if (n>20) return 0;
    else{
        for(int i=0;i<n;i++){
            scanf("%d",&A[i]);
            if(A[i]%2 !=0) sum+=A[i];
        }
    }
    printf("Tong so le la %d\n",sum);


    int minChan = -1;
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            if(minChan==-1 || A[i] < minChan){ //minChan sẽ là -1 tới khi tìm được số chẵn, từ đó minChan là A[i] chẵn đầu và từ đó so sánh tiếp
                minChan = A[i];
            }
        }
    }
    if(minChan!=-1) printf("So chan be nhat %d",minChan);
    else return 0;

    return 0;
}
