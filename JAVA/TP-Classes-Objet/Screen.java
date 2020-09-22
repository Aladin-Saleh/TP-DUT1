import javax.swing.*;
import java.awt.*;




public class Screen extends JFrame
{


	public Screen()
	{

		this.setSize(200,200);
		this.setLocation(100,100);


		this.setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);



		Confirm onClose = new Confirm(this);
		this.addWindowListener(onClose);

		this.setVisible(true);

	}
}