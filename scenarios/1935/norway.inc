
##############################
# Country definition for NOR #
##############################

province =
{ id          = 107
  anti_air    = 2
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 0
  coastalfort = 3
}               # �I�X��
province =
{ id          = 110
  anti_air    = 2
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 5 current_size = 5 }
  landfort    = 0
  coastalfort = 3
}               # �x���Q��
province = { id = 118 landfort = 0 coastalfort = 2 } # �g�����n�C��
province =
{ id         = 125
  anti_air   = 1
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # �i�����B�N

#####################
# Country main data #
#####################

country =
{ tag                    = NOR
  regular_id             = SCA
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 32
  capital                = 107
  # Norwegian merchant marine is INSANE!
  transports             = 200
  escorts                = 5
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 7
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  SpyInfo                = { country = "NOR" NumberOfSpies = 5 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 8 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 6 }
  SpyInfo                = { country = "POL" NumberOfSpies = 6 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 8 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 6 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 6 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  nationalprovinces      = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  ownedprovinces         = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  controlledprovinces    = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2150 2010 2020 2290 2300 2310 2450 2460 3130 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 6010 6020
                             3010 3070 3250 3400 3410 3470 8020 8040 8050
                           }
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 150 }
    relation = { tag = ENG value = 90 }
    relation = { tag = FIN value = 75 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 75 }
  }
  headofstate            = { type = 9 id = 14001 }
  headofgovernment       = { type = 9 id = 14002 }
  foreignminister        = { type = 9 id = 14003 }
  armamentminister       = { type = 9 id = 14004 }
  ministerofsecurity     = { type = 9 id = 14005 }
  ministerofintelligence = { type = 9 id = 14006 }
  chiefofstaff           = { type = 9 id = 14007 }
  chiefofarmy            = { type = 9 id = 14008 }
  chiefofnavy            = { type = 9 id = 14009 }
  chiefofair             = { type = 9 id = 14010 }
  landunit =
  { location = 107
    name     = "�f���E�m�V���P�R"
    id       = { type = 12600 id = 1 }
    division =
    { id       = { type = 12600 id = 2 }
      name     = "��1�����t�c"
      type     = infantry
      strength = 60
    }
  }
  landunit =
  { location = 125
    name     = "��6����"
    id       = { type = 12600 id = 11 }
    division =
    { id       = { type = 12600 id = 12 }
      name     = "��6�����t�c"
      type     = infantry
      strength = 35
    }
  }
  navalunit =
  { location = 107
    base     = 107
    name     = "��1���݊͑�"
    id       = { type = 12600 id = 20 }
    division =
    { id    = { type = 12600 id = 21 }
      name  = "��1�������"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 12600 id = 22 }
      name  = "��2�������"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { location = 125
    base     = 125
    name     = "��3���݊͑�"
    id       = { type = 12600 id = 25 }
    division =
    { id    = { type = 12600 id = 26 }
      name  = "KNM �m���Q"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 12600 id = 30 }
      name  = "KNM �A�C�b�c���H��"
      type  = heavy_cruiser
      model = 0
    }
  }
}
