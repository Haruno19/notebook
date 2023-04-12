import java.net.ServerSocket;
import java.net.Socket;
import java.io.DataInputStream;
import java.io.DataOutputStream;

public class Server
{
    static Socket clientSocket;
    static ServerSocket listenSocket;

    static String message = "Prova";

    static int movies[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

    public static void main(String[] args)
    {
        byte[] byteReceived;

        try {
            listenSocket = new ServerSocket(45454);
            System.out.println("Local address: " + listenSocket.getInetAddress() + "\nLocal port: " + listenSocket.getLocalPort() + "\n");

            while(true)
            {
                clientSocket = listenSocket.accept();
                System.out.println("Connected to client at port: " + clientSocket.getPort());

                byteReceived = ReceiveMessage();

                if(byteReceived[0]==1)
                    SendMessage((byte) 1, (byte) movies[byteReceived[2]]);
                else
                    SendMessage((byte) 0, (byte) 0);
                
                clientSocket.close();
            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void SendMessage(byte first, byte second)
    {   
        try
        {
            DataOutputStream out = new DataOutputStream(clientSocket.getOutputStream());
            byte[] command;
            int dim = (first == 1) ? 4 : 2;
            
            command = new byte[dim];

            command[0] = first;
            command[1] = (byte) 10;

            if(first == 1)
            {
                command[2]= second;
                command[3]= (byte) 10;
            }
            
            /*for(int i=0; i<dim; i++)
            {
                out.write(command[i]);
                out.flush();
                Thread.sleep(100);
            }*/
            out.write(command);
            out.flush();

        }catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static byte[] ReceiveMessage()
    {   
        byte[] byteReceived = new byte[4];
        try
        {
            DataInputStream in = new DataInputStream(clientSocket.getInputStream());
            in.read(byteReceived);

            return byteReceived;

        }catch (Exception e) {
            e.printStackTrace();
        }

        return null;
    }
}