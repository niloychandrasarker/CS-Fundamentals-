#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char matrix[n][n];

    // Fill the matrix with spaces
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = '*';
        }
    }

    // Fill the diagonals with slashes and backslashes
    for (int i = 0; i < n; i++) {
        matrix[i][i] = '\\';
        matrix[i][n-1-i] = '/';#include <stdio.h>
        
        int main() {
            int a, b;
            scanf("%d %d", &a, &b);
        
            if (a % 2 != 0 && a + b >= 3) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        
            return 0;
        }#include <stdio.h>
        
        int main() {
            int a, b;
            scanf("%d %d", &a, &b);
        
            if (a % 2 != 0 && a + b >= 3) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        
            return 0;
        }#include <stdio.h>
        
        int main() {
            int a, b;
            scanf("%d %d", &a, &b);
        
            if (a % 2 != 0 && a + b >= 3) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        
            return 0;
        }#include <stdio.h>
        
        int main() {
            int a, b;
            scanf("%d %d", &a, &b);
        
            if (a % 2 != 0 && a + b >= 3) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        
            return 0;
        }#include <stdio.h>
        
        int main() {
            int a, b;
            scanf("%d %d", &a, &b);
        
            if (a % 2 != 0 && a + b >= 3) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        
            return 0;
        }
    }

    // Fill the middle row and column with asterisks
      int middle = n / 2;
//     for (int i = 0; i < n; i++) {
//         matrix[i][middle] = '*';
//         matrix[middle][i] = '*';
//     }

    // Replace the center with an X
    matrix[middle][middle] = 'X';

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
