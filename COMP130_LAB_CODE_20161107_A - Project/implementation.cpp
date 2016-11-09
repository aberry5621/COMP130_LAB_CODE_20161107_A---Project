#include "header.h"

#include <iostream>
#include <string>
using namespace std;

Message::Message() {
	string m_msg_txt = "Hello there";
}

void Message::say_msg(string p_msg_txt) {
	cout << p_msg_txt;
}

Circle::Circle() {
	m_rad = 1;
}

Circle::Circle(double p_rad) {
	m_rad = p_rad;
}

double Circle::get_rad() {
    return m_rad;
}

double Circle::get_area() {
    double m_area = m_rad * m_rad * 3.141597;
	return m_area;
}
