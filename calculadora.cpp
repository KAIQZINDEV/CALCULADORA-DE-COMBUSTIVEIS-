#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double gasolina = 6.53;
    double etanol = 4.04;
    double diesel = 6.97;

    int opcao;

    double valor;
    double litros;

    cout << "==============================\n";
    cout << "   CALCULADORA DE COMBUSTIVEL\n";
    cout << "==============================\n\n";

    cout << "1 - Gasolina (R$ "
         << gasolina << "/L)\n";

    cout << "2 - Etanol (R$ "
         << etanol << "/L)\n";

    cout << "3 - Diesel S-10 (R$ "
         << diesel << "/L)\n\n";

    cout << "Escolha o combustivel: ";
    cin >> opcao;

    double preco;

    switch (opcao) {

        case 1:
            preco = gasolina;
            break;

        case 2:
            preco = etanol;
            break;

        case 3:
            preco = diesel;
            break;

        default:
            cout << "Opcao invalida!\n";
            return 0;
    }

    cout << "\nDigite o valor em reais: R$ ";
    cin >> valor;

    if (valor <= 0) {

        cout << "Valor invalido!\n";

        return 0;
    }

    litros = valor / preco;

    cout << fixed << setprecision(2);

    cout << "\n==============================\n";

    cout << "Voce pode abastecer: "
         << litros
         << " litros\n";

    cout << "Preco por litro: R$ "
         << preco
         << "\n";

    cout << "Valor gasto: R$ "
         << valor
         << "\n";

    cout << "==============================\n";

    return 0;
}
