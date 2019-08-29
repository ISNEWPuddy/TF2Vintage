#ifndef TF_FUNC_HINT_H
#define TF_FUNC_HINT_H
#ifdef _WIN32
#pragma once
#endif


class CTFBotHint : public CBaseEntity
{
	DECLARE_CLASS( CTFBotHint, CBaseEntity );
public:
	CTFBotHint();
	virtual ~CTFBotHint();

	DECLARE_DATADESC();
	
	virtual void Spawn(void);
	virtual void UpdateOnRemove(void);
	
	void InputEnable( inputdata_t& inputdata );
	void InputDisable( inputdata_t& inputdata );
	
	bool IsFor( CTFBot *bot ) const;
	
private:
	void UpdateNavDecoration();
	
	int m_team;
	int m_hint;
	bool m_isDisabled;
};

#endif