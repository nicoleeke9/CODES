/*
Nicole Urum Eke
Tongue Twisters Program
1337
3/7/2023-began coding the main function for accepting and reading the file
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
//REMEMBER YOUVE NOT ADDED THEAND OTHER CHARACTER SENTENCE
//REMEMBER THE SENTENCE CAS IS WORKING BUTNOT DOING THE JOB
vector<string> vect2;
vector<string> vect1;
bool ShowFlowBool=false;
string longestWord;
void createLookupTable(){
vect2={"Henry","Fritos","Friday's","Hertford"};
 for(string disp: vect2)
    cout<<disp<<endl;
}
void showFlow(string line){
cout<<line<<endl;
}
int stringNoSpaces(string text){
    if(ShowFlowBool)
    showFlow("You are now entering the StringNoSpace Function");
    string newText;
    for (int i = 0; i < text.length(); i++){
        if (text[i] != ' '){
            newText += text[i];
        }

    }
 int sizeOfLine= newText.length();
 return sizeOfLine;
}

void putWordsIntoVector(string line){
    if(ShowFlowBool)
    showFlow("You are now entering the putWordsInVector Function");
    string word;
    stringstream s(line);

    while(s>>word){
        vect1.push_back(word);
    }
    if(ShowFlowBool)
    showFlow("You are now leaving the putWordsInVector Function");
}

int countWords(string str)
{
    if(ShowFlowBool)
    showFlow("You are now entering the countWords Function");
    // Breaking input into word
    // using string stream

    // Used for breaking words
    stringstream s(str);

    // To store individual words
    string word;
    bool Assigning=true;
    int count = 0;
    while (s >> word)
    {
          count++;
          if(Assigning){
          longestWord=word;
          Assigning=false;
          }
          if(word.length()>longestWord.length())
          {
              longestWord=word;

          }

    }

    return count;
    if(ShowFlowBool)
    showFlow("You are now leaving the countWords Function");
}
int findTheSpaces( string text)
{
     if(ShowFlowBool)
    showFlow("You are now entering the findTheSpaces Function");

    int countSpaces=0;
    for (int i = 0; i < text.length(); i++){
        if (text[i] == ' '){
            countSpaces++;
        }
    }
    if(ShowFlowBool)
    showFlow("You are now leaving the findTheSpaces Function");
    return countSpaces;

}

int findThePunctuations(string text){
     if(ShowFlowBool)
    showFlow("You are now entering the findThePunctuations Function");

    char ch = ',';

    int count = 0;
    for (int i = 0; (i = text.find(ch, i)) != string::npos; i++) {
        count++;
    }
      ch = '.';


    for (int j = 0; (j = text.find(ch, j)) != string::npos; j++) {
        count++;
    }
      ch = '\"';


    for (int k = 0; (k = text.find(ch, k)) != string::npos; k++) {
        count++;
    }
     ch = '!';


    for (int n = 0; (n = text.find(ch, n)) != string::npos; n++) {
        count++;
    }
     ch = '\'';


    for (int m = 0; (m = text.find(ch, m)) != string::npos; m++) {
        count++;
    }

      ch = '?';


    for (int a = 0; (a = text.find(ch, a)) != string::npos; a++) {
        count++;
    }

     ch = ')';


    for (int l = 0; (l = text.find(ch, l)) != string::npos; l++) {
        count++;
    }

     ch = '(';

    for (int x = 0; (x = text.find(ch, x)) != string::npos; x++) {
        count++;
    }



if(ShowFlowBool)
    showFlow("You are now leaving the findThePunctuation Function");


return count;

}
string toLowerCase(string text){

    string newText;
    for (int i = 0; i < text.length(); i++)
        newText += tolower(text[i]);

    return newText;
}
int findthevowels(string line){
     if(ShowFlowBool)
    showFlow("You are now entering the findthevowels Function");
    string text=toLowerCase(line);
 char ch = 'a';

    int count = 0;
    for (int i = 0; (i = text.find(ch, i)) != string::npos; i++) {
        count++;
    }

      ch = 'e';


    for (int j = 0; (j = text.find(ch, j)) != string::npos; j++) {
        count++;
    }

      ch = 'i';


    for (int k = 0; (k = text.find(ch, k)) != string::npos; k++) {
        count++;
    }

      ch = 'o';


    for (int n = 0; (n = text.find(ch, n)) != string::npos; n++) {
        count++;
    }

     ch = 'u';


    for (int m = 0; (m = text.find(ch, m)) != string::npos; m++) {
        count++;
    }

if(ShowFlowBool)
    showFlow("You are now leaving the findTheVowels Function");

   return count;

}
void changeFirstLetterstoUppercase(string line){
     if(ShowFlowBool)
    showFlow("You are now entering the changeFirstLettersToUppercase Function");
 stringstream s(line);
 string newLine;
 string word;
 while(s>>word){
    word[0]=toupper(word[0]);
    newLine+=word;
    newLine+=" ";
 }

 cout<<"This is the Title case for the Tongue Twister-- "<<newLine<<endl;
}

void onlyChangeFirstWordToUpper(string line){
     if(ShowFlowBool)
    showFlow("You are now entering the onlyChangeFirstWordtoUpper Function");
 bool allowOnlyFirstWord=true;
 bool check=true;
 string word;
  stringstream s(line);
  string newText;
  while(s>>word){
       //HERE
        for(int j=0;j<3;j++){
                cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
            if(word==vect2[j]){
                check=false;
                cout<<word<<endl;
                break;
            }
        }
     //HERE(JUST IF CHECK AND THE EXTRA BRACKET)
      if(check){
    if(allowOnlyFirstWord==true)
    word[0]=toupper(word[0]);

   if(allowOnlyFirstWord==false)
   {
       if(isalpha(word[0]))
        word[0]=tolower(word[0]);
       else{
        for(int i =1;i<word.length();i++)
        {
            if(isalpha(word[i]))
              word[i]=tolower(word[i]);

        }
       }
   }
    allowOnlyFirstWord=false;

   newText+=word;
   newText+=" ";
   }
  }
  //here is where we need fixing it is not working
   if(check)
   cout<<"This is the Sentence Case for the Tongue Twister-- "<<newText<<endl;
   else
    cout<<"This is the Sentence Case for Tongue Twister "<<line<<endl;


}

void onlyChangeFirstLetterToLower(string line){
     if(ShowFlowBool)
    showFlow("You are now entering the onlyChangeFirstLettertoLower Function");
 bool allowOnlyFirstWord=true;
 string word;
  stringstream s(line);
  string newText;
  while(s>>word){
  if(isalpha(word[0])){

    word[0]=tolower(word[0]);
      for(int i=1;i<word.length();i++){
      word[i]=toupper(word[i]);

   }
    }
       else{

        for(int i =1;i<word.length();i++)
        {
            if(isalpha(word[i])){
              word[i]=tolower(word[i]);
            for(int j=i+1;j<word.length();j++){
              word[j]=toupper(word[j]);
            }
            break;
            }

         }

       }




   newText+=word;
   newText+=" ";
   }
   cout<<"This is the Toggle Case for the Tongue Twister-- "<<newText<<endl;

}
int findConsonants(int charCount, int punctCount, int vowelCount){
int Consonant=charCount-(punctCount+vowelCount);
return Consonant;
}
int checkForOther(string line){
    string word;
    int countOthers=0;
stringstream s(line);
 while(s>>word){
    for(int i=0;i<word.length();i++){
        if(!(isalpha(word[0]) || (isdigit(word[0])) || (ispunct(word[0]))))
            countOthers++;
    }

 }
  return countOthers;
}

int main()
{
    string Lines;
   ifstream inFile;
  inFile.open("TongueTwisters.txt");
   if(inFile.fail())
   {
    cout<<"Sorry we cannot open this file"<<endl;
   }
   else{
    while(getline(inFile,Lines)){
    putWordsIntoVector(Lines);
    cout<<Lines<<endl;
    int LengthOfString= stringNoSpaces(Lines);
    cout<<"The Number of Characters in this string is "<<LengthOfString<<endl;
    int numOfWords= countWords(Lines); 
    cout<<"The Number of Words are "<<numOfWords<<endl;
    cout<<"The longest word is \""<<longestWord<<"\""<<endl;
    int numOfSpaces=findTheSpaces(Lines);
    cout<<"The Number of Spaces are "<<numOfSpaces<<endl;
    int numOfPunctuations=findThePunctuations(Lines);
    cout<<"The number of Punctuations are "<<numOfPunctuations<<endl;
    int numofVowels=findthevowels(Lines);
    cout<<"The number of Vowels are "<<numofVowels<<endl;
    int numOfConsonants=findConsonants(LengthOfString,numOfPunctuations,numofVowels);
    cout<<"The Number of Consonants are "<< numOfConsonants<<endl;
    int numOfOthers=checkForOther(Lines);
    cout<<"The Number of Other Characters are "<<numOfOthers<<endl;
    changeFirstLetterstoUppercase(Lines);
    onlyChangeFirstWordToUpper(Lines);
    onlyChangeFirstLetterToLower(Lines);
    cout<<"-----------------------------------------------------------------------"<<endl;
    }
   }
   createLookupTable();
 //for(string disp: vect1)
   // cout<<disp<<endl;
  return 0;

}
