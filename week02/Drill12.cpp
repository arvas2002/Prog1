#include "Simple_window.h"
#include "Graph.h"
/*
g++ Drill12.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o drill `fltk-config --ldflags --use-images`
*/
int main ()
{
	using namespace Graph_lib;
	int maxwidth=1000;
	int maxheight=800;
	Simple_window win(Point{100,100},maxwidth,maxheight,"Drill12");
//12.7 Axis
	Axis x {Axis::x, Point{40,300},400,15, "x axis"};
	win.attach(x);

	Axis y{Axis::y,Point{40,300},400,15,"y axis"};
	y.set_color(Color::green);
	y.label.set_color(Color::red);

	win.attach(y);
//12.7.4 function
	Function sine {sin,0,100,Point{40,150},1000,100,100};
	win.attach(sine);
//12.7.5 Polygon
	sine.set_color(Color::black);
	Polygon poly;
	poly.add(Point{300,200});
	poly.add(Point{350,100});
	poly.add(Point{400,200});
	poly.add(Point{500,150});
	poly.set_color(Color::red);
	poly.set_style(Line_style::dot);
	win.attach(poly);
//12.7.6 Rectangles
	Rectangle r {Point{200,200},100,50};
	win.attach(r);

	Closed_polyline poly_rect;
	poly_rect.add(Point{100,50});
	poly_rect.add(Point{200,50});
	poly_rect.add(Point{200,100});
	poly_rect.add(Point{100,100});
	win.attach(poly_rect);
	poly_rect.add(Point{50,75});
//12.7.7 Fiils
	r.set_fill_color(Color::black);
	poly.set_style(Line_style(Line_style::dash,6));
	poly_rect.set_style(Line_style(Line_style::dash,2));
	poly_rect.set_fill_color(Color::green);
//12.7.8 Texts
	Text t{Point{150,150},"Hello graphical world"};
	t.set_font(Font::times_bold);
	t.set_font_size(20);
	win.attach(t);
//12.7.9 Images
	Image ii{Point{300,50},"badge.jpg"};
	
	win.attach(ii);
//	ii.move(100,50);
//12.7.10 Other
	Circle c{Point{100,200},50};
	/*Ellipse e{Point{100,200},75,25};
	e.set_color(Color::dark_red);*/
	Mark m{Point{100,200},'x'};

	ostringstream oss;
	oss<<"screen size: "<<x_max()<<"*"<<y_max()<<"; window size: "<<win.x_max()<<"*"<<win.y_max();
	Text sizes{Point{100,20},oss.str()};
	Image cal {Point{225,225},"badge.jpg"};
	cal.set_mask(Point{40,40},200,150);

	win.attach(c);
	win.attach(m);
//	win.attach(e);

	win.attach(sizes);
	win.attach(cal);

	win.wait_for_button();


}	