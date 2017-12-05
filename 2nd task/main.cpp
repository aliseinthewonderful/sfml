#include <SFML/Graphics.hpp> 
#include <SFML/System.hpp> 
#include <SFML/Window.hpp> 

int main() 
{ 
sf::RenderWindow window(sf::VideoMode({800, 600}), "title"); 
window.clear(); 

sf::ConvexShape kr; 
kr.setFillColor(sf::Color(0x8B, 0x0, 0x0)); 
kr.setPosition(30, 27); 
kr.setPointCount(4); 
kr.setPoint(0, {+0, +0}); 
kr.setPoint(1, {+10, +0}); 
kr.setPoint(2, {+30, +13}); 
kr.setPoint(3, {-20, +13}); 
window.draw(kr); 

sf::ConvexShape st; 
st.setFillColor(sf::Color(0x8B, 0x45, 0x13)); 
st.setPosition(20, 40); 
st.setPointCount(4); 
st.setPoint(0, {+0, +0}); 
st.setPoint(1, {+30, +0}); 
st.setPoint(2, {+30, +20}); 
st.setPoint(3, {+0, +20}); 
window.draw(st); 

sf::ConvexShape tr; 
tr.setFillColor(sf::Color(0x80, 0x80, 0x80)); 
tr.setPosition(35, 20); 
tr.setPointCount(8); 
tr.setPoint(0, {+0, +0}); 
tr.setPoint(1, {+3, +0}); 
tr.setPoint(2, {+3, +5}); 
tr.setPoint(3, {+2, +5}); 
tr.setPoint(4, {+2, +10}); 
tr.setPoint(5, {+1, +10}); 
tr.setPoint(6, {+1, +5}); 
tr.setPoint(7, {+0, +5}); 
window.draw(tr); 

sf::RectangleShape dv; 
dv.setSize({5, 15}); 
dv.setRotation(0); 
dv.setPosition({30, 45}); 
dv.setFillColor(sf::Color(0x00, 0x00, 0x00)); 
window.draw(dv); 

sf::CircleShape shape1(1); 
shape1.setPosition({36, 18}); 
shape1.setFillColor(sf::Color(0xC0, 0xC0, 0xC0)); 
window.draw(shape1); 

sf::CircleShape shape2(1.5); 
shape2.setPosition({37, 15}); 
shape2.setFillColor(sf::Color(0xC0, 0xC0, 0xC0)); 
window.draw(shape2); 

sf::CircleShape shape3(2.5); 
shape3.setPosition({38, 10}); 
shape3.setFillColor(sf::Color(0xC0, 0xC0, 0xC0)); 
window.draw(shape3); 

sf::CircleShape shape4(4); 
shape4.setPosition({39, 2}); 
shape4.setFillColor(sf::Color(0xC0, 0xC0, 0xC0)); 
window.draw(shape4); 

window.display(); 

sf::sleep(sf::seconds(5)); 
}