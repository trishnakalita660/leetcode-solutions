#include <iostream>
#include <string>

// C++11 lest unit testing framework
#include "lest.hpp"

using namespace std;

void reverseWords(string& message)
{
    // decode the message by reversing the words
    
    int start=0;
    for(int end =0;end<message.length();end++ ){
        if(message[end]==' '){
            reverse(message.begin()+start,message.begin()+end);
            start=end+1;
        }
    }
    //reverse the last word
    reverse(message.begin()+start,message.end());
 
 //reverse the string
 reverse(message.begin(),message.end());

}


















// tests

const lest::test tests[] = {
    {CASE("one word") {
        const string expected = "vault";
        string actual = "vault";
        reverseWords(actual);
        EXPECT(actual == expected);
    }},
    {CASE("two words") {
        const string expected = "cake thief";
        string actual = "thief cake";
        reverseWords(actual);
        EXPECT(actual == expected);
    }},
    {CASE("three words") {
        const string expected = "get another one";
        string actual = "one another get";
        reverseWords(actual);
        EXPECT(actual == expected);
    }},
    {CASE("multiple words same length") {
        const string expected = "the cat ate the rat";
        string actual = "rat the ate cat the";
        reverseWords(actual);
        EXPECT(actual == expected);
    }},
    {CASE("multiple words different lengths") {
        const string expected = "chocolate bundt cake is yummy";
        string actual = "yummy is cake bundt chocolate";
        reverseWords(actual);
        EXPECT(actual == expected);
    }},
    {CASE("empty string") {
        const string expected;
        string actual;
        reverseWords(actual);
        EXPECT(actual == expected);
    }}
};

int main(int argc, char** argv)
{
    return lest::run(tests, argc, argv);
}