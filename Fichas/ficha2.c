// -- FICHA 2 -- \\ 

// #include <stdio.h> 
// #include <math.h> 

//   1. 
// Multiplies two numeber by suming them

float multInt1 (int n, float m) {
     int   i;
     float r = 0; 
     for (i = 0; i < n; i++) {
          r = r + m ;
     } 
     return r; 
} 

//   2.
// Another version of miltiplication of two numbers 

float multInt2 (int n, float m) { 
      float r = 0; 
      while (n != 0) {
            if ((n + 1) % 2 == 0) r = r + m; 
            n = n/2; 
            m = m*2; 
      }
      return r; 
}

//   3.
// Calculates the greatest common divisor 

int mdc1 (int a, int b) {
    int i, r; 
    for (i = 1; i <= a ;i++) 
        if (a % i == 0 && b % i == 0) r = i; 
    return r; 
}

//   4. 
// Calculates the greatest common divisor 

int mdc2 (int a, int b) { 
    while (a != b) {
          if (a > b) a = a - b; 
          if (b > a) b = b - a; 
    }
    return a; 
}

//   5. 
// Calculates the greatest common divisor 

int mdc3 (int a, int b) {
    
}

// -- Main -- \\ 

int main () {
   int x, y; 
   scanf   ("%d", &x); 
   scanf   ("%d", &y); 

   putchar ('\n'); 

   printf  ("v1 : %d * %d = %f\n", x, y, multInt1 (y, x));
   printf  ("v2 : %d * %d = %f\n", x, y, multInt2 (y, x));

   putchar ('\n'); 

   printf  ("v1 : The greatest common divisor of %d and %d is %d\n"
            ,x ,y ,mdc1 (y, x));
   printf  ("v2 : The greatest common divisor of %d and %d is %d\n"
            ,x ,y ,mdc2 (y, x));  
}  