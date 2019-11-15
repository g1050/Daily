package eight;

import java.util.Scanner;
class Circle
{
    private double radius;
    public Circle(double radius) {this.radius = radius;}
    public double getRadius() {
        return this.radius
                ;}
    public void setRadius(double radius) {
        this.radius = radius
        ;}
    public double getArea() {return
            Math.PI * this.radius * this.radius
            ;}
}
class Cylinder
        extends
        Circle
{
    double height =100;
    public Cylinder(double radius,double height) {super(radius); this.height = height ;}
    public double getVolumn() {
        return getArea()  * height;
    }
}
public class hl{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double height = sc.nextDouble();
        double radius = sc.nextDouble();
        Cylinder obj = new Cylinder(radius, height);
        System.out.printf("Cylinder obj Volumn is %.2f",
                obj.getVolumn()
        );
    }
}