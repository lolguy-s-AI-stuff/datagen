#include <iostream>
#include <curl/curl.h>
#include <string>
#include <regex>
#include <sstream>
#include <vector>

//maths and shit start
void genadd(){
    int num1 = rand()% 10000;
    int num2 = rand()% 10000;
    std::string space1 = rand()%100 < 50 ? " " : "";
    std::string space2 = rand()%100 < 50 ? " " : "";
    std::string space3 = rand()%100 < 50 ? " " : "";
    std::string space4 = rand()%100 < 50 ? " " : "";
    std::string space5 = rand()%100 < 50 ? " " : "";
    std::cout << "{prompt:'" << num1 << space1 << "+"<< space2 <<  num2 << space3 << "=" << space4 << "',completion:'"<< space5 << num1 + num2 << "'}," << std::endl;
}

void gensub(){
    int num1 = rand()% 10000;
    int num2 = rand()% 10000;
    std::string space1 = rand()%100 < 50 ? " " : "";
    std::string space2 = rand()%100 < 50 ? " " : "";
    std::string space3 = rand()%100 < 50 ? " " : "";
    std::string space4 = rand()%100 < 50 ? " " : "";
    std::string space5 = rand()%100 < 50 ? " " : "";
    std::cout << "{prompt:'" << num1 << space1 << "-"<< space2 <<  num2 << space3 << "=" << space4 << "',completion:'"<< space5 << num1 - num2 << "'}," << std::endl;
}

void genmul1(){
    int num1 = rand()% 10000;
    int num2 = rand()% 10000;
    std::string space1 = rand()%100 < 50 ? " " : "";
    std::string space2 = rand()%100 < 50 ? " " : "";
    std::string space3 = rand()%100 < 50 ? " " : "";
    std::string space4 = rand()%100 < 50 ? " " : "";
    std::string space5 = rand()%100 < 50 ? " " : "";
    std::cout << "{prompt:'" << num1<< space1 << "*"<< space2 <<  num2 << space3 << "=" << space4 << "',completion:'"<< space5 << num1 * num2 << "'}," << std::endl;
}

void gendiv(){
    int num1 = rand()% 10000;
    int num2 = rand()% 10000;
    std::string space1 = rand()%100 < 50 ? " " : "";
    std::string space2 = rand()%100 < 50 ? " " : "";
    std::string space3 = rand()%100 < 50 ? " " : "";
    std::string space4 = rand()%100 < 50 ? " " : "";
    std::string space5 = rand()%100 < 50 ? " " : "";
    std::cout << "{prompt:'" << num1 << space1 << "/"<< space2 <<  num2 << space3 << "=" << space4 << "',completion:'"<< space5 << num1 / num2 << "'}," << std::endl;
}
//maths and shit end


void genbasicenglish(){//makes basic sentances
    const char* objects[]{"tree","hen","person","child","computer","CD","flower","teapot","fork"
    ,"woman","man","teacher","robot","person","trash can","sponge","lamp","sidewalk","garbage","keyboard","bacon","dog","cat",
    "mouse","rat","bird","snake","spider","fish","shark","whale","dolphin","octopus","squid","crab","lobster","shrimp","turtle",
    "tortoise","snail","slug","worm","ant","bee","wasp","fly","butterfly","moth","caterpillar","grasshopper","cricket","beetle",
    "ladybug","dragonfly","mosquito","flea","tick","bear","camel","cow","deer","elephant","fox","giraffe","horse","kangaroo","lion",
    "monkey","panda","pig","rabbit","sheep","tiger","wolf","zebra","alligator","crocodile","dinosaur","dodo","duck","eagle","emu","falcon",
    "flamingo","goose","hawk","kiwi","koala","ostrich","owl","parrot","peacock","penguin","pigeon","rooster","seagull","swan","turkey","vulture",
    "cobra","python","viper","boa","rattlesnake","boa","coral","jellyfish","starfish","urchin","clam","oyster","mussel","scallop","seahorse","crab",
    "lobster","shrimp","squid","octopus","snail","slug","worm","ant","bee","wasp","fly","butterfly","moth","caterpillar","grasshopper","cricket","beetle",
    "ladybug","dragonfly","mosquito","flea","tick","bear","camel","cow","deer","elephant","fox","giraffe","horse","kangaroo","lion","monkey","panda","pig","rabbit",
    "sheep","tiger","wolf","zebra","alligator","crocodile","dinosaur","dodo","duck","eagle","emu","falcon","flamingo","goose","hawk","kiwi","koala","ostrich","owl",
    "parrot","peacock","penguin","pigeon","rooster","seagull","swan","turkey","vulture","cobra","python","viper","boa","rattlesnake","boa","coral","jellyfish",
    "starfish","urchin","clam","oyster","mussel","scallop","seahorse"};
    
    const char* adjectives[]{"red","orange","yellow","green","blue","purple","pink","brown","magenta","big"
    ,"small","little","important","unimportant","crazy","boring","dry","empty","sexy","hot","pretty","beautiful","tidy","sad","lame","good","smelly","silly","funny","happy",
    "angry","sad","sick","tired","lazy","slimy","wet","dry","shiny","dirty","clean","messy","sparkly","glittery","shiny","glossy",
    "fuzzy","soft","hard","rough","smooth","sharp","pointy","round","square","triangular","rectangular","oval","octagonal","hexagonal",
    "pentagonal","curvy","straight","bumpy","flat","long","short","tall","wide","narrow","thick","thin","heavy","light","dark","bright",
    "dull","clear","cloudy","foggy","rainy","snowy","windy","hot","cold","warm","cool","frozen","icy","fresh","stale","rotten","bitter",
    "salty","sweet","sour","spicy","tasty","delicious","yummy","yucky","juicy","dry","moist","wet","dry","dusty","dirty","clean","spotless",
    "neat","messy","organized","disorganized","quiet","noisy","silent","scary","frightening","scary","calm","peaceful","loud","soft"};

    int ind1 = rand()% 100;
    int ind2 = rand()% 100;

    std::string space1 = rand()%100 < 50 ? " " : "";
    std::string space2 = rand()%100 < 50 ? " " : "";
    std::string space3 = rand()%100 < 50 ? " " : "";
    std::cout << "{prompt:'The "<<space1<< adjectives[ind2] << " " << objects[ind1]<< space2  << " looks ',completion:' very " << adjectives[ind2] << space3 << " today.'}," << std::endl;
}

void gendialogenglish(){//makes basic dialog
    const char* usertags[]{"[User]","-","Gary","Person","User","Bob","[Tom]","Alice","[xX_ballsman99_Xx]"};
    const char* AItags[]{"[AI]",">","[Assistant]","[Brian]","Assistant","Gary","Sydney","Stacy","[George]","Me","[nooneman6969]","ass is tant","GLaDOS","Very smart AI"};
    const char* AIcompanies[]{"OpenAI","Google","Facebook","Microsoft","Stability AI","Runway.ML","an independent team of 6 people","Apreture Science","Balls Inc.","FuckMicrosoft.com","the CIA","Apple","the CCP","your mother(on facebook)","Joe Biden"};

    int ind1 = rand()% 9;
    int ind2 = rand()% 14;
    int ind3 = rand()% 15;
    std::string space1 = rand()%100 < 50 ? " " : "";
    std::string space2 = rand()%100 < 50 ? " " : "";
    std::string space3 = rand()%100 < 50 ? " " : "";
    std::cout << "{prompt:'"<< usertags[ind1] <<space1 <<": Who are You? ',completion:'\n" << AItags[ind2] << space2 << ": I'm a large laungage model by "<<space3 << AIcompanies[ind3]<< ".'}," << std::endl;
}



int main(){
    std::cout << "{data:[" << std::endl;
    for (size_t i = 0; i < 500; i++)
    {  
        switch (rand()%7)
        {
        case 0:
            genadd();
            break;
        case 1:
            gensub();
            break;
        case 2:
            genmul1();
            break;
        case 3:
            gendiv();
            break;
        case 4:
            gendialogenglish();
            break;
        case 5:
            genbasicenglish();
            break;
        case 6:
            genbasicenglish();
            break;

        default:
            break;
        }
        
    }
    std::cout << "]}" << std::endl;
    
}