#include <stdio.h>

int getvowelOraconsonant(char c) {

if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
         return 1;
        }
		 else
		  {
            return 0;
        }
    }
    
int main() {
    char c;
    printf("Character: ");
    scanf("%c",&c);

    int x=getvowelOraconsonant(c);
    if (x==1) {
        printf("Vowel");
    } else if (x==0) {
        printf("Consonant");
    }

    return 0;
}






































/*Problem 5: Write a C function that determines if a given character is a vowel or a consonant. The
function should take a character as input and return whether it's a vowel or a consonant. 2
Input Output
Character: 'a' Vowel*/
