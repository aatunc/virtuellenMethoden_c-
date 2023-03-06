// virtuellenMethoden_c++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>

using namespace std;

class GeometrischeFigur
{
private:
	string farbe = "";

public:
	void setzfarbe(string neueFarbe) {
		farbe = neueFarbe;
	}
	string holefarbe() {
		return farbe;
	}
	virtual double berechneflaeche(double x, double y) = 0;
};
class Kreis : public GeometrischeFigur {


public: double berechneflaeche(double x, double y)
{
	
		return 3.14 * x * x;
}
};
class Rechtek : public GeometrischeFigur {

public:
	double berechneflaeche(double x, double y) {
		return x * y;
	}
};
int main()
{
	double kreisflaeche, rechtekflaeche;

	GeometrischeFigur* k1, * r1;
	k1 = new Kreis(); 
	k1->setzfarbe("Blau");
	kreisflaeche = k1->berechneflaeche(5, 0);
	r1 = new Rechtek();
	rechtekflaeche = r1->berechneflaeche(2, 2);
	r1->setzfarbe("Rot");
	cout << "KFarbe: " << k1->holefarbe() << ", Kflaeche: " << kreisflaeche << endl;
	cout << "RFarbe: " << r1->holefarbe() << ", Rflaeche: " << rechtekflaeche << endl;
	return 0;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
