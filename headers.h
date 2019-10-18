struct yelp_review {
  int stars;
  char *restaurant;
};
struct yelp_review create_review(char restaurants[7][10],int m, int randomseed);
void update_review(struct yelp_review *input, int randomseed);
