#include "GUI.h"

using namespace Graph_lib;

struct Lines_window : Graph_lib::Window {
	Lines_window(Point xy, int w, int h, const string& title );
	Open_polyline lines;

	bool wait_for_button();

private:
	Button next_button;
	Button quit_button;

	In_box next_x;
	In_box next_y;

	Out_box xy_out;

	Menu color_menu;
	void red_pressed();
	void black_pressed();
	void blue_pressed();
	void change_color(Color c);

	Menu style_menu;

	void solid_pressed();
	void dot_pressed();
	void change_style(Line_style l);

	Button color_button;
	void color_button_pressed();
	void color_menu_pressed();

	Button style_button;
	void style_button_pressed();
	void style_menu_pressed();

	

	void next();
	void quit();

};