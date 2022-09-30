#include <malloc.h>
#include "circle.h"
#include <stdbool.h>

/*post: returns an array with five circles - solution to 6.b*/
void fiveCircles(circle c[]) {
	for(int i = 0; i < 5; i++){
		c[i].p.x = i;
		c[i].p.y = i;
		c[i].r = i;
	}

}
/*post: answer to exercise 6.c*/
bool circleIsValid(const circle * c) {
	if(c->r > 0) { /* Check if radius is greater than 0. Otherwise the circle is not valid. */
		return true;
	}
	else {
		return false;
	}
}

/*Answer to exercise 6.d*/
void translate(circle* c, const point* p) {
	c->p.x += p->x; /* Adds or subtracts the x-coordinate for circle *c */
	c->p.y += p->y; /* Adds or subtracts the y-coordinate for circle *c */
}



