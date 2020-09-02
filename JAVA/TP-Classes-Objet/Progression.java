public class Progression {
    // attribut
    private int compte;
    // méthode
    public void plusUn() {
      this.compte++;
    }
    // autre méthode
    public String toString() {
      return Integer.toBinaryString(this.compte);
    }

    public static void main(String[] args) {
         Compteur c = new Compteur();
         for (int i = 1 ; i <= 5 ;++i ) {
             
             c.plusUn();

         }

         for (int i = 5 ;i <= 9  ;++i ) {
             System.out.println(c.toString());
             c.plusUn();
         }

    }
  }
