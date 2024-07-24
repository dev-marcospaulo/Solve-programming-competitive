#include <bits/stdc++.h>


using namespace std;

struct Ponto {
    double x, y;
};

double distancia(Ponto a, Ponto b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

double diametroMinimo(vector<Ponto> furos) {
    sort(furos.begin(), furos.end(),  {
        return a.x < b.x || (a.x == b.x && a.y < b.y);
    });

    double diametro = 0;
    for (int i = 0; i < furos.size(); i++) {
        for (int j = i + 1; j < furos.size() && (furos[j].x - furos[i].x) < diametro; j++) {
            if (distancia(furos[i], furos[j]) > diametro) {
                diametro = distancia(furos[i], furos[j]);
            }
        }
    }

    return diametro + 5; // Adiciona o diâmetro do eixo
}

int main() {
    vector<Ponto> furos = { /* insira as coordenadas dos furos aqui */ };
    int a,b,x;

    while(1){
        cin >> x;

        if(!x) return;
        furos.clear();
        while(x--){
            cin >> a >> b;
            Ponto l;
            l.x = a;
            l.y;
            furos.push_back(l);

        }
        cout << diametroMinimo(furos)  << endl;

    }
    
    return 0;
}
