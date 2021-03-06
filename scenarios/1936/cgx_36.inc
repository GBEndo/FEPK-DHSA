##############################
# Country definition for CGX #
##############################
province = { id = 1248 supplypool = 500 oilpool = 50 } # ช
province = {
  id = 1313 # AB
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 1320 # LBp
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 1321 # C์
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
  capital            = 1319 # ์J
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
  headofstate            = { type = 9 id = 502013 } # ำฟฏ (t[En~)
  headofgovernment       = { type = 9 id = 502002 } # @m ([EcWF)
  foreignminister        = { type = 9 id = 502018 } # เZ[ ([E`VFj
  armamentminister       = { type = 9 id = 502012 } # ]ฟd (EnE)
  ministerofsecurity     = { type = 9 id = 502005 } # [E`
  ministerofintelligence = { type = 9 id = 502006 } # เZ[ ([E`VF)
  chiefofstaff           = { type = 9 id = 502007 } # โU (pCE`V)
  chiefofarmy            = { type = 9 id = 502011 } # ยเZฉ (`FE`^)
  chiefofnavy            = { type = 9 id = 502009 } # โU (pCE`V)
  chiefofair             = { type = 9 id = 502015 } # ฉ๕s (zAENAC)
  dormant_ministers = {
  	502003	#ม (E`I~j
  }

  landunit = {
    id       = { type = 22400 id = 1 }
    name     = "ๆ1Rc"
    location = 1313
    leader   = 502001
    division = {
      id             = { type = 22400 id = 2 }
      name           = "Vเบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 3 }
      name           = "ๆ1ฦงเบt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 4 }
      name           = "x๕t"
      type           = militia
      model          = 0
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 5 }
    name     = "ๆ1R"
    location = 1312
    division = {
      id             = { type = 22400 id = 6 }
      name           = "ๆ1เบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 7 }
      name           = "ๆ2เบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 8 }
      name           = "ๆ3เบt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 9 }
    name     = "ๆ2R"
    location = 1248
    division = {
      id             = { type = 22400 id = 10 }
      name           = "ๆ4เบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 11 }
      name           = "ๆ5เบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 12 }
      name           = "ๆ6เบt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 13 }
    name     = "ๆ3R"
    location = 1318
    division = {
      id             = { type = 22400 id = 14 }
      name           = "ๆ7เบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 15 }
      name           = "ๆ8เบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 16 }
      name           = "ๆ9เบt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 17 }
    name     = "ๆ4Rc"
    location = 1258
    leader   = 502004
    division = {
      id             = { type = 22400 id = 18 }
      name           = "ๆ19R"
      type           = infantry
      model          = 0
      strength       = 30
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 19 }
    name     = "ๆ7R"
    location = 1310
    division = {
      id             = { type = 22400 id = 20 }
      name           = "ๆ19เบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 21 }
      name           = "ๆ21เบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 22 }
      name           = "ๆ22เบt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 23 }
      name           = "ๆ24เบt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 24 }
    name     = "ๆ15R"
    location = 1319
    leader   = 502006
    division = {
      id             = { type = 22400 id = 25 }
      name           = "ๆ42เบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 26 }
      name           = "ๆ43เบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 27 }
      name           = "ๆ44เบt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 28 }
      name           = "ๆ45เบt"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 29 }
    name     = "Lx๕เ"
    location = 1313
    leader   = 502003
    division = {
      id             = { type = 22400 id = 30 }
      name           = "Lเบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 31 }
    name     = "Lผx๕เ"
    location = 1258
    division = {
      id             = { type = 22400 id = 32 }
      name           = "Lเบt"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 33 }
      name           = "LเบR"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 34 }
    name     = "C์x๕เ"
    location = 1321
    division = {
      id             = { type = 22400 id = 35 }
      name           = "ๆ9ฦงt"
      type           = infantry
      model          = 0
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 20 }
    name     = "ๆ9R"
    location = 1309
    division = {
      id             = { type = 22000 id = 21 }
      name           = "ๆ9R"
      type           = infantry
      model          = 0
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 67 }
    name     = "ๆ28R"
    location = 1310
    division = {
      id             = { type = 22000 id = 68 }
      name           = "ๆ28R"
      type           = infantry
      model          = 0
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 192 }
    name     = "ฮ์x๕เ"
    location = 1258
    division = {
      id             = { type = 22000 id = 193 }
      name           = "ๆ34เบt"
      type           = infantry
      model          = 0
      strength       = 50
      max_strength   = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 215 }
    name     = "Jgx๕เ"
    location = 1311
    division = {
      id             = { type = 22000 id = 216 }
      name           = "ๆ37ฦงเบท"
      type           = infantry
      model          = 0
      strength       = 25
      max_strength   = 25
    }
  }
  landunit = {
    id       = { type = 22000 id = 106 }
    name     = "ๆ20R"
    location = 1312
    leader   = 502010
    division = {
      id             = { type = 22000 id = 107 }
      name           = "ๆ20R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 6 }
    name     = "ๆ2R"
    location = 1313
    division = {
      id             = { type = 22000 id = 7 }
      name           = "ๆ2R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 36 }
    name     = "ๆ16R"
    location = 1249
    division = {
      id             = { type = 22000 id = 37 }
      name           = "ๆ16R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 87 }
    name     = "ๆ36R"
    location = 1248
    division = {
      id             = { type = 22000 id = 88 }
      name           = "ๆ36R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 161 }
    name     = "ๆ14R"
    location = 1309
    division = {
      id             = { type = 22000 id = 162 }
      name           = "ๆ14R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 38 }
    name     = "ๆ18R"
    location = 1310
    division = {
      id             = { type = 22000 id = 39 }
      name           = "ๆ18R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 62 }
    name     = "ๆ26R"
    location = 1258
    division = {
      id             = { type = 22000 id = 63 }
      name           = "ๆ26R"
      type           = infantry
      model          = 0
    }
  }

  navalunit = {
    id       = { type = 22400 id = 40 }
    name     = "LCR"
    location = 1313
    base     = 1313
    leader   = 502013
    division = {
      id             = { type = 22400 id = 43 }
      name           = "ๆ1Aๅเ"
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 22400 id = 38 }
    name     = "LR"
    location = 1313
    base     = 1313
    division = {
      id             = { type = 22400 id = 39 }
      name           = "Lฦง๒sเ"
      type           = interceptor
      model          = 0
      strength       = 20
      max_strength   = 40
    }
  }
}
