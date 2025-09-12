#include <stdio.h>
#include <string.h>

struct abbreviate {
    char key[10];
    char val[100];
};

int main() {
    int n;

    printf("How many abbreviations do you want to add: ");
    scanf("%d", &n);
    getchar();

    struct abbreviate arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the Abbreviation: ");
        fgets(arr[i].key, sizeof(arr[i].key), stdin);
        arr[i].key[strcspn(arr[i].key, "\n")] = '\0'; 

        printf("Enter the Full Form: ");
        fgets(arr[i].val, sizeof(arr[i].val), stdin);
        arr[i].val[strcspn(arr[i].val, "\n")] = '\0'; 
    }

    char input[100];
    printf("Enter the Full Form to search: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(input, arr[i].val) == 0) {
            printf("\nAbbreviation: %s\n", arr[i].key);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nFull form not found.\n");
    }

    return 0;
}

