#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

struct book
{
    string author, title;
    bool available;

    inline bool operator<(const book & other) const {
        if (author != other.author)
            return author < other.author;

        return author < other.author;
    }
};

void ReadBooks(vector <book> &);
void printAllBooks(vector <book> &);void showstack(stack <int>);

int  main() {
    fast; 
    vector <book> allBooks;
    ReadBooks(allBooks);
    sort(allBooks.begin(), allBooks.end());

    map <string, int> positionInAllBooks;
    for (int i = 0; i < allBooks.size(); i++) 
        positionInAllBooks[allBooks[i].title] = i;

    vector <bool> borrowed (allBooks.size(), false);
    vector <bool> returned (allBooks.size(), false);
    
    string command, title;

    while (cin >> command, command != "END")
    {
        if (command == "BORROW") 
        {
            cin.ignore();
            getline(cin, title);
            cout << title << '\n';
        }
    }
    

    return 0;   
}

void ReadBooks(vector <book> & allBooks) {
    string temp, title;
    book currentBook;

    while (getline(cin, temp), temp != "END")
    {
        currentBook.title = "";
        currentBook.author = "";
        string::iterator it = temp.begin();


        while (++it < temp.end())
        {
            if (*it == '"')
                break;
            else 
                currentBook.title += *it;
        }
        
        it += 4;

        while (++it <= temp.end())
        {
            currentBook.author += *it;
        }

        currentBook.available = true;
        
        allBooks.push_back(currentBook);        
    }

}


void printAllBooks(vector <book> & allBooks) {
    for (int i = 0; i < allBooks.size(); i++) {
        cout << allBooks[i].author << " - " << allBooks[i].title << "\n";
    }
}

