
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<double> > build_up_b(vector<double> b, double rho, double dt,
                                   vector<double> u, vector<double> v,
                                   double dx, double dy);

vector<vector<double> > pressure_poisson(vector<vector<double> > p, double dx,
                                         double dy, vector<vector<double> > b);
void fill_1d(vector<double> &vec, int begin, int end, double filler);
void fill_2d(vector<vector<double> > &vec, int beginX, int endX, int beginY,
             int endY, double filler);
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

vector<vector<double> > p(30);
int m = 10;
int n = 10;

void fill_1d(vector<double> &vec, int begin, int end, double filler) {
    fill(vec.begin() + begin, vec.end() - end, filler);
}

void fill_2d(vector<vector<double> > &vec, int beginX, int endX, int beginY,
             int endY, double filler) {
    for (int x = beginX; x <= endX; x++) {
        fill(vec[x].begin() + beginY, vec[x].begin() + endY, filler);
    }
}

int main() {
    vector<double> u(20);
    vector<vector<double> > vec(n, vector<double>(m, 1));
    // fill_1d(u, 0, 0, 2.0);
    // for (int i = 0; i < u.size(); i++) {
    //     cout << u[i] << " ";
    // }

    fill_2d(vec, 0, 3, 0, 4, 0);
    for (int x = 0; x < vec.size(); x++) {
        for (int y = 0; y < m; y++) {
            cout << vec[x][y] << " ";
        }
        cout << endl;
    }
}
