#ifndef MODECHOICE_H
#define MODECHOICE_H
/*
-----------------------------------------------------------------------------
 Class: ModeChoice

 Desc: .

 Copyright (c) 2001-2002 by the person(s) listed below.  All rights reserved.
	Chris Danford
-----------------------------------------------------------------------------
*/

#include "Game.h"
#include "Style.h"
#include "GameConstantsAndTypes.h"
#include "PlayerNumber.h"

struct ModeChoice		// used in SelectMode
{
	ModeChoice() { Init(); }
	void Init();

	void Load( int iIndex, CString str );
	void ApplyToAllPlayers();
	void Apply( PlayerNumber pn );
	bool DescribesCurrentMode() const;

	bool		m_bInvalid;
	int			m_iIndex;
	Game		m_game;
	Style		m_style;
	PlayMode	m_pm;
	Difficulty	m_dc;
	CString		m_sAnnouncer;
	CString		m_sName;
};

#endif
