
##############################
# Country definition for ETH #
##############################

country =
{ tag                    = ETH
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1046
  manpower               = 80
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 3
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 2
  }
  nationalprovinces      = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 1033 1038 1039 }
  ownedprovinces         = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 }
  controlledprovinces    = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = IRE value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = 35 }
  }
  SpyInfo                = { country = "ETH" NumberOfSpies = 2 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 8 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 65001 }
  headofgovernment       = { type = 9 id = 65002 }
  foreignminister        = { type = 9 id = 65003 }
  armamentminister       = { type = 9 id = 65004 }
  ministerofsecurity     = { type = 9 id = 65005 }
  ministerofintelligence = { type = 9 id = 65006 }
  chiefofstaff           = { type = 9 id = 65007 }
  chiefofarmy            = { type = 9 id = 65008 }
  chiefofnavy            = { type = 9 id = 65009 }
  chiefofair             = { type = 9 id = 65010 }
  landunit =
  { id       = { type = 31000 id = 1 }
    location = 1046
    name     = "�鍑���R"
    division =
    { id       = { type = 31000 id = 2 }
      name     = "�鍑�e�q��"
      type     = infantry
      strength = 30
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 3 }
      name     = "��1�t�c"
      type     = militia
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 4 }
      name     = "��2�t�c"
      type     = militia
      strength = 70
      model    = 0
    }
  }
  landunit =
  { id       = { type = 31000 id = 5 }
    location = 1052
    name     = "��1�����c"
    division =
    { id       = { type = 31000 id = 6 }
      name     = "��1������"
      type     = militia
      strength = 60
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 7 }
      name     = "��2������"
      type     = militia
      strength = 60
      model    = 0
    }
  }
  landunit =
  { id       = { type = 31000 id = 8 }
    location = 1043
    name     = "��2�����c"
    division =
    { id       = { type = 31000 id = 9 }
      name     = "��3������"
      type     = militia
      strength = 60
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 10 }
      name     = "��4������"
      type     = militia
      strength = 60
      model    = 0
    }
  }
}
