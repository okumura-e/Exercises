// Entry: number of films; title and year of release of each film.
// Output: List of films, with title and year of release.

#include <iostream>
using namespace std;

struct cine {
    string title;
    int year;
};
int main()
{
    cout << "how many movies do you want to insert? " << endl;
    int i, N; cin >> N;
    cine movie[N];
    cout << "insert the title and year of them " << endl;
    for(i = 0; i < N; i++)
    {
        cin.ignore();
        getline(cin, movie[i].title);
        cin >> movie[i].year;
    };
    cout << "these are the movies: " << endl;
    for(i = 0; i < N; i++)
    {
        cout<< movie[i].title;
        cout<< " - " << movie[i].year << endl;
    };
} 

