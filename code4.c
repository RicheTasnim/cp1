#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], x, y;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        //printf("%d ", arr[i]);
    }
    scanf("%d %d", &x, &y);
    arr[x-1] = y;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);

    }

    return 0;
}
