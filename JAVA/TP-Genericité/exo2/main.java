import java.util.*;

public class main implements Comparator
{




                            

	public static void main(String[] args) {
		
		//System.out.println(Arrays.toString(args));
		Object[] copy = Arrays.copyOf(args, args.length); 
		for(int i = 0; i<copy.length;++i)
		System.out.print(copy[i] + " ");

		System.out.println(" ");
		
		 Comparator<Object> comp = Comparator.naturalOrder();

		Arrays.sort(copy,comp);
		System.out.println("Apres le tri : ");
		System.out.print(Arrays.toString(copy));



	

    




	}
}