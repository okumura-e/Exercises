// Entry: number of films; title and year of release of each film.
// Processing: ordering films ascending by release year.
// Output: list of films, with title and year of release sorted in ascending order.

#include <iostream>
using namespace std;

struct cine{
    string title;
    int year;
};

int main()
{
    cout << "how many movies do you want to insert? " << endl;
    int i, j, a, N; cin >> N;
    string d;
    cine movie[N];
    cout << "\nInsert now the title and year of them:\n" << endl;
    for(i = 0; i < N; i++)
    {
        cin.ignore();
        getline(cin,movie[i].title);
        cin >> movie[i].year;
    };
    
    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(movie[i].year > movie[j].year)
            {
                a = movie[i].year;
                movie[i].year = movie[j].year;
                movie[j].year = a;
                d = movie[i].title;
                movie[i].title = movie[j].title;
                movie[j].title = d; 
            }
        }
    };
    cout << "\nthese are the movies:\n" << endl;
    for(i = 0; i < N; i++)
    {
        cout << movie[i].title << " - " << movie[i].year << endl;
    };
}
