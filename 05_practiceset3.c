#include <stdio.h>
float force(float mass);
int main(){
    float mass;
    printf("Enter the value mass in kgs\n");
    scanf("%f",&mass); 
    printf("The force of body in newton is %f\n",force(mass));

    return 0;
}
float force(float mass){
    float result=mass*9.8;
    return result;
}
