#include<iostream>
#include<cmath>
using namespace std;
class Triangle{
    private:
    float side1;
    float side2;
    float side3;
    public:
    Triangle(float s1, float s2, float s3 ): side1(s1), side2(s2), side3(s3){
    if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
            throw "sides must be greater than 0 of traingle";
        }
 
        if ((s1 + s2) <= s3 || (s1 + s3) <= s2 || (s2 + s3) <= s1) {
            throw "sum of any two sides must be greater than the third side. Please check your input";
        }
    }
    double calculateArea() {
        if (side1 == side2 && side2 == side3) {
            throw "triangle is not a right-angled triangle.";
        }
        double hypot = max(side1, max(side2, side3));
        double area = (side1 * side2) / 2.0;
        return area;
    }
    double calculateArea() const {
        double semiperi = (side1 + side2 + side3) / 2.0;
        double area = sqrt(semiperi * (semiperi - side1) * (semiperi - side2) * (semiperi - side3));
        return area;
    }
};
int main(){
try {
        double side1, side2, side3;
        cout << "Enter the sides of the triangle: ";
        cin >> side1 >> side2 >> side3;
        Triangle triangle(side1, side2, side3);
        double arearightAngle = triangle.calculateArea();
        cout << "Area of right angled triangle: " << arearightAngle << endl;
        double heronarea = triangle.calculateArea();
        cout << "Area of the triangle using Heron's formula: " << heronarea << endl;
    }
    catch (const char* error) {
        cout << "Exception occurred: " << error << endl;
    }
    return 0;
}
