#include <iostream>
#include <string>
int main ()
{
	//declarando as váriaveis
	int Nota1  = 0, Nota2 = 0, Nota3 = 0, media = 0;
	std::string nome = "";

	//inserindo as notas
	std::cout << "insira a primeira nota: \n";
	std::cin >> Nota1;

	std::cout << "insira a segunda nota \n";
	std::cin >> Nota2;

	std::cout << "insira a terceira nota: \n";
	std::cin >> Nota3;

	//inserindo o nome
	std::cin.ignore(); //limpando o buffer para não interferir no que for inserido na string
	std::cout << "insira o nome do aluno: \n";
	std::getline(std::cin, nome); //usando o getline, para que possa ser armazenado o nome, mesmo com espaço

	media = (Nota1 + Nota2+ Nota3)/3; // Cálculo da média

	if (media < 7 ) // verifica se a media foi menor que 7
	{
		std::cout << "o aluno: " << nome << " esta de recuperacao" ; // irá ser exibido se a média for menor que 7		
	}
	else 
	{
		std::cout << "o aluno: " << nome << " esta aprovado "; // irá ser exibido se a média for maior que 7
	}
	return 0;
}
