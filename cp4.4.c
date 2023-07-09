#include <stdio.h>
int main(){
    int i = 100, j=1;
    while(j <= i){
        printf("%d\n", j);
        j++;
        if(j > 10){
        break;
        }
    }
    return 0;
}
