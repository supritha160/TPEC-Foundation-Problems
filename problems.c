\\char
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("1\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("0\n");
    }
    else {
        printf("-1\n");
    }
    return 0;
}


\\Datatype

#include <stdio.h>
#include <string.h>

int main() {
    char dataType[20];
    printf("Enter a data type (Integer, Long, Float, Double, Character): ");
    scanf("%s", dataType);
    if (strcmp(dataType, "Integer") == 0) {
        printf("4\n");
    } else if (strcmp(dataType, "Long") == 0) {
        printf("8\n");
    } else if (strcmp(dataType, "Float") == 0) {
        printf("4\n");
    } else if (strcmp(dataType, "Double") == 0) {
        printf("8\n");
    } else if (strcmp(dataType, "Character") == 0) {
        printf("1\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}


\\case

#include <stdio.h>
#define PI 3.14159

int main() {
    int ch;
    printf("Enter your choice (1 for circle, 2 for rectangle): ");
    scanf("%d", &ch);
    switch (ch) {
        case 1: {
            float r;
            printf("Enter the radius: ");
            scanf("%f", &r);
            float area = PI * r * r;
            printf("Area of the circle = %.2f\n", area);
            break;
        }
        case 2: {
            float l, b;
            printf("Enter the length and breadth: ");
            scanf("%f %f", &l, &b);
            float area = l * b;
            printf("Area of the rectangle = %.2f\n", area);
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}


\\Fibonacci

#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2){
        return 1;  }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
}
}
int main() {
    int n;
    printf("Enter the position of the Fibonacci number: ");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("The %d-th Fibonacci number is %d\n", n, result);
    return 0;
}
