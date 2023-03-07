#include<iostream>
using namespace std;
int main(){
    int finalResult=0;
    int startquiz(void);
    char playagain;
    finalResult=startquiz();
    cout<<"Your score is"<<finalResult;
    if (finalResult>18.75)
    {
        cout<<"You passed the quiz !!"<<endl;
        cout<<"Do you want to play again , Yes or No"<<endl;
        cin>>playagain;
        if (playagain=='y' || playagain=='Y')
        {
            /* code */
            startquiz();
        }
        else{
           cout<<"Thank you for your valuable time"<<endl; 
        }
        
    }
    else 
    {
        cout<<"You failed Better luck next time :( )"<<endl;
    }
    
    
   }
int startquiz(){
    char c;
    char option;
    int score=0;
    cout<<"_______________ Welcome to Subjectwise quiz___________________"<<endl;
    cout<<"_______________PLEASE follow the instructions_______________ "<<endl;
    cout<<"1) This quiz has 4 subjects, Physics, Chemistry, Biology, General Knowledge"<<endl;
    cout<<"2)The total marks is 80"<<endl;
    cout<<"3) Each right answer carries 2 marks and wrong answer carries 0 marks"<<endl;
    cout<<"4)To start the quiz press 'S' or 's' "<<endl;
    cout<<"5) Select options 'a' or 'b' or 'c' or 'd' "<<endl;
    cin>>c;
 
    if (c=='s'||c=='S')
    {
        /* code */
        cout<<"_______PHYSICS_______"<<endl;
        cout<<"Q1.What is the force that resists motion between two surfaces in contact called?";
        cout<<" a) Gravitational force . b) Electromagnetic force. c) Frictional force .d) Nuclear force."<<endl;
   cin>>option;
   if (option=='c' || option=='C')
   {
    /* code */
    score=score+2;
   }
   else 
    /* code */
    score=score+0 ;
   }

    cout<<"Q2.What is the term for the resistance of an object to changes in its motion?";
        cout<<"a) Velocityb) Inertiac) Acceleration d) Force" <<endl;
   cin>>option;
   if (option=='b' || option=='B')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q3.What is the unit of measurement for force?";
        cout<<"a) Newtonb) Wattc) Jouled) Ampere"<<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q4.Which law of motion states that for every action, there is an equal and opposite reaction?";
        cout<<"a) Newton's first law b) Newton's second law c) Newton's third law d) None of the above "<<endl;

    cin>>option;
      if (option=='c' || option=='C')

   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q5.Which type of energy is stored in an object due to its position or height above the ground?";
        cout<<"a) Kinetic energy b) Thermal energy c) Potential energy d) Electrical energy"<<endl;

   cin>>option;
   if (option=='c' || option=='C')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q6.What is the formula for calculating work done?";
        cout<<"a) W = F/d b) W = F x dc) W = F x t d) W = F x a "<<endl;
   cin>>option;
   if (option=='b' || option=='B')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q7.Which type of lens can converge light rays to a point?";
        cout<< "a) Convex lens b) Concave lens c) Both convex and concave lens d) None of the above" <<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }

    cout<<"Q8.What is the process by which heat is transferred through a fluid due to density differences called?";
        cout<<"a) Convection b) Radiation c) Conduction d) Advection"<<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }

    cout<<"Q9.What is the term for the amount of matter in an object?";
        cout<<"a) Weight b) Volume c) Density d) Mass"<<endl;
   cin>>option;
   if (option=='d' || option=='D')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }

    cout<<"Q10.What is the formula for calculating acceleration?";
        cout<<"a) a = F/m b) a = m/F c) a = F x m d) a = d/t " <<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0 ;
   }

   cout<<"_______CHEMISTRY_______"<<endl;
        cout<<"Q1.What is the chemical symbol for gold?";
        cout<<"a) Ag b) Au c) Al d) Fe"<<endl;
   cin>>option;
   if (option=='b' || option=='B')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }

    cout<<"Q2.Which gas is most abundant in Earth's atmosphere?";
        cout<<"a) Carbon dioxide b) Oxygen c) Nitrogen d) Helium"<<endl;
   cin>>option;
   if (option=='c' || option=='C')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }

    cout<<"Q3.What is the pH of a neutral solution?";
        cout<<"a) 7 b) 5 c) 10 d) 1"<<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
   
    cout<<"Q4.Which element has the atomic number 6?";
        cout<<"a) Carbon b) Sodium c) Calcium d) Chlorine"<<endl;
   cin>>option;
   if (option=='a' || option=='A')

   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
    cout<<"Q5.Which of the following is an alkali metal?";
        cout<<"a) Sodium b) Zinc c) Iron  d) Copper"<<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
    cout<<"Q6.Which gas is known as laughing gas?";
        cout<<"a) Nitrous oxide b) Nitric oxide c) Carbon monoxide d) Carbon dioxide"<<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
    cout<<"Q7.What is the chemical formula for water?"<<endl;
    cout<<"a) NaCl b) H2O c) CO2 d) CH4"<<endl;
   cin>>option;
   if (option=='b' || option=='B')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
    cout<<"Q8.What is the process of a gas changing into a liquid called?";
        cout<<"a) Sublimation b) Melting c) Condensation d) Evaporation"<<endl;
   cin>>option;
   if (option=='c' || option=='C')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
    cout<<"Q9.Which gas is responsible for the greenhouse effect?";
        cout<<"a)  Helium b) Nitrogen c) Oxygen d)Carbon dioxide"<<endl;
   cin>>option;
   if (option=='d' || option=='D')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
    cout<<"Q10.What is the atomic symbol for silver?";
        cout<<"a) Ag b) Au c) Fe d) Al"<<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
      cout<<"_______BIOLOGY_______"<<endl;
        cout<<"Q1.Which of the following is not one of the four main types of tissue in the human body?";
        cout<<"a) Muscle b) Nerve c) Connective d) Respiratory"<<endl;
   cin>>option;
   if (option=='d' || option=='D')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
    cout<<"Q2.What is the process by which green plants use sunlight to synthesize food from carbon dioxide and water called?";
        cout<<"a) Photosynthesis b) Respiration c) Fermentation d) Digestion"<<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
    cout<<"Q3.Which part of the human brain is responsible for regulating vital functions such as breathing and heart rate?";
        cout<<"a) Cerebellum b) Hypothalamus c) Medulla oblongata d) Cerebral cortex"<<endl;
   cin>>option;
   if (option=='c' || option=='C')
   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
    cout<<"Q4.What is the smallest unit of life?";
        cout<<"a) Cell b) Atom c) Molecule d) Organelle"<<endl;
   cin>>option;
   if (option=='a' || option=='A')

   {
    /* code */
    score=score+2;
   }
   else
   {
    /* code */
    score=score+0;
   }
    cout<<"Q5.Which of the following is not a type of blood cell?";
        cout<<"a) Red blood cell b) White blood cell c) Platelet d) Neuron"<<endl;
   cin>>option;
   if (option=='d' || option=='D')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }
    cout<<"Q6.Which of the following is not a type of muscle tissue?";
        cout<<"a) Skeletal b) Smooth c) Cardiac d) Nerve"<<endl;
   cin>>option;
   if (option=='d' || option=='D')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }
    cout<<"Q7.What is the process by which cells break down glucose to produce energy called?"<<endl;
    cout<<"a) Photosynthesis b) Respiration c) Fermentation d) Digestion"<<endl;
   cin>>option;
   if (option=='b' || option=='B')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }
    cout<<"Q8.Which of the following is the largest organ in the human body?";
        cout<<"a) Liver b) Heart c) Brain d) Skin"<<endl;
   cin>>option;
   if (option=='d' || option=='D')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }
    cout<<"Q9.What is the process by which an organism develops from a single cell into a complex organism called?";
        cout<<"a) Reproduction b) Growth c) Development d) Differentiation"<<endl;
   cin>>option;
   if (option=='c' || option=='C')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }
    cout<<"Q10.Which of the following is not a type of bone in the human body?";
        cout<<"a) Long bone b) Flat bone c) Round bone d) Irregular bone"<<endl;
   cin>>option;
   if (option=='c' || option=='C')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }
   
   cout<<"_______GENERAL KNOWLEDGE_______"<<endl;
        cout<<"Q1.What is the capital of France?";
        cout<<"a) Berlin b) Paris c) Madrid d) Rome"<<endl;
   cin>>option;
   if (option=='b' || option=='B')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q2.Which planet in our solar system is known as the 'Red Planet'?";
        cout<<"a) Venus b) Mars c) Jupiter d) Saturn"<<endl;
   cin>>option;
   if (option=='b' || option=='B')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q3.Who painted the famous artwork 'The Mona Lisa'?";
        cout<<"a) Vincent van Gogh b) Claude Monet c) Pablo Picasso d) Leonardo da Vinci"<<endl;
   cin>>option;
   if (option=='d' || option=='D')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q4.Which of the following countries is not in Africa??";
        cout<<"a) Nigeria b) Brazil c) Egypt d) South Africa"<<endl;
   cin>>option;
   if (option=='b' || option=='B')

   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q5.Who wrote the novel 'To Kill a Mockingbird'?";
        cout<<"a) Harper Lee b) J.K. Rowling c) Ernest Hemingway d) F. Scott Fitzgerald"<<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q6.What is the smallest country in the world by land area?";
        cout<<"a) Monaco b) San Marino c) Vatican City d) Liechtenstein"<<endl;
   cin>>option;
   if (option=='c' || option=='C')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q7.Who is the current President of the United States?"<<endl;
    cout<<"a) Barack Obama b) Joe Biden c) Donald Trump d) George W. Bush "<<endl;
   cin>>option;
   if (option=='d' || option=='D')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q8.What is the largest ocean in the world?";
        cout<<"a) Pacific Ocean b) Atlantic Ocean c) Indian Ocean d) Arctic Ocean"<<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q9.Who was the first person to walk on the moon?";
        cout<<"a) Neil Armstrong b) Buzz Aldrin c) Yuri Gagarin d) John Glenn"<<endl;
   cin>>option;
   if (option=='a' || option=='A')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

    cout<<"Q10.Which famous physicist is known for developing the theory of relativity?";
        cout<<"a) Isaac Newton b) Albert Einstein c) Stephen Hawking d) Galileo Galilei"<<endl;
   cin>>option;
   if (option=='b' || option=='B')
   {
    /* code */
    score=score+2;
   }
   else 
   {
    /* code */
    score=score+0;
   }

   
   
return 0;
    }
  
    
 

