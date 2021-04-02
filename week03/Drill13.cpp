#include "Graph.h"
#include "Simple_window.h"
#include "fltk.h"
 //g++ Drill13.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`


int main()
{
	const Point p{100,100};
	int width=800;
	int heigth=1000;

	Simple_window win{p,width,heigth,"Drill13"};
	int x_size=win.x_max();
	int y_size=800;
	int x_grid=100;
	int y_grid=100;

	Lines grid;
	for(int x=x_grid;x<x_size;x+=x_grid)
		grid.add(Point{x,0},Point{x,y_size});
	for(int y=y_grid;y<=y_size;y+=y_grid)
		grid.add(Point{0,y},Point{x_size,y});
	win.attach(grid);
	Vector_ref<Rectangle> rect;

	for (int i=0;i<8;++i)
		for(int j=0;j<8;++j)
		{
			if(i==j){
			rect.push_back(new Rectangle{Point{i*100,j*100},100,100});
		}
		rect[rect.size()-1].set_fill_color(Color::red);
		rect[rect.size()-1].set_color(Color::invisible);

			win.attach(rect[rect.size()-1]);
		}
	Image i{Point{100,400},"kenyer.jpeg"};
	i.set_mask(Point{0,0},200,200);
	Image i2{Point{300,600},"kenyer.jpeg"};
	i2.set_mask(Point{0,0},200,200);
	Image i3{Point{600,300},"kenyer.jpeg"};
	i3.set_mask(Point{0,0},200,200);
	win.attach(i);
	win.attach(i2);
	win.attach(i3);
	Image badge {Point{0,0},"badge.jpg"};
	badge.set_mask(Point{0,0},100,100);
	win.attach(badge);
	//badge.move(200,200);
	win.wait_for_button();
	int y_mozog=100;
	int x_mozog=100;
	for(int i=0;i<8;++i)
	{

		if(i!=0)
		{
			badge.move(x_mozog,-700);
			win.wait_for_button();
		}

		for(int j=1;j<8;++j)
		{
			if(j<8)
			{			
				x_mozog=0;
				badge.move(x_mozog,y_mozog);
				win.wait_for_button();
			}
			else {
				badge.move(x_mozog,y_mozog);
				win.wait_for_button();
			}
		}

	}


	win.wait_for_button();

}