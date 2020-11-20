public class Maillon<T> {
    
    private T d;
    private Maillon<T> next;
  
    Maillon(T d, Maillon<T> next) {
        this.d = d;
        this.next = next;
      }

      public T getData() {
        return this.d;
      }
      
      public Maillon<T> getNext() {
        return this.next;
      }

}
