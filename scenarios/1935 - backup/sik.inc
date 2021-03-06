
##############################
# Country definition for SIK #
##############################

country =
{ tag                    = SIK
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1433 # Urumqi
  manpower               = 200
  dissent                = 30
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
free = {
	 ic 		 = 4
	 energy 	 = 10
	 metal	 	 = 5
	 rare_materials	 = 3
}
  nationalprovinces      = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 1422 1429 }
  ownedprovinces         = { 1435 1445 1447 1421 1432 1433 1446 1430 1431 }
  controlledprovinces    = { 1421 1432 1433 1446 1430 1431 1445 1447 1435 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  diplomacy =
  { relation = { tag = CHC value = 40 }
    relation = { tag = SOV value = 125 }# was access = yes
    relation = { tag = TAN value = 125 }
    relation = { tag = JAP value = -80 }
  }
  SpyInfo                = { country = "SIK" NumberOfSpies = 4 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 3 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 3 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 72001 }
  headofgovernment       = { type = 9 id = 72002 }
  foreignminister        = { type = 9 id = 72003 }
  armamentminister       = { type = 9 id = 72004 }
  ministerofsecurity     = { type = 9 id = 72005 }
  ministerofintelligence = { type = 9 id = 72006 }
  chiefofstaff           = { type = 9 id = 72007 }
  chiefofarmy            = { type = 9 id = 72008 }
  chiefofnavy            = { type = 9 id = 72009 }
  chiefofair             = { type = 9 id = 72010 }
  landunit =
  { location = 1433
    name     = "�V�d�ۈ���"
    id       = { type = 25600 id = 1 }
    division =
    { id   = { type = 25600 id = 2 }
      name = "�V�d��1�t"
      type = infantry
    }
    division =
    { id   = { type = 25600 id = 3 }
      name = "�V�d��7��"
      type = militia
    }
    division =
    { id   = { type = 25600 id = 4 }
      name = "�V�d��8��"
      type = militia
    }
  }
}
