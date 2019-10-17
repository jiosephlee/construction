#include <stdio.h>
#include <time.h>
#include "headers.h"
char restaurants[7][10] = {"wokwok","chipotle","mcdonalds","wendys","pokegreen","ferrys","terrys"};

int main() {
    int i;
    struct food_grade example;
    for(i = 1; i < 10; i++){
      example = create_example(restaurants,7,i);
      printf("Example %d: Restaurant {Name, Grade}: %s\t%d\n",i,example.restaurant, example.stars);
    }
 }
