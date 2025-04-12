// Função que troca o valor de duas variaveis 
// x e y são argumentos 

void swapM (int *x, int *y) {
    int z; 
     z = *x;  
    *x = *y; 
    *y =  z;    
}  

int main() {
    int x = 42, y = 720; 
    swapM (&x, &y); 
    printf ("%d %d\n", x, y);
    int v[9], N = 9; 
    for (x = 0; x < 9; x++)
        v[x] = x + 1;
    v[1] = 9; v[5] = 9;  
    for (x = 0; x < 9; x++)
        printf ("%d\n", v[x]);
    invertArray (v, N); 
    putchar ('\n'); 
    for (x = 0; x < 9; x++) 
        printf ("%d\n", v[x]);
    putchar ('\n');
    printf ("%d\n", maximum  (v, N));
    printf ("%d\n", maxCount (v, N));  
    return 0;
} 

// Troca o valor de dois arrays 

void swap (int v[], int i, int j) {
    int x = v[i]; 
    v[i]  = v[j];
    v[j]  = x;   
}

// Inverte um array 

void invertArray (int v[], int N) {
    int i, x, t;
    t = N - 1;  
    for (i = 0; i < t ; i++) {
        x    = v[i];
        v[i] = v[t]; 
        v[t] = x;
        t--;  
    }    
}

/*
do sor 
void invertArray (int v[], int N){
    int i = 0, j = N - 1;
    while (i < j){
        swap (v, i, j);
        i++; j--; 
    }
}
*/

int maximum (int v[], int N) {
    int i, j = v[0], x = 0, y = 0;
    for (i = 0; i < N; i++) {
        if (j < v[i]) j = v[i], x = i;  
    }
    printf ("indice do maior: %d\n", x);
    return j;  
} 

// encontra o maximo e diz quantas vezes aparece 

int maxCount (int v[], int N, int *count) {
    int i, max = v[0], c = 1; 
    for (i = 1; i < N; i++) {
       if (v[i] >  max) {
         max = v[i];
         c = 0; 
       }  
       if (v[i] == max) c++; 
    } 
    //printf ("o max e: %d\n", max); 
    *count = c; 
    return max;    
}

void linhaA (int l[], int N) {
    int i; 
    l[N] = 1;
    for (i = N - 1; i >= 0; i--) {
        l[i] = l[i] + l[i - 1];  
    }  
}

void pascal (int l[], int N) {
     int i;
     l[0] = 1;   
     for (i = 1; i <= N; i++) {
         linhaA (l, N);    
     }
}
  
 
