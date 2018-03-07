##############################
# Country definition for ROM #
##############################
province = {
  id = 423 # ƒRƒ“ƒXƒ^ƒ“ƒcƒ@
  ic = 1
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 424 # ƒuƒJƒŒƒXƒg
  anti_air = 2
  air_base = { size = 5 current_size = 5 }
}
province = { id = 431 ic = 2 anti_air = 3 } # ƒvƒƒCƒFƒVƒ…ƒeƒB
province = { id = 435 anti_air = 1 } # ƒCƒYƒ}ƒC[ƒ‹

#####################
# Country main data #
#####################

country = {
  tag                = ROM
  capital            = 424 # ƒuƒJƒŒƒXƒg
  manpower           = 150
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 15

  diplomacy = {
    relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 20 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = HUN value = 1 }
    relation = { tag = ITA value = 50 }
    relation = { tag = POL value = 40 }
    relation = { tag = SOV value = 1 }
    relation = {
      tag        = TUR
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = {
      tag        = YUG
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "ROM" NumberOfSpies = 8 }

  nationalprovinces      = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  ownedprovinces         = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  controlledprovinces    = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }

  techapps               = { 4010 4020 4120 4130 4190 2150 2010 2020 2290 2300 2310 2400 2450 2460 2510 1010 1190 1110 9010 5010 5080 5090 5190 6010 6020 3010 3020 3400 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 22001 } # ƒJƒƒ‹2¢
  headofgovernment       = { type = 9 id = 22002 } # ƒQƒIƒ‹ƒOEƒ^ƒ^ƒŒƒXƒN
  foreignminister        = { type = 9 id = 22003 } # ƒjƒRƒ‰ƒGEƒeƒBƒgƒDƒŒƒXƒN
  armamentminister       = { type = 9 id = 22004 } # ƒRƒ“ƒXƒ^ƒ“ƒ`ƒ“Eƒuƒ‰ƒeƒBƒAƒk
  ministerofsecurity     = { type = 9 id = 22005 } # ƒCƒXƒgƒ‰[ƒeEƒ}ƒCƒZƒXƒN
  ministerofintelligence = { type = 9 id = 22006 } # ƒ~ƒnƒCƒ‹Eƒ‚ƒ‹ƒ]ƒt
  chiefofstaff           = { type = 9 id = 22007 } # ƒCƒIƒ“EƒAƒ“ƒgƒlƒXƒN
  chiefofarmy            = { type = 9 id = 22008 } # ƒ}ƒŠƒ“EƒVƒAƒEƒX
  chiefofnavy            = { type = 9 id = 22009 } # ƒjƒRƒ‰ƒGEƒJƒ‰ƒ“ƒtƒBƒ‹
  chiefofair             = { type = 9 id = 22010 } # ƒ_ƒ“ƒeEƒ”ƒBƒUƒ“ƒe

  landunit = {
    id       = { type = 20600 id = 1 }
    name     = "‘æ7ŒR’c"
    location = 495
    division = {
      id             = { type = 20600 id = 2 }
      name           = "‘æ1•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 3 }
      name           = "‘æ18•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 4 }
      name           = "‘æ19•à•ºt’c"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 5 }
    name     = "‘æ1ŒR’c"
    location = 426
    division = {
      id             = { type = 20600 id = 6 }
      name           = "‘æ2•à•ºt’c"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 7 }
      name           = "‘æ3•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 8 }
      name           = "‘æ4•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 9 }
      name           = "‘æ11•à•ºt’c"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 10 }
    name     = "‘æ5ŒR’c"
    location = 430
    division = {
      id             = { type = 20600 id = 11 }
      name           = "‘æ5•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 12 }
      name           = "‘æ6•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 13 }
      name           = "‘æ13•à•ºt’c"
      type           = infantry
      extra          = anti_air
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 14 }
    name     = "‘æ4ŒR’c"
    location = 424
    division = {
      id             = { type = 20600 id = 15 }
      name           = "‘æ7•à•ºt’c"
      type           = infantry
      extra          = anti_air
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 16 }
      name           = "‘æ8•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 17 }
      name           = "‘æ14•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 47 }
      name           = "‘æ1‘•bt’c"
      type           = light_armor
      model          = 0
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 20600 id = 18 }
    name     = "‘æ2ŒR’c"
    location = 431
    division = {
      id             = { type = 20600 id = 19 }
      name           = "‘æ9•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 20 }
      name           = "‘æ10•à•ºt’c"
      type           = infantry
      extra          = anti_tank
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 21 }
    name     = "‘æ3ŒR’c"
    location = 435
    division = {
      id             = { type = 20600 id = 22 }
      name           = "‘æ12•à•ºt’c"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 23 }
      name           = "‘æ15•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 24 }
      name           = "‘æ21•à•ºt’c"
      type           = infantry
      extra          = anti_tank
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 25 }
    name     = "‘æ6ŒR’c"
    location = 433
    division = {
      id             = { type = 20600 id = 26 }
      name           = "‘æ16•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 27 }
      name           = "‘æ17•à•ºt’c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 28 }
      name           = "‘æ20•à•ºt’c"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 29 }
    name     = "RŠx•º’c"
    location = 429
    division = {
      id             = { type = 20600 id = 30 }
      name           = "‘æ1RŠx•à•ºt’c"
      type           = bergsjaeger
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 31 }
      name           = "‘æ2RŠx•à•ºt’c"
      type           = bergsjaeger
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 32 }
      name           = "‘æ3RŠx•à•ºt’c"
      type           = bergsjaeger
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20600 id = 33 }
    name     = "ƒ‹[ƒ}ƒjƒA‹R•º’c"
    location = 431
    division = {
      id             = { type = 20600 id = 34 }
      name           = "‘æ1‹R•ºt’c"
      type           = cavalry
      extra          = artillery
      strength       = 40
    }
    division = {
      id             = { type = 20600 id = 35 }
      name           = "‘æ5‹R•ºt’c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 20600 id = 36 }
      name           = "‘æ6‹R•ºt’c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 20600 id = 37 }
      name           = "‘æ7‹R•ºt’c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 20600 id = 38 }
      name           = "‘æ8‹R•ºt’c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 20600 id = 39 }
      name           = "‘æ9‹R•ºt’c"
      type           = cavalry
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 20600 id = 40 }
    name     = "ƒ‹[ƒ}ƒjƒAŠÍ‘à"
    location = 423
    base     = 423
    division = {
      id             = { type = 20600 id = 41 }
      name           = "NMS ƒŠƒQƒŒEƒtƒFƒ‹ƒfƒBƒiƒ“ƒh‘à"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 20600 id = 49 }
      name           = "NMS ƒfƒ‹ƒtƒBƒkƒ‹‘à"
      type           = submarine
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 20600 id = 42 }
    name     = "ƒ‰ƒvƒ^‹óŒR"
    location = 424
    base     = 424
    division = {
      id             = { type = 20600 id = 43 }
      name           = "‘æ1í“¬q‹óŒQ"
      type           = interceptor
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 44 }
      name           = "‘æ1íp”šŒ‚q‹óŒQ"
      type           = tactical_bomber
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 20600 id = 45 }
      name           = "‘æ1…ãq‹óŒQ"
      type           = naval_bomber
      model          = 0
      strength       = 28
    }
  }
}
