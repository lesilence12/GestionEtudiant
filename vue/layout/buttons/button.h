/* My Buttons */

typedef struct{
    int x;
    int y;
    int width;
    int height;
    char label[10];
} Button;

typedef struct{
    float red;
    float green;
    float blue;
} ColorBtn;


void drawButton(Button btn, ColorBtn color);