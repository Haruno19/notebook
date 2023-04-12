import java.net.Socket;
import java.net.InetAddress;
import java.io.DataInputStream;
import java.io.DataOutputStream;

public class Client
{
    static Socket socket;
    static InetAddress serverAddress;
    static int serverPort;

    public static void main(String[] args)
    {
        byte[] recievedMessage;

        try {
            serverAddress = InetAddress.getLocalHost();
            serverPort = 45454;
            socket = new Socket(serverAddress, serverPort);
            
            System.out.println("Connected to: " + socket.getInetAddress());
        
            SendCommand();

            recievedMessage = ReceiveMessage();

            if(recievedMessage.length == 4)
                System.out.println((char) recievedMessage[2]);

            socket.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void SendCommand()
    {
        try
        {
            DataOutputStream out = new DataOutputStream(socket.getOutputStream());
            byte[] command = new byte[4];
            command[0]= (byte) 1;
            command[1]= (byte) 10;
            command[2]= (byte) 7;
            command[3]= (byte) 10;
            
            /*for(int i=0; i<4; i++)
            {
                out.write(command[i]);
                out.flush();
                Thread.sleep(100);
            }*/
            out.write(command);
            out.flush();

            System.out.println("Command sent to server");

        }catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static byte[] ReceiveMessage()
    {   
        byte[] byteReceived = new byte[4];
        try
        {
            DataInputStream in = new DataInputStream(socket.getInputStream());
            in.read(byteReceived);

            return byteReceived;

        }catch (Exception e) {
            e.printStackTrace();
        }

        return null;
    }
}