// funkcje.h
#ifndef FUNKCJE_H
#define FUNKCJE_H

#include <string>
#include <vector>

using namespace std;

bool loadTriangles(const string& filename, vector<string>& headers, vector<vector<double>>& data);
double averagePerimeter(const vector<vector<double>>& data);
void saveBValues(const vector<vector<double>>& data, const string& outputFilename);

#endif
