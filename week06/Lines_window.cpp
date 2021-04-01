#include "Lines_window.h"

Lines_window::Lines_window(Point xy, int w, int h, const string& title)
    :Window{xy,w,h,title},
    next_button{Point{x_max()-300,0}, 150, 40, "Next point",
        [](Address, Address pw) {reference_to<Lines_window>(pw).next();}},
    quit_button{Point{x_max()-150,0}, 150, 40, "Quit",
        [](Address, Address pw) {reference_to<Lines_window>(pw).quit();}},
    next_x{Point{300,0}, 50, 40, "next x:"},
    next_y{Point{450,0}, 50, 40, "next y:"},
    xy_out{Point{100,0}, 100, 40, "current (x,y):"},
    color_menu(Point{x_max()-150,40},150,40,Menu::vertical,"Color menu"),
    color_button(Point{x_max()-150,40},150,40,"Select color", [] (Address, Address pw){
        reference_to<Lines_window>(pw).color_button_pressed();}),
    style_menu(Point{x_max()-300,40},150,40,Menu::vertical,"Styles"),
    style_button(Point{x_max()-300,40},150,40,"Select style", [](Address, Address pw) {
        reference_to<Lines_window>(pw).style_button_pressed();})
{
    attach(next_button);
    attach(quit_button);
    attach(next_x);
    attach(next_y);
    attach(xy_out);
    attach(lines);
    color_menu.attach(new Button ({0,0},0,0,"Red", [](Address, Address pw){
        reference_to<Lines_window>(pw).red_pressed();}));
    color_menu.attach(new Button ({0,0},0,0,"Black", [](Address, Address pw){
        reference_to<Lines_window>(pw).black_pressed();}));
    color_menu.attach(new Button ({0,0},0,0,"Blue", [](Address, Address pw){
        reference_to<Lines_window>(pw).blue_pressed();}));    
    attach(color_menu);
    color_menu.hide();
    attach(color_button);
    style_menu.attach(new Button({0,0},0,0,"Solid", [](Address,Address pw){reference_to<Lines_window>(pw).solid_pressed();}));
    style_menu.attach(new Button({0,0},0,0,"Dot", [](Address,Address pw){reference_to<Lines_window>(pw).dot_pressed();}));
    attach(style_menu);
    style_menu.hide();
    attach(style_button);
}

void Lines_window::change_color(Color c){
    lines.set_color(c);
}

void Lines_window::red_pressed(){
    change_color(Color::red);
    color_menu_pressed();
    redraw();
}
void Lines_window::black_pressed(){
    change_color(Color::black);
    color_menu_pressed();
    redraw();
}
void Lines_window::blue_pressed(){
    change_color(Color::blue);
    color_menu_pressed();
    redraw();
}
void Lines_window::color_button_pressed()
{
    color_button.hide();
    color_menu.show();
}
void Lines_window::color_menu_pressed()
{
    color_menu.hide();
    color_button.show();
}

void Lines_window::style_button_pressed()
{
    style_button.hide();
    style_menu.show();
}
void Lines_window::style_menu_pressed()
{
    style_menu.hide();
    style_button.show();
    
}

void Lines_window::dot_pressed()
{
    change_style(Line_style::dot);
    style_menu_pressed();
    redraw();
}

void Lines_window::solid_pressed()
{
    change_style(Line_style::solid);
    style_menu_pressed();
    redraw();
}



void Lines_window::change_style(Line_style l)
{
    lines.set_style(l);
}



void Lines_window::quit()
{
    hide();
}

void Lines_window::next()
{
    int x = next_x.get_int();
    int y = next_y.get_int();

    lines.add(Point{x,y});

    ostringstream ss;
    ss << '(' << x << ',' << y << ')';
    xy_out.put(ss.str());

    redraw();
}