#include <stdio.h>
int main() {
    int num,reversed=0,remainder, original;
    // Write C code here
    printf("Enter an integer");
    scanf("%d",&num);
    original=num;//Store the original number 
    //Reverse the number 
    while(num!=0) {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
//output 
if (original==reversed) {
    printf("%d is a palindrome.\n", original);
} else {
  printf("%d is not a palindrome.\n", original);
}
    return 0;
}
