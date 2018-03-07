province = {
	id = 457
	anti_air = 2

	air_base = {
		size = 8
		current_size = 8
		}
	}

province = { id = 456 ic = 2 }
province = { id = 497 ic = 2 }
province = { id = 457 ic = 2 }


country = {
    tag = HUN

    regular_id = AUS

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 1
        free_market = 4
        freedom = 3
        professional_army = 3
        defense_lobby = 7
        interventionism = 8
    }

  SpyInfo                = { country = "HUN" NumberOfSpies = 7 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 8 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 5 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 6 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 6 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 3 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 6 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
	headofstate = { type = 9 id = 21001 }
	headofgovernment = { type = 9 id = 21002 }
 	foreignminister = { type = 9 id = 21003 }
 	armamentminister = { type = 9 id = 21004 }
 	ministerofsecurity = { type = 9 id = 21005 }
 	ministerofintelligence = { type = 9 id = 21006 }
 	chiefofstaff = { type = 9 id = 21007 }
 	chiefofarmy = { type = 9 id = 21008 }
 	chiefofnavy = { type = 9 id = 21009 }        
 	chiefofair = { type = 9 id = 21010 }
dormant_leaders        = { 
 44640 44641 44642 44643 44644 44645 44646 44647 44648 44649
 44650 44651 44652 44653 44654 44655 44656 44657 44658 44659
 44660 44661 44662 44663 44664 44665 44666 44667 44668 44669
 44670
 44671	#Rehal
}
	manpower = 150
	capital = 457

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money	=	10

    ownedprovinces =      {
    	456 457 458 491 492 497
	}
    controlledprovinces = {
		456 457 458 491 492 497
	}
    nationalprovinces =   {
		456 457 458 491 492 497
	#Claim on Romania
	428 496 498
	#Claim on Czecho-Slovakia
	476 477 478 490 499
	#Claim on Yugoslavia
	493 
	}

diplomacy = {
relation = { tag = AUS value = 100 guaranteed = { day = 17 month = march year = 1934 } }
relation = { tag = CZE value = -50 }
relation = { tag = ENG value = -50 }
relation = { tag = FIN value = 75 }
relation = { tag = FRA value = -70 }
relation = { tag = GER value = 100 }
relation = { tag = IRE value = 25 }
relation = { tag = ITA value = 125 }
relation = { tag = POL value = 50 }
relation = { tag = ROM value = 1 }
relation = { tag = YUG value = 80 }
}

	# Eastern Minor Tech '36
	techapps = {
# Group C 1936 techs
#######################

4010 4020 # Early fighter

4120 # GW Bomber

2150 # Basic Armoured Car

2010 2020 # GW tank and tankette

2290 2300 2310 # GW artillery

2450 2460 # Early Static AA
2400
2510 # Basic AA

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

9010 # Air Superiority doctrine

5010 5020 # Mechanized Agriculture
5080 5090 # Construction 
5190 # Basic Oil Refining




6010 6020 # Superior Firepower
	}

	landunit = {
	id = { type = 20500 id = 1 }
	name = "É}ÉWÉÉÅ[ÉãåR"
	location = 457

		division = {
		id = { type = 20500 id = 2 }
		name = "ëÊ6ï‡ï∫étíc"
		strength = 100
		type = infantry
		extra = artillery
		}

		division = {
		id = { type = 20500 id = 3 }
		name = "ëÊ7ï‡ï∫étíc"
		strength = 100
		type = infantry
		}

		division = {
		id = { type = 20500 id = 4 }
		name = "ëÊ10ï‡ï∫étíc"
		strength = 100
		type = infantry
		extra = anti_tank
		}
		}

	landunit = {
	id = { type = 20500 id = 5 }
	name = "ëÊ1ê≥ãKåR"
	location = 457

		division = {
		id = { type = 20500 id = 6 }
		name = "ëÊ12ï‡ï∫étíc"
		strength = 100
		type = infantry
		}
	
		division = {
		id = { type = 20500 id = 7 }
		name = "ëÊ13ï‡ï∫étíc"
		strength = 100
		type = infantry
		}
	
		division = {
		id = { type = 20500 id = 8 }
		name = "ëÊ16ï‡ï∫étíc"
		strength = 100
		type = infantry
		}
		}

	landunit = {
	id = { type = 20500 id = 9 }
	name = "ëÊ2ê≥ãKåR"
	location = 457

		division = {
		id = { type = 20500 id = 10 }
		name = "ëÊ20ï‡ï∫étíc"
		strength = 100
		type = infantry
		extra = anti_air
		}

		division = {
		id = { type = 20500 id = 11 }
		name = "ëÊ24ï‡ï∫étíc"
		strength = 100
		type = infantry
		}

		division = {
		id = { type = 20500 id = 12 }
		name = "ëÊ25ï‡ï∫étíc"
		strength = 100
		type = infantry
		}
	}

	airunit = {
		id = { type = 20500 id = 13 }
		name = "ëÊ1ãÛåR"
		location = 457
		base = 457

		division = {
		id = { type = 20500 id = 14 }
		name = "ëÊ1êÌì¨çqãÛåQ"
		type = interceptor
		model = 0
		strength = 30
		}

		division = {
		id = { type = 20500 id = 15 }
		name = "ëÊ1êÌì¨îöåÇçqãÛåQ"
		type = tactical_bomber
		model = 0
		strength = 30
		}
		}
}




