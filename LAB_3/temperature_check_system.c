#include <stdio.h>
int main (){
        int T;
        printf("Enter Temperature:");
        scanf("%d", &T);
        if(T<=60||T>80){
                printf("Warning");                
        }
        else printf("Safe Temperature");
        return 0;
}
