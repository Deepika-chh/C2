#include <stdio.h>
int main (){
    int n;
    printf("ENTER N:");
    scanf("%d",&n);
    for(int i=1;i<=5;i++){
        for(int j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}