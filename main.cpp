#include <iostream>
#include "Trie.h"

using namespace std;

int main() {
    auto root = getNewNode();
    insert(root, "hello");
    insert(root, "dog");
    insert(root, "hell");
    insert(root, "cat");
    insert(root, "a");
    insert(root, "hel");
    insert(root, "help");
    insert(root, "helps");
    insert(root, "helping");

    cout << "[AUTOCOMPLETE PROGRAM]" << endl;
    cout << "[AVAILABLE ACTIONS]" << endl;
    cout << "ENTER WORD — show suggestions" << endl;
    cout << "ENTER + BEFORE THE WORD — add the word to the dictionary" << endl;
    cout << "ENTER 0 or /q — exit\n" << endl;

    string inp;
    while (true) {
        cout << "Please enter text..." << endl;
        cin >> inp;
        if (inp == "0" || inp == "/q") {
            exit(EXIT_SUCCESS);
        }
        if (!inp.empty() && inp[0] == '+') {
            inp.erase(0,1);
            insert(root,inp);
            cout << "Added " << inp << endl;
        } else {
            showSuggestions(root, inp);
        }
    }

}
