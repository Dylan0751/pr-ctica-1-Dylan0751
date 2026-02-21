
#include <stdio.h>
int main(){
    int a[3];
    int b[3];
    int c[3];
    for(int i = 0;i<3;i++){
        printf("&a[%d]=%p\n", i,&a[i]); 
    }
     for(int i = 0;i<3;i++){
        printf("&b[%d]=%p\n", i,&b[i]); 
    }
     for(int i = 0;i<3;i++){
        printf("&c[%d]=%p\n", i,&c[i]); 
    }
    return 0;
    //Si estan juntos en memoria puede ser que dependa de cada compilador
    return 0;
}
