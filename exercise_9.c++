// Entry: number of films; title and year of release of each film.
// Processing: check which movie is newest and which movie is oldest.
// Output: Newest movie and oldest movie, with title and year of release.

#include <iostream>
using namespace std;

struct cine{
    string title;
    int year;
};

int main()
{
    cout << "how many movies do you want to insert? " << endl;
    int a, N; cin >> N;
    string d;
    cine movie[N];
    cout << "\nInsert now the title and year of them: " << endl;
    for(int i = 0; i < N; i++)
    {
        cin.ignore();
        getline(cin, movie[i].title);
        cin >> movie[i].year;
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = i + 1; j < N; j++)
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
    cout << "\nlatter movie: " << movie[N-1].title << " - " << movie[N-1].year << endl;
    cout << "Mais antigo: " << movie[0].title << " - " << movie[0].year << endl;
}