/******
*ohjelman nimi: harjoitus 20
*tekij� Markus Malm
*Lyhyt kuvaus:
Kuten harjoitus 19, mutta toteuta kayttaen taulukkoa ja osoitinta
tiedon käsittelyyn

*versio 1.0
*pvm: 19.11.2014
*/
#include <iostream>;
using namespace std;
int main()
{
	int i = 0;
	const int MAX = 6;
	double nopeus[MAX] = { 0, 0, 0, 0, 0 };
	double *n;
	n = nopeus;
	double knopeus = ((nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4]) / 5);
	while (i >= 0){
		for (i = 0; i < 5; i++)
		{
			cout << "Anna nopeus";
			cin >> n[i];
			if (nopeus[i] < 0)
			{
				i = -1;
				break;
			}
			cout << "Nopeus " << nopeus[i] << " km/h => " << ((nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4]) / 5) << endl;
		}


	}

}


