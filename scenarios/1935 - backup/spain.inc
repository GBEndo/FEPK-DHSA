
##############################
# Country definition for SPR #
##############################

province =
{ id         = 334
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # ƒ‰ƒRƒ‹ƒjƒƒ
province =
{ id       = 341
  anti_air = 3
  air_base = { size = 2 current_size = 2 }
}            # ƒ}ƒhƒŠƒbƒh
province =
{ id         = 347
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # ƒZƒ”ƒB[ƒŠƒƒ
province =
{ id         = 354
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 2 current_size = 2 }
}              # ƒoƒŒƒ“ƒVƒA
province =
{ id         = 356
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # ƒ^ƒ‰ƒSƒi
province =
{ id         = 535
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # ƒ}ƒWƒ‡ƒ‹ƒJ
province =
{ id         = 963
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
}              # ƒOƒ‰ƒ“ƒJƒiƒŠƒA
province =
{ id         = 972
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # ƒ”ƒBƒ‰ƒVƒYƒlƒƒX

#####################
# Country main data #
#####################

country =
{ tag                    = SPR
  regular_id             = SPA
  intrinsic_gov_type     = left_wing_radical
  manpower               = 250
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  dissent                = 30
  capital                = 341
  transports             = 100
  escorts                = 27
  transports             = 100
  escorts                = 27
  # Gibralter claim
  diplomacy =
  { relation = { tag = ENG value = -10 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 10 }
    relation = { tag = GER value = -50 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = -50 }
    relation = { tag = POR value = -50 }
    relation = { tag = SOV value = -10 }
  }
  SpyInfo                = { country = "SPR" NumberOfSpies = 7 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 6 }
  SpyInfo                = { country = "ECU" NumberOfSpies = 3 }
  SpyInfo                = { country = "VEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "COL" NumberOfSpies = 6 }
  SpyInfo                = { country = "POR" NumberOfSpies = 9 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 9 }
  # Spanish Guinea
  nationalprovinces      = { 334 332 333 339 338 341 343 346 347 349 350 351 352 353 354 342 355 340 330 331 356 329 357 535 536 537 961 962 963 964
                             965 348
                           }
  ownedprovinces         = { 334  332  333  339  338  341  343  346  347  349  350  351  352  353  354  342  355  340  330  331  356  329  357  535 
                             536  537  961  962  963  964  965  957  955  954  967  971  972  1091
                           }
  # Spanish Guinea
  controlledprovinces    = { 334  332  333  339  338  341  343  346  347  349  350  351  352  353  354  342  355  340  330  331  356  329  357  535 
                             536  537  961  962  963  964  965  957  955  954  967  971  972  1091
                           }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2150 2010 2020 2400 2290 2300 2310 4220 2450 2460 4130 2510 3260 1010 1190 1110 9010 5010 5080 5090 5190
                             6010 6020 3010 3020 3070 3080 3130 3140 3250 3400 3410 3470 8010 8020 8040 8050
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 7
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 11001 }
  headofgovernment       = { type = 9 id = 11002 }
  foreignminister        = { type = 9 id = 11003 }
  armamentminister       = { type = 9 id = 11004 }
  ministerofsecurity     = { type = 9 id = 11005 }
  ministerofintelligence = { type = 9 id = 11006 }
  chiefofstaff           = { type = 9 id = 11007 }
  chiefofarmy            = { type = 9 id = 11008 }
  chiefofnavy            = { type = 9 id = 11009 }
  chiefofair             = { type = 9 id = 11010 }
  dormant_leaders        = { 3007 3050 }
  # Spanish Troops
  landunit =
  { id       = { type = 27600 id = 5 }
    location = 341
    name     = "‘æ1ŒR’c"
    division =
    { id   = { type = 27600 id = 6 }
      name = "‘æ1•à•ºt’c"
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 8 }
      name = "‘æ1‹R•ºt’c"
      type = cavalry
    }
    division =
    { id       = { type = 27600 id = 9 }
      name     = "Œy‘•”õ‹@b‘à"
      type     = light_armor
      model    = 0
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 10 }
    location = 356
    name     = "‘æ2ŒR’c"
    division =
    { id    = { type = 27600 id = 11 }
      name  = "‘æ2•à•ºt’c"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id   = { type = 27600 id = 13 }
      name = "‘æ3•à•ºt’c"
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 14 }
      name = "RŠx—·’c"
      type = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 27600 id = 15 }
    location = 354
    name     = "‘æ3ŒR’c"
    division =
    { id    = { type = 27600 id = 16 }
      name  = "‘æ4•à•ºt’c"
      type  = infantry
      extra = anti_air
    }
    division =
    { id    = { type = 27600 id = 18 }
      name  = "‘æ5•à•ºt’c"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 27600 id = 19 }
    location = 535
    name     = "ƒoƒŒƒAƒŒƒXi—ß•”"
    division =
    { id       = { type = 27600 id = 20 }
      name     = "ƒoƒŒƒAƒŒƒXi—ß•”"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 21 }
    location = 963
    name     = "ƒJƒiƒŠƒAƒXi—ß•”"
    division =
    { id       = { type = 27600 id = 22 }
      name     = "ƒJƒiƒŠƒAƒXi—ß•”"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 23 }
    location = 957
    name     = "ƒAƒtƒŠƒJ—¤ŒR"
    division =
    { id   = { type = 27600 id = 24 }
      name = "¼•”’n‹æt’c"
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 25 }
      name = "“Œ•”’n‹æt’c"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 27600 id = 26 }
    location = 971
    name     = "ƒTƒnƒ‰•”‘à"
    division =
    { id       = { type = 27600 id = 27 }
      name     = "ƒTƒnƒ‰ŒR’c"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 28 }
    location = 1091
    name     = "A–¯’nŒR–h‰q•”‘à"
    division =
    { id       = { type = 27600 id = 29 }
      name     = "A–¯’nŒR–h‰q•”‘à"
      type     = militia
      strength = 30
    }
  }
  # Some naval units were clearly outdated or in bad fighting shape. Strength has been reduced in those cases.
  navalunit =
  { location = 347
    base     = 347
    id       = { type = 27600 id = 30 }
    name     = "ƒJƒfƒBƒXŠCŒR"
    division =
    { id       = { type = 27600 id = 31 }
      name     = "ARE ƒŠƒpƒuƒŠƒJ"
      strength = 60
      type     = light_cruiser
      model    = 0
    }
    division =
    { id       = { type = 27600 id = 32 }
      name     = "Œì‰q‘à"
      strength = 100
      type     = destroyer
      model    = 1
    }
  }
  navalunit =
  { location = 334
    base     = 334
    id       = { type = 27600 id = 33 }
    name     = "ƒƒ“ƒfƒXEƒkƒjƒFƒXŠÍ‘à"
    division =
    { id       = { type = 27600 id = 34 }
      name     = "ARE ƒƒ“ƒfƒXEƒkƒjƒFƒX"
      strength = 100
      type     = light_cruiser
      model    = 0
    }
  }
  navalunit =
  { location = 356
    base     = 356
    id       = { type = 27600 id = 35 }
    name     = "í“¬ŠÍ‘à"
    division =
    { id       = { type = 27600 id = 36 }
      name     = "ARE ƒnƒCƒ1¢"
      strength = 50
      type     = battleship
      model    = 0
    }
    division =
    { id       = { type = 27600 id = 37 }
      name     = "ARE ƒGƒXƒp[ƒjƒƒ"
      strength = 100
      type     = battleship
      model    = 0
    }
    division =
    { id       = { type = 27600 id = 38 }
      name     = "ARE ƒ~ƒQƒ‹EƒfEƒZƒ‹ƒoƒ“ƒeƒX"
      strength = 100
      type     = light_cruiser
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 39 }
      name     = "ARE ƒAƒ‹ƒ~ƒ‰ƒ“ƒeEƒZƒ‹ƒxƒ‰"
      strength = 100
      type     = light_cruiser
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 40 }
      name     = "‘æ1‹›—‹’ø‘à"
      strength = 100
      type     = destroyer
      model    = 0
    }
    division =
    { id       = { type = 27600 id = 41 }
      name     = "‘æ2‹›—‹’ø‘à"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 42 }
      name     = "‘æ1ŠCã—A‘—‘à"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 27600 id = 43 }
      name     = "‘æ2ŠCã—A‘—‘à"
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 963
    base     = 963
    id       = { type = 27600 id = 44 }
    name     = "A–¯’nŠÍ‘à"
    division =
    { id       = { type = 27600 id = 45 }
      name     = "‘æ3‹›—‹’ø‘à"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 47 }
      name     = "‘æ3ŠCã—A‘—‘à"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 27600 id = 48 }
      name     = "‘æ4ŠCã—A‘—‘à"
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 49 }
    name     = "ƒOƒ‹[ƒvC"
    division =
    { id       = { type = 27600 id = 50 }
      name     = "S101ŠÍ‘à"
      strength = 100
      type     = submarine
      model    = 0
    }
  }
  navalunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 51 }
    name     = "ƒOƒ‹[ƒvB"
    division =
    { id       = { type = 27600 id = 72 }
      name     = "S103ŠÍ‘à"
      strength = 75
      type     = submarine
      model    = 1
    }
  }
  navalunit =
  { id       = { type = 27600 id = 53 }
    name     = "ARE ƒŠƒxƒ‹ƒ^[ƒh"
    location = 356
    base     = 356
    division =
    { id       = { type = 27600 id = 54 }
      name     = "ARE ƒŠƒxƒ‹ƒ^[ƒh"
      type     = light_cruiser
      model    = 1
      strength = 100
    }
  }
  airunit =
  { location = 341
    base     = 341
    id       = { type = 27600 id = 55 }
    name     = "‘æ1q‹óí‘à"
    division =
    { id       = { type = 27600 id = 56 }
      name     = "‘æ1íp”šŒ‚q‹óŒQ"
      strength = 30
      type     = tactical_bomber
    }
    division =
    { id       = { type = 27600 id = 57 }
      name     = "‘æ2íp”šŒ‚q‹óŒQ"
      strength = 30
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 356
    base     = 356
    id       = { type = 27600 id = 58 }
    name     = "‘æ2q‹óí‘à"
    division =
    { id       = { type = 27600 id = 59 }
      name     = "‘æ1í“¬q‹óŒQ"
      strength = 30
      type     = interceptor
    }
    division =
    { id       = { type = 27600 id = 60 }
      name     = "‘æ3í“¬q‹óŒQ"
      strength = 30
      type     = interceptor
    }
  }
  airunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 61 }
    name     = "‘æ3q‹óí‘à"
    division =
    { id       = { type = 27600 id = 62 }
      name     = "‘æ1í—ª”šŒ‚q‹óŒQ"
      strength = 30
      type     = strategic_bomber
    }
    division =
    { id       = { type = 27600 id = 63 }
      name     = "‘æ2í—ª”šŒ‚q‹óŒQ"
      strength = 30
      type     = strategic_bomber
    }
  }
  airunit =
  { location = 963
    base     = 963
    id       = { type = 27600 id = 64 }
    name     = "ƒAƒtƒŠƒJ”òs•”‘à"
    division =
    { id       = { type = 27600 id = 65 }
      name     = "‘æ1”šŒ‚q‹óŒQ"
      strength = 30
      type     = tactical_bomber
    }
    division =
    { id       = { type = 27600 id = 66 }
      name     = "‘æ2í“¬q‹óŒQ"
      strength = 30
      type     = interceptor
    }
  }
  division_development =
  { name  = "ARE ƒJƒiƒŠƒAƒX"
    type  = heavy_cruiser
    model = 1
    cost  = 5
    id    = { type = 27600 id = 500 }
    date  = { year = 1935 month = september day = 1 }
  }
  division_development =
  { name  = "ARE ƒoƒŒƒAƒŒƒX"
    type  = heavy_cruiser
    model = 1
    cost  = 5
    id    = { type = 27600 id = 501 }
    date  = { year = 1935 month = december day = 1 }
  }
}
