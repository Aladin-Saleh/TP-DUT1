import javax.swing.*;
import java.awt.*;
import java.util.LinkedList;
import java.util.*;
import java.util.List;


public class Parallelogramme extends JComponent {
    
private Color pColor;
private ParallelogrammeInfo info;
private List<ParallelogrammeInfo> liste = new LinkedList<ParallelogrammeInfo>();

public Parallelogramme(ParallelogrammeInfo info)
{
    this.info = info;
    for(int i = 0; i < 10; i++)
    {
        liste.add(i,new ParallelogrammeInfo());
    }
}


@Override
protected void paintComponent(Graphics G)
{
    

    Graphics newG = G.create();

    
   
    for(int i = 0; i < 5; i++)
    {
    newG.setColor(pColor);
    newG.fillPolygon(xPos,yPos,4);
    
    }
}

public void setPColor(Color c)
{
    this.pColor = c;
}


}
