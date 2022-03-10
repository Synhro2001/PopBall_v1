#pragma once

using namespace System::Drawing;

class Ball	
{
private:
	float x_ , y_ ; // координаты центра шара 
	int color_; // цвет шара
	int size_ ; // размер шара (радиус)
	int frameWidth_, frameHeight_; // размеры рамки, в которой может находитьс€ м€ч 

public:
	void draw(Graphics^ graphics);
	void setPos(int x, int y);
	Ball(int frameWidth, int frameHeight);
	int getColor();
	void setColor(int color);
	int getSize();
	void setSize(int size);
};

extern Ball* ball;





