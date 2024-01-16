
public class TestShapes {
    public static void main(String[] args) 
    {
        Circle circle = new Circle(5.0);
        Triangle triangle = new Triangle(3.0, 4.0, 5.0);

        System.out.println("Circle:"); 
        System.out.println("Area: " + circle.calculateArea());
        System.out.println("Perimeter: " + circle.calculatePerimeter()); 
        System.out.println();
        System.out.println("Triangle:");
        System.out.println("Area: " + triangle.calculateArea()); 
        System.out.println("Perimeter: " + triangle.calculatePerimeter());
    }
}
