#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>
#include <iomanip>

long int max_range = 250000000;
double square_diag = 1;
double radius = square_diag/sqrt(2);

int piNumerator = 0;
double rand_x;
double rand_y;
double distance;

int main() 
{
  //seed rand() with time for more randomness
  srand(time(0));
  std::cout << "Calculating..." << std::endl;
  
  //start clock
  clock_t begin = clock();
  for (int i = 0; i< max_range; i++)
  {
    rand_x = (double) rand()/(RAND_MAX);
    rand_y = (double) rand()/(RAND_MAX);
    //distance of point from centre
    distance = sqrt(rand_x*rand_x + rand_y*rand_y);
    // is point inside the circle?
    if (distance < radius)
    {
      piNumerator += 1;
    }
  }
  double pi = 8.0 * piNumerator / max_range;
  std::cout << piNumerator << std::endl;
  std::cout << "Value of pi approximated: " << std::setprecision(16) << pi << std::endl;
  clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
  std::cout << "Seconds elapsed: " << elapsed_secs << std::endl;
}