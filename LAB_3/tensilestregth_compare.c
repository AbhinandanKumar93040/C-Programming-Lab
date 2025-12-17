#include <stdio.h>
int main () {
        float T1,T2;
        printf("enter tensile strength of Material1:");
        scanf("%f", &T1);
        printf("enter tensile strenght of Material2:");
        scanf("%f", &T2);
        if(T1>T2){
                printf("Material1 has higher tensile strength %f", T1);
        }
        else if (T2>T1) {
                printf("Material2 has higher tensile strength %f", T2);
        }
        else printf("both have equal tensile strength which is %d", T1);
        return 0;        
}
