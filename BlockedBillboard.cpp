#include <iostream>
#include <fstream>
using namespace std;

struct Rectangle {
    int x1, y1, x2, y2;
};

int area(Rectangle r) {
    return (r.x2 - r.x1) * (r.y2 - r.y1);
}

int overlap(Rectangle a, Rectangle b) {
    int x_overlap = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
    int y_overlap = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
    return x_overlap * y_overlap;
}

int main() {
    ifstream fin("billboard.in");
    ofstream fout("billboard.out");

    Rectangle a, b, c;
    int visible_area;

    fin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    fin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    fin >> c.x1 >> c.y1 >> c.x2 >> c.y2;

    visible_area = area(a) + area(b) - overlap(a, c) - overlap(b, c);

    fout << visible_area << "\n";

    return 0;
}
