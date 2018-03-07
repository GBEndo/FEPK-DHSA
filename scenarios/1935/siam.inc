
##############################
# Country definition for SIA #
##############################

province =
{ id         = 1345
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 4 current_size = 4 }
}              # ÉgÉìÉuÉä

#####################
# Country main data #
#####################

country =
{ tag                    = SIA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1343
  manpower               = 145
  diplomacy =
  { relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
    relation = { tag = JAP value = 75 }
    relation = { tag = MAN value = 75 }
  }
  nationalprovinces      = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1339 1340 1341 1304 1349 1350 1303 }
  ownedprovinces         = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 }
  controlledprovinces    = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1020 1190 1110 2450 2460 2510 5080 5090 5100 4120 6010 6030 3010 3070 3400 8050 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  SpyInfo                = { country = "SIA" NumberOfSpies = 5 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 3 }
  SpyInfo                = { country = "PHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 3 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 62001 }
  headofgovernment       = { type = 9 id = 62002 }
  foreignminister        = { type = 9 id = 62003 }
  armamentminister       = { type = 9 id = 62004 }
  ministerofsecurity     = { type = 9 id = 62005 }
  ministerofintelligence = { type = 9 id = 62006 }
  chiefofstaff           = { type = 9 id = 62007 }
  chiefofarmy            = { type = 9 id = 62008 }
  chiefofnavy            = { type = 9 id = 62009 }
  chiefofair             = { type = 9 id = 62010 }
  landunit =
  { location = 1345
    name     = "É^ÉCâ§óßåR"
    id       = { type = 23600 id = 1 }
    division =
    { id       = { type = 23600 id = 2 }
      name     = "É^ÉCëÊ1ï‡ï∫étíc"
      type     = infantry
      strength = 90
    }
    division =
    { id       = { type = 23600 id = 3 }
      name     = "É^ÉCëÊ2ï‡ï∫étíc"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 1343
    name     = "É^ÉCâ§çëåxé@åR"
    id       = { type = 23600 id = 4 }
    division =
    { id       = { type = 23600 id = 5 }
      name     = "É^ÉCâ§óßåxé@ëÊ1étíc"
      type     = garrison
      strength = 30
      extra    = police
    }
  }
  navalunit =
  { location = 1345
    base     = 1345
    name     = "É^ÉCâ§óßäCåR"
    id       = { type = 23600 id = 6 }
    division =
    { id    = { type = 23600 id = 7 }
      name  = "RTNS ÉXÉäÉAÉÜÉ^ÉÑ"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23600 id = 8 }
      name  = "RTNS ÉhÉìÉuÉä"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23600 id = 10 }
      name  = "ÉvÉâÉãÉAÉìë‡"
      type  = destroyer
      model = 0
    }
  }
  airunit =
  { location = 1345
    base     = 1345
    name     = "É^ÉCâ§óßãÛåR"
    id       = { type = 23600 id = 12 }
    Division =
    { id       = { type = 23600 id = 13 }
      name     = "RTAF ëÊ1êÌì¨çqãÛë‡"
      type     = interceptor
      model    = 0
      strength = 50
    }
    Division =
    { id       = { type = 23600 id = 14 }
      name     = "RTAF ëÊ1êÌèpîöåÇçqãÛë‡"
      type     = tactical_bomber
      model    = 0
      strength = 44
    }
  }
}
