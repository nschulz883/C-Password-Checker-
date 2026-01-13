
//no libraries included

int main (){
//password hardcoded here
char password[] = "YourPasswordHere";


//Password strength variables: length, if it has numbers, capital letters and small letters mixed


int Capital_letters_counter = 0;
int lowercase_letters_counter = 0;
int number_counter = 0;


int length = 0;
int strength;


// records length of pass word 

 while ( password[length] != '\0' ){

length = length + 1 ;
}

int ascii_value[length] ;

//for loop with value i that captures ascii values and increments 
//counters for strength assesment
int i = 0;

for (i = 0; i < length; i++){

ascii_value[i] = (int)password[i]; 

if (ascii_value[i] >=97 && ascii_value[i] <= 122){
lowercase_letters_counter = lowercase_letters_counter + 1 ;
}
 else if (ascii_value[i] >= 65 && ascii_value[i] <= 90){
Capital_letters_counter = Capital_letters_counter + 1;
}

  else if (ascii_value[i] >= 48 && ascii_value[i] <= 57){
number_counter = number_counter + 1;
}

}

//strength assessment

if (length >= 8 && lowercase_letters_counter >= 3 && Capital_letters_counter >= 3 && number_counter >= 3 ){

    strength = strength + 1 ;
    return(1);
}else{

    return(0);
}

}
