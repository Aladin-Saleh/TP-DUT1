public class Appels
{
    
    public static int factorielle(int entier,int ind){
    //Thread.dumpStack();
        
   
        if (entier==0)
        {
           
            entier = 1;
             return entier;
        }
        else
        { 
            for(int x = 0; x < ind;x++)
            {
                System.out.print("  ");
            }
                System.out.println("lancement de factorielle ("+entier+")");

                
            return(entier*factorielle(entier-1,ind+1));
        }
    }
    public static void main(String[] args) {

        int entier = 0;
        int ind= 0;
        for (int i=0; i<args.length; i++)
        {
            entier = Integer.parseInt(args[i]);
            //System.out.print(args[i]+"! = ");
        }

        System.out.println("+"+factorielle(entier,ind));
        //System.out.println(ind);
        
    }
}