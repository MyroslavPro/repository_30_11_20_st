#pragma once
enum kind 
{
    DOG=1,
    CAT=2,
    BIRD=3,
    FISH=4
};  

class Pet
{
    private:
        string name;
        int age;
        string greeting;
        int mass;
        string breed;
    public:
        bool isPolite()
        {
            if (getGreeting() == "Hello")
            {
                return true;
            }
        }  

        string getKind(kind k)
        {
            if (k==DOG)
            {
                return "Doggy";
            }
            if (k==CAT)
            {
                return "Cat";
            }
            if (k==BIRD)
            {
                return "Bird";
            }
            if (k==FISH)
            {
                return "Fish";
            }
        }
        Pet();
        Pet(string newName,int newAge,string newGreeting,int newMass,string newBreed);
        ~Pet();

        string getName();
        int getAge();
        string getGreeting();
        int getMass();
        string getBreed();

        void setName(string newName);
        void setAge(int newAge);   
        void setGreeting(string newGreeting);
        void setMass(int newMass);   
        void setBreed(string newBreed);

};

Pet::Pet()
{
    name = "Noname";
    age= 0;
    greeting = "Unknown";
    mass=0;
    breed ="Some";
}
Pet::Pet(string newName,int newAge,string newGreeting,int newMass,string newBreed)
{
    name = newName;
    age= newAge;
    greeting = newGreeting;
    mass=newMass;
    breed =newBreed;
}
Pet::~Pet(){}


string Pet::getName()
{
    return name;
}
int Pet::getAge()
{
    return age;
}
string Pet::getGreeting()
{
    return greeting;
}
int Pet::getMass()
{
    return mass;
}
string Pet::getBreed()
{
    return breed;
}


void Pet::setName(string newName)
{
    name= newName;
}
void Pet::setAge(int newAge)
{
    age = newAge;
}
void Pet::setGreeting(string newGreeting)
{
    greeting=newGreeting;
}
void Pet::setMass(int newMass)
{
    mass=newMass;
}
void Pet::setBreed(string newBreed)
{
    breed=newBreed;
}

class Home
{
    private:
        int number;
        friend void areFriends(Pet* petsArray,int number);
        friend void showMatrixNameAndAge ( Pet* petsArray ,int number);
        friend void sortMatrixFromSmallToBig (Pet* petsArray ,int number);
        friend void function_put(Pet* petsArray,int number);
    public:
        Pet *petsArray;
        Home();
        Home(int number);
        ~Home();

        void setNumber(int newNumber)
        {
            number=newNumber;
        }
        int getNumber()
        {
            return number;
        }

};   

Home::Home()
{
    setNumber(0);   
}

Home::Home(int number)
{
    setNumber(number);       
    petsArray = new Pet[number];
}

Home::~Home()
{
    delete[] petsArray;
}


void function_put(Pet* petsArray,int number)
{
    for (int i=0;i< number;i++)
    {
        cout<<""<<endl; 
        string n;
        cin>>n;
        petsArray[i].setName(n);

        int a;
        cin>>a;
        petsArray[i].setAge(a);

        string g;
        cin>>g;
        petsArray[i].setGreeting(g);

        int m;
        cin>>m;
        petsArray[i].setMass(m);
        
        string b;
        cin>>b;
        petsArray[i].setBreed(b);
    }
}

void areFriends(Pet *petsArray,int number)
{
    for(int i = 0;i<number-1;i++)
    {
        for(int j = i+1;j<number;j++)
        {
            if (abs(petsArray[i].getAge() - petsArray[j].getAge())< 2)
            {
                cout<<petsArray[i].getName()<<" is a friend of "<<petsArray[j].getName()<<endl; 
            }
        }
    }
    cout<<endl;
}


void showMatrixNameAndAge (Pet* petsArray ,int number)
{
    for(int i = 0;i<number;i++)
    {
        cout<<petsArray[i].getName()<<": his age - "<<petsArray[i].getAge()<<endl; 
    }
    cout<<endl;
}

void sortMatrixFromSmallToBig(Pet *petsArray,int number)
{
    Pet Mins=petsArray[0];
    for(int i = 0;i<number;i++)
    {
        for(int j = i+1;j<number;j++)
        {
            if (petsArray[j].getAge()< Mins.getAge())
            {
                Mins=petsArray[i];
                petsArray[i]=petsArray[j];
                petsArray[j]=Mins;
            }
        }
    }
    cout<<"It's been sorted"<<endl;
    cout<<endl;
}