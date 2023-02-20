#include <iostream>
//args (r, g, b, x, y)
class pixel {
public: 
    int r;
    int g;
    int b;
    int x;
    int y;
    bool focused;

    void changeColor(int rNuevo, int gNuevo, int bNuevo) { 
         r = rNuevo;  
         g = gNuevo;
         b = bNuevo;
    };
};

int main() { 
pixel l {1, 2, 3, 4, 5, true};
    l.changeColor(6, 7, 8); 
    std::cout << l.r << l.g << l.b ;
    return 0;
}