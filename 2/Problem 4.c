#include <stdio.h>
#include <conio.h>

int main()
{
	int i, x1, y1, z1, x2, y2, z2, dotP = 0, crossP[] = {0, 0, 0};
	printf("Enter the x y z values (seperaed by space) in (xi + yj + zk) of 1st vector: ");
	scanf("%d %d %d", &x1, &y1, &z1);
	printf("Enter the x y z values (seperaed by space) in (xi + yj + zk) of 2st vector: ");
	scanf("%d %d %d", &x2, &y2, &z2);

	// by formulae (x1i,y1i,z1i) . (x2i,y2j,z2k) = x1*x2 + y1*y2 + z1*z2
	dotP = (x1 * x2) + (y1 * y2) + (z1 * z2);

	// by formulae (x1i,y1i,z1i) X (x2i,y2j,z2k) = (y1*z2)-(z1*y2)i (z1*x2)-(x1*z2)j (x1*y2)-(y2*x1)k
	crossP[0] = (y1 * z2) - (z1 * y2);
	crossP[1] = (z1 * x2) - (x1 * z2);
	crossP[2] = (x1 * y2) - (x2 * y1);

	printf("Dot Product of the vectors (%d, %d, %d) and (%d, %d, %d) is %d\n", x1, y1, z1, x2, y2, z2, dotP);
	printf("Cross Product of the vectors (%d, %d, %d) and (%d, %d, %d) is (%d, %d, %d)", x1, y1, z1, x2, y2, z2, crossP[0], crossP[1], crossP[2]);
	return 1;
}
