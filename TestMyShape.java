public class TestMyShape
{
    public static void main(String[] args)
    {
        Shape1[] shapes = new Shape1[3];
        shapes[0] = new Circle();
        shapes[1] = new Triangle();
        shapes[2] = new Square();

        for(Shape1 shape:shapes)
        {
            shape.draw();
            shape.erase();
            System.out.println();
        }
    }
}
