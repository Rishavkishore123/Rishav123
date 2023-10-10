#include <stdio.h>

int main(){
    int i;
    int *ptr=&i;
    int **ptr_ptr=&ptr;
    printf("Enter the value of i\n");
    scanf("%d",&i);
    printf("The value of i is %d\n",**ptr_ptr);
    return 0;
}