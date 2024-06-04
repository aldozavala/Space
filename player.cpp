#include<"Player.hpp">

Player::Player(int x, int y, Texture &texture){
    sprite.setTexture(texture);
    sprite.setTextureRect(IntRect(13*8+,7*8+7,16,8));
    sprite.setPosition(x,y);
    sprite.setScale(3,3);
    life=100;
    vel=5
}
void Player::Update(){
    if(Keyboard::isKeyPressed(Keyboard::Right)&&sprite.getPosition().x+vel<550){
        sprite.move(vel,0);
    }
    if(Keyboard::isKeyPressed(Keyboard::Left)&&sprite.getPosition().x+vel*-1>0){
        sprite.move(vel*-1,0);
    }
    

}
void draw(RenderTarget &rt, RederStates rs) const;
    rt.draw(sprite,rs);