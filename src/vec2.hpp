/*

This program was written by Coolerputt, 2026

*/




#pragma once

#include <cmath>
class Vector2 {
	public:

		Vector2() = default;
		Vector2(int x,int y) : x(x),y(y){}
		Vector2(const Vector2& otherVec2) : x(otherVec2.getX()),y(otherVec2.getY()){}
		Vector2& operator=(const Vector2& otherVec2){
			if(this != &otherVec2){
				x = otherVec2.getX();
				y = otherVec2.getY();
			}
			return *this;
		}
		Vector2(Vector2&& otherVec2) noexcept : x(std::move(otherVec2.getX())),y(std::move(otherVec2.getX())){}
		Vector2& operator=(Vector2&& otherVec2) noexcept{
			if(this != &otherVec2){
				x = otherVec2.getX();
				y = otherVec2.getY();
			}
			return *this;
		}
		~Vector2() = default;
		
		void setX(int &dx){
			x = dx;
		}

		void setY(int &dy){
			y = dy;
		}

		int getX() const{
			return x;
		}

		int getY() const {
				return y;
		}
	
		void scale(int scale){
			x *= scale;
			y *= scale;
		}
		
		int getLength() const {
			return std::sqrt(x * x + y * y);
		}
		
		Vector2 normalized() const {
			int length = getLength();
			return length > 0 ? Vector2{x/length,y/length} : Vector2{};
		}

		int dot(const Vector2& vec2) const {
			return x * vec2.getX() + y * vec2.getY();
		}

		Vector2& operator+=(const Vector2& otherVec2){
			x += otherVec2.x;
			y += otherVec2.y;
			return *this;
		}

		Vector2& operator-=(const Vector2& otherVec2){
			x -= otherVec2.x;
			y -= otherVec2.y;
			return *this;
		}

		Vector2& operator/=(const Vector2& otherVec2){
			x /= otherVec2.x;
			y /= otherVec2.y;
			return *this;
		}

		Vector2& operator*=(const Vector2& otherVec2){
			x *= otherVec2.x;
			y *= otherVec2.y;
			return *this;
		}
		
		bool equals(const Vector2& otherVec2){
			if(getX() == otherVec2.getX() && getY() == otherVec2.getY()){
				return true;
			}
			return false;
		}
		
		
	private:
		int x,y;

};