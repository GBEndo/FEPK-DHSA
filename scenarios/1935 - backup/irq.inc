
##############################
# Country definition for IRQ #
##############################

province =
{ id         = 1823
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
}              # Basrah
province = { id = 1864 anti_air = 1 } # Mosul
province =
{ id       = 1866
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Baghdad

#####################
# Country main data #
#####################

country =
{ tag                    = IRQ
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 1000
  supplies               = 500
  manpower               = 15
  money                  = 10
  capital                = 1866
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 4
    free_market       = 6
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 6
  }
  nationalprovinces      = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 1825 1822}
  ownedprovinces         = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  controlledprovinces    = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  diplomacy =
  { relation = { tag = AST value = 100 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = 25 }
    relation = { tag = ITA value = 25 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NZL value = 100 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 125 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SAU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = YEM value = 125 }
  }
  SpyInfo                = { country = "IRQ" NumberOfSpies = 3 }
  SpyInfo                = { country = "SYR" NumberOfSpies = 8 }
  SpyInfo                = { country = "LEB" NumberOfSpies = 8 }
  SpyInfo                = { country = "PER" NumberOfSpies = 3 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 3 }
  SpyInfo                = { country = "SAU" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 91001 }
  headofgovernment       = { type = 9 id = 91002 }
  foreignminister        = { type = 9 id = 91003 }
  armamentminister       = { type = 9 id = 91004 }
  ministerofsecurity     = { type = 9 id = 91005 }
  ministerofintelligence = { type = 9 id = 91006 }
  chiefofstaff           = { type = 9 id = 91007 }
  chiefofarmy            = { type = 9 id = 91008 }
  chiefofnavy            = { type = 9 id = 91009 }
  chiefofair             = { type = 9 id = 91010 }
  landunit =
  { id       = { type = 22500 id = 3 }
    name     = "ÉCÉâÉNâ§óßåR"
    location = 1866
    division =
    { id       = { type = 22500 id = 4 }
      name     = "ÉCÉâÉNëÊ1ï‡ï∫étíc"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 22500 id = 5 }
      name     = "ÉCÉâÉNëÊ2ï‡ï∫étíc"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 22500 id = 6 }
      name     = "ÉCÉâÉNëÊ3ï‡ï∫étíc"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 22500 id = 7 }
      name     = "ÉCÉâÉNëÊ4ï‡ï∫étíc"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 22500 id = 8 }
      name     = "ÉCÉâÉNëÊ1é©ìÆé‘âªï‡ï∫étíc"
      strength = 30
      type     = infantry
    }
  }
  airunit =
  { id       = { type = 22500 id = 1 }
    name     = "â§óßó§åRçqãÛë‡"
    location = 1866
    base     = 1866
    division =
    { id       = { type = 22500 id = 2 }
      name     = "RIAF ëÊ1êÌì¨çqãÛë‡"
      strength = 30
      type     = interceptor
      model    = 0
    }
  }
}
