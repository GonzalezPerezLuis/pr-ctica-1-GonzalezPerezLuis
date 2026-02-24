
#include <stdio.h>
int main(){
    int m[2][4];

    printf("&m[0][0] = %p\n", &m[0][0]);
    printf("&m[0][0] = %p\n", &m[1][2]);
    
    return 0;
}
