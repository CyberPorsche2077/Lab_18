#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(const Rect * R1, const Rect * R2) {
    double R1_GanX = R1->x + R1->w;
    double R1_GanY = R1->y - R1->h;

    double R2_GanX = R2->x + R2->w;
    double R2_GanY = R2->y - R2->h;

    double overlap_width = min(R1_GanX, R2_GanX) - max(R1->x, R2->x);
    double overlap_height = min(R1->y, R2->y) - max(R1_GanY, R2_GanY);

    if (overlap_width > 0 and overlap_height > 0) {
        return overlap_width * overlap_height;
    } else {
        return 0;
    }
}