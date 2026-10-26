/* CS100 Fall 2026 - HW3 Problem 2: Palindrome
 *
 * Read n strings and test whether each of them is a palindrome.
 * Print "Yes" / "No" on one line per string.
 * Use dynamic memory to store each input string (no fixed-size arrays).
 * Do not rename this file.
 */
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int len;
        scanf("%d\n",len);
        char str[len+1];
        fgets(str, sizeof(str), stdin);
        int x=1;
        for (int j=0;j<len/2+1;j++){
            if(str[j]==str[len-j]){
                x=0;
                break;
            } 
        }
        if (x) printf("Yes\n");
        else printf("No\n");

    }
    
    return 0;
}
