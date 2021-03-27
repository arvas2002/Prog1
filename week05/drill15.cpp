#include "Graph.h"
#include "Simple_window.h"

//g++ Drill15.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
 double one(double){return 1;}
 double slope(double x){return x/2;}
 double square(double x){return x*x;}
 double sloping_cos(double x) {return cos(x)+slope(x);};
int main ()
{
	Point kezdo{100,100};
	constexpr int width =600;
	constexpr int height=400;
	constexpr int range_min=-10;
	constexpr int range_max=11;
	constexpr int orig_y= height/2;
	constexpr int orig_x=width/2;
	constexpr int xlength= width-40;
	constexpr int ylength=height-40;
	constexpr int x_scale=30;
	constexpr int y_scale=30;
	Point orig {orig_x,orig_y};
	Simple_window win{kezdo,width,height,"Function Graphs"};

	Axis x {Axis::x,Point{20,orig_y},xlength,xlength/x_scale,"one notch==1"};
	Axis y {Axis::y,Point{orig_x,ylength+20},ylength,ylength/y_scale,"one notch==1"};
	x.set_color(Color::red);
	y.set_color(Color::red);
	Function s {one,range_min,range_max,orig,200,30,30};
	Function s2 {slope,range_min,range_max,orig,200,30,30};
	Function s3 {square,range_min,range_max,orig,400,30,30};
	Function s4 {cos,range_min,range_max,orig,400,30,30};
	Function f1	{log,0.000001,range_max,orig,200,30,30};
	Function f2 {sin,range_min,range_max,orig,200,30,30};
	f2.set_color(Color::blue);
	Function f3 {cos,range_min,range_max,orig,200,30,30};
	Function f4 {exp,range_min,range_max,orig,200,30,30};
	s4.set_color(Color::blue);
	Function s5 {sloping_cos,range_min,range_max,orig,400,30,30};
	s5.set_color(Color::green);
	x.label.move(-160,0);
	x.notches.set_color(Color::dark_red);
	Text ts {Point{100,orig_y-40},"one"};
	Text ts2{Point{100,orig_y+orig_y/2-20},"x/2"};
	Text ts3{Point{orig_x-100,20},"x*x"};




	win.attach(x);
	win.attach(y);
	win.attach(s);
	win.attach(s2);
	win.attach(s3);
	win.attach(s4);
	win.attach(s5);
	win.attach(f1);
	win.attach(f2);
	win.attach(f3);
	win.attach(f4);
	win.attach(ts);
	win.attach(ts2);
	win.attach(ts3);

	win.wait_for_button();
}