// -- AULA 6 -- 

// #include <stdio.h>

/*
Recebe dois arrays ordenados e junta-os num array que os ordena

a [10|43|87|90] 
b [12|24|43|95|100|200]

r [10|12|24|43|43|95|100|200]
*/
 
void merge (int a[], int na, int b[], int nb, int r[]) {
     int ia, ib, ir;
     ia = ib = ir = 0;

     while (ia < na && ib < nb) {
           if (a[ia] <= b[ib]) r[ir++] = a[ia++]; 
           else r[ir++] = b[ib++]; 
     }

     if   (ia < na) while (ia < na) r[ir++] = a[ia++]; 
     else           while (ib < nb) r[ir++] = b[ib++]; 
}

/*
Recebe um array e um numero

e = 9 
v [10|5|8|12|4|3|20|35]

v [5|8|4|3|10|12|20|35]
   -------
  retorna 4 (parte que não ficou ordenada) 
*/

int partition (int v[], int N, int e) {
    int men[N], mai[N], i, m = 0, M = 0;
    i = m = M = 0; 
    
    while (i < N) {
          if   (v[i] <= e) men [m++] = v[i++]; 
          else             mai [M++] = v[i++]; 
    }

    for (i = 0; i < m; i++) v[i]     = men[i]; 
    for (i = 0; i < M; i++) v[i + m] = mai[i]; 

    return m; 
}

int partition2 (int v[], int N, int e) {
    int aux[N], m, M, i;
    i = 0, m = 0, M = N - 1; 
    
    while (i < N) {
          if   (v[i] <= e) aux[m++] = v[i++];
          else             aux[M--] = v[i++]; 
    } 

    for (i = 0; i < N; i++) v[i] = aux[i]; 

    return m;
}

/*
       |i|       |j|
v[ | | | | | | | | | | | ]
   <=e | |  >e   | |  ?   
*/    

int partition (int v[], int N, int e) {
    int i, j; 
    i = j = 0; 
    
    while (j < N) {
          if   (v[j] > e) j++;
          else            swap (v, i++, j++); 
    } 
    
    return i;
}

/*
       |i|       |j|
v[ | | | | | | | | | | | ]
   <=e | |   ?   | |  >e 
*/

int partition (int v[], int N, int e) {
    int i, j; 
    i = 0, j = N - 1; 
    
    while (i <= j) {
          if   (v[i] <= e) i++;  
          else  if   ([v[j] > e]) j--;
                else  swap (v, i++, j--);  
    }

    return i; 
}

// Função que dá scan em um array

void scanArray (int N, int v[]) {
     int i; 
     for (i = 0; i < N; i++) {
         int num; 
         scanf ("%d", &num);
         v[i] = num;   
     } 
}

// -- MAIN -- 

int main() {
    int a[4], b[6]; 
    printf ("Scan vetor a\n");
    scanArray (4, a);
    printf ("Scan vetor b\n");
    scanArray (6, b); 

    int r[100];

    merge (a, 4, b, 6, r); 
    
    printf ("Vetor r:\n"); 
    int i;
    for (i = 0; i < 10; i++) {
        printf ("%d ", r[i]); 
    }
    putchar ('\n'); 

    int e = 9, v[8]; 
    printf ("Scan vetor v\n");
    scanArray (8, v);
    putchar ('\n'); 

    printf ("Resultado 'partition' : %d\n", partition  (v, 8, e));
    printf ("Resultado 'partition2': %d\n", partition2 (v, 8, e));

    return 0; 
}