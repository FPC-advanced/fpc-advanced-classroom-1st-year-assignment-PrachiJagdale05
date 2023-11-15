//Write a program to find the index of a substring of a string
#include<stdio.h>
void input_string(char *a, char *b) {
    printf("Enter the main string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}
int sub_string_index(char *string, char *substring) {
    int i, j;
    for (i = 0; string[i] != '\0'; i++) {
        j = 0;       
        while (substring[j] != '\0' && string[i + j] == substring[j]) {
            j++;
        }
        if (substring[j] == '\0') {
            return i;
        }
    }
 return -1;
}
void output(char *string, char *substring, int index) {
    if (index != -1) {
        printf("Substring '%s' found at index %d in the string '%s'.\n", substring, index, string);
    } else {
        printf("Substring '%s' not found in the string '%s'.\n", substring, string);
    }
}

int main() {
    char inputString[100], subString[50];
    input_string(inputString, subString);
    int index = sub_string_index(inputString, subString);
    output(inputString, subString, index);
    return 0;
}