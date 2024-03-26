
#include <algorithm>
#include <cassert>
#include <cmath>
#include <format>
#include <fstream>
#include <iostream>
#include <numbers>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using namespace numbers;
using namespace filesystem;

#define long long long
#define str const char *
#define wstr const wchar_t *
#define byte char
#define pi pi_v<float>

void print() { cout << endl; }

template <class T, class... A>
void print(T t, A... a)
{
    cout << t << " ";
    print(a...);
}

vector<byte> readFile(string name)
{
    ifstream stream = ifstream(name, ios::binary);
    return vector<byte>(istreambuf_iterator<byte>(stream), istreambuf_iterator<byte>());
}

void writeFile(string name, vector<byte> bytes)
{
    ofstream stream = ofstream(name, ios::binary);
    stream.write(bytes.data(), bytes.size());
}

sdlkfj
