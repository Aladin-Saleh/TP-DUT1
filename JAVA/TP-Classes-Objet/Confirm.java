import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Confirm implements WindowListener 
{
	private JFrame fenetre;
	private JDialog jd;
	private JButton boutonOUI = new JButton ("oui");  
	private JButton boutonNON = new JButton ("non");  
	
	public Confirm (JFrame jf)
	{
		this.fenetre = jf;
		this.jd =  new JDialog(jf , "Dialog Example", true); 
		JPanel choix = new JPanel();
		JPanel texte = new JPanel();

		texte.add(new JLabel("Etes vous sure de vouloir quitter le programme."));
		this.jd.setSize(400,100); 
		this.boutonOUI.addActionListener(new Event(true,this));
		this.boutonNON.addActionListener(new Event(false,this));
		choix.add(this.boutonOUI);
		choix.add(this.boutonNON);
		this.jd.add(texte,BorderLayout.NORTH);

		this.jd.add(choix,BorderLayout.SOUTH);

	}

	public void quit()
	{
		this.fenetre.dispose();
	}
	public void stay()
	{
		this.jd.setVisible(false); 
		this.fenetre.setVisible(true); 
	}

	public void	windowActivated(WindowEvent e){}
	public void	windowClosed(WindowEvent e){}
	public void	windowClosing(WindowEvent e)
	{
		this.jd.setLocation(this.fenetre.getX()+this.fenetre.getHeight()/10,this.fenetre.getY()+this.fenetre.getWidth()/3);
		this.jd.setVisible(true);  
	}
	public void	windowDeactivated(WindowEvent e){}
	public void	windowDeiconified(WindowEvent e){}
	public void	windowIconified(WindowEvent e){}
	public void	windowOpened(WindowEvent e){}
}