import java.util.*;
import java.util.Arrays;
import java.util.Collections;

public class abc003_c
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int n, k;
		n = scan.nextInt();
		Integer[] r = new Integer[n];
		k = scan.nextInt();
		int[] q = new int[k];
		double ans;

		for(int i = 0; i < n; i++)
			r[i] = scan.nextInt();
		Arrays.sort(r, Collections.reverseOrder());
		for(int i = 0; i < k; i++)
			q[i] = r[i];
		Arrays.sort(q);
		ans = 0;
		for(int i = 0; i < k; i++)
		{
			ans += q[i];
			ans /= 2;
		}
		System.out.println(ans);
		//System.out.println(Arrays.asList(r));
	}
}
