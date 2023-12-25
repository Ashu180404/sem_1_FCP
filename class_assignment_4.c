#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct definition from the previous assignment
struct MyStruct {
    int id;
    char name[50];
    float value;
};

// Function to calculate the checksum of a file
unsigned int calculateChecksum(FILE *file) {
    unsigned int checksum = 0;
    int c;
    while ((c = fgetc(file)) != EOF) {
        checksum += c;
    }
    return checksum;
}

int main() {
    const char *aboutMe = "Hello! I am a C programmer.";

    struct MyStruct data;
    data.id = 1;
    strcpy(data.name, "Ashutosh yadav");
    data.value = 3.14;

    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fprintf(file, "%s\n", aboutMe);

    fprintf(file, "Struct Data:\n");
    fprintf(file, "ID: %d\n", data.id);
    fprintf(file, "Name: %s\n", data.name);
    fprintf(file, "Value: %.2f\n", data.value);

    unsigned int checksum = calculateChecksum(file);
    fprintf(file, "\nChecksum: %u\n", checksum);

    fprintf(file, "\nTable of Numbers (2-50):\n");
    for (int i = 2; i <= 50; i++) {
        fprintf(file, "%d ", i);
    }

    fclose(file);

    printf("File created successfully.\n");

    return 0;
}
