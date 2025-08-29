#include <iostream>
#include <cstring>
using namespace std;

bool isVowel(char ch) {//for vowels
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    return true;
    else 
    return false;
}
void utol(char str[]){//upper to lower
for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] = str[i] + 32;  // ASCII shift
    }
}
   
}

int main() {
    //concatenate
    char str1[100], str2[50];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 50);
    strcat(str1, str2);  
    cout << "Concatenated string: " << str1;

    //reverse
    int len = strlen(str1);
    for (int i = 0; i < len / 2; i++) {
        char temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
    cout <<endl<< "Reversed string: " << str1;


    //vowel
    char result[100];
    int j = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        if (isVowel(str1[i])==false) {
            result[j++] = str1[i];
        }
    }

    cout <<endl<< "String without vowels: " << result;

    //alphabetical orderrr
    for(int i=0;i<strlen(result);i++){
        for(int j=0;j<strlen(result)-i-1;j++){
            if (result[j] > result[j + 1]) { // ASCII comparison
                char temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
    cout<<endl<<"ALPHABETICAL:"<<result;

    //upper to lower
   utol(result);
   cout<<endl<<"upper to lower is:"<<result;
    
    return 0;
}
