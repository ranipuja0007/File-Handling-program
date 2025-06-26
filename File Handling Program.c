#include <stdio.h>
#include <stdlib.h>

#define FILENAME "sample.txt"

void createFile() {
    FILE *fp = fopen(FILENAME, "w");
    if (fp == NULL) {
        printf("Error creating the file.\n");
        return;
    }
    printf("File created (or overwritten) successfully.\n");
    fclose(fp);
}

void writeToFile() {
    FILE *fp = fopen(FILENAME, "w");
    if (fp == NULL) {
        printf("Error opening the file for writing.\n");
        return;
    }

    char data[1000];
    getchar();  // consume newline
    printf("Enter data to write to the file:\n");
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);
    printf("Data written to the file successfully.\n");

    fclose(fp);
}

void appendToFile() {
    FILE *fp = fopen(FILENAME, "a");
    if (fp == NULL) {
        printf("Error opening the file for appending.\n");
        return;
    }

    char data[1000];
    getchar();  // consume newline
    printf("Enter data to append to the file:\n");
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);
    printf("Data appended to the file successfully.\n");

    fclose(fp);
}

void readFile() {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("File not found. Please create the file first.\n");
        return;
    }

    char ch;
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n---------------------\n");

    fclose(fp);
}

int main() {
    int choice;

    while (1) {
        printf("\nFile Handling Operations:\n");
        printf("1. Create File\n");
        printf("2. Write to File\n");
        printf("3. Append to File\n");
        printf("4. Read File\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createFile(); break;
            case 2: writeToFile(); break;
            case 3: appendToFile(); break;
            case 4: readFile(); break;
            case 5: printf("Exiting program.\n"); exit(0);
            default: printf("Invalid choice. Try again.\n");
        }
    }
     return 0;
}
