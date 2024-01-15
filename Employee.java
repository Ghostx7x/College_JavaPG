public class Employee 
{
    private int id;
    private String name;
    private double salary;

    public Employee(int id,String name,double salary)
    {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    public int getId()
    {
        return id;
    }
    public String getName()
    {
        return name;
    }
    public double getSalary()
    {
        return salary;
    }

    public void raiseSalary(double percent)
    {
        if(percent > 0)
        {
            double increaseAmount = salary * (percent/100);
            salary += increaseAmount;
            System.out.println("Salary raised by "+percent+"%. NewSalary: $"+salary);
        }
        else
        System.out.println("Invalid percentage. Salary remains unchanged");
    }

    public static void main(String[] agrs)
    {
        Employee emp1 = new Employee(101, "John Doe", 50000.0);
        System.out.println("Employee Details before raise:");
        System.out.println("ID: " + emp1.getId());
        System.out.println("Name: " + emp1.getName());
        System.out.println("Salary: " + emp1.getSalary());

        emp1.raiseSalary(10);

        System.out.println("Employee Details after raise:");
        System.out.println("ID: " + emp1.getId());
        System.out.println("Name: " + emp1.getName());
        System.out.println("Salary: " + emp1.getSalary());
    }
}
