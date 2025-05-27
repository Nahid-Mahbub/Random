// Making a code that can identify "/"
#include <stdio.h>
#include <string.h>
int main()
{
    while(1) {
        char line[500];
    printf("Enter a line of code:\n");
    fgets(line, sizeof(line), stdin);

    size_t len = strlen(line);
    if (len > 0 && line[len-1] == '\n') {
        line[len-1] = '\0';
    }

    if(line[0] == '1') {
        break;
    }

    if(line[0] == '/' && (line[1] == '/' || line[1] == '*')) {
        printf("This line is comment.\n");
    }

    else {
        printf("This line is not comment.\n");
    }};

    return 0;
}