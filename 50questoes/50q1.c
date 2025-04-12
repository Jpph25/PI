// -- 50 QUESTIONS 1ªP -- 

#include <stdio.h>
#include <string.h>

#define MAX 100

/*   1.
Print's the biggest element of a sequence of int's finished in 0
*/

int biggest() {
    int seq[MAX]; 
    int i = 0, max = 0;

    while (i < MAX) {
          int aux;
          scanf("%d", &aux);
          
          seq[i++] = aux;

          if (aux == 0) break;
    } 

    for (i = 0; seq[i] != 0; i++) {
        if (seq[i] > max) max = seq[i];
    }

    return max;
}

/*   2. 
Calculates the average of a sequence of int's finished in 0
*/

int average() {
    int seq[MAX];
    int i = 0, sum = 0, avrg;
    
    while (i < MAX) {
          int aux; 
          scanf ("%d", &aux); 
            
          seq[i++] = aux;

          if (aux == 0) break;
    }

    for (i = 0; seq[i] != 0; i++) {
        sum += seq[i]; 
    }

    avrg = sum / (i + 1) ;

    return avrg;
}

/*   3.
Prints the second bissgest element of the sequence 
*/

int sndBig() {
    int seq[MAX];
    int i = 0, max = 0, Smax = 0;
    
    while (i < MAX){
          int aux;
          scanf("%d", &aux);
          
          seq[i++] = aux;

          if (aux == 0) break;
    }

    for (i = 0; seq[i] != 0; i++) {
        int aux;
        if (max < seq[i]) 
            max = seq[i]; 
        if (max > seq[i] && Smax < seq[i])
            Smax = seq[i]; 
    }

    return Smax; 
}

/*   4.
Calculates the amount of 1's in the binary representation of a number
*/

int bitsUM (unsigned int n) {
    int i, ones = 0; 
    
    for (i = 0; n/2 != 0; i++) {;
        if (n%2 == 1) ones += 1;
        n = n/2;  
    }
    if (n%2 == 1) ones += 1; 
    
    return ones; 
} 

/*   5.
Calculates the number of 0's int the end of the binary representation of a number
*/

int trailingZ(unsigned int n) {
    int zeros = 0;

    while (n%2 == 0 && n > 0) {
           zeros++;
           n = n/2;  
    }

    return zeros; 
}

/*   6.
Claculates the number of digits needed to write an int in decimal
*/

int qDIg(unsigned int n) {
    int digs = 0; 

    while (n != 0) {
          n = n/10; 
          digs++; 
    }

    return digs;
}

/*   7.
Puts together tow strings
*/

char* myStrcat (char s1[], char s2[]) {
      int i, j;

      for (i = 0; s1[i] != '\0'; i++) 
           s1[i] = s1[i]; 

      for (j = 0; s2[j] != '\0'; j++)
           s1[i + j] = s2[j];

      s1[i + j] = '\0';

      return s1;
}      

/*   8.
Copies the content os a string to another array 
*/

char* myStrcpy (char *dest, char source[]) {
      int i; 

      for (i = 0; source[i] != '\0'; i++) {
          dest[i] = source[i]; 
      }

      dest[i] = '\0'; 

      return dest; 
}

/*   9.
Compares two strings 
*/

int myStrcmp (char s1[], char s2[]) {
    int i;
    int l1 = strlen(s1), l2 = strlen(s2); 

    if (l1 < l2) return  1;
    if (l1 > l2) return -1;

    for (i = 0; i < l1 || i < l2; i++) {
        if (s1[i] < s2[i]) return  1;
        if (s1[i] > s2[i]) return -1; 
    }

    return 0;
}

/*   10.   
Verifies if a string occurs in another one 
*/

char* myStrstr (char s1[], char s2[]) {
      int l1 = strlen(s1), l2 = strlen(s2);
      int i, j; 
      char aux[l2 + 1];  

      if (l1 < l2) return NULL;  
      
      for (i = 0; i <= l1 - l2; i++) {

          for (j = 0; j < l2; j++){
              aux[j] = s1[i + j];
          }
          aux[l2] = '\0';

          if (strcmp(aux, s2) == 0) return &s1[i];
      } 

      return NULL;   
}

/*   11.
Invert's the order of the elements of a string
*/

void myStrrev (char s[]) {
     int i, j = strlen(s) - 1;
     char aux[j + 1];

     for (i = 0; j >= 0; i++) {
         aux[i] = s[j--];  
     }
     aux[i] = '\0';
     
     strcpy(s, aux);
}

/*   12. 
Removes all vowels of a string 
*/

void myStrnoV (char s[]) {
     int i, j;

     for (i = 0; s[i] != '\0'; i++) {
         if ( 'a' == s[i] || 'e' == s[i] || 'i' == s[i] || 'o' == s[i] || 'u' == s[i]
            ||'A' == s[i] || 'E' == s[i] || 'I' == s[i] || 'O' == s[i] || 'U' == s[i]) {
            for (j = i; s[j] != '\0'; j++) { 
                s[j] = s[j + 1]; 
            }
            s[j] = '\0';
         }     
     }
}

/*   13.
Tansforms a string with words separated by a sapce in a string with the first letters
of each word
*/

void truncW (char t[], int n) {
     int i, j = 0, k = 0; 
     char aux[strlen(t) + 2]; 

     for (i = 0; t[i] != '\0'; i++) {
         k = 0;
        
         while (t[i] != ' ' && t[i] != '\0' && k < n) {
               aux[j++] = t[i++];
               k++; 
         }
         
         while (t[i] != ' ' && t[i] != '\0') {
               i++;
         }

         if (t[i] == ' ') aux[j++] = ' ';
     }
     aux[j] = '\0';
     
     strcpy(t, aux); 
}

/*   14.
Determines the most frequent character
*/

char charMaisfreq(char s[]) {
     int  i, max = 0, ls = strlen(s);  
     int  freq[256] = {0};
     char ind;

     if (ls == 0) return '0'; 

     for (i = 0; s[i] != '\0'; i++) {
         freq[s[i]] += 1;  
     }

     for (i = 0; i < 255; i++) {
          if (freq[i] > max) max = freq[i], ind = i;
     }

     return ind;  
}

/*   15.
Calculates the biggest amount of conssecutive equal characters 
*/

int iguaisConsec(char s[]) {
    int  i, m = 0, max = 0;
    char x = s[0]; 

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == x) m   += 1; 

        if (m > max  ) max  = m; 
        
        if (s[i] != x) x    = s[i], m = 1; 
    }

    return max; 
}

/*   16.
Calculates the biggest amount of conssecutive different characters 
*/

int ocorreu(char s[], int i, int j) {
    int n, ans = 0;
    for (n = i; n < j; n++)
        if (s[n] == s[j]) ans = 1;  
    return ans;
}

int diffConssec(char s[]) {
    int i, j,count = 0, max = 0, flag = 1;

    for (i = 0; s[i]; i++ ) {
        count = 0;
        flag = 1;  

        for (j = i; s[j] && flag; j++) {
            if (!ocorreu(s, i, j))
                count++;
            else 
                flag = 0;
        }
        
        if (count > max)
            max = count;
    }
    return max;
}

/*   17.
Calculates longest common prefix between two strings
*/

int maiorPref (char s1[], char s2[]) {
    int l1 = strlen(s1), l2 = strlen(s2);
    int i = 0, ml, max = 0; 
    
    if   (l1 > l2) ml = l2;
    else           ml = l1;

    for (i = 0; i < ml; i++) {
        if (s1[i] == s2[i]) max++; 
        if (s1[i] != s2[i]) break;
    }

    return max; 
}

/*   18.
Calculates longest common suffix between two strings
*/

int maiorSuf(char s1[], char s2[]) {
    int l1 = strlen(s1), l2 = strlen(s2);
    int max = 0;

    while (l1 > 0 && l2 > 0 && s1[l1 - 1] == s2[l2 - 1]) {
        max++;
        l1--;
        l2--;
    }

    return max;
}


/*   19.
Calculates the biggest prefix of a string that is a suffix o another string
*/

int sufPref (char s1[], char s2[]) {
    int l1 = strlen(s1), l2 = strlen(s2); 
    int i, j = 0;
    
    for (i = 0; i < l1; i++) {
        while (i + j < l1 && j < l2 && s1[i + j] == s2[j]) {
               j++;
        }

        if (i + j == l1) {
            return j; 
        }
    }
    
    return 0;
}

/*   20.
Count's how many words a string has 
*/

int contaPal(char s[]) {
    int i, inW = 0, count = 0;   

    for (i = 0; s[i] != '\0'; i++) {
       if (inW && s[i] == ' ') {
           inW = 0;
       } else {
         if (!inW && s[i] != ' ') {
             inW = 1;
             count++; 
         }
       } 
    }  

    return count; 
}

/*   21.
Count's how many vowels a string has
*/

int contV (char s[]) {
    int i, count = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if ( 'a' == s[i] || 'e' == s[i] || 'i' == s[i] || 'o' == s[i] || 'u' == s[i]
           ||'A' == s[i] || 'E' == s[i] || 'I' == s[i] || 'O' == s[i] || 'U' == s[i])
            count++;
    }

    return count;
}

/*   22.
Verifies if all characters are coitained in a string
*/

int contida (char a[], char b[]) {
    int i, j, r = 1, ra = 0;
    
    for (i = 0; a[i] != '\0' && r; i++) {
        
        for (j = 0; b[j] != '\0'; j++) {
            if (a[i] == b[j]) ra = 1; 
        }

        r = ra;
        ra = 0;  
    }

    return r;
}

/*   23. 
Verifies if a word is a palindorome
*/

int palindorome(char s[]) {
    int ls = strlen(s); 
    int i, r = 1;

    for (i = 0; r && i != (ls/2) ;i++) {
        if (s[i] != s[ls - 1]) r = 0; 
        ls--;  
    }

    return r;
}

/*   24. 
Remosves all the equal conssecutive characters
*/

int remRep (char x[]) {
    int  i, j;
    char ant = x[0];  

    for (i = 0; x[i] != '\0'; i++) {
        if (x[i] == x[i + 1]) {
            for (j = i; x[j] != '\0'; j++) {
                x[j] = x[j + 1];
            }
            x[j] = '\0';
            i--;  
        } 
    }

    return (strlen(x)); 
}



// -- MAIN -- 

int main() {
    int n;

    printf ("The biggest int of the sequence is %d\n", biggest()); 

    printf ("The average of the sequence is %d\n", average()); 

    printf ("The second biggest int of the sequence is %d\n", sndBig());

    scanf  ("%d", &n);
    printf ("The number of ones in the bynary representation of %d is %d\n", n, bitsUM(n));

    printf ("The nunber of conssecutive 0's from the end of %d is %d\n", n, trailingZ (n));

    scanf  ("%d", &n);
    printf ("%d nedds %d digits to be written\n", n, qDIg(n)); 

    char s1[20] = "Hello ", s2[20] = "World!";
    printf ("%s\n", myStrcat(s1, s2));  
 
    char dest[20], source [20] = "Hello World!";
    printf ("%s\n", myStrcpy(dest, source));  

    char s3[10] = "12345", s4[10] = "12346";
    printf("%d\n", myStrcmp(s3, s4)); 

    char s5[10] = "000";
    char *result = myStrstr(s4, s5);  
    if (result) 
        printf("Substring encontrada: %s\n", result);
    else
        printf("Substring não encontrada.\n");  
    
    myStrrev(s3);     
    printf("%s\n", s3);       

    myStrnoV(s1);
    printf("%s\n", s1); 
    
    truncW(source, 3); 
    printf("%s\n", source);
    
    char s6[20] = "ababaabcccaac";
    printf ("%c\n", charMaisfreq(s6)); 

    printf ("%d\n", iguaisConsec(s6));
    
    printf ("%d\n", diffConssec(s6)); 

    char s7[10] = "abcdeabc", s8[10] = "abcfgdeabc";
    printf ("%d\n", maiorPref(s7, s8));

    printf ("%d\n", maiorSuf(s7, s8));  

    printf ("%d\n", sufPref(s7, s8));

    char s9[10] = " a a bb a ";
    printf ("%d\n", contaPal(s9));
    
    char s10[30] = "bracara augusta";
    char s11[10] = "braga", s12[15] = "bracarense";
    printf("%d\n", contida(s11, s10));
    printf("%d\n", contida(s11, s12)); 

    char s13[10] = "abcdcba";
    printf("%d\n", palindorome(s13)); 

    char s14[15] = "aaabaaabbbaaa"; 
    printf("%d %s\n", remRep(s14), s14); 

    return 0;
}