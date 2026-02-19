#pragma once
#include "iostream"
#include "string"
#include "fstream"
using namespace std;
struct point
{
    private:
    double x;
    double y;
    public:
    point ();
    point (double x, double y);
    double getX () const;
    double getY () const;
    void setX (double x);
    void setY (double y);
    friend istream& operator >> (istream& in, point& p);
    friend ostream& operator << (ostream& out, const point& p);
};
 class rectangle
 {
    private: 
    point left;
    point right;
    public:
    rectangle ();
    rectangle (point left, point right);
    double width () const;
    double height () const;
    double area () const;
    friend istream& operator >> (istream& in, rectangle& r);
    friend ostream& operator << (ostream&out, const rectangle& r);
 };