##############################
# Country definition for CGX #
##############################
province = { id = 1248 supplypool = 500 oilpool = 50 } # Ÿˆ“ª
province = {
  id = 1313 # œAB
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 1320 # LB˜p
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 1321 # ŠC“ì“‡
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CGX
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1319 # “ì”J
  dissent            = 20
  extra_tc           = 10
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  transports     = 10
  free = {
    ic             = 4
    energy         = 10
    metal          = 5
    rare_materials = 3
  }

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 150 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 3 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 2 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }

  nationalprovinces      = { 1258 1310 1311 1309 1319 1325 }
  ownedprovinces         = { 1258 1310 1311 1309 1319 1325 1312 1313 1249 1248 1314 1317 1318 1320 1321 }
  controlledprovinces    = { 1258 1310 1311 1309 1319 1325 1312 1313 1249 1248 1314 1317 1318 1320 1321 }

  techapps               = { 4010 2150 2290 1010 1190 3010 3130 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 502013 } # ŒÓŠ¿–¯ (ƒt[Eƒnƒ“ƒ~ƒ“)
  headofgovernment       = { type = 9 id = 502002 } # —›@m (ƒŠ[Eƒcƒ“ƒWƒFƒ“)
  foreignminister        = { type = 9 id = 502018 } # —›àZ[ (ƒŠ[Eƒ`ƒVƒFƒ“j
  armamentminister       = { type = 9 id = 502012 } # —]Š¿–d (ƒ†Eƒnƒ“ƒ‚ƒE)
  ministerofsecurity     = { type = 9 id = 502005 } # ƒŠ[Eƒ`ƒ…ƒ“
  ministerofintelligence = { type = 9 id = 502006 } # —›àZ[ (ƒŠ[Eƒ`ƒVƒFƒ“)
  chiefofstaff           = { type = 9 id = 502007 } # ”’’âU (ƒpƒCEƒ`ƒ…ƒ“ƒV)
  chiefofarmy            = { type = 9 id = 502011 } # ’ÂàZ© (ƒ`ƒFƒ“Eƒ`ƒ^ƒ“)
  chiefofnavy            = { type = 9 id = 502009 } # ”’’âU (ƒpƒCEƒ`ƒ…ƒ“ƒV)
  chiefofair             = { type = 9 id = 502015 } # ‰©Œõ‰s (ƒzƒAƒ“EƒNƒAƒ“ƒ‹ƒC)
  dormant_ministers = {
  	502003	#ŸŠ’›–Á (ƒƒ“Eƒ`ƒƒƒIƒ~ƒ“j
  }

  landunit = {
    id       = { type = 22400 id = 1 }
    name     = "‘æ1ŒR’c"
    location = 1313
    leader   = 502001
    division = {
      id             = { type = 22400 id = 2 }
      name           = "ƒVƒ…ƒ“ƒŠƒƒƒ“•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 3 }
      name           = "‘æ1“Æ—§•à•ºt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 4 }
      name           = "Œx”õt"
      type           = militia
      model          = 0
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 5 }
    name     = "‘æ1ŒR"
    location = 1312
    division = {
      id             = { type = 22400 id = 6 }
      name           = "‘æ1•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 7 }
      name           = "‘æ2•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 8 }
      name           = "‘æ3•à•ºt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 9 }
    name     = "‘æ2ŒR"
    location = 1248
    division = {
      id             = { type = 22400 id = 10 }
      name           = "‘æ4•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 11 }
      name           = "‘æ5•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 12 }
      name           = "‘æ6•à•ºt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 13 }
    name     = "‘æ3ŒR"
    location = 1318
    division = {
      id             = { type = 22400 id = 14 }
      name           = "‘æ7•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 15 }
      name           = "‘æ8•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 16 }
      name           = "‘æ9•à•ºt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 17 }
    name     = "‘æ4ŒR’c"
    location = 1258
    leader   = 502004
    division = {
      id             = { type = 22400 id = 18 }
      name           = "‘æ19ŒR"
      type           = infantry
      model          = 0
      strength       = 30
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 19 }
    name     = "‘æ7ŒR"
    location = 1310
    division = {
      id             = { type = 22400 id = 20 }
      name           = "‘æ19•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 21 }
      name           = "‘æ21•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 22 }
      name           = "‘æ22•à•ºt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 23 }
      name           = "‘æ24•à•ºt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 24 }
    name     = "‘æ15ŒR"
    location = 1319
    leader   = 502006
    division = {
      id             = { type = 22400 id = 25 }
      name           = "‘æ42•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 26 }
      name           = "‘æ43•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 27 }
      name           = "‘æ44•à•ºt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 28 }
      name           = "‘æ45•à•ºt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 29 }
    name     = "L“ŒŒx”õ‘à"
    location = 1313
    leader   = 502003
    division = {
      id             = { type = 22400 id = 30 }
      name           = "L“Œ•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 31 }
    name     = "L¼Œx”õ‘à"
    location = 1258
    division = {
      id             = { type = 22400 id = 32 }
      name           = "L“Œ•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 33 }
      name           = "L“Œ•à•ºŒR"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 34 }
    name     = "ŠC“ìŒx”õ‘à"
    location = 1321
    division = {
      id             = { type = 22400 id = 35 }
      name           = "‘æ9“Æ—§t"
      type           = infantry
      model          = 0
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 20 }
    name     = "‘æ9ŒR"
    location = 1309
    division = {
      id             = { type = 22000 id = 21 }
      name           = "‘æ9ŒR"
      type           = infantry
      model          = 0
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 67 }
    name     = "‘æ28ŒR"
    location = 1310
    division = {
      id             = { type = 22000 id = 68 }
      name           = "‘æ28ŒR"
      type           = infantry
      model          = 0
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 192 }
    name     = "ŒÎ“ìŒx”õ‘à"
    location = 1258
    division = {
      id             = { type = 22000 id = 193 }
      name           = "‘æ34•à•ºt"
      type           = infantry
      model          = 0
      strength       = 50
      max_strength   = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 215 }
    name     = "”J”gŒx”õ‘à"
    location = 1311
    division = {
      id             = { type = 22000 id = 216 }
      name           = "‘æ37“Æ—§•à•º—·"
      type           = infantry
      model          = 0
      strength       = 25
      max_strength   = 25
    }
  }
  landunit = {
    id       = { type = 22000 id = 106 }
    name     = "‘æ20ŒR"
    location = 1312
    leader   = 502010
    division = {
      id             = { type = 22000 id = 107 }
      name           = "‘æ20ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 6 }
    name     = "‘æ2ŒR"
    location = 1313
    division = {
      id             = { type = 22000 id = 7 }
      name           = "‘æ2ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 36 }
    name     = "‘æ16ŒR"
    location = 1249
    division = {
      id             = { type = 22000 id = 37 }
      name           = "‘æ16ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 87 }
    name     = "‘æ36ŒR"
    location = 1248
    division = {
      id             = { type = 22000 id = 88 }
      name           = "‘æ36ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 161 }
    name     = "‘æ14ŒR"
    location = 1309
    division = {
      id             = { type = 22000 id = 162 }
      name           = "‘æ14ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 38 }
    name     = "‘æ18ŒR"
    location = 1310
    division = {
      id             = { type = 22000 id = 39 }
      name           = "‘æ18ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 62 }
    name     = "‘æ26ŒR"
    location = 1258
    division = {
      id             = { type = 22000 id = 63 }
      name           = "‘æ26ŒR"
      type           = infantry
      model          = 0
    }
  }

  navalunit = {
    id       = { type = 22400 id = 40 }
    name     = "L“ŒŠCŒR"
    location = 1313
    base     = 1313
    leader   = 502013
    division = {
      id             = { type = 22400 id = 43 }
      name           = "‘æ1—A‘—‘å‘à"
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 22400 id = 38 }
    name     = "L“ŒŒR"
    location = 1313
    base     = 1313
    division = {
      id             = { type = 22400 id = 39 }
      name           = "L“Œ“Æ—§”òs‘à"
      type           = interceptor
      model          = 0
      strength       = 20
      max_strength   = 40
    }
  }
}
