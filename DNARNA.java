import java.io.*;
import java.util.*;

public class DNARNA(){
	private Scanner content;

	public static void main(String[] args){
		DNARNA nucleotides = new DNARNA();
		nucleotides.openFile();
		nucleotides.readFile();
		nucleotides.closeFile();
	}
//*************************************************************
public void openFile(){
	try{
		content = new Scanner(new File("DNA.txt"));
	}
	catch(Exception e){
		System.out.println("File not open --- terminate");
	}
}// open and check that file is opened
//*************************************************************
public void readFile(){
	String file = content.next();
	char arraySample[] = file.toCharArray();
	int length = file.length();
	for ( int i = 0; i < length; i++){
		char c = arraySample[i];
		switch(c){
			case 'A': System.out.print('A');
			break;
			case 'C': System.out.print('C');
			break;
			case 'T': System.out.print('U');
			break;
			case 'G': System.out.print('G');
			break;
		}
	}
}
//**************************************************************
public void closeFile(){
	content.close();
}
//**************************************************************
}// end main

