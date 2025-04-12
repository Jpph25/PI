// -- AULA 6 -- 

typedef struct aluno {
        int   numero;
        char  nome[100];
        int   miniT[5]; // E[0..2]
        float teste;
} Aluno; 


/*
miniT (20%)(nota minima 25%) teste (80%)

miniT[1] + ... + miniT[5] = sumMiniT  
sumMiniT * 2/5 = miniT (O vezes 2 é para passar a nota para 0 a 20)

se miniT > 0.25 * (0.20 * 20) 

faz miniT * 0.20 + teste * 0.80 = nota 

se não nota = 0
*/

int nota (Aluno a){
    int i, sumMT = 0; 

    for (i = 0; i < 5; i++) {
         sumMT += a.miniT[i]; 
    }
    
    int mMT;
    
    mMT = sumMT * 2/5; 

    float notaf;
    int   nota  = 0;

    if (mMT > 5) {
        notaf = mMT + a.teste;   
        if (notaf >= 9.5) nota = notaf + 0.5; 
    }  
      
    return nota; 
}

// -- MAIN -- 

int main() {
    int   i, n, mn, miniT[5];
    float teste;
    char  nome[100] = "Joao";  
    
    for (i = 0; i < 5; i++) {
         scanf ("%d", &mn); 
         miniT[i] = mn;   
    }


}