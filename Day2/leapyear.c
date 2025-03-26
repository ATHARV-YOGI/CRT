#include<stdio.h>

int main(){
    int y = 1700;

    if( y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
        printf("leap");
        else 
            printf("not leap");
        
    
return 0;

}