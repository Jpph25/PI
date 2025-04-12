// -- FICHA 1 -- \\ 

// #include <stdio.h> 
// #include <math.h>

//   3.

// .1 
/* Program that prints: 
##### 
##### 
##### 
##### 
##### 
*/ 

void square (int side) {
    int i, j; 
    for (i = 0; i < side; i++) {
        for (j = 0; j < side; j++) {
            putchar ('#'); 
        }
        putchar ('\n');     
    }
} 

// .2
/* program that prints:  
#_#_# 
_#_#_ 
#_#_# 
_#_#_ 
#_#_# 
*/

// even line 

void oddL  (int length) {
    int i;
    for (i = 0; i < length; i++) {
        if   (i % 2 == 0) putchar ('_'); 
        else putchar ('#'); 
    }
}

void evenL (int length) {
    int i; 
    for (i = 0; i < length; i++) {
        if   (i % 2 == 0) putchar ('#'); 
        else putchar ('_'); 
    }
}

void cheese (int side) {
    int i, j; 
    for (i = 0; i < side; i++) {
        if   (i % 2 == 0) evenL (side);
        else oddL (side); 
        putchar ('\n');
    }
}

// .2 

/* Program that prints:  
# 
## 
### 
#### 
##### 
#### 
### 
## 
# 
*/

void triangle (int heigth) {
    int i, j; 
    for (i = 0; i < heigth; i++) {
        for (j = 0; j < i + 1; j++) {
            putchar ('#'); 
        }
        putchar ('\n'); 
    }
    for (i ; i > 0; i--) {
        for (j = 0; j < i - 1; j++) {
            putchar ('#'); 
        }
        putchar ('\n'); 
    }
}

/* Program that prints; 
    #
   ###
  #####
 ####### 
#########
*/

void writeC (int length, char c) {
    int i;
    for (i = 0; i < length; i++) {
        putchar (c); 
    }
}

void pyramid (int heigth) {
    int i, j = 1; 
    for (i = 1; i <= heigth; i++) {
        writeC  (heigth - i,' '); 
        writeC  (j, '#'); 
        putchar ('\n');
        j = j + 2; 
    }
}

// .4
/* Program that prints: 
    # 
  ##### 
 ####### 
 ####### 
######### 
 ####### 
 ####### 
  ##### 
    #  
*/

void circle (int radius) {
    int i, j;  
    for (i = -radius; i <= radius; i++) {
        for (j = -radius; j <= radius; j++) {
            if  (sqrt(i * i + j * j) < radius + 0.5) 
                 putchar ('#'); 
            else putchar (' ');  
        }
        putchar ('\n');  
    }
}

// -- Main -- \\ 

int main () {
   int size; 
   scanf    ("%d", &size); 
   
   putchar ('\n'); 

   printf   ("Square of side %d\n", size); 
   square   (size);

   putchar  ('\n'); 
   
   printf   ("Cheese of side %d\n", size);
   cheese   (size);

   putchar  ('\n');  
   
   printf   ("triangle of heigth %d\n", size);
   triangle (size);

   putchar  ('\n'); 

   printf   ("pyramid of heigth %d\n", size);
   pyramid  (size);

   putchar  ('\n');

   printf   ("circle with radios %d\n", size);
   circle   (size);

   putchar  ('\n');

   return 0;  
} 