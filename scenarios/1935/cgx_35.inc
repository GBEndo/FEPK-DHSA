
##############################
# Country definition for CGX #
##############################

province = { id = 1248 supplypool = 500 oilpool = 50 } # Shantou
province =
{ id         = 1313
  air_base   = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}              # Guangzhou
province =
{ id         = 1320
  naval_base = { size = 5 current_size = 5 }
}              # Zhanjiang
province =
{ id         = 1321
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Hainan

#####################
# Country main data #
#####################

country =
{ tag                    = CGX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 10
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  transports             = 10
  capital                = 1319 # Nanning
  manpower               = 200
  dissent                = 20
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 4
    interventionism   = 3
  }
free = {
	 ic 		 = 4
	 energy 	 = 10
	 metal	 	 = 5
	 rare_materials	 = 3
}
  SpyInfo                = { country = "CGX" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 6 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 8 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 6 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 6 }
  nationalprovinces      = { 1258 1310 1311 1309 1319 1325 }
  ownedprovinces         = { 1258 1310 1311 1309 1319 1325 1312 1313 1249 1248 1314 1317 1318 1320 1321 }
  controlledprovinces    = { 1258 1310 1311 1309 1319 1325 1312 1313 1249 1248 1314 1317 1318 1320 1321 }
  # Guangxi
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 3010 3130 }
  diplomacy =
  { relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 150 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
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
  # ######
  # GUANGXI OOB
  # ######
  landunit =
  { location = 1313 # Guangzhou
    name     = "‘æ1ŒR’c"
    leader = 502001 # Chen Jitang
    id       = { type = 22400 id = 1 }
    division =
    { experience = 30
      id         = { type = 22400 id = 2 }
      name       = "ƒVƒ…ƒ“ƒŠƒƒƒ“•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 3 }
      name       = "‘æ1“Æ—§•à•ºt"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 4 }
      name       = "Œx”õt"
      type       = militia
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "‘æ1ŒR"
    # ## leader = # Yu Hanmou
    id       = { type = 22400 id = 5 }
    division =
    { experience = 30
      id         = { type = 22400 id = 6 }
      name       = "‘æ1•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 7 }
      name       = "‘æ2•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 8 }
      name       = "‘æ3•à•ºt"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1248 # Shantou
    name     = "‘æ2ŒR"
    # ## leader = # Chang Ta
    id       = { type = 22400 id = 9 }
    division =
    { experience = 30
      id         = { type = 22400 id = 10 }
      name       = "‘æ4•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 11 }
      name       = "‘æ5•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 12 }
      name       = "‘æ6•à•ºt"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1318 # Maoming
    name     = "‘æ3ŒR"
    # ## leader = # Yu Hanmou
    id       = { type = 22400 id = 13 }
    division =
    { experience = 30
      id         = { type = 22400 id = 14 }
      name       = "‘æ7•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 15 }
      name       = "‘æ8•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 16 }
      name       = "‘æ9•à•ºt"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "‘æ4ŒR’c"
    leader = 502004 # Li Zongren
    id       = { type = 22400 id = 17 }
    division =
    { experience = 30
      id         = { type = 22400 id = 18 }
      name       = "‘æ19ŒR"
      type       = infantry
      strength   = 30
      model      = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "‘æ7ŒR"
    # ## leader = # Liao Lei
    id       = { type = 22400 id = 19 }
    division =
    { experience = 30
      id         = { type = 22400 id = 20 }
      name       = "‘æ19•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 21 }
      name       = "‘æ21•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 22 }
      name       = "‘æ22•à•ºt"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 23 }
      name       = "‘æ24•à•ºt"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1319 # Nanning
    name     = "‘æ15ŒR"
    leader = 502006 # Bai Chongxi
    id       = { type = 22400 id = 24 }
    division =
    { experience = 30
      id         = { type = 22400 id = 25 }
      name       = "‘æ42•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 26 }
      name       = "‘æ43•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 27 }
      name       = "‘æ44•à•ºt"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 28 }
      name       = "‘æ45•à•ºt"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1313 # Guangzhou
    name     = "L“ŒŒx”õ‘à"
    leader   = 502003
    id       = { type = 22400 id = 29 }
    division =
    { experience = 30
      id         = { type = 22400 id = 30 }
      name       = "L“Œ•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "L¼Œx”õ‘à"
    id       = { type = 22400 id = 31 }
    division =
    { experience = 30
      id         = { type = 22400 id = 32 }
      name       = "L“Œ•à•ºt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 33 }
      name       = "L“Œ•à•ºŒR"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1321 # Hainan
    name     = "ŠC“ìŒx”õ‘à"
    id       = { type = 22400 id = 34 }
    division =
    { experience = 30
      id         = { type = 22400 id = 35 }
      name       = "‘æ9“Æ—§t"
      type       = infantry
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1309 # Bose
    name     = "‘æ9ŒR"
    # ## leader = 50089 # Hao Menglin
    id       = { type = 22000 id = 20 }
    division =
    { experience = 30
      id         = { type = 22000 id = 21 }
      name       = "‘æ9ŒR"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "‘æ28ŒR"
    # leader = X # ?
    id       = { type = 22000 id = 67 }
    division =
    { experience = 30
      id         = { type = 22000 id = 68 }
      name       = "‘æ28ŒR"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "ŒÎ“ìŒx”õ‘à"
    # ## leader = #
    id       = { type = 22000 id = 192 }
    division =
    { experience   = 30
      id           = { type = 22000 id = 193 }
      name         = "‘æ34•à•ºt"
      type         = infantry
      max_strength = 50
      strength     = 50
      model        = 0
    }
  }
  landunit =
  { location = 1311 # Wuzhou
    name     = "”J”gŒx”õ‘à"
    # ## leader = #
    id       = { type = 22000 id = 215 }
    division =
    { id           = { type = 22000 id = 216 }
      name         = "‘æ37“Æ—§•à•º—·"
      type         = infantry
      max_strength = 25
      strength     = 25
      model        = 0
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "‘æ20ŒR"
    leader = 502010 # Yu Hanmou
    id       = { type = 22000 id = 106 }
    division =
    { id    = { type = 22000 id = 107 }
      name  = "‘æ20ŒR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1313 # Guangzhou
    name     = "‘æ2ŒR"
    # ## leader = 50050 # Jiang Dingwen
    id       = { type = 22000 id = 6 }
    division =
    { id    = { type = 22000 id = 7 }
      name  = "‘æ2ŒR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1249 # Chao'an
    name     = "‘æ16ŒR"
    # ## leader = # Li Yunyan
    id       = { type = 22000 id = 36 }
    division =
    { id    = { type = 22000 id = 37 }
      name  = "‘æ16ŒR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1248 # Shantou
    name     = "‘æ36ŒR"
    # ## leader = # Chou Hunyuan
    id       = { type = 22000 id = 87 }
    division =
    { id    = { type = 22000 id = 88 }
      name  = "‘æ36ŒR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1309 # Bose
    name     = "‘æ14ŒR"
    # ## leader = #
    id       = { type = 22000 id = 161 }
    division =
    { id    = { type = 22000 id = 162 }
      name  = "‘æ14ŒR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "‘æ18ŒR"
    # ## leader = 50219 # Luo Zhuoying
    id       = { type = 22000 id = 38 }
    division =
    { id    = { type = 22000 id = 39 }
      name  = "‘æ18ŒR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "‘æ26ŒR"
    # ## leader = 50104 # Xiao Zhichu
    id       = { type = 22000 id = 62 }
    division =
    { id    = { type = 22000 id = 63 }
      name  = "‘æ26ŒR"
      type  = infantry
      model = 0
    }
  }
  # ##### NAVY OOB ######
  navalunit =
  { location = 1313 # Guangzhou
    name     = "L“ŒŠCŒR"
    leader   = 502013
    id       = { type = 22400 id = 40 }
    base     = 1313
    division =
    { id    = { type = 22400 id = 43 }
      name  = "‘æ1—A‘—‘å‘à"
      type  = transport
      model = 0
    }
  }
  # ##### AIR FORCE OOB ######
  airunit =
  { location = 1313 # Guangzhou
    name     = "L“ŒŒR"
    base     = 1313 # Guangzhou
    id       = { type = 22400 id = 38 }
    division =
    { id           = { type = 22400 id = 39 }
      name         = "L“Œ“Æ—§”òs‘à"
      type         = interceptor
      model        = 0
      max_strength = 40
      strength     = 20
    }
  }
}
