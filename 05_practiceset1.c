#include <stdio.h>
float average(int a,int b,int c);

int main(){
    int a,b,c;
    printf("Enter the value of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("The value of a,b,c is %f\n",average(a,b,c));
    return 0;
}
float average(int a,int b,int c){
    float result;
        result= (a + b + c)/3; 
   return result;
}