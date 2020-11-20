import java.util.ArrayDeque;

public class Arithmetiques
{





    public static void main(String[] args) {
        ArrayDeque<Integer> pile = new ArrayDeque<>();
        int result = 0;
        int buf;

        for(int i = 0; i <args.length;i++ ) 
        {
            
            

            
                if(args[i].equals("+") || args[i].equals("-") || args[i].equals("/") || args[i].equals("x"))
                  {
                    System.out.println(args[i]);
                    //System.out.println("ope");

                    buf = pile.getLast();
                    pile.removeLast();
                    switch(args[i])
                    {
                        case "+":
                         result += buf + pile.getLast();
                         break;
                         case "x":
                         result += buf * pile.getLast();
                         break;
                         case "-":
                         result += buf - pile.getLast();
                         break;
                         case "/":
                         result += buf / pile.getLast();
                         break;

                    }   
                    
                  }
                else
                  {
                    System.out.println(args[i]);
                    pile.push(Integer.parseInt(args[i]));
                  }
          

        }


        System.out.println(result);


    }




}