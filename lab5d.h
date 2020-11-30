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
   // return if they're friends
   /*
    friend void areFriends(Pet* Pet_Array,int Number);
    friend void ShowMatrix_Name_and_Age ( Pet* Pet_Array ,int N);
    friend void SortMatrix (Pet* Pet_Array ,int N);
    */
   
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
    Pet(string n,int a,string g,int m,string b);
    ~Pet();
    
    string getName();
    int getAge();
    string getGreeting();
    int getMass();
    string getBreed();

    void setName(string Name);
    void setAge(int Age);   
    void setGreeting(string Greeting);
    void setMass(int Mass);   
    void setBreed(string Breed);

};



Pet::Pet()
{
    name = "Noname";
    age= 0;
    greeting = "Unknown";
    mass=0;
    breed ="Some";
}
Pet::Pet(string n,int a,string g,int m,string b)
{
    name = n;
    age= a;
    greeting = g;
    mass=m;
    breed =b;
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
   
    void Pet::setName(string Name)
    {
        name= Name;
    }
    
    void Pet::setAge(int Age)
    {
        age = Age;
    }
    void Pet::setGreeting(string Greeting)
    {
        greeting=Greeting;
    }
    void Pet::setMass(int Mass)
    {
        mass=Mass;
    }
    void Pet::setBreed(string Breed)
    {
        breed=Breed;
    }



///////////////




class Home
{
    private:
    int number;
    friend void areFriends(Pet* Pet_Array,int Number);
    friend void ShowMatrix_Name_and_Age ( Pet* Pet_Array ,int N);
    friend void SortMatrix (Pet* Pet_Array ,int N);
    friend void function_put(Pet* Pet_Array,int N);
    public:
    Pet *Pet_Array;
    Home();
    Home(int Number);
    ~Home();
    
    void setNumber(int n)
    {
        number=n;
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

Home::Home(int N)
{
   setNumber(N);       
   Pet_Array = new Pet[N];
}

Home::~Home()
{
    delete[] Pet_Array;
}



///

void function_put(Pet* Pet_Array,int N)
{
    for (int i=0;i< N;i++)
    {
        cout<<""<<endl; 
        string n;
        cin>>n;
        Pet_Array[i].setName(n);

        int a;
        cin>>a;
        Pet_Array[i].setAge(a);

        string g;
        cin>>g;
        Pet_Array[i].setGreeting(g);

        int m;
        cin>>m;
        Pet_Array[i].setMass(m);
        
        string b;
        cin>>b;
        Pet_Array[i].setBreed(b);
    }
}
void areFriends(Pet *Pet_Array,int N)
{
    for(int i = 0;i<N-1;i++)
    {
     for(int j = i+1;j<N;j++)
        {
        if (abs(Pet_Array[i].getAge() - Pet_Array[j].getAge())< 2)
            {
                cout<<Pet_Array[i].getName()<<" is a friend of"<<Pet_Array[j].getName()<<endl; 
            }
        }
    }
    cout<<endl;
}


void ShowMatrix_Name_and_Age (Pet* Pet_Array ,int N)
{
    for(int i = 0;i<N;i++)
    {
            cout<<Pet_Array[i].getName()<<": his age - "<<Pet_Array[i].getAge()<<endl; 
        
    }
    cout<<endl;
}

void SortMatrix (Pet *Pet_Array,int N)
{
    
    Pet Mins=Pet_Array[0];
    
    for(int i = 0;i<N;i++)
    {
        for(int j = i+1;j<N;j++)
        {

              if (Pet_Array[j].getAge()< Mins.getAge())
                {
                    Mins=Pet_Array[i];
                    Pet_Array[i]=Pet_Array[j];
                    Pet_Array[j]=Mins;
                }

           }
    }
    cout<<"It's been sorted"<<endl;
    cout<<endl;
}