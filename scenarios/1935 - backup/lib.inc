
##############################
# Country definition for LIB #
##############################

province =
{ id         = 992
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
}              # ���������B�A

#####################
# Country main data #
#####################

country =
{ tag                    = LIB
  puppet                 = USA
  control                = USA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 992
  manpower               = 7
  diplomacy =
  { relation = { tag = PHI value = 200 }
    relation = { tag = USA value = 200 }
  }
  nationalprovinces      = { 992 }
  ownedprovinces         = { 992 }
  controlledprovinces    = { 992 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  SpyInfo                = { country = "LIB" NumberOfSpies = 1 }
  headofstate            = { type = 9 id = 69001 }
  headofgovernment       = { type = 9 id = 69002 }
  foreignminister        = { type = 9 id = 69003 }
  armamentminister       = { type = 9 id = 69004 }
  ministerofsecurity     = { type = 9 id = 69005 }
  ministerofintelligence = { type = 9 id = 69006 }
  chiefofstaff           = { type = 9 id = 69007 }
  chiefofarmy            = { type = 9 id = 69008 }
  chiefofnavy            = { type = 9 id = 69009 }
  chiefofair             = { type = 9 id = 69010 }
  landunit =
  { location = 992
    id       = { type = 25500 id = 1 }
    name     = "���x���A�R"
    division =
    { id       = { type = 25000 id = 2 }
      name     = "���a����1�h�q�t�c"
      type     = infantry
      extra    = artillery
      strength = 100
    }
    division =
    { id       = { type = 25500 id = 3 }
      name     = "���a����2�h�q�t�c"
      type     = infantry
      strength = 100
    }
  }
}
