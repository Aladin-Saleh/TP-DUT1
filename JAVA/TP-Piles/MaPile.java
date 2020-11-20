import java.util.*;

public class MaPile<T> implements Pile<T> {

    private Maillon<T> m;

    @Override
    public boolean isVide() {
        // TODO Auto-generated method stub
        return this.m == null;
    }

    @Override
    public T pop() {
        // TODO Auto-generated method stub
        T c;

        if (isVide())
            try {
                throw new Exception();
            } catch (Exception e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
            Maillon<T> m1 = this.m.getNext();
            c = m.getData();
            this.m = m1;
        return c;
        }


     @Override
     public void push(T e) {
      // TODO Auto-generated method stub
               m = new Maillon<T>(e, this.m);

      }

   

      





}
