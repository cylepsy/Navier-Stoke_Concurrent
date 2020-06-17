
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<double> > build_up_b(vector<double> b, double rho, double dt,
                                   vector<double> u, vector<double> v,
                                   double dx, double dy);
void init() {
    double nx, ny = 41;
    int nt = 500;
    int nit = 50;
    int c = 1;
    double dx = 2 / (nx - 1);
    double dy = 2 / (ny - 1);

    double rho = 1;
    double nu = 0.1;
    double dt = 0.001;

    vector<vector<double> > u(ny, vector<double>(nx));
    vector<vector<double> > v(ny, vector<double>(nx));
    vector<vector<double> > p(ny, vector<double>(nx));
    vector<vector<double> > b(ny, vector<double>(nx));
}

vector<vector<double> > build_up_b(vector<vector<double> > b, double rho,
                                   double dt, vector<double> u,
                                   vector<double> v, double dx, double dy) {
        return b;
}
int main() {}
