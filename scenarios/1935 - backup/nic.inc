
##############################
# Country definition for NIC #
##############################

province =
{ id         = 539
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Managua

#####################
# Country main data #
#####################

country =
{ tag                    = NIC
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 539
  manpower               = 5
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 4
    defense_lobby     = 8
    interventionism   = 8
  }
  nationalprovinces      = { 539 }
  ownedprovinces         = { 539 }
  controlledprovinces    = { 539 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "NIC" NumberOfSpies = 2 }
  SpyInfo                = { country = "COS" NumberOfSpies = 3 }
  SpyInfo                = { country = "DOM" NumberOfSpies = 3 }
  SpyInfo                = { country = "SAL" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 48001 }
  headofgovernment       = { type = 9 id = 48002 }
  foreignminister        = { type = 9 id = 48003 }
  armamentminister       = { type = 9 id = 48004 }
  ministerofsecurity     = { type = 9 id = 48005 }
  ministerofintelligence = { type = 9 id = 48006 }
  chiefofstaff           = { type = 9 id = 48007 }
  chiefofarmy            = { type = 9 id = 48008 }
  chiefofnavy            = { type = 9 id = 48009 }
  chiefofair             = { type = 9 id = 48010 }
  landunit =
  { id       = { type = 11600 id = 45 }
    name     = "�j�J���O�A���ƌx����"
    location = 539
    division =
    { id       = { type = 11600 id = 4500 }
      name     = "�哝�̐e�q��"
      strength = 60
      type     = infantry
      extra    = anti_air
    }
  }
}
