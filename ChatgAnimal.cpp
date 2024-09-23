// ANIMAL SHELTER
// NICOLE URUM EKE
// MAY 23 2023


#include <iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<fstream>
#include<sstream>

using namespace std;
int stop=0;
 int nbrOfCats;
 bool showFlow = false;

ifstream inFile("animalShelterList.csv");

void showflow(string line)
{
    cout << line << endl;
}
 // Open an existing file

//--- Animal Class ---//
class Animal {
private:
  static int AnimalNumber;
public:
     vector<Animal> animals;
  string name;
  int age;
  int weight;
  string Breed;
  string color;
  string health;
  void Speak() { //default speak function, so no specific sound
    cout << name << " says: (slight breathing sound)" << endl;
  }
  Animal();
//  ~Animal() {cout << "One less animal: " << name << endl;}
  string animalType = "animal";
  int myAnimalNumber;
};

Animal::Animal() {
  cout << "\nCreating a new animal." << endl;
  AnimalNumber++;
  myAnimalNumber = AnimalNumber;
}

//--- Cat Class ---//
class Cat : public Animal {
private:

      int myCatNbr;
      int Catage;
      string Catname;
  int CatWeight;
  string CatBreed;
  string CatColor;
  string CatHealth;
  void Speak()const {cout << "\nMeow." << endl;}

public:
  Cat(string name, int age, int weight, string Breed,string color,string health);
  Cat();
  ~Cat();
  int GetCatsAge() const;
  string GetCatsName() const;
  int GetCatNbr() {return myCatNbr;}
  int GetCatWeight() {return CatWeight;}
  string GetCatBreed() {return CatBreed;}
  string GetCatColor() {return CatColor;}
  string GetCatHealth() {return CatHealth;}



  void Introduction() const;
  void SetCatAge();
  void SetCatName(string name);
  void SetCatWeight(int weight);
  void SetCatBreed(string Breed);
  void SetCatColor(string color);
  void SetCatHealth(string health);
  void SetCatNumber();
  static int GetNumberOfCats();
}; // Cat

class Dog : public Animal {
private:
  //static int nbrOfCats
  int nbrOfDogs;
  int myDogNbr;
  int Dogage;
  string Dogname;
  void Speak()const {cout << "\nBark Bark." << endl;}

public:
  Dog(string name, int age);
  Dog();
  ~Dog();
  int GetDogsAge() const;
  string GetDogsName() const;
  int GetDogNbr() {return myDogNbr;}
  void Introduction() const;
  void SetDogAge();
  void SetDogName(string name);
  void SetDogNumber();
  static int GetNumberOfDogs();
}; // Dog



int Animal::AnimalNumber=0;



Cat::Cat() {
  cout << "\nI am creating an unnamed cat." << endl;
  name="Unnamed";
  Catage=0;
   CatWeight=0;
  CatBreed="Unnamed";
  CatColor="Unknown";
  CatHealth="Unknown";
  SetCatNumber();
  animalType = "cat";
}

Cat::Cat(string catsName, int catsAge, int catsweight, string catsBreed,string catscolor,string catshealth) {

  cout << "I am creating a cat called " << catsName << endl;
  Cat::name = catsName;
  Catage = catsAge;
  CatWeight=catsweight;
  CatBreed=catsBreed;
  CatColor=catscolor;
  CatHealth=catshealth;
  SetCatNumber();
  animalType = "cat";
}

Cat::~Cat() {
  cout << "Destructing cat number" << GetCatNbr()
  << ", named " << GetCatsName() << endl;
}

//----- define the class accessors (getters) here

int Cat::GetCatsAge() const {return Catage;}

string Cat::GetCatsName() const {return name;}

//----- define some class setters (mutators) here
//
void Cat::SetCatName(string catName) {
  name = catName;
}
void Cat::SetCatWeight(int catsweight) {
  weight = CatWeight;
}
void Cat::SetCatColor(string catscolor) {
  color= catscolor;
}
void Cat::SetCatHealth(string catshealth) {
  health = catshealth;
}
void Cat::SetCatBreed(string catsbreed) {
  Breed = catsbreed;
}
void Cat::SetCatNumber() {
  ++nbrOfCats; //note that this is a global variable
  myCatNbr = nbrOfCats;
}

void Cat::Introduction() const {
  Speak();
  cout << "My name is " << name << endl;
  cout << "I am " << Catage << " years old." << endl;
  cout << "My weight is " << CatWeight<< endl;
  cout << "My breed is " << CatBreed<< endl;
  cout << "My color is " << CatColor << endl;
  cout << "My health is " << CatHealth << endl;
  cout << "I am cat number " << nbrOfCats << endl;
  cout << "  and I an animal number " << myAnimalNumber << endl;
  cout << "I am a(an) " << animalType << endl;
}


Dog::Dog() {
  cout << "\nI am creating an unnamed Dog." << endl;
  name="Unnamed";
  Dogage=0;

  SetDogNumber();
  animalType = "Dog";
}

Dog::Dog(string DogsName, int DogsAge) {
  cout << "\nI am creating a dog called " << DogsName << endl;
  Dog::name = DogsName;
  Dogage = DogsAge;
  SetDogNumber();
  animalType = "Dog";
}

Dog::~Dog() {
  cout << "Destructing Dog number" << GetDogNbr()
  << ", named " << GetDogsName() << endl;
}

//----- define the class accessors (getters) here

int Dog::GetDogsAge() const {return Dogage;}

string Dog::GetDogsName() const {return name;}

//----- define some class setters (mutators) here
//
void Dog::SetDogName(string DogName) {
  name = DogName;
}

void Dog::SetDogNumber() {
  nbrOfDogs++; //note that this is a global variable
  myDogNbr = nbrOfDogs;
}
void RemoveTheTitles(){
  string AnimalType,Name,Breed,Color,Health;
  int Age, Weight;

  stop++;
 inFile>>AnimalType>>Name>>Age>>Weight>>Breed>>Color>>Health;
}

void CatStuff(){
    //string AnimalType,Name,Breed,Color,Health;
  //int Age, Weight;

  if(stop==0){//makes surenthis happens only once
RemoveTheTitles();

  }





 string lines;
    while(getline(inFile, lines))
            {
               stringstream ss(lines);
               string type, name, ageStr, weightStr, breed, color, health, sound;
                getline(ss, type, ',');
                getline(ss, name, ',');
                getline(ss, ageStr, ',');
                getline(ss, weightStr, ',');
                getline(ss, breed, ',');
                getline(ss, color, ',');
                getline(ss, health, ',');
                getline(ss, sound, ',');
        int age =0;
        float weight = 0.0;

        Animal* animal= nullptr;
        if (type == "cat") {
            animal = new Cat();


        } else if (type == "dog") {
            animal= new Dog();


        } else {
            animal = new Animal();
           // animal->type = type;
        }
        animal->name = name;
        animal->age = age;
        animal->weight = weight;
        animal->Breed = breed;
        animal->color = color;
        animal->health = health;

        animal->Introduction();
        animals.push_back(animal);

}

}

/*
void DogStuff(){

    int Dogsage;

   string Dogsname;
   int numOfDogs;
    cout<<"How many Dogs do you want to register?"<<endl;
    cin>>numOfDogs;
    for(int i=0;i<numOfDogs;i++){
         Dog* Dogs[numOfDogs];
   cout<<"Enter the name of your Dog"<<endl;
    cin>>Dogsname;
    cout<<"Enter the age of your Dog"<<endl;
    cin>>Dogsage;
    Dogs[i]=new Dog(Dogsname,Dogsage);

    cout << "Dog's name: " << Dogs[i]->GetDogsName() << endl;
    Dogs[i]->Introduction();

    }

    string AnimalType,Name,Breed,Color,Health;
  int Age, Weight;
  USE A DO WHILE LOOOPPPPPPP
   do{
   }
   inFile>>AnimalType;
   if(AnimalType=="cat"){
   CatStuff();
   }
  else{
    vector<Dog> dogs;

  }
}
*/
void Dog::Introduction() const {
  Speak();
  cout << "My name is " << name << endl;
  cout << "I am " << Dogage << " years old." << endl;
  cout << "I am dog number " << myDogNbr << endl;
  cout << "  and I an animal number " << myAnimalNumber << endl;
  cout << "I am a(an) " << animalType << endl;
}

int main() {
  Animal chipmunk; //just a plain ol' animal, nothing more
  chipmunk.name="Chippy";
  chipmunk.Speak();

  if(showFlow)
  {
    string lines;
    while(getline(inFile, lines))
    {
        cout << lines << endl;
    }
  }
    cout << "I am a(an) " << chipmunk.animalType << endl;
    //CatStuff();
    //DogStuff();

 Cat catA("Frisky",3,6,"gold","black","good");
  cout << "Cat's name: " << catA.GetCatsName() << endl;

  catA.Introduction();

  catA.SetCatName("Boo"); //we're renaming Frisky to Boo; good idea?
  catA.Introduction();

  Cat *catB; //let's create a dynamic cat
  catB = new Cat("Buster",1,6,"goldee","uck","good");
  catB->Introduction();

  Cat catC; //let's create an "unknown" cat
  catC.Introduction();

  Cat catD("Morris",9,6,"gld","bluek","bad");
  catD.Introduction();

  Animal animalArray[10]; //note: can hold animals and Cats
  animalArray[0] = chipmunk;
  animalArray[1] = catA;
  animalArray[0].Speak(); //this calls on Chippy to speak

  Cat catE("Big Boy",4,6,"gold","black","good");
  catE.Introduction();

  // --- report the number of cats we processed today before quitting.
//  cout << "\nNumber of cats processed today: " <<
//    Cat::GetNumberOfCats() << endl << endl;



  return 0;
} //main
