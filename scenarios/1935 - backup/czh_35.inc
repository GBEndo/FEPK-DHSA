province = {
	id = 469
	anti_air = 2
	air_base = {
		size = 3
		current_size = 3
		}
	}

province = {
	id = 476
	anti_air = 2
	air_base = {
		size = 1
		current_size = 1
		}
	}


province = {	id = 472	landfort = 8	}
province = {	id = 471	landfort = 8	}
province = {	id = 466	landfort = 8	}
province = {	id = 467	landfort = 8	}

#Anti Aircraft Batteries
province = { id = 470   anti_air = 2 } #Plzen
province = { id = 475   anti_air = 2 } #Slavkov/Brno

province = { id = 476 ic = 5 }
province = { id = 490 ic = 3 }

country = {
    tag = CZE

    regular_id = AUS

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 9
        political_left = 3
        free_market = 9
        freedom = 8
        professional_army = 5
        defense_lobby = 9
        interventionism = 5
    	}
  SpyInfo                = { country = "CZE" NumberOfSpies = 7 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 8 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 6 }
  SpyInfo                = { country = "POL" NumberOfSpies = 6 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 6 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 6 }
	headofstate = { type = 9 id = 24001 }
	headofgovernment = { type = 9 id = 24002 }
 	foreignminister = { type = 9 id = 24003 }
 	armamentminister = { type = 9 id = 24004 }
 	ministerofsecurity = { type = 9 id = 24005 }
 	ministerofintelligence = { type = 9 id = 24006 }
 	chiefofstaff = { type = 9 id = 24007 }
 	chiefofarmy = { type = 9 id = 24008 }
 	chiefofnavy = { type = 9 id = 24009 }        
 	chiefofair = { type = 9 id = 24010 }
	dormant_ministers      = { 24129 }


	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	manpower = 150

	capital = 469

    ownedprovinces =      {
		471 472 466 467 470 469 468 474 475 478 477 490 499 476
	}
    controlledprovinces = {
		471 472 466 467 470 469 468 474 475 478 477 490 499 476
	}
    nationalprovinces =   {
		471 472 466 467 470 469 468 474 475 478 477 490 499 476
	}

diplomacy = {
relation = { tag = ENG value = 125 }
relation = { tag = FIN value = 50 }
relation = { tag = FRA value = 150 }
relation = { tag = GER value = -25 }
relation = { tag = HUN value = -50 }
relation = { tag = ITA value = 15 }
relation = { tag = POL value = -1 }
relation = { tag = ROM value = 20 }
relation = { tag = SOV value = 100 }
relation = { tag = YUG value = 50 }
}

	# Eastern Minor Tech '36
	techapps = {
# Group C 1936 techs
#######################

4010 4020 # Early fighter

4120 # GW Bomber

2150 # Basic Armoured Car

2010 2020 2030 2040 # Tank

2290 2300 2310 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

1010 # GW infantry
1310 # Engineers
1190 # GW Cavalry

1110 # Early Mountain

9010 # Air Superiority doctrine

5010 5020  # Agriculture 
5080 5090  # Construction 
5190 # Basic Oil Refining

6010 6020 # Superior Firepower
	}


#################################
#Czech army
#################################


	#The 8th Corps, based as reserves in Slovakia
	landunit = {
        id = { type = 23000 id = 1 }
	location = 490
	name = "‘æ8—\”õŒR"

		division = {
	        id = { type = 26000 id = 2 }
		name = "‘æ9Žt’c"
		type = infantry
		strength  = 100
		model = 0 
		}

		division = {
	        id = { type = 26000 id = 3 }
		name = "‘æ15Žt’c"
		type = infantry
		strength  = 100
		model = 0
		}

		division = {
	        id = { type = 26000 id = 4 }
		name = "‘æ21Žt’c"
		type = infantry
		strength  = 100
		model = 0
                extra = anti_air
		}
		}

	#General Reserves, based in Moravia
	landunit = {
        id = { type = 26000 id = 5 }
	location = 467
	name = "’““Ô—\”õŒR"

		division = {
	        id = { type = 26000 id = 6 }
		name = "‘æ1‰õ‘¬Žt’c"
		type = light_armor
		model = 1
		strength  = 100
		}
		
		division = {
	        id = { type = 26000 id = 7 }
		name = "‘æ4Žt’c"
		type = infantry
		strength  = 100
		model = 0
                extra = artillery
		}

		division = {
	        id = { type = 26000 id = 8 }
		name = "‘æ12Žt’c"
		type = infantry
		strength  = 100
		model = 0
		}

		division = {
	        id = { type = 26000 id = 9 }
		name = "‘æ13Ž©“®ŽÔ‰»Žt’c"
		type = infantry
		model = 1
		extra = armored_car
		}

		division = {
	        id = { type = 26000 id = 10 }
		name = "‘æ16Žt’c"
		type = infantry
		strength  = 100
		model = 0
		}

		division = {
	        id = { type = 26000 id = 11 }
		name = "‘æ22Žt’c"
		type = infantry
		strength  = 100
		model = 0
		}
		}


    #1st Army - in Bohemia
	landunit = {
        id = { type = 26000 id = 12 }
	location = 471
	name = "‘æ1ŒR"

		division = {
	        id = { type = 26000 id = 13 }
		name = "‘æ18Žt’c"
		type = infantry
		strength  = 100
		model = 0
		}

		division = {
	        id = { type = 26000 id = 14 }
		name = "‘æ2Žt’c"
		type = infantry
		strength  = 100
		model = 0
		}

		division = {
	        id = { type = 26000 id = 15 }
		name = "‘æ5Žt’c"
		type = infantry
		strength  = 100
		model = 0
                extra = artillery
		}

		division = {
	        id = { type = 26000 id = 16 }
		name = "‘æ3Žt’c"
		type = infantry
		strength  = 100
		model = 0
		}

		division = {
	        id = { type = 26000 id = 17 }
		name = "‘æ17Žt’c"
		type = infantry
		strength  = 100
		model = 0 
		}
		}

	# 2nd Army - N-Moravia
	landunit = {
        id = { type = 26000 id = 18 }
	location = 472
	name = "‘æ2ŒR"

		division = {
	        id = { type = 26000 id = 19 }
		name = "‘æ1ŽRŠx—·’c"
		type = bergsjaeger
		strength  = 100
		model = 0
		}

		division = {
	        id = { type = 26000 id = 20 }
		name = "‘æ7Žt’c"
		type = infantry
		strength  = 100
		model = 0
		}
		}

	# 4th Army - Slovakia
	landunit = {
        id = { type = 26000 id = 21 }
		location = 477
		name = "‘æ4ŒR"

		division = {
	        id = { type = 26000 id = 22 }
		name = "‘æ3‰õ‘¬Žt’c"
		type = light_armor
		model = 1
		strength  = 100
		}

		division = {
	        id = { type = 26000 id = 23 }
		name = "‘æ10Žt’c"
		type = infantry
		strength  = 100
		model = 0
		}

		division = {
	        id = { type = 26000 id = 24 }
		name = "‘æ11Žt’c"
		type = infantry
		strength  = 100
		model = 0
                extra = anti_air
		}
		}

	# 3rd Army - S-Morawia
	landunit = {
        id = { type = 26000 id = 25 }
	location = 467
	name = "‘æ3ŒR"

		division = {
	        id = { type = 26000 id = 26 }
		name = "‘æ2‰õ‘¬Žt’c"
		type = light_armor
		model = 1
		strength  = 100
		}

		division = {
	        id = { type = 26000 id = 27 }
		name = "‘æ4‰õ‘¬Žt’c"
		type = light_armor
		model = 0
		strength  = 100
		}

		division = {
	        id = { type = 26000 id = 28 }
		name = "‘æ14Ž©“®ŽÔ‰»Žt’c"
		type = infantry
		model = 1
		extra = armored_car
		}

		division = {
	        id = { type = 26000 id = 29 }
		name = "‘æ19Žt’c"
		type = infantry
		strength  = 100
		model = 0
		}

		division = {
	        id = { type = 26000 id = 30 }
		name = "‘æ6Žt’c"
		type = infantry
		strength  = 100
		model = 0
                extra = engineer
		}

		division = {
	        id = { type = 26000 id = 31 }
		name = "‘æ20Žt’c"
		type = infantry
		strength  = 100
		model = 0 
		}
	}



}
