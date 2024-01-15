public class MyPoint 
{
    private int x; private int y;
    // Default constructor 
    public MyPoint()
    {
        this.x = 0;
        this.y = 0; 
    }
    // Overloaded constructor 
    public MyPoint(int x, int y) 
    {
        this.x = x;
        this.y = y; 
    }
    // Method to set both x and y 
    public void setXY(int x, int y) 
    {
        this.x = x;
        this.y = y;
    } 
    // Method to get x and y in a 2-element int array
    public int[] getXY()
    {
        return new int[]{x, y}; 
    }
    // Method to get a string description of the instance 
    @Override 
    public String toString()
    {
        return "(" + x + ", " + y + ")"; }
        // Method to calculate the distance to another point at (x, y) 
    public double distance(int x, int y)
    {
        int xDiff = this.x - x;
        int yDiff = this.y - y;
        return Math.sqrt(xDiff * xDiff + yDiff * yDiff);
    }
    // Overloaded method to calculate the distance to another MyPoint 
    public double distance(MyPoint another)
    {
        int xDiff = this.x - another.x;
        int yDiff = this.y - another.y;
        return Math.sqrt(xDiff * xDiff + yDiff * yDiff);
    }
    // Another overloaded method to calculate the distance to the origin (0, 0)
    public double distance() 
    {
        return Math.sqrt(x * x + y * y);
    }
}

class TestMyPoint extends MyPoint
{
    public static void main(String[] args)
    {
        // Create instances of MyPoint 
        MyPoint point1 = new MyPoint(); 
        MyPoint point2 = new MyPoint(3, 4);
        // Display points
        System.out.println("Point 1: " + point1.toString()); 
        System.out.println("Point 2: " + point2.toString());
        // Set new coordinates for point1 
        point1.setXY(1, 2);
        // Display updated point1
        System.out.println("Point 1 (after setXY): " + point1.toString());
        // Get coordinates of point1
        int[] coordinates = point1.getXY();
        System.out.println("Coordinates of Point 1: (" + coordinates[0] + ", " + coordinates[1] + ")");
        // Calculate distance between point1 and point2
        double distance1 = point1.distance(point2);
        System.out.println("Distance between Point 1 and Point 2: " + distance1);
        // Calculate distance of point1 to the origin
        double distance2 = point1.distance();
        System.out.println("Distance from Point 1 to the Origin: " + distance2); 
    }
}