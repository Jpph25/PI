// -- AULA 9 --

/*
Lê um texto e determina a palavra mais frequente
*/

typedef struct celula {
    char  *palavra;
    int    ocorre;
    struct celula *prox;
} *Palavras;

/*
Determina quantas palavras existem
*/

int quantasP(Palavras l) {
    int r = 0;

    while(l != NULL) {
          r++;
          l = l->prox;
    }

    return r;
}

/*
Imprime cada palavra e quantas vezes ocorre
*/

void listaPal(Palavras l) {

//   for (; l != NULL; l = l->prox)   
     while (l != NULL) {
            printf("A palavra %s aparece %d vezes\n", l->palavra, l->ocorre);
            l = l->prox; 
     } 
}

/*
Limpa uma lista da memoria 
*/

void libertaLista(Palavras l) {
     
      while (l != NULL) {
             free(l->palavra);
             free(l); 
             l = l->prox;
      }
}

void libLista(Palavras l) {
     Palavras aux; 
     
     while (l != NULL) {
            free(l->palavra);
            aux = l; 
            l = l->prox;
            free(aux); 
     }
}

/*
Diz qual é a palavra mais frequante 
*/

Palavras maisFreq(Palavras l) {
         Palavras max;  

         if (l == NULL) {
             max = NULL;  
         } else {
             max = l;
             l = l->prox; 

             while (l != NULL) {
                    if (l->ocorre > max->ocorre) max = l; 
             } 
         }

         return max; 
}

Palavras acrescentaInicio (Palavras l, char *p) {
         Palavras prm = malloc(sizeof(struct celula)); 

         prm->palavra = malloc(1 + strlen(p)); 
              strcpy(prm->palavra, p);  
//       strdup(p) o mesmo do de cima mas mais compacto 
         prm->ocorre  = 1;
         prm->prox    = l;
         
         return prm; 
}

Palavras acrescentaFim (Palavras l, char *p) {
         Palavras ult = malloc(sizeof(struct celula));    
         Palavras aux; 
          
         ult->palavra = malloc(1 + strlen(p)); 
              strcpy(ult->palavra, p);  
//       strdup(p) o mesmo do de cima mas mais compacto 
         ult->ocorre  = 1;

         aux = l; 

         for (; aux->prox != NULL; aux = aux->prox) 
              ;

         aux->prox = ult; 
         
         return l; 
}

Palavras acrescenta (Palavras l, char *p) {
         Palavras aux = l; 
         int existe = 1; 

         while (aux != NULL && existe) {
                if (strcmp (aux->palavra, p) == 0) existe = 0, aux->ocorre++;
                aux = aux->prox;  
         } 

         if (existe == 1) l = acrescentaFim (l, p); 

         return l; 
}
