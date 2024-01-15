public class Stack 
{
    private static final int MAX_SIZE = 4;
    private int[] stackArray;
    private int top;
    
    public Stack()
    {
        stackArray = new int[MAX_SIZE];
        top = -1;
    }

    public void push(int element)
    {
        if(top < MAX_SIZE-1)
        {
            stackArray[++top] = element;
            System.out.println("PUSHED " + element);
        }
        else
            System.out.println("STACK OVERFLOW! Cannot push " + element);
    }

    public void pop()
    {
        if(top>=0)
        {
            int poppedElement = stackArray[top--];
            System.out.println("Popped: " + poppedElement);
        }
        else
            System.out.println("Stack Underflow! Cannot pop from an stack stack");  
    }

    public void display()
    {
        if(top>=0)
        {
            System.out.println("Elements in stack: ");
            for(int i = top;i>=0;i--)
                System.out.println(stackArray[i]);
        }
        else
            System.out.println("Stack is empty");
    }

    public static void main(String[] args)
    {
        Stack myStack = new Stack();
        myStack.push(5); 
        myStack.push(10); 
        myStack.push(20); 
        myStack.display();

        myStack.pop(); 
        myStack.display();

        myStack.push(15); 
        myStack.push(25); 
        myStack.push(30); 
        myStack.display();

        myStack.pop(); 
        myStack.pop(); 
        myStack.display();
    }
}

