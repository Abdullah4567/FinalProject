#include<SFML\Graphics.hpp>
#include<iostream>
#include<windows.h>
using namespace std;
using namespace sf;


void main()
{
	/*Vector2f* V=new Vector2f(2.f, 4.f);
	int Size = 0;
	cout << "Before Extending : " << V << endl;
	V->Extend(V, Size);

	cout << " Addressof V1 " << V << endl;*/

}




//
//void main()
//{
//									// Just as a Practice
////Hello world
//	// Hi
//
//
//
//	RenderWindow W(VideoMode(640, 640), "First", Style::Default);
//	CircleShape C1(80.f,5);
//	Vector2f V(00.f, 20.f);
//
//	RectangleShape Rec(Vector2f(50.f, 50.f));
//	//C1.setPointCount();
//	Rec.setFillColor(Color::Yellow);
//	C1.setFillColor(Color::Yellow);
//	float x = 10, y = 50;
//	Vertex Line[] = {Vector2f(x,y),Vector2f(350,50)};
//	//Line->position=Vector2f(-50,10);
//	Vertex Line1[] = { Vector2f(350,50),Vector2f(350,350)};
//	Line1->color = Color::Yellow;
//	Line->color = Color::Blue;
//	C1.setPosition(100, 100);
//	//Rec.setPosition(Vector2f(5.f,5.f));
//	W.setFramerateLimit(50);
//	while (W.isOpen())
//	{
//		Event E1;
//
//		while (W.pollEvent(E1))
//		{
//			// Checking through Event
//			if ((E1.type == Mouse::isButtonPressed(Mouse::Left)) ||(E1.type == Keyboard::isKeyPressed(Keyboard::B)) || (E1.key.code == Keyboard::Escape) || (E1.type == Event::Closed))
//			{
//				//if (E1.type==Keyboard::Escape)
//				cout << " File is going to Close\n";
//				//Sleep(2000);
//				W.close();
//			}
//			/*if (E1.type == Mouse::isButtonPressed(Mouse::Right))
//			{
//				W.close();
//			}*/
//		}
//		if (Mouse::isButtonPressed(Mouse::Right))
//		{
//			W.close();
//		}
//		//C1.move(2,0);
//		//Rec.move(2.0, 1.0);
//		W.clear(Color::Black);
//		//W.draw(C1);
//		W.draw(Line, 2, Lines);
//		W.draw(Line1, 2, Lines);
//		//W.draw(Rec);
//		//Rec.rotate(0.5);
//		W.display();
//
//
//	}
//}
