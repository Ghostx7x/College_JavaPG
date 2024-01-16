class Shape1 
{
    public void draw()
    {
        System.out.println("Drawing a Shape");
    }
    public void erase()
    {
        System.out.println("Erasing a Shape");
    }
}

class Circle extends Shape1
{
    public void draw()
    {
        System.out.println("Drawing a Circle");
    }
    public void erase()
    {
        System.out.println("Erasing a Shape");
    }
}

class Triangle extends Shape1
{
    public void draw()
    {
        System.out.println("Drawing a Triangle");
    }
    public void erase()
    {
        System.out.println("Erasing a Triangle");
    }
}

class Square extends Shape1
{
    public void draw()
    {
        System.out.println("Drawing a Square");
    }
    public void erase()
    {
        System.out.println("Erasing a Square");
    }
}