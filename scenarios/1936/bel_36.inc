##############################
# Country definition for BEL #
##############################
province = {
  id = 45 # Qg
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 50 # Ag[v
  anti_air = 2
  air_base = { size = 6 current_size = 3 }
}
province = {
  id = 51 # ubZ
  anti_air = 1
  air_base = { size = 6 current_size = 6 }
}
province = { id = 68 landfort = 2 anti_air = 2 } # G[W
province = {
  id = 1095 # oii
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
  supplypool = 50
  oilpool = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = BEL
  capital            = 51 # ubZ
  manpower           = 40
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100
  escorts        = 20

  diplomacy = {
    relation = { tag = AST value = 75 }
    relation = { tag = CAN value = 150 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -5 }
    relation = { tag = JAP value = -25 }
    relation = { tag = LUX value = 200 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 20 }
    relation = { tag = POR value = -20 }
    relation = { tag = SAF value = 35 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "BEL" NumberOfSpies = 6 }

  nationalprovinces      = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  ownedprovinces         = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  controlledprovinces    = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }

  techapps               = { 4010 4020 4120 2150 2010 2020 2290 2300 2310 2450 2460 2510 1010 1020 1310 1190 1200 1110 9010 5010 5020 5080 5090 5190 6010 6020 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 3
    freedom           = 10
    free_market       = 9
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 15001 } # I|h3¢
  headofgovernment       = { type = 9 id = 15002 } # |[E@EYB[h
  foreignminister        = { type = 9 id = 15003 } # |[E@EYB[h
  armamentminister       = { type = 9 id = 15004 } # Ax[Ef`F
  ministerofsecurity     = { type = 9 id = 15005 } # GEOlE\E_
  ministerofintelligence = { type = 9 id = 15006 } # Ax[Ef`F
  chiefofstaff           = { type = 9 id = 15007 } # IXJ[ENg
  chiefofarmy            = { type = 9 id = 15008 } # BNgE@EXghNEfEo[P
  chiefofnavy            = { type = 9 id = 15009 } # GEeB}[}
  chiefofair             = { type = 9 id = 15010 } # LEFEEEEe

  landunit = {
    id       = { type = 11500 id = 1 }
    name     = "æ1R"
    location = 51
    division = {
      id             = { type = 11500 id = 2 }
      name           = "æ1àºtc"
      type           = infantry
      model          = 0
      extra          = artillery
    }
  }
  landunit = {
    id       = { type = 11500 id = 3 }
    name     = "æ2R"
    location = 52
    division = {
      id             = { type = 11500 id = 4 }
      name           = "æ2àºtc"
      type           = infantry
      model          = 0
    }
    division = {
      id             = { type = 11500 id = 5 }
      name           = "æ3àºtc"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 11500 id = 6 }
    name     = "æ3R"
    location = 51
    division = {
      id             = { type = 11500 id = 7 }
      name           = "æ1Âºtc"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 11500 id = 8 }
    name     = "æ4R"
    location = 69
    division = {
      id             = { type = 11500 id = 9 }
      name           = "æ4àºtc"
      type           = infantry
      model          = 0
      extra          = engineer
    }
    division = {
      id             = { type = 11500 id = 10 }
      name           = "æ5àºtc"
      type           = infantry
      model          = 0
      extra          = artillery
    }
  }
  landunit = {
    id       = { type = 11500 id = 11 }
    name     = "æ5R"
    location = 70
    division = {
      id             = { type = 11500 id = 12 }
      name           = "æ6àºtc"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 11500 id = 13 }
    name     = "æ6R"
    location = 68
    division = {
      id             = { type = 11500 id = 14 }
      name           = "æ2Âºtc"
      type           = infantry
      model          = 0
    }
    division = {
      id             = { type = 11500 id = 15 }
      name           = "æ7àºtc"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 11500 id = 16 }
    name     = "æ7R"
    location = 45
    division = {
      id             = { type = 11500 id = 17 }
      name           = "æ1AfkÂºtc"
      type           = bergsjaeger
      model          = 0
      extra          = artillery
    }
  }
  landunit = {
    id       = { type = 11500 id = 18 }
    name     = "RºR"
    location = 51
    division = {
      id             = { type = 11500 id = 19 }
      name           = "æ1©®Ô»tc"
      type           = infantry
      model          = 1
      extra          = armored_car
    }
    division = {
      id             = { type = 11500 id = 20 }
      name           = "æ1æ±Rºtc"
      type           = cavalry
      model          = 1
    }
  }
  landunit = {
    id       = { type = 11500 id = 21 }
    name     = "A¯nßqR"
    location = 1095
    division = {
      id             = { type = 11500 id = 22 }
      name           = "æ1B¯ßqtc"
      type           = infantry
      model          = 0
    }
  }

  navalunit = {
    id       = { type = 11500 id = 23 }
    name     = "æ1Aà"
    location = 45
    base     = 45
    division = {
      id             = { type = 11500 id = 24 }
      name           = "CRæ1Aà"
      type           = transport
    }
    division = {
      id             = { type = 11500 id = 25 }
      name           = "CRæ2Aà"
      type           = transport
    }
  }
}
