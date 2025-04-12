/* AULA 3 */

// calcula a multiplicação de n por m

float multInt (int n, float m) {
     int i;
     float r = 0; 
     for (i = 0; i < n; i++) {
        r = r + m;   
     }
     return r;  
} 

// segunda versão do multInt 

float multInt2 (int n, float m) {
     float r = 0; 
     while (n > 0) {
          if (n%2 != 0) r = r + m;   
          n = n/2;
          m = m * 2;    
     }
     return r; 
}

// calcula m multiplicado n vezes 

float potInt (int n, float m) {
     int i; 
     float r = 1;
     for (i = 0; i < n; i++) {
        r = r * m;   
     }
     return r; 
} 

float potInt2 (int n, float m) {
   float r = 1; 
   while (n > 0) {
        if (n%2 != 0) r = r * m;   
        n = n/2;
        m = m * m;    
   }
   return r; 
}

// maior divisor comum 

// escreve divisores de um numero 

void escDiv (int n) {
    int i; 
    for (i = 0; i <= n; i ++) {
       if (n%i == 0) printf ("%d", i);  
    } 
    return 0;  
}

int mdc1 (int n, int m) {
   int i, r = 1; 
   for (i = 1; i <= n; i++) {
      if (n%i == 0 && m%i == 0) r = i;   
   } 
   return r; 
}

int mdc12 (int n, int m) {
   int i, l; 
   if (n > m) l = n; 
   else l = m;   
   for (i = l; 1 /*n < 0*/ ; i--) {
      if (n%i == 0 && m%i == 0) return i;   
   }  
}

int mdc (int n, int m) {
   while (m != 0 && m =! 0)
        if (n < m) n = n%m; 
        if (m > n) m = m%n;
   /*
   if   (n == 0) return m; 
   else return n;   
   */  
   return (n + m); // porque um deles é zero 
}

// fibonacci 

int fib (int x) {
   int A = 1, B = 1, C, i; 
   for (i = 1; i <= x; i++) {
       C = A;          // sem o C 
       A = B;          // B = B + A
       B = C + B;      // A = B - A 
   }
   return A;     
} 

// Main

int main () {
   escDiv (10);
   return 0;
} 


