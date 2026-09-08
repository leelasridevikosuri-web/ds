#include <stdio.h>

struct Car {
    char brand[30];
    int year;

    // Nested structure declared inside
    struct Engine {
        int horsepower;
        float capacity;
    } engine;
};

int main() {
    struct Car c;

    printf("Enter brand: ");
    scanf("%s", c.brand);

    printf("Enter year: ");
    scanf("%d", &c.year);

    printf("Enter horsepower: ");
    scanf("%d", &c.engine.horsepower);

    printf("Enter capacity: ");
    scanf("%f", &c.engine.capacity);

    printf("\n--- Car Details ---\n");
    printf("Brand: %s\n", c.brand);
    printf("Year: %d\n", c.year);
    printf("Horsepower: %d\n", c.engine.horsepower);
    printf("Capacity: %.1fL\n", c.engine.capacity);

    return 0;
}
