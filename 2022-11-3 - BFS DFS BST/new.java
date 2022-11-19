public class DisplayOddNumbersExample1
{
public static void main(String args[])
{
int number=50;
System.out.print("List of odd numbers from 1 to"+number+": "); 
for (int i=1; i<=number; i++)
{ if (i%2!=0)
{
System.out.print(i + " ");
}
}
}
}
