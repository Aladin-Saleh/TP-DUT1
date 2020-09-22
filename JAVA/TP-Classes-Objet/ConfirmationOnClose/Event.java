import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class Event implements ActionListener 
{
    private Confirm jd;
    private boolean state;

	public Event(boolean b,Confirm j)
	{
        this.jd = j;
        this.state = b;
	}

    public void actionPerformed(ActionEvent e)
    {
        if(this.state)
        {
            this.jd.quit();
        }
        else
        {
            this.jd.stay();
        }
    }

}
