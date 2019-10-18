#include <stdio.h>
#include <time.h>
#include "headers.h"
char restaurants[7][10] = {"wokwok","chipotle","mcdonalds","wendys","pokegreen","ferrys","terrys"};

int main() {
    printf("\n\nRestaurant Reviews { name , review out of five stars }\n\n");
    int i;
    struct yelp_review example;
    srand(time(0));
    //print several reviews
    for(i = 1; i < 6; i++){
      example = create_review(restaurants,7,rand());
      struct yelp_review *p = &example;
      printf("Review %d :         %s\t%d\n",i,example.restaurant, example.stars);
      update_review(p,rand());
      printf("Updated Review %d : %s\t%d\n\n",i,example.restaurant, example.stars);
    }
 }
