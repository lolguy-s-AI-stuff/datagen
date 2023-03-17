#include <iostream>

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
    std::cout << "{prompt:'" << num1 << space1 << "*"<< space2 <<  num2 << space3 << "=" << space4 << "',completion:'"<< space5 << num1 * num2 << "'}," << std::endl;
}

void genmul2(){
    int num1 = rand()% 10000;
    int num2 = rand()% 10000;
    std::string space1 = rand()%100 < 50 ? " " : "";
    std::string space2 = rand()%100 < 50 ? " " : "";
    std::string space3 = rand()%100 < 50 ? " " : "";
    std::string space4 = rand()%100 < 50 ? " " : "";
    std::string space5 = rand()%100 < 50 ? " " : "";
    std::cout << "{prompt:'" << num1 << space1 << "x"<< space2 <<  num2 << space3 << "=" << space4 << "',completion:'"<< space5 << num1 * num2 << "'}," << std::endl;
}

void genbasicenglish(){
    const char* objects[]{"tree","hen","person","child","computer","CD","flower","teapot","fork"};
    const char* adjectives[]{"red","orange","yellow","green","blue","purple","pink","brown","magenta","big","small","little"};
    int ind1 = rand()% 9;
    int ind2 = rand()% 12;
    std::string space1 = rand()%100 < 50 ? " " : "";
    std::string space2 = rand()%100 < 50 ? " " : "";
    std::string space3 = rand()%100 < 50 ? " " : "";
    std::cout << "{prompt:'The "<<space1<< adjectives[ind2] << " " << objects[ind1]<< space2  << " looks ',completion:' very " << adjectives[ind2] << space3 << " today.'}," << std::endl;
}

void gendialogenglish(){
    const char* usertags[]{"[User]","-","Gary","Person","User","Bob","[Tom]","Alice","[xX_ballsman99_Xx]"};
    const char* AItags[]{"[AI]","[Assistant]","[Brian]","Assistant","Gary","Sydney","Stacy"};
    const char* AIcompanies[]{"OpenAI","Google","Facebook","Microsoft","Stability AI","Runway.ML","an independent team of 6 people","Apreture Science"};

    int ind1 = rand()% 9;
    int ind2 = rand()% 7;
    int ind3 = rand()% 8;
    std::string space1 = rand()%100 < 50 ? " " : "";
    std::string space2 = rand()%100 < 50 ? " " : "";
    std::string space3 = rand()%100 < 50 ? " " : "";
    std::cout << "{prompt:'"<< usertags[ind1] <<space1 <<": Who are You? ',completion:'\n" << AItags[ind2] << space2 << ": I'm a large laungage model by "<<space3 << AIcompanies[ind3]<< ".'}," << std::endl;
}

int main(){
    std::cout << "{data:[" << std::endl;
    for (size_t i = 0; i < 500; i++)
    {  
        switch (rand()%6)
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
            genmul2();
            break;
        case 4:
            genbasicenglish();
            break;
        case 5:
            gendialogenglish();
            break;

        default:
            break;
        }
        
    }
    std::cout << "]}" << std::endl;
    

}