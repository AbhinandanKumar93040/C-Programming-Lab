#include <stdio.h>
int main (){
        float a,f;
        printf("enter vibrational amplitude(mm):");
        scanf("%f", &a);
        printf("enter frequency(Hz):");
        scanf("%f", &f);
        if(a<=0||f<=0){
                printf("invalid input");
        }
        else if(a>1.0&&(f>30&&f<60)){
                printf("High Risk");
        }
        else if(a>1||f>70){
                printf("Medium Risk");
        }
        else printf("Low Risk");
        return 0;
}
