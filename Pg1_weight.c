#include <stdio.h>

int main(void) {
  int userWeight;
  printf("Welcome to Planet Weightness! We aren't affiliated with Planet Fitness in any way.\n");
  printf("Please enter your current weight. Our location services have determined that you are on EARTH.\n");
  scanf("%d\n", userWeight);
  printf("Really? You weigh &d? Ok...\n" &userWeight);
  return 0;
}
