#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int t,i,j,k,s_len;
    char str[250];
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=0 ; i<t ; i++)
    {
        int word=1,Probability=1;
        char word_line[20];
        
        cout<<"Enter a string: ";
        
        //cin.getline(str,250);
        cin.get(str,250);
        cin.ignore();// Consume the newline character after inputting the string
        
        //cout<<str<<endl;
        
        s_len = strlen(str);
        
        for(j=0 ; j<s_len ; j++)
        {
            if(str[j]==' ')
            {
                word++;
            }
            cout<<str[j]<<endl;
        }
    //     cout<<word<<endl;
        
         for(j=0,k=0 ; j<s_len ; j++,k++)
        {
            word_line[k]=str[j];
            if(str[j]==' ' || j==s_len-1)
            {
                if(j==s_len-1)
                k++;
                
                word_line[k] = '\0'; // Set the last character to null
                cout<<word_line<<endl;
                //word_line[k] = '\0';
               k=-1;
            }
           
        }
        
        
    //      for(j=1 ; j<=word ; j++)
    //     {
            
    //             Probability=Probability*j;
           
    //     }
    //     cout<<"Probability = "<<Probability<<endl;
     }
    

    return 0;
}



/*

    for(i = 0; i < t; i++)
    {
        cout << "Enter a string: ";
        
        //cin.getline(S, 1002);
        
        cin.get(S, 1002);
        cin.ignore(); // Consume the newline character after inputting the string
        
        s_len = strlen(S);
        //cout<<"S_Len = "<<s_len<<endl;
        
        for(j=0, k=0; j<s_len; j++)
        {
            if(S[j]!= ' ')
            {
                word[k] = S[j];
                k++;
            }
            else if (k > 0 )
            {
                word[k] = '\0';
                print_reverse(word);
                
                if(j!=s_len-1)
                cout<<" ";
                
                k = 0;
            }
        }
        if (k>0)
        {
            word[k]='\0';
            print_reverse(word);
        }
        
        cout<<endl;
    }
    return 0;
}


// function definition
void print_reverse(char str[])
{
    int i;
    for (i = strlen(str) - 1; i>=0; i--)
    {
        cout<<str[i];
    }
}
*/










#include <iostream>
#include <sstream>
#include <map>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;
    cin.ignore(); // Ignore the newline character after reading T

    for (int i = 0; i < T; i++) {
        string sentence;
        cout << "Enter sentence " << i + 1 << ": ";
        getline(cin, sentence);

        // Count the number of words in the sentence
        stringstream ss(sentence);
        string word;
        int word_count = 0;
        while (ss >> word) {
            word_count++;
        }

        // Calculate factorial of the number of words
        long long fact = factorial(word_count);
        
        

        
        
        // string sentence;
        // cout << "Enter a sentence: ";
        // getline(cin, sentence);  // বাক্য ইনপুট নেওয়া হচ্ছে
    
        map<string, int> word_count2;  // প্রতিটি শব্দের সংখ্যা সংরক্ষণ করতে একটি map
    
        stringstream sss(sentence);    // বাক্যকে word-by-word করার জন্য stringstream ব্যবহার
        string word2;
    
        // বাক্য থেকে একটি একটি শব্দ বের করা এবং map এ গুন করা
        while (sss >> word) {
            word_count2[word]++;  // যদি শব্দটি আগে থেকেই থাকে, তাহলে 1 বৃদ্ধি করা হবে
        }
    
        // প্রতিটি শব্দের সংখ্যা প্রিন্ট করা
        cout << "Word counts in the sentence:" << endl;
        for (auto &entry : word_count2) {
            cout << entry.first << " : " << entry.second << endl;  // শব্দ এবং তার সংখ্যা প্রিন্ট
            ////////fact/entry.second/////////
            fact=fact / entry.second;
        }
        
        

        // Output the probability in the form 1/fact
        cout << "Probability: 1/" << fact << endl;
    }

    return 0;
}
