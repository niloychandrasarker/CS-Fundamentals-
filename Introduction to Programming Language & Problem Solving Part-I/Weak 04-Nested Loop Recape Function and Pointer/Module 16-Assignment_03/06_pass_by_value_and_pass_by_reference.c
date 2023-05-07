// #include <stdio.h>

// void changeValue(int x) {
//     x = 10;
//     printf("void ar  x = %d\n", x);
// }

// int main() {
//     int num = 5;
//     changeValue(num);
//     printf("main ar num = %d\n", num);
//     return 0;
// }


#include <stdio.h>

void changeValue(int *ptr) {
    *ptr = 10;
    printf("void ar value *ptr = %d\n", *ptr);
}

int main() {
    int num = 5;
    changeValue(&num);
    printf("main ar value num = %d\n", num);
    return 0;
}
