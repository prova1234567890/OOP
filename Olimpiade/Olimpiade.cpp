
#include "Olimpiade.h"

/*
Restituire la nazione che ha speso meno. Ogni nazione paga i suoi atleti come segue:
- 10.000 Euro per ogni medaglia di bronzo,
- 15.000 Euro per ogni medaglia di argento,
- 20.000 Euro per ogni medaglia di oro.

In caso siano presenti due o piu' nazioni con la stessa spesa minima restituire la seconda in ordine di apparizione nella lista di atleti.

Se non sono presenti atleti, restituire "-1".

*/
string Olimpiade::metodo1()
{
	if (atleti.empty())
		return "-1";
	string nazioneMin;
	int sommaMin = 99999999999, sommaTemp = 0;
	for (list<Atleta>::iterator it = atleti.begin(); it != atleti.end(); it++) {
		for (list<Atleta>::iterator i = atleti.begin(); i != atleti.end(); i++) {
			if ((*it).getNazione() == (*i).getNazione())
				sommaTemp += (((*i).getNumeroBronzi() * 10)+((*i).getNumeroArgenti() * 15) + ((*i).getNumeroOri() * 20));
		}
		if (sommaTemp <= sommaMin) {
			sommaMin = sommaTemp;
			nazioneMin = (*it).getNazione();
		}
		sommaTemp = 0;
	}
	return nazioneMin;
}

/*
Sia X il numero di ori vinti dal terzo atleta presente nella lista atleti

Sia N_ori il numero di ori, N_argenti il numero di argenti, N_bronzi il numero di bronzi,
vinti dagli atleti di una nazione, tale nazione si definisce vittoriosa se:
N_ori > N_argenti > N_bronzi
ed inoltre, N_ori > X.

Restituire il numero di nazioni vittoriose.

Se non sono presenti atleti oppure ne sono presenti meno di 3, restituire -1.


*/
int Olimpiade::metodo2()
{
	if(atleti.size()<3)
		return -1;
	int X = 0, nVit = 0,NO=0,NA=0,NB=0;
	list<string>Nazion;
	list<Atleta>:: iterator it = atleti.begin();
	it++;
	it++;
	it++;
	X=(*it).getNumeroOri();
	for (list<Atleta>::iterator i = atleti.begin(); i != atleti.end(); i++) {
		for (list<Atleta>::iterator iter = atleti.begin(); iter != atleti.end(); iter++) {
			if ((*i).getNazione() == (*iter).getNazione()) {
				NO += (*iter).getNumeroOri();
				NA += (*iter).getNumeroArgenti();
				NB += (*iter).getNumeroBronzi();
			}
		}
		if (NO > NA > NB&&NO > X)
				nVit++;
	}
	return nVit;
}

/*
Creare una lista di nazioni ordinate in ordine descrescente in base al punteggio ottenuto, e a parita' di punteggio in ordine alfabetico.

Sia N_ori il numero di ori, N_argenti il numero di argenti, N_bronzi il numero di bronzi,
vinti dagli atleti di una nazione, il punteggio ottenuto da questa nazione e' calcolato come:
N_ori * 3 + N_argenti * 2 + N_bronzi

Restituire la nazione in ultima posizione nella lista cosi' ottenuta.

Se non sono presenti atleti, restituire "-1".

ATTENZIONE: Non modificare la lista atleti.

*/
string Olimpiade::metodo3()
{
	if(atleti.empty())
		return "-1";
	int pTemp = 0, pMax = 99999999999;
	string Naz;
	for (list<Atleta>::iterator it = atleti.begin(); it != atleti.end(); it++) {
		for (list<Atleta>::iterator i = atleti.begin(); i != atleti.end(); i++) {
			if ((*it).getNazione() == (*i).getNazione())
				pTemp += (*i).getNumeroOri() * 3 + (*i).getNumeroArgenti() * 2 + (*i).getNumeroBronzi();
		}
		if (pTemp < pMax) {
			pMax = pTemp;
			Naz = (*it).getNazione();
		}
		if (pTemp == pMax && (*it).getNazione() < Naz)
			Naz = (*it).getNazione();

		pTemp = 0;
		

	}
	return Naz;
}

/*
Sia N la nazione con il maggior numero di atleti (In caso di piu` nazioni si consideri la prima in ordine alfabetico).
Restituire il nome dell'atleta meno giovane appartenente alla nazione N (In caso di piu` atleti si consideri il primo in ordine alfabetico).

Se non sono presenti atleti, restituire "-1".

*/
string Olimpiade::metodo4()
{
	if(atleti.empty())
		return "-1";
	string N,Vecchio;
	int NMag=0,etaMag=0,NTemp=0;
	for (list<Atleta>::iterator it = atleti.begin(); it != atleti.end(); it++) {
		for (list<Atleta>::iterator i = atleti.begin(); i != atleti.end(); i++) {
			if ((*it).getNazione() == (*i).getNazione())
				NTemp++;

		}
		if (NTemp > NMag) {
			NMag = NTemp;
			N = (*it).getNazione();}
		if (NTemp == NMag&& (*it).getNazione()<N)
			N = (*it).getNazione();

		NTemp = 0;
		}
	for (list<Atleta>::iterator it = atleti.begin(); it != atleti.end(); it++) {
		if ((*it).getNazione() == N&&(*it).getEta() > etaMag)
		{
			etaMag = (*it).getEta();
			Vecchio = (*it).getAtleta();
		}
		if ((*it).getNazione() == N&&(*it).getEta() == etaMag&&(*it).getAtleta()<Vecchio)
			Vecchio = (*it).getAtleta();
		}
	
	return Vecchio;
}
		




