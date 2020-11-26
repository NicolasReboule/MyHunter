#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"

sfIntRect define_rect(sfIntRect rect)
{
    rect.height = 110;
    rect.width = 110;
    rect.left = 0;
    rect.top = 0;
    return (rect);
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left = rect->left + offset;
    if (rect->left >= max_value)
        rect->left = 0;
}