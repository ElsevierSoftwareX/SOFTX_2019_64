//*******************************************************************************************//
//* TWINKLE																				 	*//
//* Version: 0.2																		 	*//
//* copyright (c) 2018 Instituto Tecnol�gico de Arag�n (ITAINNOVA) (Espa�a)				 	*//
//* Date: 4 December 2018																 	*//
//* Author: Instituto Tecnol�gico de Arag�n (ita@itainnova.es) - R.Rodr�guez and V.Zambrano *//
//* All rights reserved																	 	*//
//*******************************************************************************************//

#pragma once
#ifndef H__TERM__H
#define H__TERM__H

#include "f1D.h"

// class Term description
class ROM::Term
{
	friend class Twinkle;

private:
	Term(std::vector<std::vector<double>>, double, int);
	Term();

	double evalTerm(std::vector<double>);
	double evalUnweightTerm(std::vector<double>);

	double m_alpha;
	std::vector<f1D> m_fnD;
};

#endif // !H__TERM__H
