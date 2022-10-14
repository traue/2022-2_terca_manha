

#include <stdio.h>

int main() {
    for(int i = 0; i < 15; i++) {
        printf("i = %d \n", i);
        for (int j = 0; j < 10; j++) {
                printf("\tj = %d \n", j);
                if(j == 5)
                    break;
        }
    }
    
    return 0;
}

