#include <stdio.h>
#define Max 10


int input(int *a) {
    for (int i = 0; i < Max; i++) {
        if (scanf("%d", &a[i]) != 1) {
            return 0;  
        }
    }
    return 1; 
}

void output(int *a) {
    for (int i = 0; i < Max; i++) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }
    printf("\n");
}

void sort(int *a) {
    for (int i = 0; i < Max - 1; i++) {
        for (int j = 0; j < Max - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int s = a[j];
                a[j] = a[j + 1];
                a[j + 1] = s;
            }
        }
    }
}



int main() {
    int a[Max];

    
    if (!input(a)) {
        printf("n/a\n");
        return 1;
    }
    sort(a);
    output(a);

    return 0;
}
