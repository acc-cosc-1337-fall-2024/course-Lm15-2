//add include statements
#include<iostream>
#include"func.h"
//add function code here

double get_gc_content(const string &dna){
   double count;
   for(auto i = 0; i < dna.size(); i++) { 
      if(dna == "G" || "C")
         count++;
   }
   double total = dna.size() / count;
   return total;
}

string get_dna_complement(string dna){
   char a = 'A';
   char c = 'C';
   char g = 'G';
   char t = 'T'; 
   string result = reverse_string(dna);
   for(auto i = 0; i < result.length(); i++){
   if(result[i] == a )
      result[i] = t;
   
      else if(result[i] == t)
         result[i] = a;
   
      else if(result[i] == c)
         result[i] = g;
   
      else if(result[i] == g)
         result[i] = c;
   }
   return result;
}

string reverse_string(string dna){
   int len = dna.size()-1;
   string result = dna;
   for (auto i =len; i > 0; i--){
      result[len-i]=dna[i];
   }
   return result; 
}


