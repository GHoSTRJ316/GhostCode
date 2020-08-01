#include <iostream> // included for c++ funtion types
#include <ctime> // included for time related variables

void PrintIntroduction(int difficulty) // void for no return type 
{
 std:: cout<< "\n\nYour team has given you enough time to get past the security. \n";
 std:: cout<< "Not good, you have been made, PUSH to the Vault LEVEL " << difficulty ;
 std::cout<<"\n";
}
bool Playgame(int difficulty = 1)  // boolean function for true or false return value 
{

    PrintIntroduction(difficulty);
    std::cout <<"You have broken past the security!\n"; // Declaration statement 1  // endl for new line
    std::cout <<"Quickly put the 3 numbers in the code to enter the VAULT NOW.!!\n";// Declaration statement 2
    

   const int Alpha = rand() % difficulty + difficulty; // assigning values to variables and they are constant  
   const int Beta  = rand() % difficulty + difficulty; // rand for random value generation
   const int Gamma = rand() % difficulty + difficulty;

   const int CodeSum = Alpha + Beta + Gamma; // assigning math operations variable  
   const int CodeProd = Alpha * Beta * Gamma;

    std::cout <<"\n"; // For starting new line
    std::cout <<"\nHints - The numbers are in increasing order.";
    std::cout <<"\nThe addition of the numbers is: " << CodeSum ; // Every answer of math operation to new line
    std::cout <<"\nThe Product of the numbers is: " << CodeProd ;

    int GuessA, GuessB, GuessC ; // Player input declaration
    std:: cout <<"\n";
    std:: cout <<"\nInput Alpha : ";std:: cin >> GuessA;
    std:: cout  <<"Input Beta : " ; std:: cin >> GuessB;
    std:: cout  <<"Input Gamma : "; std:: cin >> GuessC; 

    int GuessSum = GuessA + GuessB + GuessC; // Sum and product for correct answer calcultion  
    int GuessProd = GuessA * GuessB * GuessC;

    std::cout << "\n";
    std:: cout << "\nThe Sum of your inputs is : " << GuessSum; 
    std:: cout << "\nThe Product of your inputs is : " << GuessProd;

    std::cout << "\n";
    if (GuessSum == CodeSum && GuessProd == CodeProd ) // Conditions set for if-else operations
    { 
     std::cout << "\n***Good work! Get ready for next level!!!***" ;  // output for right 
     return (true) ; 
    }
    else
    {
        std::cout << "\n***NOT GOOD, RETRY !!!***"; // output for wrong answer
        return (false);
    }
    
    std::cout << "\n";
}

int main()  // Main Funtion 
{
    srand(time(NULL)); // random variable generated according to the time of day
    int Leveldifficulty = 1; // level difficulty original value
    const int MaxDifficulty = 5 ; // max dificulty level set
    while (Leveldifficulty <= MaxDifficulty) // while loop condition
    {
        bool blevelComplete = Playgame(Leveldifficulty); // Given when "true" condition happend
        std::cin.clear(); // clear any errors
        std::cin.ignore(); // discard any error

        if (blevelComplete) // condition if player manages to complete the level
        {
            ++Leveldifficulty; // when level is completed the increment or increase in level
        }       
    }
      std:: cout <<"***Congratulations YOU ARE THE RICHEST GUY IN THE WORLD \n***" ; // message after level is completed  
       return 0 ; // Return to 0 or Finish of program
}