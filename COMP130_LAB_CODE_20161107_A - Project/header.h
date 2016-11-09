#ifndef header_h
#define header_h

#include <string>
using namespace std;

class Message {

public:

	Message();

	void say_msg(string p_msg_txt);

private:

	string m_msg_txt;

};


class Circle {

public:

	Circle();

	Circle(double p_rad);

    double get_rad();
    
	double get_area();

private:

	int m_rad;

};


#endif // !"header_h"