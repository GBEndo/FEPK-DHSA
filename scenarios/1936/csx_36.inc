##############################
# Country definition for CSX #
##############################
province = {
  id = 1205 # –k‹
  air_base = { size = 5 current_size = 5 }
}
province = {
  id = 1216 # Ï“ì
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CSX
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1225 # ‘¾Œ´
  dissent            = 25
  extra_tc           = 20
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  free = {
    ic             = 4
    energy         = 10
    metal          = 5
    rare_materials = 3
  }

  diplomacy = {
    relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }

  nationalprovinces      = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 }
  ownedprovinces         = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 }
  controlledprovinces    = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 503001 } # è…àR (ƒCƒFƒ“EƒV[ƒVƒƒƒ“)
  headofgovernment       = { type = 9 id = 503002 } # è…àR (ƒCƒFƒ“EƒV[ƒVƒƒƒ“)
  foreignminister        = { type = 9 id = 503003 } # ‰¤æÓ (ƒƒ“Eƒcƒ@ƒ“ƒVƒ…[)
  armamentminister       = { type = 9 id = 503004 } # ˜úì‹` (ƒtEƒYƒIƒC[)
  ministerofsecurity     = { type = 9 id = 503005 } # ‹È—k‰È (ƒNEƒ„ƒ“ƒP)
  ministerofintelligence = { type = 9 id = 503006 } # ¤k (ƒVƒƒƒ“Eƒ`ƒFƒ“)
  chiefofstaff           = { type = 9 id = 503007 } # è…àR (ƒCƒFƒ“EƒV[ƒVƒƒƒ“)
  chiefofarmy            = { type = 9 id = 503008 } # è…àR (ƒCƒFƒ“EƒV[ƒVƒƒƒ“)
  chiefofnavy            = { type = 9 id = 503009 } # ƒhƒ~ƒgƒŠ[EƒNƒƒ‹ƒ`ƒFƒt
  chiefofair             = { type = 9 id = 503010 } # è…àR (ƒCƒFƒ“EƒV[ƒVƒƒƒ“)

  landunit = {
    id       = { type = 22300 id = 1 }
    name     = "R¼Œx”õ‘à"
    location = 1225
    division = {
      id             = { type = 22300 id = 2 }
      name           = "‘æ1“Æ—§‘à"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 7 }
      name           = "‘æ1‹R•ºt"
      type           = cavalry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 9 }
    name     = "‘æ34ŒR"
    location = 1226
    division = {
      id             = { type = 22300 id = 10 }
      name           = "‘æ66•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 12 }
      name           = "‘æ71•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 13 }
    name     = "‘æ35ŒR"
    location = 1208
    division = {
      id             = { type = 22300 id = 14 }
      name           = "‘æ72•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 16 }
    name     = "ãV‰“Œx”õ‘à"
    location = 1208
    division = {
      id             = { type = 22300 id = 17 }
      name           = "ãV‰“Œx”õ‘à"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 18 }
    name     = "‘æ29ŒR"
    location = 1205
    division = {
      id             = { type = 22300 id = 19 }
      name           = "‘æ37•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 20 }
      name           = "‘æ37•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 21 }
      name           = "‘æ37•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 22 }
      name           = "‘æ37•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 23 }
      name           = "‘æ9‹R•ºt"
      type           = cavalry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 24 }
      name           = "‘æ39“Æ—§‘à"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 26 }
    name     = "‰Í–kŒx”õ‘à"
    location = 1210
    division = {
      id             = { type = 22300 id = 27 }
      name           = "‰Í–k•ÛˆÀ‘à"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 28 }
    name     = "ƒ`ƒƒƒnƒ‹Œx”õ‘à"
    location = 1206
    division = {
      id             = { type = 22300 id = 29 }
      name           = "ƒ`ƒƒƒnƒ‹•ÛˆÀ‘à"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 30 }
    name     = "‘æ3—¤ŒR"
    location = 1216
    division = {
      id             = { type = 22300 id = 31 }
      name           = "‘æ22•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 32 }
      name           = "‘æ22•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 35 }
    name     = "‘æ12ŒR"
    location = 1216
    division = {
      id             = { type = 22300 id = 36 }
      name           = "‘æ20•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 37 }
      name           = "‘æ81•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 38 }
    name     = "R“ŒŒx”õ‘à"
    location = 1216
    division = {
      id             = { type = 22300 id = 39 }
      name           = "R“Œ•ÛˆÀ‘à"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 27 }
    name     = "‘æ13ŒR"
    location = 1208
    division = {
      id             = { type = 22000 id = 28 }
      name           = "‘æ13ŒR"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 43 }
    name     = "‘æ19ŒR"
    location = 1225
    division = {
      id             = { type = 22000 id = 44 }
      name           = "‘æ19ŒR"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 79 }
    name     = "‘æ32ŒR"
    location = 1212
    division = {
      id             = { type = 22000 id = 80 }
      name           = "‘æ32ŒR"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 83 }
    name     = "‘æ33ŒR"
    location = 1209
    division = {
      id             = { type = 22000 id = 84 }
      name           = "‘æ33ŒR"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 103 }
    name     = "‘æ42ŒR"
    location = 1226
    division = {
      id             = { type = 22000 id = 104 }
      name           = "‘æ42ŒR"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 128 }
    name     = "‘æ53ŒR"
    location = 1210
    division = {
      id             = { type = 22000 id = 129 }
      name           = "‘æ53ŒR"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 136 }
    name     = "‘æ63ŒR"
    location = 1272
    division = {
      id             = { type = 22000 id = 137 }
      name           = "‘æ63ŒR"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 145 }
    name     = "“Œ–k‹R•ºŒR"
    location = 1272
    division = {
      id             = { type = 22000 id = 146 }
      name           = "“Œ–k‹R•ºŒR"
      type           = cavalry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 205 }
    name     = "™b@ãV–õŒö"
    location = 1272
    division = {
      id             = { type = 22000 id = 206 }
      name           = "™b@ãV–õŒö"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 266 }
    name     = "R¼•ÛˆÀ‘à"
    location = 1225
    division = {
      id             = { type = 22000 id = 267 }
      name           = "R¼•ÛˆÀ‘à"
      type           = militia
      model          = 0
      locked         = yes
    }
  }
}
