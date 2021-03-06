
##############################
# Country definition for SWE #
##############################

province = { id = 93 landfort = 0 coastalfort = 1 } # }
province =
{ id          = 95
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 0
  coastalfort = 3
}               # J[XN[i
province =
{ id          = 98
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 0
  coastalfort = 3
}               # CF[e{
province = { id = 99 landfort = 1 coastalfort = 0 } # VFf
province =
{ id          = 101
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 0
  coastalfort = 3
}               # XgbNz
province =
{ id          = 127
  anti_air    = 2
  naval_base  = { size = 3 current_size = 3 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 3
  coastalfort = 0
}               # [I

#####################
# Country main data #
#####################

country =
{ tag                    = SWE
  regular_id             = SCA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 85
  capital                = 101
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 6
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 3 # FEPKΟXͺ # 1.06
  }
  SpyInfo                = { country = "SWE" NumberOfSpies = 6 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "EST" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  SpyInfo                = { country = "POL" NumberOfSpies = 6 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 9 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 6 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 8 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 3 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  nationalprovinces      = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  ownedprovinces         = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  controlledprovinces    = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 4190 2150 4130 2010 3190 2290 2300 2310 3130 2450 2460 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190
                             5470 6010 6020 3010 3020 3070 3080 3250 3400 3410 3470 8010 8020 8040 8050
                           }
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
  }
  headofstate            = { type = 9 id = 7001 }
  headofgovernment       = { type = 9 id = 7033 }
  foreignminister        = { type = 9 id = 7038 }
  armamentminister       = { type = 9 id = 7047 }
  ministerofsecurity     = { type = 9 id = 7058 }
  ministerofintelligence = { type = 9 id = 7006 }
  chiefofstaff           = { type = 9 id = 7007 }
  chiefofarmy            = { type = 9 id = 7008 }
  chiefofnavy            = { type = 9 id = 7009 }
  chiefofair             = { type = 9 id = 7010 }
  # 5 infantry divisions.
  landunit =
  { location = 101
    name     = "ζ1Rtc"
    id       = { type = 29600 id = 1 }
    division =
    { id    = { type = 29600 id = 2 }
      name  = "ζ1tc"
      type  = infantry
      model = 0
      extra = artillery
    }
  }
  landunit =
  { location = 127
    name     = "kͺR"
    id       = { type = 29600 id = 9 }
    division =
    { id    = { type = 29600 id = 10 }
      name  = "ζ5tc"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 102
    name     = "―Ίΰ"
    id       = { type = 29600 id = 11 }
    division =
    { id   = { type = 29600 id = 12 }
      name = "―Ίΰ"
      type = militia
    }
  }
  navalunit =
  { location = 101 # Berga/Musk
    base     = 101
    name     = "Cγΰ"
    id       = { type = 29600 id = 16 }
    division =
    { id    = { type = 29600 id = 17 }
      name  = "HMS XFG"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 18 }
      name  = "HMS hbgjOEBNgA"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 19 }
      name  = "HMS OX^t5’"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 21 }
      name  = "HMS NXEt~O"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 22 }
      name  = "HMS Sgh"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 29600 id = 23 }
      name  = "ζ1μΰ"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 29600 id = 25 }
      name  = "ζ1Aΰ"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { location = 101 # Berga/Musk
    base     = 101
    name     = "mΝΰ"
    id       = { type = 29600 id = 26 }
    division =
    { id    = { type = 29600 id = 27 }
      name  = "HMS A"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 28 }
      name  = "HMS ^bΨwbe"
      type  = heavy_cruiser
      model = 0
    }
  }
  navalunit =
  { location = 95 # Karlskronabasen
    base     = 95
    name     = "J[XN[iΰ"
    id       = { type = 29600 id = 30 }
    division =
    { id    = { type = 29600 id = 31 }
      name  = "HMS IXJ2’"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 33 }
      name  = "ζ1φΰ"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { location = 98 # Gφteborgsbasen
    base     = 98
    name     = "CF[e{ΰ"
    id       = { type = 29600 id = 34 }
    division =
    { id    = { type = 29600 id = 35 }
      name  = "HMS }we"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 37 }
      name  = "ζ2φΰ"
      type  = submarine
      model = 1
    }
  }
  airunit =
  { location = 101
    base     = 101
    name     = "ζ1ςstc"
    id       = { type = 29600 id = 13 }
    division =
    { id    = { type = 29600 id = 14 }
      name  = "ζ1νpςsΰ"
      type  = tactical_bomber
      model = 0
    }
    division =
    { id    = { type = 29600 id = 15 }
      name  = "ζ1CγUςsΰ"
      type  = naval_bomber
      model = 0
    }
  }
}
