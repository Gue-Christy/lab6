#include "fonts.h"

void showName()
{
    Rect c;
    c.bot = 820;
    c.left = 29;
    ggprint8b(&c, 16, 0x00ffff00, "Christy");
}
