#include <stdio.h>

struct Engine {
    int horsepower;
    float capacity;
};

struct Car {
    char brand[30];
    int year;
    struct Engine engine;
};

int main() {
    struct Car c;

    printf("Enter car brand: ");
    scanf("%s", c.brand);

    printf("Enter manufacturing year: ");
    scanf("%d", &c.year);

    printf("Enter engine horsepower: ");
    scanf("%d", &c.engine.horsepower);

    printf("Enter engine capacity (L): ");
    scanf("%f", &c.engine.capacity);

    printf("\n--- Car Details ---\n");
    printf("Brand: %s\n", c.brand);
    printf("Year: %d\n", c.year);
    printf("Horsepower: %d\n", c.engine.horsepower);
    printf("Capacity: %.1fL\n", c.engine.capacity);

    return 0;
}
