#include <stdio.h>
struct TwoDPoint {
double x, y;
};
int main(void) {

	struct TwoDPoint a = {0.0};
	struct TwoDPoint b = {0.0}; //the struct name was incorrect.split lane to make it clear but not necessar
	{
		char input [100];
		puts("Please enter the x and y coordinates of the 1st point , separated by a comma.");
		fgets(input , sizeof(input), stdin);
		sscanf(input ,"%f,%f", &(a.x),(a.y));
		//it has to be done sepreately. each struct can only store one coordomate
		puts("Please enter the x and y coordinates of the 2nd point , separated by a comma.");
		fgets(input , sizeof(input), stdin);
		sscanf(input ,"%lf ,%f", &(b.x),(b.y));
	}
	double x_dist = (a.x - b.x), y_dist = (a.y - b.y);
	printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));
	return 0;
}

