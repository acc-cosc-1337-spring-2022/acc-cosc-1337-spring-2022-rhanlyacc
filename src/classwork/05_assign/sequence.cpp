#include "sequence.h"
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::string;


string dna;

double get_gc_content(string dna){
   int i=0,count=0;
   for(i=0;i<dna.size();i++){
       if(dna[i] == 'G' || dna[i] == 'C'){
           count++;
       }
   }
   return ((double)count)/dna.size();
}



std::string get_reverse_string(std::string dna)
{
  std::string rdna = "";
   for(int i=dna.length()-1;i>=0;i--)
   {
       rdna += dna[i];
   }
    return rdna;
}


std::string get_dna_complement(std::string dna)
{
   std::string complement = "";
   dna = get_reverse_string(dna);
   for(int i=0;i<dna.length();i++)
   {
       if(dna[i] == 'A')
       {
           complement += 'T';
       }else if(dna[i] == 'T')
       {
           complement += 'A';
       }else if(dna[i] == 'G')
       {
           complement += 'C';
       }else if(dna[i] == 'C')
       {
           complement += 'G';
       }
   }
   return complement;
}