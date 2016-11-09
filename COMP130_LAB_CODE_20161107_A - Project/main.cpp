// LAB

#include "header.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
    cout << "Lab November 7 2016" << endl;
    
    string greeting = "Hello There Local Project!!";
    
    Message msgr;
    
    msgr.say_msg(greeting);
    
    cout << "+++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << endl;
    
    Circle c;
    
    cout << "Circle c area: " << c.get_area() << endl;
    
    
    // gen 20 cicle objects
    
    //random generate radius 10 to 90 units of measurement
    
    // random seed
    srand(time(0));
    Circle arr[20];
    const int ARR_SIZE = 20;
    
    // initialize and populate array
    for (int i = 0; i < ARR_SIZE; i++)
    {
        // random = lb + r % (ub-lb+1)
        double rnd = 10 + (rand() % 81);
        arr[i] = Circle(rnd);
    }
    
    cout << "PRE SORT" << endl;
    //display (un?)sorted array
    for (int i = 0; i < ARR_SIZE; i++)
    {
        cout << "RADIUS: " << fixed << setprecision(3) << arr[i].get_rad() << " ";
        cout << "AREA: "<< fixed << setprecision(3) << arr[i].get_area() << endl;
    }
    
    //sort objects by areas
    cout << "Selection Sorting" << endl;
    
    for (int i = 0; i < ARR_SIZE; i++) {
        double current_min = arr[i].get_area();
        int cur_min_idx = i;
        
        for (int j = i + 1; j < ARR_SIZE; j++) {
            if (current_min > arr[j].get_area()) {
                current_min = arr[j].get_area();
                cur_min_idx = j;
            }
        }
        
        if (cur_min_idx != i) {
            // swapping objects
            arr[cur_min_idx] = arr[i];
            arr[i] = current_min;
        }
    }
    
    cout << "POST SORT" << endl;
    //display (un?)sorted array
    for (int i = 0; i < ARR_SIZE; i++)
    {
        cout << "RADIUS: " << fixed << setprecision(3) << arr[i].get_rad() << " ";
        cout << "AREA: "<< fixed << setprecision(3) << arr[i].get_area() << endl;
    }
    
    return 0;
}
