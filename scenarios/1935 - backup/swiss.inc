
##############################
# Country definition for SCH #
##############################

province = { id = 372 landfort = 4 anti_air = 3 } # ƒN[ƒ‹
province = { id = 530 landfort = 5 anti_air = 3 } # ƒWƒ…ƒl[ƒ”
province =
{ id       = 532
  anti_air = 5
  air_base = { size = 4 current_size = 4 }
  landfort = 5
}            # ƒxƒ‹ƒ“
province = { id = 533 landfort = 5 anti_air = 3 } # ƒ`ƒ…[ƒŠƒbƒq

#####################
# Country main data #
#####################

country =
{ tag                    = SCH
  capital                = 532
  manpower               = 135
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 25
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = SCH value = 1 }
    relation = { tag = USA value = 1 }
  }
  nationalprovinces      = { 532 530 533 372 }
  ownedprovinces         = { 532 530 533 372 }
  controlledprovinces    = { 532 530 533 372 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2400 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1310 1110 9010 5010 5020 5080 5090 5190 6010 6020
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 1
  }
  SpyInfo                = { country = "SCH" NumberOfSpies = 6 }
  headofstate            = { type = 9 id = 17001 }
  headofgovernment       = { type = 9 id = 17002 }
  foreignminister        = { type = 9 id = 17003 }
  armamentminister       = { type = 9 id = 17004 }
  ministerofsecurity     = { type = 9 id = 17005 }
  ministerofintelligence = { type = 9 id = 17006 }
  chiefofstaff           = { type = 9 id = 17007 }
  chiefofarmy            = { type = 9 id = 17008 }
  chiefofnavy            = { type = 9 id = 17009 }
  chiefofair             = { type = 9 id = 17010 }
  # Superior Firepower
  # ####################
  # ###Swiss 36OOB####
  # ####################
  landunit =
  { id       = { type = 30600 id = 1 }
    location = 532
    name     = "‘æ1ŒR’c"
    division =
    { id       = { type = 30600 id = 2 }
      name     = "‘æ1–ìít’c"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
  # ############################
  # #############################
  landunit =
  { id       = { type = 30600 id = 3 }
    location = 533
    name     = "‘æ2ŒR’c"
    division =
    { id       = { type = 30600 id = 4 }
      name     = "‘æ2•à•ºt’c"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
    division =
    { id       = { type = 30600 id = 5 }
      name     = "‘æ1ƒAƒ‹ƒvƒX—Â•ºt’c"
      strength = 30
      type     = bergsjaeger
    }
  }
  # ###########################
  # ############################
  landunit =
  { id       = { type = 30600 id = 6 }
    location = 530
    name     = "‘æ3ŒR’c"
    division =
    { id       = { type = 30600 id = 7 }
      name     = "‘æ3•à•ºt’c"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
    division =
    { id       = { type = 30600 id = 8 }
      name     = "‘æ4–ìít’c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30600 id = 9 }
      name     = "‘æ2RŠx•à•ºt’c"
      strength = 30
      type     = bergsjaeger
    }
  }
  # ###############################
  # ###############################
  landunit =
  { id       = { type = 30600 id = 10 }
    location = 372
    name     = "‘æ4ŒR’c"
    division =
    { id       = { type = 30600 id = 11 }
      name     = "‘æ5•à•ºt’c"
      strength = 100
      type     = infantry
      extra    = engineer
    }
    division =
    { id       = { type = 30600 id = 12 }
      name     = "‘æ6•à•ºt’c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30600 id = 13 }
      name     = "‘æ3RŠxt’c"
      strength = 30
      type     = bergsjaeger
    }
  }
  airunit =
  { id       = { type = 30600 id = 14 }
    location = 532
    base     = 532
    name     = "ƒq[ƒŒƒ“‘æ1q‹ó‘å‘à"
    division =
    { id       = { type = 30600 id = 15 }
      name     = "‘æ1íp”šŒ‚q‹ó’c"
      strength = 40
      type     = tactical_bomber
      model    = 0
    }
  }
}
