// -- Aula 5 -- \\ 

#include <stdio.h>
#include <string.h>

// Verifica se o caracter é uma vogal 
int eVogal (char c) {
    return (   c == 'A' || c == 'a' || c == 'E' || c == 'e'
            || c == 'I' || c == 'i' || c == 'O' || c == 'o'
            || c == 'U' || c == 'u'                        ); 
}

// eVogal menos eficiente 
int evogal (char c) {
    int i;
    char vg[11] = "AaEeIiOoUu";
    for (i = 0; vg[i] != '\0' && vg[i] != c; i++); 
    return (vg[i] != '\0'); 
}

// Conta quantas vogais têm uma string 
int contaVogais (char s[]) {
    int i, cont = 0; 
    for (i = 0; s[i] != '\0'; i++) {
        if (eVogal(s[i])) cont ++; 
    }
    return cont; 
}

int contavogais (char s[]) {
    int cont = 0; 
    for (;*s != '\0'; s++) // não dá para voltar atrás pq ns onde o s começa 
        if (eVogal (*s)) cont++;
    return cont; 
}

// retira as vogais repetidas de uma string 
/*
"abaaaca" -> abaca (2 -> nº de vogais removidas  
*/

// mais fast (dá para retirar o q se faz no aux fazer no s e fica mais top)
int retiraVogRep (char s[]) { 
    int i, j = 0, cont = 0; 
    char ant = 0, aux[strlen (s) + 1]; 

    for (i = 0; s[i] != '\0'; i++) {
          
          if  (eVogal(ant) && s[i] == ant) cont ++; 
          else aux[j] = s[i], j++; 
          ant = s[i]; 
    }
    
    aux [j] = '\0'; 

    strcpy (s, aux); 

    printf ("%s %d\n", s, cont);   
    return cont;
}

// menos memoria
int retiravogrep (char s[]) {
    int i = 0, j, cont = 0;  

    while (s[i] != 0) {
        
        if (s[i] == s[++i] && eVogal (s[i])) {
           for (j = i; s[j] != '\0'; j++) {
               s[j] = s[j + 1];   
           }
           cont++; 
        } 
        
        else i++; 
    }

    printf ("%s %d\n", s, cont); 
    return cont; 
}

// Main 
int main () {
   char x;  
   scanf ("%c", &x); 
   printf ("%d %d\n", eVogal(x), evogal(x));  
   
   char s[16] = "sooouliiindoo!!"; 
   printf ("%d\n", contaVogais(s));

//   retiravogrep (s); 
   retiraVogRep (s); 

   return 0; 
}