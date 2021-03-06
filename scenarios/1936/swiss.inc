##############################
# Country definition for SCH #
##############################
province = { id = 372 landfort = 4 anti_air = 3 } # N[
province = { id = 530 landfort = 5 anti_air = 3 } # Wl[
province = {
  id = 532 # x
  landfort = 5
  anti_air = 5
  air_base = { size = 4 current_size = 4 }
}
province = { id = 533 landfort = 5 anti_air = 3 } # `[q

#####################
# Country main data #
#####################

country = {
  tag                = SCH
  capital            = 532 # x
  manpower           = 135
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 25

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = SOV value = 1 }
    relation = { tag = USA value = 1 }
  }
  SpyInfo                = { country = "SCH" NumberOfSpies = 6 }

  nationalprovinces      = { 532 530 533 372 }
  ownedprovinces         = { 532 530 533 372 }
  controlledprovinces    = { 532 530 533 372 }

  techapps               = { 4010 4020 4120 2400 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1310 1110 9010 5010 5020 5080 5090 5190 6010 6020 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 17001 } # AxgE}C[
  headofgovernment       = { type = 9 id = 17002 } # AxgE}C[
  foreignminister        = { type = 9 id = 17003 } # W[byEb^
  armamentminister       = { type = 9 id = 17004 } # AxgE}C[
  ministerofsecurity     = { type = 9 id = 17005 } # nlXEoE}
  ministerofintelligence = { type = 9 id = 17006 } # WFE}b\
  chiefofstaff           = { type = 9 id = 17007 } # RuEIEt[o[
  chiefofarmy            = { type = 9 id = 17008 } # nEAEOXgEY^[
  chiefofnavy            = { type = 9 id = 17009 } # lEtHEOtF[g
  chiefofair             = { type = 9 id = 17010 } # IXJ[Er_[

  landunit = {
    id       = { type = 30600 id = 1 }
    name     = "æ1Rc"
    location = 532
    division = {
      id             = { type = 30600 id = 2 }
      name           = "æ1ìítc"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30600 id = 3 }
    name     = "æ2Rc"
    location = 533
    division = {
      id             = { type = 30600 id = 4 }
      name           = "æ2àºtc"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 5 }
      name           = "æ1AvXÂºtc"
      type           = bergsjaeger
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 30600 id = 6 }
    name     = "æ3Rc"
    location = 530
    division = {
      id             = { type = 30600 id = 7 }
      name           = "æ3àºtc"
      type           = infantry
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 8 }
      name           = "æ4ìítc"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 9 }
      name           = "æ2Rxàºtc"
      type           = bergsjaeger
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 30600 id = 10 }
    name     = "æ4Rc"
    location = 372
    division = {
      id             = { type = 30600 id = 11 }
      name           = "æ5àºtc"
      type           = infantry
      extra          = engineer
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 12 }
      name           = "æ6àºtc"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 13 }
      name           = "æ3Rxtc"
      type           = bergsjaeger
      strength       = 30
    }
  }

  airunit = { 
    id       = { type = 30600 id = 14 }
    name     = "q[æ1qóåà"
    location = 532
    base     = 532
    division = {
      id             = { type = 30600 id = 15 }
      name           = "æ1ípqóc"
      type           = tactical_bomber
      model          = 0
      strength       = 40
    }
  }
}
