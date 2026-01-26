#include <iostream>
#include <cmath>

class Vector2 {
	public:

		Vector2() = default;
		Vector2(int x,int y) : x(x),y(y){}
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
		
		int getLength(){
			return std::sqrt(x * x + y * y);
		}
		
		Vector2 normalized() {
			int length = getLength();
			return length > 0 ? Vector2{x/length,y/length} : Vector2{};
		}

		int dot(const Vector2& vec2) const {
			return x * vec2.getX() + y * vec2.getY();
		}
		
		
	private:
		int x,y;

};

int main(){
	Vector2 vec2 = Vector2(2,3);
	vec2.scale(5);
	std::cout<<vec2.getY()<<'\n';
	return 0;
}
