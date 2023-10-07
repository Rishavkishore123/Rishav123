#include <stdio.h>
float celsious(float a);
int main(){
    float a;
    printf("Enter the value of celsious\n");
    scanf("%f",&a);
    printf("convert celsious into farenheit is %f\n",celsious(a));
    return 0;
}
    float celsious(float a){
    float result= (float) (a*9/5)+32;
    return result; 
}