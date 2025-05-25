// funkcje.cpp
#include "funkcje.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

bool loadTriangles(const string& filename, vector<string>& headers, vector<vector<double>>& data) {
    ifstream file(filename);
    if (!file) return false;

    string line;
    getline(file, line);
    stringstream ss(line);
    string col;
    while (ss >> col) headers.push_back(col);

    while (getline(file, line)) {
        double a, b, c;
        stringstream sstream(line);
        sstream >> a >> b >> c;
        vector<double> triangle = {a, b, c};
        data.push_back(triangle);
    }
    return true;
}

double averagePerimeter(const vector<vector<double>>& data) {
    double total = 0;
    if (data.size() == 0) return 0;
    for (int i = 0; i < data.size(); i++) {
        total += data[i][0] + data[i][1] + data[i][2];
    }
    return total / data.size();
}

void saveBValues(const vector<vector<double>>& data, const string& outputFilename) {
    ofstream out(outputFilename);
    for (int i = 0; i < data.size(); i++) {
        if (data[i][0] > 5 && data[i][2] > 5) {
            out << data[i][1] << endl;
        }
    }
}
