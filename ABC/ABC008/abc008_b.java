import java.util.*;

public class abc008_b
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int ans_i;
		String ans_s;
		Map<String, Integer> map = new HashMap<String, Integer>();
		
		for(int i = 0; i < n; i++)
		{
			String s = scan.next();
			Integer cnt = 0;
			if (map.containsKey(s))
			{
				cnt = map.get(s) + 1;
			}
			map.put(s, cnt);
		}
		ans_i = -1;
		ans_s = "";
		for(Map.Entry<String, Integer> entry : map.entrySet())
		{
			String k = entry.getKey();
			Integer v = entry.getValue();
			if (ans_i < v)
			{
				ans_s = k;
				ans_i = v;
			}
		}
		System.out.println(ans_s);
	}
}
