//#include <stdio.h>
//void printNto1(int n) {
//    if (n == 0)
//        return;
//    printf("%d\n", n);
//    printNto1(n - 1);
//}
//int main() {
//    int n; 
//    printf("Enter the number:");
//    scanf("%d",&n);
//    printNto1(n);
//    return 0;
//}





//#include <stdio.h>
//int sumNto1(int n, int sum) {
//    if (n == 0)
//        return sum;
//    else {
//	return sumNto1(n - 1, sum + n);
//
//	}
//}
//int main() {
//    int n; 
//    printf("Enter the number:");
//    scanf("%d",&n);
//    int total = sumNto1(n,0);
//	printf("\nsum = %d", total);
//    return 0;
//}





//#include <stdio.h>
//int factorial(int n, int fact) {
//	if (n == 0)
//		return 1;
//    if (n == 1)
//        return fact;
//    else {
//	return factorial(n - 1, fact * n);
//
//	}
//}
//int main() {
//    int n; 
//    printf("Enter the number:");
//    scanf("%d",&n);
//    int total = factorial(n,1);
//	printf("\nfactorial = %d", total);
//    return 0;
//}


#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}
int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative number of terms.\n");
    } else {
        printf("Fibonacci Series: ");
        for (i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    return 0;
}
