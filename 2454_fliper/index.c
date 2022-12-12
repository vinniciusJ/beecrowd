#include <stdio.h>

int main(){
    int pDoor = 0, rDoor = 0;
    char path = 'C';

    scanf("%d %d", &pDoor, &rDoor);

    path = pDoor == 0 ? 'C' : (rDoor == 0 ? 'B' : 'A');

    printf("%c\n", path);

    return 0;
}