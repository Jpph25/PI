// -- AULA 8 --

//#include <stdio.h>
//#include <stdlib.h>

// - - - - - - - - - \\ 

#define Max 100

// Queue
typedef struct queue {
        int valore[Max];
        int ini;
        int tam;
} *Queue;

/*
Inicializa uma queue
queue -> first in fist out
*/
void initQ (Queue q) { 
     q -> ini = 0; 
     q -> tam = 0; 
}

/* 
Dá o elemento q está á frente da fila
Retorna se a função teve sucesso (0 se sim e 1 se não)
*/
int frente (Queue q, int *f) {
    int r = 0; 
    
    if (q -> tam == 0) { 
      r = 1; 
    } else {
      *f = q -> valore[q -> ini]; 
    }

    return r; 
}

/*
Retira o ultimo elemento da queue
*/
int dequeue(Queue q, int *f) {
    int r = 0; 

    if (q -> tam == 0) { 
        r = 1;
    } else {
       *f = q -> valore[q -> ini]; 
        q -> ini ++;
        if (q -> ini == Max) q -> ini = 0;   

        q -> tam --;  
    } 
    
    return r; 
}

// adiciona um elemento á queue
int enqueue(Queue q, int e) {
    int r = 0;

    if (q -> tam == Max) {
        r = 1;
    } else {
        int p = q -> ini + q -> tam + 1; 
        if (p >= Max) p -= Max; 
        q -> valore[p] = e;
        q -> tam ++;  
    }
  
    return r; 
}
// -- MAIN -- 

int main() {
    Queue a; 

    // Liberta espaço para uma queue e inicializa o endereço a 
    a = malloc (sizeof (struct queue)); 
    /* ou  
    stuct queue b;
    a = &b; 
    */

    initQ (a); 
    
    return 0;
}
