##############################
# Country definition for CYN #
##############################
province = { id = 1282 ic = 1 } # N’è

#####################
# Country main data #
#####################

country = {
  tag                = CYN
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1307 # ©–¾
  dissent            = 25
  extra_tc           = 4
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  diplomacy = {
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = 200 }
  }

  nationalprovinces      = { 1293 1294 1305 1307 1308 1327 1362 1281 1282 }
  ownedprovinces         = { 1293 1294 1305 1307 1308 1327 1362 1281 1282 }
  controlledprovinces    = { 1293 1294 1305 1307 1308 1327 1362 1281 1282 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 7
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 501001 } # —´‰_ (ƒƒ“Eƒ†ƒ“)
  headofgovernment       = { type = 9 id = 501002 } # —´‰_ (ƒƒ“Eƒ†ƒ“)
  foreignminister        = { type = 9 id = 501003 } # üŠ_ (ƒ`ƒ‡ƒEEƒ`[ƒWƒ‡ƒE)
  armamentminister       = { type = 9 id = 501004 } # —«•¶‹P (ƒŠƒ…[EƒEƒFƒ“ƒtƒC)
  ministerofsecurity     = { type = 9 id = 501005 } # ’š¡”Ö (ƒeƒBƒ“Eƒ`[ƒpƒ“)
  ministerofintelligence = { type = 9 id = 501006 } # •Ä‹¦–Á (ƒ~EƒcƒBƒAƒ~ƒ“)
  chiefofstaff           = { type = 9 id = 501007 } # —´‰_ (ƒƒ“Eƒ†ƒ“)
  chiefofarmy            = { type = 9 id = 501008 } # —´‰_ (ƒƒ“Eƒ†ƒ“)
  chiefofnavy            = { type = 9 id = 501009 } # á¸Š¿ (ƒ‹[Eƒnƒ“)
  chiefofair             = { type = 9 id = 501010 } # á¸Š¿ (ƒ‹[Eƒnƒ“)

  landunit = {
    id       = { type = 22100 id = 1 }
    name     = "‰_“ìŒx”õ‘à"
    location = 1307
    leader   = 501006
    division = {
      id             = { type = 22100 id = 2 }
      name           = "‘æ21“Æ—§—·"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22100 id = 3 }
      name           = "‘æ22“Æ—§—·"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22100 id = 4 }
      name           = "‘æ23“Æ—§—·"
      type           = infantry
      model          = 0
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22100 id = 11 }
    name     = "‘æ24ŒR"
    location = 1281
    leader   = 501004
    division = {
      id             = { type = 22100 id = 12 }
      name           = "‘æ136•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22100 id = 13 }
      name           = "‘æ137•à•ºt"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 270 }
    name     = "lì•ÛˆÀ‘à"
    location = 1362
    division = {
      id             = { type = 22000 id = 271 }
      name           = "lì•ÛˆÀ‘à"
      type           = militia
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 122 }
    name     = "‘æ47ŒR"
    location = 1362
    division = {
      id             = { type = 22000 id = 123 }
      name           = "‘æ47ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 49 }
    name     = "‘æ21ŒR"
    location = 1362
    division = {
      id             = { type = 22000 id = 50 }
      name           = "‘æ21ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 57 }
    name     = "‘æ23ŒR"
    location = 1308
    division = {
      id             = { type = 22000 id = 58 }
      name           = "‘æ23ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 109 }
    name     = "‘æ44ŒR"
    location = 1308
    division = {
      id             = { type = 22000 id = 110 }
      name           = "‘æ44ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 113 }
    name     = "‘æ45ŒR"
    location = 1308
    division = {
      id             = { type = 22000 id = 114 }
      name           = "‘æ45ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 156 }
    name     = "‘æ7—¤ŒR"
    location = 1327
    division = {
      id             = { type = 22000 id = 157 }
      name           = "‘æ7—¤ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 12 }
    name     = "‘æ4ŒR"
    location = 1327
    division = {
      id             = { type = 22000 id = 13 }
      name           = "‘æ4ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 15 }
    name     = "‘æ5ŒR"
    location = 1327
    division = {
      id             = { type = 22000 id = 16 }
      name           = "‘æ5ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 45 }
    name     = "‘æ20ŒR"
    location = 1307
    division = {
      id             = { type = 22000 id = 46 }
      name           = "‘æ20ŒR"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 218 }
    name     = "‹MBi—ß•”"
    location = 1307
    division = {
      id             = { type = 22000 id = 219 }
      name           = "‹MBi—ß•”"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 272 }
    name     = "‹MB•ÛˆÀ‘à"
    location = 1307
    division = {
      id             = { type = 22000 id = 273 }
      name           = "‹MB•ÛˆÀ‘à"
      type           = militia
      model          = 0
    }
  }
}
