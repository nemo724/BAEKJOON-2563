#include <stdio.h>
int papper[100][100];
int x_coordinate = 0;
int y_coordinate = 0;
int pappers_count = 0;

void input_pappers_count(void);
void input_xy_coordinates(void);
void fill_area(void);



void input_pappers_count(void)
{scanf_s("%d", &pappers_count);}

void input_xy_coordinates(void)
{scanf_s("%d%d", &x_coordinate, &y_coordinate);}

void fill_area(void)
{int max_x_coordinate = x_coordinate + 10;
int max_y_coordinate = y_coordinate + 10;
for (int x = x_coordinate; x <= max_x_coordinate; x++)
{for (int y = y_coordinate; y <= max_y_coordinate; y++)
{papper[x][y] = 1;}
}
}











int main(void)
{









}
