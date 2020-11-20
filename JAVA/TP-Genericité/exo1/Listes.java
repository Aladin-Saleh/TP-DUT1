import java.util.*;

public class Listes
{





	List<Integer> maListeInt = new ArrayList<Integer>();
	List<Number> maListeNbr = new ArrayList<Number>();
	List<Float> maListeFlt = new ArrayList<Float>();

	public Listes()
	{
		//Integer ne reçoit que des int
		maListeInt.add(54);
		maListeInt.add(44);
		maListeInt.add(64);

		//Number peut tout recevoir : int,float,long,double
		maListeNbr.add(-8);
		maListeNbr.add(270.4124f);
		maListeNbr.add(85);

		//Float ne reçoit que des float
		maListeFlt.add(5f);
		maListeFlt.add(3.560f);
		maListeFlt.add(4.620f);


       	 		System.out.println ("---------------------------");
       	 		System.out.println ("Integer");
				
			for(Integer list : maListeInt)
			{
       	 		System.out.println (list);

			}
       	 		System.out.println ("---------------------------");
       	 		System.out.println ("Number");


			for(Number list : maListeNbr)
			{
       	 		System.out.println (list);

			}

       	 		System.out.println ("---------------------------");
       	 		System.out.println ("Float");



			for(Float list : maListeFlt)
			{
       	 		System.out.println (list);

			}

			//Il n'y a que dans Number que l'on peut transvaser les autres listes
			maListeNbr.addAll(maListeInt);
			System.out.println ("---------------------------");
       	 	System.out.println ("Number apres transvaser");


			for(Number list : maListeNbr)
			{
       	 		System.out.println (list);

			}

		




	}

}