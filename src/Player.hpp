#include<iostream>
#include<SFML/Graphics.hpp>
using namespace std;
using namespace sf;
class Player: public Drawable{
    private:
    Sprite sprite;
    int life;
    int vel;
    public:
    Player(int x, int y, Texture &texture);
    void Update();
    Virtual void draw(RenderTarget &rt, RederStates rs) const;
};