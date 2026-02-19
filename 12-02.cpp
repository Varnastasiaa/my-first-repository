#include "12-02.h"
point::point(){
    x=0; 
    y=0;
}
point::point(double xvalue, double yvalue){
    x=xvalue;
    y=yvalue;
}
double point::getX() const{
    return x;
}
double point:: getY() const{
    return y;
}
void point::setX (double xvalue){
    x=xvalue;
}
void point::setY (double yvalue){
    y=yvalue;
}
istream& operator >> (istream& in, point& p){
    in>>p.x;
    in>>p.y;
    return in;
}
ostream& operator << (ostream&out, const point& p){
    out<<p.x<<" "<<p.y;
    return out;
}
rectangle::rectangle(){
    left=point();
    right=point();
}
rectangle::rectangle (point leftvalue, point rightvalue){
    left=leftvalue;
    right=rightvalue;
}
double rectangle:: width() const{
    return right.getX()-left.getX();
}
double rectangle:: height () const{
    return left.getY()-right.getY();
}
double rectangle:: area() const{
    return width()*height();
}
istream& operator >>(istream& in, rectangle& r){
    cout<<" Введіть верхню ліву точку: ";
    in>>r.left;
    cout<<" Введіть нижню праву точку: ";
    in>>r.right;
    return in;
}
ostream& operator << (ostream& out, const rectangle& r){
    out<<"Верхній лівий кут:"<<r.left<<endl;
    out<<"Нижній правий кут:"<<r.right<<endl;
    out<<"Ширина: "<<r.width()<<endl;
    out<<"Висота: "<<r.height()<<endl;
    out<<"Площа: "<<r.area()<<endl;
    return out;

}