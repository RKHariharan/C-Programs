#include <stdio.h>
int* plus(int* digits, int len) 
{
    for(int i=len-1; i>=0; i--) 
    {
        if(digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    int* newDigits = (int*)malloc((len+1) * sizeof(int));
    newDigits[0] = 1;
    return newDigits;
}
int main() {
    int digits[] = {1, 2, 3};
    int len = sizeof(digits) / sizeof(digits[0]);
    int* result = plus(digits, len);
    for(int i=0; i<len+1; i++) 
    {
        printf("%d ", result[i]);
    }
    return 0;
}

