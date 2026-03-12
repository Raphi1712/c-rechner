// ConsoleApplication1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

/*
current operator: -
change operator: :/
to exit: ex
for help: help
-------------------
type input:33         <--- user input

current result: 33 

type input:5         <--- user input

current result: 28

type input::+         <--- user input

operator changed to: +

type input:3         <--- user input

current result: 31

type input:help       <--- user input

current operator: +
change operator: :/
to exit: ex
for help: help
-------------------

type input: bla       <--- user input

Invalid input. Please enter a valid number.

type input:
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "current operator: +\nchange operator: :beliebiges Zeichen\nto exit: ex\nfor help: help\n-------------------\n";
	string currentOperator = "+";
	double zahl1 = 0;
	double result = 0;
	string commands = "";
	while (true) {
		cout << "\ntype input:";
		cin >> zahl1;
		if (currentOperator == "+") {
			result = result += zahl1;
		}
		else if (currentOperator == "-") {
			result = result -= zahl1;
		}
		else if (currentOperator == "*") {
			result = result *= zahl1;
		}
		else if (currentOperator == "/") {
			if (zahl1 != 0) {
				result = result /= zahl1;
			} 
			else {
				cout << "\nError: Division by zero is not allowed.";
				continue; // Skip the rest of the loop and prompt for input again
			}
		}
		 else {
			 cout << "\nInvalid operator. Please enter a valid operator.";
			 continue; // Skip the rest of the loop and prompt for input again
		}
		cout << "\nresult:" << result;
		cout << "\ntype commants if needed:";
		cin >> commands;
		if (commands == "ex") {
			return 0;
		}else if(commands == "help") {
			cout << "-------------------------- \ncurrent operator: " << currentOperator << "\nchange operator: :*beliebiges Zeichen*\nto exit: ex\nfor help: help\n-------------------\n";
		}else if(commands == "-") {
			currentOperator = "-";
			cout << "\noperator changed to: " << currentOperator;
		}
		 else if (commands == "/") {
			currentOperator = "/";
			cout << "\noperator changed to: " << currentOperator;
		}
		 else if (commands == "*") {
			currentOperator = "*";
			cout << "\noperator changed to: " << currentOperator;
		}
		 else if (commands == "+") {
			currentOperator = "+";
			cout << "\noperator changed to: " << currentOperator;
		}
		 else {
			 cout << "\nInvalid command. Please enter a valid command.";
		}
	
	}
	// Gültige Zahl
}
//stod(string)
/*
Gesamtlaenge 0
gebe zahl ein: 1
Gesamtlaenge 1
gebe zahl ein: 22
Gessamtlaenge 23
gebe zahl ein: -4
Gesamtlaenge 19
gebe zahl ein: ...
*/
// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"
// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt sprräter erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.