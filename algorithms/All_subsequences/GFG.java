/*package whatever //do not write package name here */

import java.io.*;

class GFG {
    
    
    static String[] findSubSequence(String str){
        int n=str.length();
        if(n==0){
            String ans[]={""};
            return ans;
        }
        String subStringPrev[]=findSubSequence(str.substring(0,n-1));
        int subStringPrevLen=subStringPrev.length;
        String subString[]=new String[subStringPrevLen*2];
        
        for(int i=0;i<subStringPrevLen;i++){
            subString[i]=subStringPrev[i];
        }
        for(int i=0;i<subStringPrevLen;i++){
            subString[i+subStringPrevLen]=subStringPrev[i]+str.charAt(n-1);        
        }
        return subString;
    }
    
	public static void main (String[] args) {
		String array[]=findSubSequence("xyz");
    	for(int i=0;i<array.length;i++){
    	    System.out.println(array[i]);
    	}
	}
}
