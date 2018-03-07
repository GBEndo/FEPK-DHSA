
##############################
# Country definition for TIB #
##############################

country =
{ tag                    = TIB
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1453
  manpower               = 10
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
free = {
	 ic 		 = 4
	 energy 	 = 10
	 metal	 	 = 5
	 rare_materials	 = 3
}
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # Basic Armoured Car
  techapps               = { 2150 2290 1010 1190 }
  nationalprovinces      = { 1283 1448 1450 1451 1452 1453 1442 1443 1444 1455 1454 1877 1888 }
  SpyInfo                = { country = "TIB" NumberOfSpies = 4 }
  SpyInfo                = { country = "SIK" NumberOfSpies = 3 }
  SpyInfo                = { country = "BHU" NumberOfSpies = 3 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 3 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 3 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "NEP" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 73001 }
  headofgovernment       = { type = 9 id = 73002 }
  foreignminister        = { type = 9 id = 73003 }
  armamentminister       = { type = 9 id = 73004 }
  ministerofsecurity     = { type = 9 id = 73005 }
  ministerofintelligence = { type = 9 id = 73006 }
  chiefofstaff           = { type = 9 id = 73007 }
  chiefofarmy            = { type = 9 id = 73008 }
  chiefofnavy            = { type = 9 id = 73009 }
  chiefofair             = { type = 9 id = 73010 }
  # GW Cavalry
  landunit =
  { location = 1453
    name     = "É`ÉxÉbÉgó§åR"
    id       = { type = 10700 id = 1 }
    division =
    { id    = { type = 10700 id = 2 }
      name  = "ìfîÀëÊ1ét"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 10700 id = 3 }
      name = "êºÂUëÊ10ïîë‡"
      type = militia
    }
    division =
    { id   = { type = 10700 id = 4 }
      name = "êºÂUëÊ17ïîë‡"
      type = militia
    }
  }
}
