#include <iostream>
using namespace std;
int main()
{
    string name, interest, que;
    cout << "hello! welcome to our book store.My name is chatbot ! what is your name ?" << endl;
    getline(cin, name);
    cout << "nice to meet you! " << name << endl;
    cout << "what kind of book are you interest in?" << endl;
    cout << "1. horror  "
         << "2. fiction  "
         << "3. non fiction  "
         << "4. comics  "
         << "5. holly  "
         << "6. love story  ";
    cout << "type your answer below";
    getline(cin, interest);
    cout << "Great! base on your interest in" << interest << "we recommend you following books";
    {
        if (interest == "horror")
        {
            cout << "for horror book, I recommend 'kanchana' by rutz tate-deshmukh 'To kill harsh because of overflow possessive love'";
        }
        else if (interest == "fiction")
        {
            cout << "for fiction 'pranali the dayan'";
        }
        else if (interest == "non fiction")
        {
            cout << "for non fiction 'vaishi the khatari";
        }
        else if (interest == "comics")
        {
            cout << "for comics meene ye misri lavato";
        }
        else if (interest == "holly")
        {
            cout << "for holly the 'pani the aamba'";
        }
        else if (interest=="love story")
        {
            cout<<"for love story 'the love the end'";
        }
        
    }
    cout<<"Do you have any specific question about these books or anything else? such as "<<endl<<"1. price or 2.recommend ";
    cout<<"please ytpe your related question below";
    getline(cin,que);
    {
        if(que=="price")
        {
            cout<<"price of each book is 199";
        }
        else if(que=="recommend")
        {
            cout<<"based on your interest in "<<interest<<"we offer you 'SVPM love story' by punam 'the love between girl and boy";
        }
        else{
            cout<<"I'm sorry, I dont understand, can you please rephrase?";
        }

    }
    cout<<"Thank you for visiting our book store"<<name<<"have a nice day!";
    cout<<"buy";
    return 0;


}