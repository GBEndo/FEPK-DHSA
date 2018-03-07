##############################
# Country definition for BRA #
##############################
province = { id = 847 anti_air = 1 } # ƒNƒŠƒeƒBƒo
province = {
  id = 848 # ƒ|ƒ‹ƒgƒAƒŒƒOƒŒ
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}
province = { id = 883 anti_air = 2 } # ƒSƒCƒAƒX
province = {
  id = 885 # ƒŠƒIƒfƒWƒƒƒlƒCƒ
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}
province = {
  id = 886 # ƒTƒ“ƒpƒEƒ
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}

#####################
# Country main data #
#####################

country = {
  tag                = BRA
  capital            = 885 # ƒŠƒIƒfƒWƒƒƒlƒCƒ
  manpower           = 125
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = IRE value = 20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "BRA" NumberOfSpies = 5 }

  nationalprovinces      = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  ownedprovinces         = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  controlledprovinces    = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }

  techapps               = { 4010 4020 4120 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5080 5090 5190 6010 6020 3010 3070 3130 3250 3400 8010 8020 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 9
    freedom           = 7
    free_market       = 8
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 34001 }
  headofgovernment       = { type = 9 id = 34002 }
  foreignminister        = { type = 9 id = 34003 }
  armamentminister       = { type = 9 id = 34211 }
  ministerofsecurity     = { type = 9 id = 34200 }
  ministerofintelligence = { type = 9 id = 34006 }
  chiefofstaff           = { type = 9 id = 34209 }
  chiefofarmy            = { type = 9 id = 34210 }
  chiefofnavy            = { type = 9 id = 34009 }
  chiefofair             = { type = 9 id = 34212 }

  landunit = {
    id       = { type = 18000 id = 1 }
    name     = "ƒuƒ‰ƒWƒ‹‘æ1—¤ŒR"
    location = 883
    division = {
      id             = { type = 18000 id = 2 }
      name           = "‘æ1•à•ºt’c"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 3 }
      name           = "‘æ2•à•ºt’c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 4 }
      name           = "‘æ268¡ˆÀŒx”õt’c"
      type           = militia
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 5 }
      name           = "‘æ269¡ˆÀŒx”õt’c"
      type           = militia
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 18000 id = 6 }
    name     = "ƒuƒ‰ƒWƒ‹‘æ2—¤ŒR"
    location = 885
    division = {
      id             = { type = 18000 id = 7 }
      name           = "‘æ3•à•ºt’c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 8 }
      name           = "‘æ92‹R•ºt’c"
      type           = cavalry
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 18000 id = 11 }
    name     = "ŠCã—A‘—‘à"
    location = 885
    base     = 885
    division = {
      id             = { type = 18000 id = 12 }
      name           = "‘æ1ŠCã—A‘—‘à"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 13 }
      name           = "‘æ2ŠCã—A‘—‘à"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 14 }
      name           = "‘æ3ŠCã—A‘—‘à"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 15 }
      name           = "‘æ4ŠCã—A‘—‘à"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 16 }
      name           = "‘æ5ŠCã—A‘—‘à"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 17 }
      name           = "‘æ6ŠCã—A‘—‘à"
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 18000 id = 18 }
    name     = "ƒuƒ‰ƒWƒ‹ŠCŒR"
    location = 848
    base     = 848
    division = {
      id             = { type = 18000 id = 19 }
      name           = "NRB ƒTƒ“ƒpƒEƒ"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 18000 id = 29 }
      name           = "NRB ƒ~ƒiƒXƒWƒFƒ‰ƒCƒX"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 18000 id = 21 }
      name           = "NRB ƒoƒCƒA"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 18000 id = 23 }
      name           = "NRB ƒŠƒIƒOƒ‰ƒ“ƒfƒhƒXƒ‹"
      type           = light_cruiser
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 18000 id = 9 }
    name     = "ƒuƒ‰ƒWƒ‹‹óŒR"
    location = 885
    base     = 885
    division = {
      id             = { type = 18000 id = 10 }
      name           = "‘æ1í“¬q‹óŒQ"
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
}
