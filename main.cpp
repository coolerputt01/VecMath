/*

This program was written by Coolerputt, 2026

*/

#include <iostream>
#include <vec2.hpp>

int main(){
	Vector2 vec2_1 = Vector2(2,3);
	Vector2 vec2_2 = Vector2(5,6);
	vec2_2 += vec2_1;
	vec2_2.scale(5);
	vec2_2.normalized();
	std::cout<<vec2_2.getLength()<<'\n';
	return 0;
}
