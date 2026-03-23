Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

  #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int i = 0, j = strlen(str) - 1;
    char temp;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("%s", str);

    return 0;
}
