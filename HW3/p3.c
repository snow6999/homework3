/* CS100 Fall 2026 - HW3 Problem 3: String and character manipulation
 *
 * Implement the hw3_* functions below. Do NOT write a main function here:
 * the autograder compiles this file together with its own test driver.
 * Implementations must conform to the C standard (see cppreference) and
 * must not call any standard library string/character functions.
 * Do not rename this file.
 */
#include <stddef.h>

int hw3_islower(int ch)  { return ch>='a'&&ch<='z'; }
int hw3_isupper(int ch)  { return ch>='A'&&ch<='Z'; }
int hw3_isalpha(int ch)  { return ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'; }
int hw3_isdigit(int ch)  { return ch>='0'&&ch<='9'; }
int hw3_tolower(int ch)  { return ch - 'A' + 'a' ; }
int hw3_toupper(int ch)  { return ch - 'a' + 'A' ; }

size_t hw3_strlen(const char *str){
    size_t n=0;
    for (int i=0;*(str+i)!='\0';i++){
        n++;
    }
    return n; }
char *hw3_strchr(const char *str, int ch){
    size_t i=0; 
    while (*(str+i)!=ch){
        i++;
        if (*(str+i)=='\0') return NULL;
    }
    return (char *)(str+i);
}
char *hw3_strcpy(char *dest, const char *src){
    size_t i=0;
    while (*(src+i)!='\0'){
        *(dest+i)=*(src+i);
        i++;
    }
    *(dest+i)='\0';
    return dest;  
    }
char *hw3_strcat(char *dest, const char *src){ 
     size_t i=0;
     while (*(dest+i)!='\0'){
        i++;    
     }
     size_t j=0;
     while(*(src+j)!='\0'){
        *(dest+i+j)=*(src+j);
        j++;
    }
    *(dest+i+j)='\0';
    return dest; 
}
int   hw3_strcmp(const char *lhs, const char *rhs){ 
    while (*lhs!='\0'&&*rhs!='\0'&&*lhs==*rhs){
        lhs++;
        rhs++;
    }
    if (*lhs==*rhs) return 0;
    else if (*lhs>*rhs) return 1;
    else return -1; 
}
