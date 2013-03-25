#pragma once

class C3DMap;

#include <hash_map>

#include "../shared/types.h"
#include "../shared/STLMap.h"
#include "GameDefine.h"
#include "Knights.h"
#include "Npc.h"

typedef CSTLMap <C3DMap>					ZoneArray;
typedef std::map<int, long>					LevelUpArray;
typedef CSTLMap <_CLASS_COEFFICIENT>		CoefficientArray;
typedef CSTLMap <_ITEM_TABLE>				ItemtableArray;
typedef CSTLMap <_MAGIC_TABLE>				MagictableArray;
typedef CSTLMap <_MAGIC_TYPE1>				Magictype1Array;
typedef CSTLMap <_MAGIC_TYPE2>				Magictype2Array;
typedef CSTLMap <_MAGIC_TYPE3>				Magictype3Array;
typedef CSTLMap	<_MAGIC_TYPE4>				Magictype4Array;
typedef CSTLMap <_MAGIC_TYPE5>				Magictype5Array;
typedef CSTLMap <_MAGIC_TYPE6>				Magictype6Array;
typedef CSTLMap <_MAGIC_TYPE7>				Magictype7Array;
typedef CSTLMap <_MAGIC_TYPE8>				Magictype8Array; 
typedef CSTLMap <_MAGIC_TYPE9>				Magictype9Array;
typedef CSTLMap <CNpc>						NpcArray;
typedef CSTLMap <_PARTY_GROUP>				PartyArray;
typedef CSTLMap <CKnights>					KnightsArray;
typedef CSTLMap <_KNIGHTS_RATING>			KnightsRatingArray;
typedef CSTLMap <_KNIGHTS_ALLIANCE>			KnightsAllianceArray;
typedef CSTLMap <_ZONE_SERVERINFO>			ServerArray;
typedef CSTLMap <_KNIGHTS_CAPE>				KnightsCapeArray;
typedef CSTLMap <_HOME_INFO>				HomeArray;
typedef CSTLMap <_START_POSITION>			StartPositionArray;
typedef	CSTLMap	<_SERVER_RESOURCE>			ServerResourceArray;
typedef	CSTLMap	<_QUEST_HELPER>				QuestHelperArray;
typedef	CSTLMap	<_QUEST_MONSTER>			QuestMonsterArray;
typedef	CSTLMap	<_RENTAL_ITEM>				RentalItemArray;
typedef CSTLMap <_ITEM_EXCHANGE>			ItemExchangeArray;

typedef stdext::hash_map<std::string, _USER_RANK *>		UserRankMap; 

typedef std::pair<uint8, uint16>			NpcTrapPair;
typedef std::map<NpcTrapPair, int32>		EventTriggerArray;

typedef std::vector<_QUEST_HELPER *>		QuestHelperList;
typedef std::map<uint16, QuestHelperList>	QuestNpcList;