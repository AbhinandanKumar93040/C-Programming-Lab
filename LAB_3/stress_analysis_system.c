#include <stdio.h>
int main(){
        float stress, material_strength,x;
        printf("enter applied stress:");
        scanf("%f", &stress);
        printf("enter material strength:");
        scanf("%f",& material Stress);
        if (as==0){
                printf("invalid input");
        }
        else {

            x=material_strength/stress;
            if(x>=2.0){
                    printf("safe design");
            }
            else if(x>=1.5&&x<2.0){
                    printf("acceptable with monitoring");
            }
              else if(x<1.5&&x>=0){
                    printf("danger-Redesign Needed");
            }
            else printf("invalid input");
    }
        return 0;
}
