struct food_grade {
  int stars;
  char *restaurant;
};

struct food_grade create_example(char restaurants[7][10], int m, int randomseeder){
  srand(time()*randomseeder);
  struct food_grade output;
  output.restaurant = restaurants[rand()%m];
  output.stars = rand()%6;
  return output;
}
