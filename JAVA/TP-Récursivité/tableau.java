import jdk.nashorn.internal.ir.ReturnNode;

public class tableau {



    public static int[] StringTabToInt(String[] args,int i)
    {
        if(i >= args.length-1)
        {
            int[] array = {Integer.parseInt(args[i])};
            return array;
        }        
      
        int[] a = {Integer.parseInt(args[i])};
        int[] array = new int[args.length-i];
        System.arraycopy(a,0,array,0,1);
        System.arraycopy(StringTabToInt(args,++i),0,array,1,args.length-i);
        return array;
    }

public static void main(String[] args) {
    


    if(args.length < 1)
    {
        System.err.println("Donner des entiers sur la ligne de commande ! ");
    }
    int[] tablo = StringTabToInt(args,0);
    
    

}

}
