// Define a remote interface
import java.rmi.*;
public interface AddserverInterface extends Remote {
	public string indetifier(int a);
}

//Implmentation of remote interface
import java.rmi.*;
import java.rmi.server.*;
public class number extends UnicastRemoteObject implements AddserverInterface{
	number()throws RemoteException{
		super();
	}
	public string indetifier(int a){
		string ans;
		if(a%2==0){
			ans="The given number is Even.";
		}
		else{
			ans ="The given number is Odd.";
		}
		return ans;
	}
}

//implementation of server application
import java.rmi.*;
import java.rmi.registry.*;
public class myServer{
	public static void main(String args[]){
		try{
			AddserverInterface stub = new number();
			Naming.rebind("rmi://localhost:5000/sonoo",stub);
		}
		catch(Exception e){System.out.println(e);}	
	}
}


//Implementation of client application
import java.rmi.*;  
    import java.util.*;
    public class MyClient{  
    public static void main(String args[]){  
    try{  
    AddserverInterface stub=(AddserverInterface)Naming.lookup("rmi://localhost:5000/sonoo");  
    System.out.println("Enter number to perform following operation :" );
    
    Scanner sc=new Scanner(System.in);
    int num=sc.nextInt();
	System.out.println(stub.indetifier(num));
      
    }catch(Exception e){}  
    }  
    } 

