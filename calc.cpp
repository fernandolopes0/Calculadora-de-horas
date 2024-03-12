#include <iostream>

using namespace std;

int main()
{
    int h = 1, h2 = 0;
    int m = 1, m2 = 0;
    int s = 1, s2 = 0;
    int dia = 0;
    string teste;

    cout << "Digite hora, minuto e segundos inicias:\n";
    cin >> h2;
    cin >> m2;
    cin >> s2;

    while (h != 0 && m != 0 && s != 0)
    {
        cout << "Digite hora, minuto e segundos a somar:\n";
        cin >> h;
        cin >> m;
        cin >> s;

        h2 = h2 + h;
        m2 = m2 + m;
        s2 = s2 + s;

        if (h2 > 23)
        {
            dia = dia + 1;
            h2 = h2 - 24;
        }
        if (s2 > 59)
        {
            s2 = s2 - 60;
            m2 = m2 + 1;
        }
        if (m2 > 59)
        {
            m2 = m2 - 60;
            h2 = h2 + 1;
        }

        cout << "\n Dias: " << dia;
        cout << "\n Horas: " << h2;
        cout << "\n Minutos: " << m2;
        cout << "\n Segundos: " << s2 << endl;
    }
}