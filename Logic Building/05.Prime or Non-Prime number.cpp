#include <iostream>
using namespace std;
int main() {
   
   int n,m;
   cout<< "Give a number = " ;
   cin >>n;
   m=n/2;
   
   // #include <cmath>
   // int m = static_cast<int>(sqrt(n));  // Use sqrt to optimize the loop
   if(n<2)
   {
       cout << n << " is Nonprime"<< endl;
       return 0;
   }
   else{
       for(int i = 2; i <= m; i++){
        if(n%i==0){
        cout << n << " is Nonprime"<< endl;
        return 0;
        }
    }
    cout << n << " is Prime"<< endl;
 
    return 0;
   }
   
}



/*
Input: Give a number = 53
Output: 53 is Prime

Input: Give a number = 21
Output: 21 is Nonprime
*/

/*
   // #include <cmath> //Include the <cmath> header for the sqrt function
   // int m = static_cast<int>(sqrt(n));  // Use sqrt to optimize the loop
   
   Instead of looping up to n/2, you can loop up to the square root of n. This reduces the number of iterations and improves efficiency. Note that I used sqrt function, so you need to include the <cmath> header.

   Removed the redundant declaration of i at the beginning of the function since it's already declared in the for loop.

   With these changes, your code should work correctly for checking whether a number 
   
   If the number is greater than or equal to 2, the program calculates the square root of n (stored in the variable m). This is an optimization because, in the process of checking for divisors, you only need to check up to the square root of n.
*/




#include <stdio.h>   
#include <math.h>
 int size = 50;   
 int ara[50];   

 void print_ara()   
 {   
     int i;   
     for(i = 2; i < size; i++) {   
         printf("%4d", ara[i]);   
     }   
     printf("\n");   
     for(i = 2; i < size; i++) {   
         printf("----");   
     }   
     printf("\n");   
     for(i = 2; i < size; i++) {   
         printf("%4d", i);   
     }   
     printf("\n\n\n");    
 }   

 void sieve()   
 {   
     int i, j, root;   
     for(i = 2; i < size; i++) {   
         ara[i] = 1;   
     }   
     root = sqrt(size);   
     print_ara();   
     for(i = 2; i <= root; i++) {      
         if(ara[i] == 1) {   
             for(j = 2; i * j <= size; j++) {   
                 ara[i * j] = 0;          
             }
             printf("i = %4d\n", i);
             print_ara();   
         }   
     }   
 }   

 int is_prime(int n)   
 {   
     int i;   
     if(n < 2) {   
         return 0;   
     }   
     return ara[n];   
 }   

 int main()   
 {    
     int n, m;   
     sieve();   
     while(1) {   
         printf("Please enter a number (enter 0 to exit): ");   
         scanf("%d", &n);   
         if(n == 0) {   
             break;   
         }   
         if(n >= size) {   
             printf("The number should be less than %d\n", size);   
             continue;   
         }   
         if(1 == is_prime(n)) {   
             printf("%d is a prime number.\n", n);   
         }   
         else {   
             printf("%d is not a prime number.\n", n);   
         }   
     }      
     return 0;   
 }
