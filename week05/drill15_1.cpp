#include "Graph.h"
#include "Simple_window.h"

//g++ drill15_1.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
double one(double x){return 1;}
double slope(double x) {return x/2;}
double square (double x) {return x*x;}
double slopeing_cos(double x) {return cos(x)+slope(x);}

int main()
{
	constexpr int height=600;
	constexpr int width=600;
	constexpr int range_min=-10;
	constexpr int range_max=11;
	constexpr int orig_y=height/2;
	constexpr int orig_x=width/2;
	constexpr int scale_x=20;
	constexpr int scale_y=20;

	Point orig{orig_x,orig_y};


	Simple_window win{Point{100,100},width,height,"Function graph"};

	Axis x{Axis::x,Point{300,300},400,400/20,"1==20 pixels"};
	Axis y{Axis::y,Point{300,300},400,400/20,"1==20 pixels"};
	x.set_color(Color::red);
	y.set_color(Color::red);
	Function s{one,range_min,range_max,orig,400,scale_x,scale_y};
	Function s2{slope,range_min,range_max,orig,400,scale_x,scale_y};
	Function s3{slopeing_cos,range_min,range_max,orig,400,scale_x,scale_y};
	Function s4{square,range_min,range_max,orig,400,scale_x,scale_y};
	Function s5{cos,range_min,range_max,orig,400,scale_x,scale_y};
	Text t{Point{100,orig_y+orig_y/2-70},"x/2"};
	s5.set_color(Color::blue);

	win.attach(x);
	win.attach(y);
	win.attach(s);
	win.attach(s2);
	win.attach(s3);
	win.attach(s4);
	win.attach(s5);
	win.attach(t);
	win.wait_for_button();



}