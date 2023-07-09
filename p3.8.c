#include <stdio.h>
int main(){
    int num = 5, reminder;
    reminder = num % 2;
    if(reminder == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}
