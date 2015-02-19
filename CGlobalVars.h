#pragma once

#include "SDK.h"

int getOffset_deep(char *szClassName, char *szVariable);
int getOffset_deep_sub(RecvTable* pTable, char *szClassName, char *szVariable);
void DumpTable(RecvTable *pTable, FILE* fp);
int getOffset(char *szClassName, char *szVariable);
void DumpOffset(char* file);
void DumpOffset(FILE *fp);

class CNetworkedVar
{
	FILE *pNetvarLog;

public:

	CNetworkedVar();
	~CNetworkedVar();

	FILE *getFilePtr();
	void dump();
};

class CPlayerVars
{
public:

	void findOffset();

	int m_lifeState;
	int m_iHealth;
	int m_iMaxHealth;
	int m_iHealth_object; // This one is for objects, not for living entities
	int m_iPlayerClass;
	int m_iClass;
	int m_iTeamNum;
	int m_bHasSapper;
	int m_iUpgradeLevel;
	int m_iUpgradeMetal;
	int m_Shared;
	int m_nPlayerCond;
	float m_flPercentageConstructed;
	int m_bBuilding;
	int m_iAmmoShells;
	int m_iState;
	int m_bPlayerControlled;
	int m_iAmmoRockets;
	int m_iAmmoMetal;
	int m_fFlags;
};

class COffsets
{
public:
	DWORD dwWriteUserCmd;
	int iCreateMoveOffset = 21, iWriteUserCmdToBufferOffset = 23, iPaintTraverseOffset = 41;
};


extern CNetworkedVar gNetworkedVar;
extern CPlayerVars gPlayerVars;
extern COffsets gOffsets;