#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    double nx = 41;
    double dx = 2 / (nx - 1);
    int nt = 25;
    float dt = 0.025;
    int c = 1;
    double z = 1 / dx + 1;

    vector<double> u((int)nx);
    fill(u.begin(), u.end(), 1);
    fill(u.begin() + int(0.5 / dx), u.end() - int(1 / dx + 1), 2);

    vector<double> un((int)nx);

    ofstream f;
    f.open("output.txt");
    for (int n = 0; n < nt; n++) {
        un = u;
        for (int i = 1; i < nx; i++) {
            u[i] = un[i] - c * dt / dx * (un[i] - un[i - 1]);
            f << u.at(i) << endl;
        }
    }
    f.close();

    // for (int i = 0; i < u.size(); i++) {
    //     cout << u.at(i) << " ";
    // }
}