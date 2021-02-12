import java.util.*;

public class abc004_c
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int p, q, i;
		int ans[] = new int[6];
		p = n / 5;
		q = n % 5;
		p %= 6;
		i = 0;
		while (6 - p + i < 6) 
		{
			ans[6 - p + i] = i + 1;
			i++;
		}
		for(int j = 0; j < 6 - p; j++)
		{
			i++;
			ans[j] = i;
		}
		for(int j = 0; j < q; j++)
		{
			int tmp;
			tmp = ans[j];
			ans[j] = ans[j + 1];
			ans[j + 1] = tmp;
		}
		for(int j = 0; j < 6; j++)
			System.out.print(ans[j]);
	}
}
