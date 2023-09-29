#include <stdio.h>

void towerOfHanoi(int n, char src, char helper, char dest) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", src, dest);
        return;
    }

    towerOfHanoi(n - 1, src, dest, helper);
    printf("Move disk %d from %c to %c\n", n, src, dest);
    towerOfHanoi(n - 1, helper, src, dest);
}

int main() {
    int numDisks = 7; // change this to the number of disks you want to solve for
    printf("Tower of Hanoi with %d disks:\n", numDisks);
    towerOfHanoi(numDisks, 'A', 'B', 'C');
    return 0;
}
