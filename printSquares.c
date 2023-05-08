#include <stdio.h>

void printSquares(int N, int M) {
    if (N <= 0 || M <= 0) {
        printf("Invalid dimensions.\n");
        return;
    }

    while (N > 0 && M > 0) {
        if (N >= M) {
            printf("%dx%d\n", M, M);
            N -= M;
        } else {
            printf("%dx%d\n", N, N);
            M -= N;
        }
    }
}

int main() {
    int N, M;
    printf("Enter the dimensions (N x M) of the rectangular paper: ");
    scanf("%d %d", &N, &M);

    printf("Series of squares:\n");
    printSquares(N, M);

    return 0;
}
