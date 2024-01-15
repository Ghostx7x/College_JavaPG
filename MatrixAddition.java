import java.util.Scanner;
public class MatrixAddition 
{
    public static void main(String[] args)
    {
        if(args.length != 2)
        {
            System.out.println("Usage Java MatrixAddition <order M><order N>");
            return;
        }
        int M = Integer.parseInt(args[0]);
        int N = Integer.parseInt(args[1]);
        int[][] matrix1 = new int[M][N];
        int[][] matrix2 = new int[M][N];
        int[][] sum = new int[M][N];
        System.out.println("Enter elements of Matrix 1: ");
        inputMatrix(matrix1);
        System.out.println("Enter elements of Matrix 2: ");
        inputMatrix(matrix2);
        addMatrices(matrix1,matrix2,sum);
        displayMatrix(sum);
    }

    public static void inputMatrix(int[][] matrix)
    {
        Scanner input = new Scanner(System.in);
        for(int i = 0;i<matrix.length;i++)
        {
            for(int j = 0;j<matrix[0].length;j++)
            {
                System.out.println("Enter element at position("+i+","+j+"): ");
                matrix[i][j] = input.nextInt();
            }
        }
        input.close();
    }

    public static void addMatrices(int[][] matrix1,int[][] matrix2,int[][] sum)
    {
        for(int i = 0;i<matrix1.length;i++)
        {
            for(int j = 0;j<matrix1[0].length;j++)
            {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
    }
    public static void displayMatrix(int[][] matrix)
    {
        for(int i = 0;i<matrix.length;i++)
        {
            for(int j = 0;j<matrix[0].length;j++)
            {
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
}
