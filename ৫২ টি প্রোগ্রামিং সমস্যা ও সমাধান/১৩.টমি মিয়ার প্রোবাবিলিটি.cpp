#include <iostream>
#include <sstream>
#include <map>
using namespace std;

// Function to calculate factorial of a given number n
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;  // Multiply fact with each number from 2 to n
    }
    return fact;
}

int main() {
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;  // Input the number of test cases
    cin.ignore(); // Ignore the newline character after reading T

    // Loop through each test case
    for (int i = 0; i < T; i++) {
        string sentence;
        cout << "Enter sentence " << i + 1 << ": ";
        getline(cin, sentence);  // Read the entire sentence input

        // Count the total number of words in the sentence
        stringstream ss(sentence);  // Create a string stream object to break the sentence into words
        string word;
        int word_count = 0;

        // Increment word_count for each word found in the sentence
        while (ss >> word) {
            word_count++;
        }

        // Calculate the factorial of the total word count
        int fact = factorial(word_count);

        // Map to store word frequencies
        map<string, int> word_count_map;  // This map will store the frequency of each word

        // Another stringstream to parse the sentence again and calculate word frequencies
        stringstream sss(sentence);  
        while (sss >> word) {
            word_count_map[word]++;  // Increase count for each occurrence of a word
        }

        // Print the word counts and adjust the factorial based on word frequencies
        // cout << "Word counts in the sentence:" << endl;
        for (auto &entry : word_count_map) {
            // cout << entry.first << " : " << entry.second << endl;  // Print each word and its count
            fact = fact / factorial(entry.second);  // Divide by the factorial of the word frequency
        }

        // Output the final probability in the form 1/fact
        cout << "Probability: 1/" << fact << endl;
    }

    return 0;
}



/*
Enter number of test cases: 5
Enter sentence 1: no way no good
Probability: 1/12
Enter sentence 2: His mind was blown that there was nothing in
Probability: 1/181440
Enter sentence 3: Karen believed all traffic laws should be obe
Probability: 1/40320
Enter sentence 4: She let the balloon float up into the air wit
Probability: 1/1814400
Enter sentence 5: No matter how beautiful the sunset it saddene
Probability: 1/40320
*/



/*
এটি হলো একটি বিন্যাসের সমস্যা যেখানে কিছু আইটেম একই রকম। সাধারণ বিন্যাসের সূত্রটি ব্যবহার করা হয় যদি সবগুলো আইটেম আলাদা হতো, তবে যেহেতু কিছু আইটেম একই রকম, আমরা repetition বিন্যাসের সূত্র ব্যবহার করব:

সূত্র:n! / p1!*p2!*....*pk!

এখানে:
1.n হলো মোট আইটেমের সংখ্যা।
2.p1!*p2!*....*p হলো কতগুলো আইটেম একই রকম।

ধাপ ১: মোট বলের সংখ্যা
নীল বলের সংখ্যা = ৩
সাদা বলের সংখ্যা = ২
লাল বলের সংখ্যা = ৪
সবুজ বলের সংখ্যা = ১
মোট বলের সংখ্যা n=3+2+4+1=10

ধাপ ২: সূত্রে প্রয়োগ করা
Number of ways= 10! / 3!×2!×4!×1!

এখন 10!,3!, 2!, 4! এবং 1!-এর মান বের করি:
        10!=10×9×8×7×6×5×4×3×2×1=3,628,800
        3!=3×2×1=6
        2!=2×1=2
        4!=4×3×2×1=24
        1!=1
        
ধাপ ৩: সংখ্যা গণনা
    Number of ways= 3,628,800/(6×2×24×1)
                  = 3,628,800/288
                  =12,600
                  
উত্তর:সবগুলো বল 12,600 উপায়ে সাজানো যাবে
*/



/*
#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;  
    }
    return fact;
}

int main() {
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;  
    cin.ignore(); 

    for (int i = 0; i < T; i++) {
        string sentence;
        cout << "Enter sentence " << i + 1 << ": ";
        getline(cin, sentence);

        stringstream ss(sentence);
        string word;
        int word_count = 0;
       
        map<string, int> word_count_map;

        while (ss >> word) {
            word_count++;
            word_count_map[word]++;
        }

        int fact = factorial(word_count);

        for (auto &entry : word_count_map) {
            // cout << entry.first << " : " << entry.second << endl;  // Print each word and its count
            fact = fact / factorial(entry.second); 
        }
        cout << "Probability: 1/" << fact << endl;
    }
    return 0;
}
*/
