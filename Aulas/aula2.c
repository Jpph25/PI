/*
Primeiro fazer uma função que faz quadrados do tipo
# # #
 # # 
# # # 

Segundo fazer uma função que faz triângulos do tipo
# 
# # 
# # # 

Fazer alteração para dar 
# 
# # 
# # #
# #
#

Outra alteração para dar
  # 
 ###  
##### 

Fazer uma cruz 
#     #
 #   # 
  # #  
   # 
  # # 
 #   # 
#     # 
*/

// Quadrdo 

  // linhas pares 
void linhaP (int x) {
    int n = 1;
    while (n <= x) {
        if (n%2 == 0) putchar ('#');
        else putchar (' ');  
        n = n + 1;
    } 
    putchar ('\n');       
}

  // linhas impares 
void linhaI (int x) {
    int n = 1;
    while (n <= x) {
        if (n%2 == 0) putchar (' ');
        else putchar ('#');  
        n = n + 1;
    } 
    putchar ('\n');       
}

void quadrado1 (int n) {
    int x = 1; 
    while (x <= n) {
        if (x%2 == 0) linhaP (n);
        else linhaI (n); 
        x = x + 1;    
    }   
} 

// Quadrado do professor 

int quadrado (int n) {
   int i,j;
   for (i = 0; i < n; i++) {
     for (j = 0; j < n; j++) {
       if ((i + j)%2 == 0) putchar ('#');
       else putchar (' '); 
     } 
     putchar ('\n'); 
   } 
}

// Triângulo

int triangulo (int n) {
   int i,j; 
   for (i = 1; i <= n; i++) {
    for (j = 0; j < i; j++) {
     putchar ('#');
     putchar (' ');   
    }
    putchar ('\n');  
   } 
}

// Trinângulo espelhado 

int trianguloE (int n) {
    int i,j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
         putchar ('#');
         putchar (' ');   
        }
        putchar ('\n');  
       } 
    for (i = (n - 1); i != 0; i--) {
        for (j = 0; j < i; j++) {
         putchar ('#');
         putchar (' ');   
        }
        putchar ('\n');  
       }      
}

// Triangulo deitado

void escreve (int n, char c) {
    while (n--) 
        putchar (c);
}

int trianguloP (int n) {
    int i,j;
    for (i = 1; i <= n; i++) {
       escreve (n -i, ' ');
       escreve (2 * i - 1, '#'); 
       putchar ('\n'); 
    } 
}

// Cruz -> está mais ou menos 

int cruz (int n) { 
   int i,j, a = 0, b = 2*n - 1;
   for (i = 1; i < n; i++) {
      escreve (a, ' '); putchar ('#'); 
      escreve (b, ' '); putchar ('#');
      putchar ('\n'); 
      a = a + 1; b = b - 2; 
   }
   escreve (n,' '); putchar ('#'); putchar ('\n'); 
   for (i = 1; i < n; i++) {
    escreve (a, ' '); putchar ('#'); 
    escreve (b, ' '); putchar ('#');
    putchar ('\n'); 
    a = a - 1; b = b + 2; 
   }
}

// Outra cruz -> não está a dar bem  
int cruz2 (int n) {
    int x,y;
    for (y = n; y >= n; y--) {
       for (x = -n; x <= n; x++) {
        if (x == y || x == -y) putchar ('#');
        else putchar (' ');
       }
       putchar (' '); 
    }
}

// Função main 
int main () {
   int x; 
   scanf ("%d", &x);  
   quadrado (x);
   scanf ("%d", &x);
   triangulo (x);  
   scanf ("%d", &x);
   trianguloE (x);
   scanf ("%d", &x);
   trianguloP (x);
   scanf ("%d", &x);
   cruz2 (x);  
   return 0; 
} 

