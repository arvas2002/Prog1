#include "Graph.h"
#include "Simple_window.h"
#include "std_lib_facilities.h"

//g++ excersize.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o a.out `fltk-config --ldflags --use-images`



int main()
{
	int width=1000;
	int height=600;

/*	Simple_window win{Point{100,100},width,height, "Ablak1"};


	Rectangle r {Point{300,100},100,50};
	r.set_color(Color::blue);
	Polygon polyr;
	polyr.add(Point{100,50});
	polyr.add(Point{200,50});
	polyr.add(Point{200,100});
	polyr.add(Point{100,100});
	polyr.set_color(Color::red);
	Rectangle r2 {Point{500,300},100,30};
	Text t {Point{525,315},"Howdy!"};
	Text init1{Point{400,150},"A"};
	init1	.set_font_size(150);
	Text init2{Point{500,150},"S"};
	init2.set_color(Color::dark_red);
	init2.set_font_size(150);

	Rectangle b1{Point{50,250},100,100};
	b1.set_fill_color(Color::white);
	Rectangle b2{Point{150,250},100,100};
	b2.set_fill_color(Color::red);
	Rectangle b3{Point{250,250},100,100};
	b3.set_fill_color(Color::white);
	Rectangle b4{Point{50,350},100,100};
	b4.set_fill_color(Color::red);
	Rectangle b5{Point{150,350},100,100};
	b5.set_fill_color(Color::white);
	Rectangle b6{Point{250,350},100,100};
	b6.set_fill_color(Color::red);
	Rectangle b7{Point{50,450},100,100};
	b7.set_fill_color(Color::white);
	Rectangle b8{Point{150,450},100,100};
	b8.set_fill_color(Color::red);
	Rectangle b9{Point{250,450},100,100};
	b9.set_fill_color(Color::white);
	win.attach(b1);
	win.attach(b2);
	win.attach(b3);
	win.attach(b4);
	win.attach(b5);
	win.attach(b6);
	win.attach(b7);
	win.attach(b8);
	win.attach(b9);


	win.attach(init1);
	win.attach(init2);
	win.attach(r2);
	win.attach(t);
	win.attach(r);
	win.attach(polyr);
	win.wait_for_button();
	Simple_window win2{Point{100,100},width,height,"Ablak2"};
	
	Rectangle r3{Point{100,100},(width/3)*2,(height/4)*3};
	r3.set_color(Color::red);
	r3.set_style(Line_style(Line_style::solid,1/4));
	win2.attach(r3);
	win2.wait_for_button();

//	Simple_window win3{Point{100,100},3000,3000,"ablak3"};
	//Rectangle r4{Point{80,70},1000,1000};

//	win3.attach(r4);
//	win3.wait_for_button();
	Simple_window win4{Point{100,100},width,height,"Ház"};

	Rectangle haz{Point{200,300},100,100};
	haz.set_fill_color(Color::green);
	Polygon teto;
	teto.add(Point{200,300});
	teto.add(Point{300,300});
	teto.add(Point{250,220});
	teto.set_fill_color(Color::red);
	Rectangle kemeny{Point{210,225},20,60};
	kemeny.set_fill_color(Color::black);
	Rectangle ablak1{Point{210,325},20,20};
	ablak1.set_fill_color(Color::yellow);
	Rectangle ablak2{Point{270,325},20,20};
	ablak2.set_fill_color(Color::yellow);
	Rectangle ajto {Point{235,350},30,50};
	ajto.set_fill_color(Color::black);
	Circle fust1{Point{220,220},6};
	Circle fust2{Point{220,219},7};
	Circle fust3{Point{220,218},8};
	Circle fust4{Point{220,217},9};
	Circle fust5{Point{220,216},10};
	Circle fust6{Point{220,215},10};
	win4.attach(fust1);
	win4.attach(fust2);
	win4.attach(fust3);
	win4.attach(fust4);
	win4.attach(fust5);
	win4.attach(fust6);
	win4.attach(kemeny);
	win4.attach(teto);
	win4.attach(haz);
	win4.attach(ablak1);
	win4.attach(ablak2);
	win4.attach(ajto);
	win4.wait_for_button();

	Simple_window olim{Point{100,100},width,height,"Olimpia"};

	Circle kek{Point{200,300},40};
	kek.set_color(Color::blue);
	kek.set_style(Line_style(Line_style::solid,5));
	Circle fekete{Point{300,300},40};
	fekete.set_color(Color::black);
	fekete.set_style(Line_style(Line_style::solid,5));
	Circle piros{Point{400,300},40};
	piros.set_color(Color::red);
	piros.set_style(Line_style(Line_style::solid,5));
	Circle sarga{Point{250,340},40};
	sarga.set_color(Color::yellow);
	sarga.set_style(Line_style(Line_style::solid,5));
	Circle zold{Point{350,340},40};
	zold.set_color(Color::green);
	zold.set_style(Line_style(Line_style::solid,5));
	olim.attach(kek);
	olim.attach(fekete);
	olim.attach(piros);
	olim.attach(sarga);
	olim.attach(zold);

	olim.wait_for_button();
	Simple_window badge_window{Point{100,100},width,height,"Badge"};

	Image badge{Point{0,0},"badge.jpg"};
	Text badge_tetx{Point{300,300},"Badge"};

	badge_window.attach(badge);
	badge_window.attach(badge_tetx);

	badge_window.wait_for_button();
*/
	Simple_window digram{Point{100,100},width,height,"Diagram"};

	Rectangle p{Point{30,30},30,10};
	Rectangle g{Point{30,100},40,15};
	Rectangle g2{Point{10,205},20,10};
	Rectangle ch{Point{40,300},50,15};
	Rectangle w{Point{60,120},30,10};
	Rectangle sw{Point{70,210},50,15};
	Rectangle fltkh{Point{90,10},30,20};
	Rectangle w2{Point{80,90},40,15};
	Rectangle fltkc{Point{130,30},25,20};
	Rectangle guih{Point{110,120},40,15};
	Rectangle guic{Point{125,205},15,10};

	digram.attach(p);
	digram.attach(g);
	digram.attach(g2);
	digram.attach(ch);
	digram.attach(w);
	digram.attach(sw);
	digram.attach(fltkh);
	digram.attach(w2);
	digram.attach(fltkc);
	digram.attach(guih);
	digram.attach(guic);


	digram.wait_for_button();








}