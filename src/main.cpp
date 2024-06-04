#include<iostream>
#include<SFML/Graphics.hpp>
#include "Player.hpp"
using namespace std;
using namespace sf;

int main(){
    RenderWindow window(VideoMode(600,600),"Space Invaders");
    window.setFramerateLimit(60);
    Texture spritesheet;
    if(!spritesheet,loadFormFile("spritesheet.png")){
        cout<<"Error al cargar la textura\n";

    }

    Player player(288,555,spritesheet);
    while(window,isOpen()){
        Event event;
        while(window.pollEvent(event)){
            if(event.type=Event::Closed) window.close();
        }
        player.Update();

        window.clear();
        window.draw(player);
        window.display();
    } 