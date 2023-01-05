using System;
					
public class Program
{
	public static void Main()
	{
		string word1,word2;
	 	word1 = Console.ReadLine().ToLower();
		word2 = Console.ReadLine().ToLower();
		if(word1==word2)
		{
			Console.WriteLine("yes");
		}
		else if(word1 != word2)
		{
			Console.WriteLine("no");
		}	
	}
}
