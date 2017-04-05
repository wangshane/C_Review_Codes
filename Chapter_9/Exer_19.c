#include <stdio.h> 

void pb(int n);

int main(void) {
    int n;
    
    printf("Enter a number: "); scanf("%d", &n);
    printf("Output of pb: "); pb(n);
    printf("\n");
    
    return 0; }

void pb(int n) {
    if (n != 0) { 
        pb(n / 2);
        putchar('0' + n % 2); 
    }
}


/*pb prints the binary representation of the argument n, assuming that n is greater than 0. 
(We also assume that digits have consecutive codes in the underlying character set.) 
For example:
Enter a number: 53 
Output of pb: 110101

A trace of pb's execution would look like this:
pb(53) finds that 53 is not equal to 0, so it calls
pb(26), which finds that 26 is not equal to 0, so it calls
pb(13), which finds that 13 is not equal to 0, so it calls pb(6), which finds that 6 is not equal to 0, so it calls
pb(3), which finds that 3 is not equal to 0, so it calls pb(1), which finds that 1 is not equal to 0, so it calls
pb(0), which finds that 0 is equal to 0, so it returns, causing pb(1) to print 1 and return, causing
pb(3) to print 1 and return, causing pb(6) to print 0 and return, causing
pb(13) to print 1 and return, causing pb(26) to print 0 and return, causing
pb(53) to print 1 and return.*/
