struct yelp_review {
  int stars;
  char *restaurant;
};

struct yelp_review create_review(char restaurants[7][10], int m, int randomseed){
  struct yelp_review output;
  output.restaurant = restaurants[randomseed%m];
  output.stars = randomseed%6;
  return output;
}

void update_review(struct yelp_review *input, int randomseed){
  input->stars = randomseed%6;
}
