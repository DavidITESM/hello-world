class Point{
public:
    Point();
    Point(double ex, double ye);
    void setX(double ex);
    void setY(double ye);
    void setNombre(string no);
    double getY();
    double getX();
    string getNombre();
    double distance(Point dos);
private:
    double x, y;
};
