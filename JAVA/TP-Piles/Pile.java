import java.util.*;

interface Pile<T>
{
    public boolean isVide();//Verifie si on a la place
    public void push(T e);//On ajoute à la pile
    public T pop();//On return l'element qu'on vient d'enlever

}