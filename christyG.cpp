#include "fonts.h"
#include <GL/glx.h>

void showName()
{
    Rect c;
    c.bot = 820;
    c.left = 29;
    ggprint8b(&c, 16, 0x00ffff00, "Christy");
}

void drawBox(int x, int y)
{
	static float angle = 0.0;
	// 		   red, green, blue
    glColor3ub(100, 100, 160);
    glPushMatrix();
    glTranslatef(x,y,0);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glTranslatef( -50, -50,0);
	angle = angle + 2.5;
    glBegin(GL_QUADS);
    	glVertex2f(  0,   0);
    	glVertex2f(  0, 100);
    	glVertex2f(100, 100);
    	glVertex2f(100,   0);
    glEnd();
   	Rect c;
    c.bot = 50;
    c.left = 50;
	c.center = 3;
    ggprint8b(&c, 16, 0x00ffff00, "Christy");
    glPopMatrix();


}

