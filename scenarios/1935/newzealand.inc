
##############################
# Country definition for NZL #
##############################

province =
{ id         = 1871
  anti_air   = 2
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 3 current_size = 3 }
}              # ƒEƒFƒŠƒ“ƒgƒ“

#####################
# Country main data #
#####################

country =
{ tag                    = NZL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  transports             = 100
  escorts                = 15
  capital                = 1871
  manpower               = 18
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  SpyInfo                = { country = "NZL" NumberOfSpies = 5 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  SpyInfo                = { country = "AST" NumberOfSpies = 9 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 6 }
  SpyInfo                = { country = "PHI" NumberOfSpies = 6 }
  SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  nationalprovinces      = { 1868 1869 1870 1871 1872 1873 }
  ownedprovinces         = { 1868 1869 1870 1871 1872 1873 }
  controlledprovinces    = { 1868 1869 1870 1871 1872 1873 }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  1210  1220  1310  14000 2010  2290  2300  2310  2450  2460  2510  3010  3020  3070  3080  4010 
                             4020  4120  4130  5010  5020  5080  5090  5190  5310  6010  6030  6110  6120  8010  8020  8030  8040  8050  8070  8100 
                             8120  9010  9020  9030  9140 
                           }
  diplomacy =
  { relation = { tag = AST value = 200 } # was access = yes
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 } # was access = yes
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 25 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 55001 }
  headofgovernment       = { type = 9 id = 55002 }
  foreignminister        = { type = 9 id = 55003 }
  armamentminister       = { type = 9 id = 55004 }
  ministerofsecurity     = { type = 9 id = 55005 }
  ministerofintelligence = { type = 9 id = 55006 }
  chiefofstaff           = { type = 9 id = 55007 }
  chiefofarmy            = { type = 9 id = 55008 }
  chiefofnavy            = { type = 9 id = 55009 }
  chiefofair             = { type = 9 id = 55010 }
  landunit =
  { id       = { type = 10600 id = 1 }
    name     = "ƒjƒ…[ƒW[ƒ‰ƒ“ƒh‰“ªŒR"
    location = 1871
    division =
    { id       = { type = 10600 id = 2 }
      name     = "ƒjƒ…[ƒW[ƒ‰ƒ“ƒh‘æ2•à•ºt’c"
      strength = 100
      type     = infantry
      extra    = engineer
    }
  }
  landunit =
  { id       = { type = 10600 id = 3 }
    name     = "–k•”ŒRŠÇ‹æ"
    location = 1869
    division =
    { id       = { type = 10600 id = 4 }
      name     = "‘æ1¬e‹R•ºt’c"
      strength = 30
      type     = cavalry
    }
    division =
    { id       = { type = 10600 id = 5 }
      name     = "ƒjƒ…[ƒW[ƒ‰ƒ“ƒh‘æ3•à•ºt’c"
      strength = 30
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 10600 id = 6 }
    name     = "’†‰›ŒRŠÇ‹æ"
    location = 1872
    division =
    { id       = { type = 10600 id = 7 }
      name     = "‘æ2¬e‹R•ºt’c"
      strength = 30
      type     = cavalry
    }
    division =
    { id       = { type = 10600 id = 8 }
      name     = "ƒjƒ…[ƒW[ƒ‰ƒ“ƒh‘æ1•à•ºt’c"
      strength = 30
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 10600 id = 9 }
    name     = "“ì•”ŒRŠÇ‹æ"
    location = 1873
    division =
    { id       = { type = 10600 id = 10 }
      name     = "‘æ3¬e‹R•ºt’c"
      strength = 30
      type     = cavalry
    }
    division =
    { id       = { type = 10600 id = 11 }
      name     = "ƒjƒ…[ƒW[ƒ‰ƒ“ƒh‘æ4•à•ºt’c"
      strength = 30
      type     = infantry
      extra    = anti_air
    }
  }
  navalunit =
  { id       = { type = 10600 id = 12 }
    name     = "HM ƒjƒ…[ƒW[ƒ‰ƒ“ƒhŠCŒR"
    location = 1871
    base     = 1871
    division =
    { id    = { type = 10600 id = 15 }
      name  = "‘æ1—A‘—‘à"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 20 }
      name  = "‘æ2—A‘—‘à"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 21 }
      name  = "‘æ3—A‘—‘à"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 22 }
      name  = "‘æ4—A‘—‘à"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 23 }
      name  = "‘æ5—A‘—‘à"
      type  = transport
      model = 0
    }
  }
}
