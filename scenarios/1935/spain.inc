##############################
# Country definition for SPR #
##############################
province = {
  id = 334 # Rj
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 341 # }h[h
  anti_air = 3
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 347 # ZB
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 354 # @VA
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 356 # ^Si
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 535 # }WJ
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 963 # OEJiA
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 1 current_size = 1 }
}
province = {
  id = 972 # BVXlX
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SPR
  regular_id         = SPA
  intrinsic_gov_type = left_wing_radical
  capital            = 341 # }h[h
  dissent            = 30
  manpower           = 250
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100
  escorts        = 27

  diplomacy = {
    relation = { tag = ENG value = -10 }
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

  nationalprovinces      = { 334 332 333 339 338 341 343 346 347 349 350 351 352 353 354 342 355 340 330 331 356 329 357 535 536 537 961 962 963 964 965 348 }
  ownedprovinces         = { 334 332 333 339 338 341 343 346 347 349 350 351 352 353 354 342 355 340 330 331 356 329 357 535 536 537 961 962 963 964 965 957 955 954 967 971 972 1091 }
  controlledprovinces    = { 334 332 333 339 338 341 343 346 347 349 350 351 352 353 354 342 355 340 330 331 356 329 357 535 536 537 961 962 963 964 965 957 955 954 967 971 972 1091 }

  techapps               = { 4010 4020 4120 2150 2010 2020 2400 2290 2300 2310 4220 2450 2460 4130 2510 3260 1010 1190 1110 9010 5010 5080 5090 5190 6010 6020 3010 3020 3070 3080 3130 3140 3250 3400 3410 3470 8010 8020 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 7
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 11001 } # jZgEAJT
  headofgovernment       = { type = 9 id = 11002 } # }kGE|eEo_X
  foreignminister        = { type = 9 id = 11003 } # zALEETCXEJ_o
  armamentminister       = { type = 9 id = 11004 } # zZEfBToECE{j
  ministerofsecurity     = { type = 9 id = 11005 } # }kGE|eEo_X
  ministerofintelligence = { type = 9 id = 11006 } # t@EwifXETrA
  chiefofstaff           = { type = 9 id = 11007 } # zZE~AnEig
  chiefofarmy            = { type = 9 id = 11008 } # jRXEE{
  chiefofnavy            = { type = 9 id = 11009 } # AgjIEATEOV
  chiefofair             = { type = 9 id = 11010 } # ~QEkjFXEfEvh
  dormant_leaders        = { 3007 3050 }

  landunit = {
    id       = { type = 27600 id = 5 }
    name     = "ć1Rc"
    location = 341
    division = {
      id             = { type = 27600 id = 6 }
      name           = "ć1ŕştc"
      type           = infantry
    }
    division = {
      id             = { type = 27600 id = 8 }
      name           = "ć1Rştc"
      type           = cavalry
    }
    division = {
      id             = { type = 27600 id = 9 }
      name           = "yő@bŕ"
      type           = light_armor
      model          = 0
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 27600 id = 10 }
    name     = "ć2Rc"
    location = 356
    division = {
      id             = { type = 27600 id = 11 }
      name           = "ć2ŕştc"
      type           = infantry
      extra          = anti_tank
    }
    division = {
      id             = { type = 27600 id = 13 }
      name           = "ć3ŕştc"
      type           = infantry
    }
    division = {
      id             = { type = 27600 id = 14 }
      name           = "Rxˇc"
      type           = bergsjaeger
    }
  }
  landunit = {
    id       = { type = 27600 id = 15 }
    name     = "ć3Rc"
    location = 354
    division = {
      id             = { type = 27600 id = 16 }
      name           = "ć4ŕştc"
      type           = infantry
      extra          = anti_air
    }
    division = {
      id             = { type = 27600 id = 18 }
      name           = "ć5ŕştc"
      type           = infantry
      extra          = artillery
    }
  }
  landunit = {
    id       = { type = 27600 id = 19 }
    name     = "oAXiß"
    location = 535
    division = {
      id             = { type = 27600 id = 20 }
      name           = "oAXiß"
      type           = infantry
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 27600 id = 21 }
    name     = "JiAXiß"
    location = 963
    division = {
      id             = { type = 27600 id = 22 }
      name           = "JiAXiß"
      type           = infantry
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 27600 id = 23 }
    name     = "AtJ¤R"
    location = 957
    division = {
      id             = { type = 27600 id = 24 }
      name           = "źnćtc"
      type           = infantry
    }
    division = {
      id             = { type = 27600 id = 25 }
      name           = "nćtc"
      type           = infantry
    }
  }
  landunit = {
    id       = { type = 27600 id = 26 }
    name     = "Tnŕ"
    location = 971
    division = {
      id             = { type = 27600 id = 27 }
      name           = "TnRc"
      type           = infantry
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 27600 id = 28 }
    name     = "AŻnRhqŕ"
    location = 1091
    division = {
      id             = { type = 27600 id = 29 }
      name           = "AŻnRhqŕ"
      type           = militia
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 27600 id = 30 }
    name     = "JfBXCR"
    location = 347
    base     = 347
    division = {
      id             = { type = 27600 id = 31 }
      name           = "ARE puJ"
      type           = light_cruiser
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 27600 id = 32 }
      name           = "ěqŕ"
      type           = destroyer
      model          = 1
      strength       = 100
    }
  }
  navalunit = {
    id       = { type = 27600 id = 33 }
    name     = "fXEkjFXÍŕ"
    location = 334
    base     = 334
    division = {
      id             = { type = 27600 id = 34 }
      name           = "ARE fXEkjFX"
      type           = light_cruiser
      model          = 0
      strength       = 100
    }
  }
  navalunit = {
    id       = { type = 27600 id = 35 }
    name     = "íŹÍŕ"
    location = 356
    base     = 356
    division = {
      id             = { type = 27600 id = 36 }
      name           = "ARE nC1˘"
      type           = battleship
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 27600 id = 37 }
      name           = "ARE GXp[j"
      type           = battleship
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 27600 id = 38 }
      name           = "ARE ~QEfEZoeX"
      type           = light_cruiser
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 27600 id = 39 }
      name           = "ARE A~eEZx"
      type           = light_cruiser
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 27600 id = 40 }
      name           = "ć1řŕ"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 27600 id = 41 }
      name           = "ć2řŕ"
      type           = destroyer
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 27600 id = 42 }
      name           = "ć1CăAŕ"
      type           = transport
      strength       = 100
    }
    division = {
      id             = { type = 27600 id = 43 }
      name           = "ć2CăAŕ"
      type           = transport
      strength       = 100
    }
  }
  navalunit = {
    id       = { type = 27600 id = 44 }
    name     = "AŻnÍŕ"
    location = 963
    base     = 963
    division = {
      id             = { type = 27600 id = 45 }
      name           = "ć3řŕ"
      type           = destroyer
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 27600 id = 47 }
      name           = "ć3CăAŕ"
      type           = transport
      strength       = 100
    }
    division = {
      id             = { type = 27600 id = 48 }
      name           = "ć4CăAŕ"
      type           = transport
      strength       = 100
    }
  }
  navalunit = {
    id       = { type = 27600 id = 49 }
    name     = "O[vC"
    location = 354
    base     = 354
    division = {
      id             = { type = 27600 id = 50 }
      name           = "S101Íŕ"
      type           = submarine
      model          = 0
      strength       = 100
    }
  }
  navalunit = {
    id       = { type = 27600 id = 51 }
    name     = "O[vB"
    location = 354
    base     = 354
    division = {
      id             = { type = 27600 id = 72 }
      name           = "S103Íŕ"
      type           = submarine
      model          = 1
      strength       = 75
    }
  }
  navalunit = {
    id       = { type = 27600 id = 53 }
    name     = "ARE x^[h"
    location = 356
    base     = 356
    division = {
      id             = { type = 27600 id = 54 }
      name           = "ARE x^[h"
      type           = light_cruiser
      model          = 1
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 27600 id = 55 }
    name     = "ć1qóíŕ"
    location = 341
    base     = 341
    division = {
      id             = { type = 27600 id = 56 }
      name           = "ć1ípqóQ"
      type           = tactical_bomber
      strength       = 30
    }
    division = {
      id             = { type = 27600 id = 57 }
      name           = "ć2ípqóQ"
      type           = tactical_bomber
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 27600 id = 58 }
    name     = "ć2qóíŕ"
    location = 356
    base     = 356
    division = {
      id             = { type = 27600 id = 59 }
      name           = "ć1íŹqóQ"
      type           = interceptor
      strength       = 30
    }
    division = {
      id             = { type = 27600 id = 60 }
      name           = "ć3íŹqóQ"
      type           = interceptor
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 27600 id = 61 }
    name     = "ć3qóíŕ"
    location = 354
    base     = 354
    division = {
      id             = { type = 27600 id = 62 }
      name           = "ć1íŞqóQ"
      type           = strategic_bomber
      strength       = 30
    }
    division = {
      id             = { type = 27600 id = 63 }
      name           = "ć2íŞqóQ"
      type           = strategic_bomber
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 27600 id = 64 }
    name     = "AtJňsŕ"
    location = 963
    base     = 963
    division = {
      id             = { type = 27600 id = 65 }
      name           = "ć1qóQ"
      type           = tactical_bomber
      strength       = 30
    }
    division = {
      id             = { type = 27600 id = 66 }
      name           = "ć2íŹqóQ"
      type           = interceptor
      strength       = 30
    }
  }

  division_development = {
    id             = { type = 27600 id = 500 }
    name           = "ARE JiAX"
    type           = heavy_cruiser
    model          = 1
    cost           = 5.0
    date           = { year = 1935 month = september day = 1 }
  }
  division_development = {
    id             = { type = 27600 id = 501 }
    name           = "ARE oAX"
    type           = heavy_cruiser
    model          = 1
    cost           = 5.0
    date           = { year = 1935 month = december day = 1 }
  }
}
