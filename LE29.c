#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum DataType {
    INTEGER,
    FLOAT,
    CHARACTER,
    STRING
};
typedef struct {
    enum DataType type;
    union {
        int intValue;
        float floatValue;
        char charValue;
        char* stringValue;
    } data;
} DataContainer;
void setData(DataContainer* container, enum DataType type, const void* value) {
    container->type = type;
    switch (type) {
        case INTEGER:
            container->data.intValue = *((int*)value);
            break;
        case FLOAT:
            container->data.floatValue = *((float*)value);
            break;
        case CHARACTER:
            container->data.charValue = *((char*)value);
            break;
        case STRING:
            // Allocate memory for the string and copy the data
            container->data.stringValue = strdup((const char*)value);
            break;
    }
}
void* getData(const DataContainer* container) {
    switch (container->type) {
        case INTEGER:
            return &(container->data.intValue);
        case FLOAT:
            return &(container->data.floatValue);
        case CHARACTER:
            return &(container->data.charValue);
        case STRING:
            return container->data.stringValue;
        default:
            return NULL;
    }
}
void freeStringData(DataContainer* container) {
    if (container->type == STRING) {
        free(container->data.stringValue);
    }
}
int main() {
    DataContainer container;
    int intValue = 42;
    setData(&container, INTEGER, &intValue);
    printf("Integer value: %d\n", *((int*)getData(&container)));
    float floatValue = 3.14f;
    setData(&container, FLOAT, &floatValue);
    printf("Float value: %.2f\n", *((float*)getData(&container)));
    char charValue = 'A';
    setData(&container, CHARACTER, &charValue);
    printf("Char value: %c\n", *((char*)getData(&container)));
    const char* stringValue = "Hello, World!";
    setData(&container, STRING, stringValue);
    printf("String value: %s\n", (char*)getData(&container));
    freeStringData(&container);
    return 0;
}
