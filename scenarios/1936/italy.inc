##############################
# Country definition for ITA #
##############################
province = {
  id = 368 # WFm@
  landfort = 5
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 369 # XycBA
  anti_air = 3
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 370 # ~m
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 378 # FlcBA
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 399 # [hX
  air_base = { size = 4 current_size = 4 }
}
province = { id = 512 anti_air = 1 } # {[j
province = { id = 513 anti_air = 1 } # tBcF
province = {
  id = 515 # [}
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 521 # i|
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 523 # ^g
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 525 # p
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 531 landfort = 5 anti_air = 3 } # gm
province = {
  id = 534 # Tf[j
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
  supplypool = 500
  oilpool = 100
}
province = {
  id = 919 # guN
  landfort = 3
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 924 # xKW
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 932 # g|
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  supplypool = 500
  oilpool = 100
}
province = {
  id = 1033 # }bT
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
  supplypool = 500
  oilpool = 100
}
province = { id = 1056 supplypool = 500 oilpool = 100 } # KfBV

#####################
# Country main data #
#####################

country = {
  tag                = ITA
  capital            = 515 # [}
  manpower           = 460
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 50
  transports     = 400
  escorts        = 100

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = {
      tag        = ALB
      value      = 10
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = 1 }
    relation = {
      tag        = AUS
      value      = 125
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = BEL value = -5 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 30 }
    relation = { tag = CZE value = 15 }
    relation = { tag = ENG value = -50 }
    relation = { tag = ETH value = -200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = -50 }
    relation = { tag = GER value = 50 }
    relation = {
      tag        = GRE
      value      = -35
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = HOL value = -20 }
    relation = {
      tag        = HUN
      value      = 125
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = IRE value = 20 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
    relation = {
      tag        = ROM
      value      = 50
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = SAF value = 1 }
    relation = { tag = SAU value = -25 }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SPR value = -50 }
    relation = {
      tag        = TUR
      value      = 1
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = YEM value = 50 }
    relation = { tag = YUG value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 3 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 4 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 2 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 1 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 4 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }

  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 381 384 }
  ownedprovinces         = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 398 399 927 933 932 930 929 925 924 923 922 921 920 919 916 917 918 926 928 931 1017 1018 1016 1015 1033 1039 1038 1034 1055 1056 1058 }
  controlledprovinces    = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 398 399 927 933 932 930 929 925 924 923 922 921 920 919 916 917 918 926 928 931 1017 1018 1016 1015 1033 1039 1038 1034 1055 1056 1058 }

  techapps               = { 6120 4010 4120 4130 4190 4250 2150 2010 2020 2030 2290 2300 2310 2450 1010 1020 1190 1200 1110 5010 5020 5080 5090 5190 5310 5320 5470 5480 9010 9020 9030 6010 6030 8010 8020 8030 8040 8050 8070 8120 3010 3020 3030 3070 3080 3090 3130 3140 3150 3190 3250 3260 3270 3280 3400 3410 3470 3420 3480 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 4
    free_market       = 7
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 3001 } # Bbg[IEG}kG[3¢
  headofgovernment       = { type = 9 id = 3002 } # xj[gEb\[j
  foreignminister        = { type = 9 id = 3052 } # xj[gEb\[j
  armamentminister       = { type = 9 id = 3070 } # pIEG~IE^IEfBEF
  ministerofsecurity     = { type = 9 id = 3093 } # xj[gEb\[j
  ministerofintelligence = { type = 9 id = 3006 } # `FU[EA[
  chiefofstaff           = { type = 9 id = 3007 } # t`FXREOWI[
  chiefofarmy            = { type = 9 id = 3008 } # AxgEpA[j
  chiefofnavy            = { type = 9 id = 3009 } # hjREJoj[
  chiefofair             = { type = 9 id = 3010 } # W[byE@

  landunit = {
    id       = { type = 23500 id = 1 }
    name     = "æ1R"
    location = 531
    division = {
      id             = { type = 23500 id = 3 }
      name           = "æ22tcuAvXÂºv"
      type           = infantry
      extra          = artillery
      brigade_model  = 2
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 4 }
    name     = "æ2Rc"
    location = 531
    division = {
      id             = { type = 23500 id = 5 }
      name           = "æ4tcuHmv"
      type           = infantry
      model          = 1
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 6 }
      name           = "æ25tcu{[jv"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 7 }
      name           = "æ4RxtcuNl[[v"
      type           = bergsjaeger
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 8 }
    name     = "æ3Rc"
    location = 531
    division = {
      id             = { type = 23500 id = 9 }
      name           = "æ3tcuFiv"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 10 }
      name           = "æ6tcuN[lIv"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 11 }
    name     = "æ2R"
    location = 378
    division = {
      id             = { type = 23500 id = 21 }
      name           = "æ13tcu¤v"
      type           = infantry
      extra          = artillery
      brigade_model  = 2
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 13 }
    name     = "æ5Rc"
    location = 378
    division = {
      id             = { type = 23500 id = 14 }
      name           = "æ12tcuTbTv"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 15 }
      name           = "æ15tcuxKv"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 16 }
    name     = "æ8Rc"
    location = 378
    division = {
      id             = { type = 23500 id = 18 }
      name           = "æ9tcupYrIv"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 19 }
      name           = "æ10tcusAFv"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 20 }
    name     = "æ11Rc"
    location = 378
    division = {
      id             = { type = 23500 id = 22 }
      name           = "æ14tcuC\cHv"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 79 }
      name           = "æ3RxtcuWAv"
      type           = bergsjaeger
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 23 }
    name     = "õ¬Rc"
    location = 378
    division = {
      id             = { type = 23500 id = 24 }
      name           = "æ1tcuGEWFjIEfBETHCAv"
      type           = cavalry
      model          = 1
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 25 }
      name           = "æ2tcuG}kG[EtBxgv"
      type           = cavalry
      model          = 1
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 26 }
      name           = "æ3tcuv`yEAfIv"
      type           = cavalry
      model          = 1
      extra          = armored_car
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 27 }
    name     = "æ3R"
    location = 524
    division = {
      id             = { type = 23500 id = 29 }
      name           = "æ16tcusXgCAv"
      type           = infantry
      extra          = artillery
      brigade_model  = 2
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 30 }
    name     = "æ7Rc"
    location = 524
    division = {
      id             = { type = 23500 id = 31 }
      name           = "æ7tcusEfBEgXJ[iv"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 32 }
      name           = "æ20tcutEv"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 33 }
    name     = "æ9Rc"
    location = 524
    division = {
      id             = { type = 23500 id = 34 }
      name           = "æ17tcupBAv"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 35 }
      name           = "æ23tcutFb[v"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 36 }
    name     = "æ12Rc"
    location = 525
    division = {
      id             = { type = 23500 id = 37 }
      name           = "æ28tcuAIX^v"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 38 }
    name     = "æ13Rc"
    location = 525
    division = {
      id             = { type = 23500 id = 39 }
      name           = "æ31tcuJuAv"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 40 }
    name     = "æ4R"
    location = 368
    division = {
      id             = { type = 23500 id = 42 }
      name           = "æ11tcuulv"
      type           = infantry
      extra          = artillery
      brigade_model  = 2
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 43 }
    name     = "æ1Rc"
    location = 368
    division = {
      id             = { type = 23500 id = 44 }
      name           = "æ1tcuXyKv"
      type           = infantry
      extra          = armored_car
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 45 }
    name     = "æ4Rc"
    location = 368
    division = {
      id             = { type = 23500 id = 46 }
      name           = "æ2tcuXtHcFXJv"
      type           = infantry
      extra          = armored_car
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 47 }
    name     = "AsmRc"
    location = 368
    division = {
      id             = { type = 23500 id = 48 }
      name           = "æ1Rxtcu^El[[v"
      type           = bergsjaeger
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 49 }
      name           = "æ2RxtcugfeBiv"
      type           = bergsjaeger
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 50 }
    name     = "[@EZg"
    location = 515
    division = {
      id             = { type = 23500 id = 51 }
      name           = "æ21tcuTfBjA±eºv"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 52 }
    name     = "C^AÌAtJiß"
    location = 1033
    division = {
      id             = { type = 23500 id = 53 }
      name           = "C^AÌAtJRiß"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 54 }
      name           = "æ32tcu}Pv"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 55 }
    name     = "C^AÌAtJæ1R"
    location = 1038
    division = {
      id             = { type = 23500 id = 56 }
      name           = "æ26tcuAbVGb^v"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 57 }
      name           = "æ30tcuToE_v'"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 58 }
      name           = "æ5RxtcuvXeAv"
      type           = bergsjaeger
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 59 }
      name           = "æ4CCNNu3WFiCv"
      type           = militia
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 60 }
    name     = "C^AÌAtJæ2R"
    location = 1039
    division = {
      id             = { type = 23500 id = 61 }
      name           = "æ19tcuFlcBAv"
      type           = infantry
      model          = 1
      extra          = armored_car
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 62 }
      name           = "æ24tcusl[v"
      type           = infantry
      model          = 1
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 63 }
      name           = "æ3CCNNu21Av[v"
      type           = militia
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 64 }
    name     = "C^AÌAtJæ3R"
    location = 1038
    division = {
      id             = { type = 23500 id = 65 }
      name           = "æ27tcuuVAv"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 66 }
      name           = "æ1CCNNu23}cHv"
      type           = militia
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 67 }
    name     = "C^AÌAtJæ4R"
    location = 1039
    division = {
      id             = { type = 23500 id = 68 }
      name           = "æ5tcuRbZAv"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 69 }
      name           = "æ2CCNNu28Ibg[uv"
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 70 }
      name           = "æ5CCNNu1tFuCIv"
      type           = militia
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 71 }
    name     = "GgIRc"
    location = 1039
    division = {
      id             = { type = 23500 id = 72 }
      name           = "GgAæ1tc"
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 73 }
      name           = "GgAæ2tc"
      type           = militia
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 74 }
    name     = "rRRc"
    location = 1055
    division = {
      id             = { type = 23500 id = 75 }
      name           = "æ29tcusGev"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 76 }
      name           = "rAtc"
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 77 }
      name           = "exæ6CCNNtc"
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 78 }
      name           = "`[læ7CCNNtc"
      type           = militia
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 80 }
    name     = "kAtJRiß"
    location = 919
    division = {
      id             = { type = 23500 id = 17 }
      name           = "æ18tcubV[iv"
      type           = infantry
      model          = 1
      strength       = 70
    }
  }

  navalunit = {
    id       = { type = 23500 id = 125 }
    name     = "¤§CR"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 126 }
      name           = "æ2øtc"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 127 }
      name           = "RM Ah[AEh[A"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 128 }
      name           = "RM JCIEhDCI"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 300 }
      name           = "RM ReEfBEJ["
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 301 }
      name           = "RM W[IE`F[U"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 129 }
      name           = "RM TEWW"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 130 }
      name           = "RM ^g"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 131 }
      name           = "RM o["
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 219 }
      name           = "RM rA"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 224 }
      name           = "æ17øtc"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 225 }
      name           = "æ18øtc"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 226 }
      name           = "æ19øtc"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 227 }
      name           = "æ20øtc"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 228 }
      name           = "æ21øtc"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 229 }
      name           = "æ22øtc"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 230 }
      name           = "æ23øtc"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 231 }
      name           = "æ24øtc"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 232 }
      name           = "æ25øtc"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 132 }
    name     = "æ1íà"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 133 }
      name           = "RM U"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 134 }
      name           = "RM SbcBA"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 135 }
      name           = "RM tBE"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 136 }
      name           = "æ9øtc"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 137 }
      name           = "WWEIV[jAà"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 138 }
      name           = "^NCjAAà"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 141 }
    name     = "æ4íà"
    location = 378
    base     = 378
    division = {
      id             = { type = 23500 id = 142 }
      name           = "RM AxRE_EorA[m"
      type           = light_cruiser
      model          = 1
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 143 }
      name           = "RM C[WEJhi"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 144 }
      name           = "RM AxgE_EMbT[m"
      type           = light_cruiser
      model          = 1
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 145 }
      name           = "RM A}hEfBAX"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 147 }
      name           = "AFeB[mAà"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 151 }
    name     = "æ5íà"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 209 }
      name           = "æ7Íà"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 152 }
      name           = "æ8Íà"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 153 }
      name           = "TWb^[IAà"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 157 }
    name     = "æ8íà"
    location = 378
    base     = 378
    division = {
      id             = { type = 23500 id = 158 }
      name           = "æ16Íà"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 23500 id = 159 }
    name     = "æ9íà"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 162 }
      name           = "RM |["
      type           = heavy_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 163 }
    name     = "æ19íà"
    location = 932
    base     = 932
    division = {
      id             = { type = 23500 id = 164 }
      name           = "RM ofEl["
      type           = light_cruiser
      model          = 1
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 165 }
      name           = "RM og[IERbI[ñ"
      type           = light_cruiser
      model          = 1
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 167 }
      name           = "@KAà"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 169 }
    name     = "æ11íà"
    location = 368
    base     = 368
    division = {
      id             = { type = 23500 id = 170 }
      name           = "RM gg"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 171 }
      name           = "RM {c@[m"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 172 }
      name           = "RM gGXe"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 174 }
      name           = "AX}Aà"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 175 }
    name     = "æ17íà"
    location = 368
    base     = 368
    division = {
      id             = { type = 23500 id = 176 }
      name           = "RM hD[JE_IX^"
      type           = light_cruiser
      model          = 2
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 177 }
      name           = "RM cBIEAbeh"
      type           = light_cruiser
      model          = 2
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 178 }
      name           = "RM ChEeNbR"
      type           = light_cruiser
      model          = 2
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 179 }
      name           = "æ13Íà"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 180 }
    name     = "æ1öÍà"
    location = 534
    base     = 534
    division = {
      id             = { type = 23500 id = 181 }
      name           = "æ4öà"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 182 }
      name           = "æ51öà"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 183 }
      name           = "æ52öà"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 23500 id = 184 }
    name     = "æ2öÍà"
    location = 525
    base     = 525
    division = {
      id             = { type = 23500 id = 185 }
      name           = "æ11öà"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 186 }
      name           = "æ12öà"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 187 }
      name           = "æ13öà"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 23500 id = 189 }
    name     = "æ3öÍà"
    location = 378
    base     = 378
    division = {
      id             = { type = 23500 id = 190 }
      name           = "æ21öà"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 192 }
    name     = "æ4öÍà"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 193 }
      name           = "æ31öà"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 194 }
      name           = "æ33öà"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 196 }
    name     = "æ5öÍà"
    location = 368
    base     = 368
    division = {
      id             = { type = 23500 id = 197 }
      name           = "æ40öà"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 199 }
    name     = "rAÍà"
    location = 932
    base     = 932
    division = {
      id             = { type = 23500 id = 200 }
      name           = "æ1øà"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 201 }
    name     = "æ6öÍà"
    location = 932
    base     = 932
    division = {
      id             = { type = 23500 id = 202 }
      name           = "æ61öà"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 203 }
    name     = "gCÍà"
    location = 1033
    base     = 1033
    division = {
      id             = { type = 23500 id = 204 }
      name           = "æ3øà"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 205 }
      name           = "æ5øà"
      type           = destroyer
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 23500 id = 104 }
    name     = "æ1óR"
    location = 368
    base     = 368
    division = {
      id             = { type = 23500 id = 105 }
      name           = "æ9í¬qótc"
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 23500 id = 106 }
    name     = "æ4ípqóRcuhSv"
    location = 534
    base     = 534
    division = {
      id             = { type = 23500 id = 107 }
      name           = "æ4qótcuhSv"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 23500 id = 108 }
    name     = "æ2óR"
    location = 515
    base     = 515
    division = {
      id             = { type = 23500 id = 109 }
      name           = "æ1í¬qótcuA[NCv"
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 23500 id = 110 }
    name     = "æ3qóRcuP^Ev"
    location = 515
    base     = 515
    division = {
      id             = { type = 23500 id = 111 }
      name           = "æ3qótcuP^Ev"
      type           = naval_bomber
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 23500 id = 112 }
    name     = "æ3óR"
    location = 525
    base     = 525
    division = {
      id             = { type = 23500 id = 113 }
      name           = "æ7í¬qótc"
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 23500 id = 114 }
    name     = "æ5qóRcuGIv"
    location = 525
    base     = 525
    division = {
      id             = { type = 23500 id = 115 }
      name           = "æ5qótcuGIv"
      type           = naval_bomber
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 23500 id = 116 }
    name     = "æ4óR"
    location = 932
    base     = 932
    division = {
      id             = { type = 23500 id = 117 }
      name           = "æ35qótc"
      type           = tactical_bomber
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 118 }
      name           = "æ39Aqótc"
      type           = transport_plane
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 23500 id = 119 }
    name     = "TfBjAqóR"
    location = 534
    base     = 534
    division = {
      id             = { type = 23500 id = 120 }
      name           = "æ10qótcu}ev"
      type           = naval_bomber
      model          = 0
      strength       = 80
    }
    division = {
      id             = { type = 23500 id = 121 }
      name           = "æ2í¬qótcu{[Av"
      type           = interceptor
      model          = 0
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 23500 id = 122 }
    name     = "C^AÌAtJóR"
    location = 1033
    base     = 1033
    division = {
      id             = { type = 23500 id = 123 }
      name           = "æ14í¬qótcubNXv"
      type           = interceptor
      model          = 0
      strength       = 80
    }
    division = {
      id             = { type = 23500 id = 124 }
      name           = "æ13qótcuy[K]v"
      type           = tactical_bomber
      model          = 0
      strength       = 80
    }
  }

  division_development = {
    id             = { type = 23500 id = 500 }
    name           = "RM GEWFjIEfBETHCA"
    type           = light_cruiser
    model          = 2
    cost           = 4.5
    date           = { year = 1936 month = january day = 16 }
  }
  division_development = {
    id             = { type = 23500 id = 501 }
    name           = "æ27öà"
    type           = submarine
    model          = 1
    cost           = 1.8
    date           = { year = 1936 month = april day = 1 }
  }
}
