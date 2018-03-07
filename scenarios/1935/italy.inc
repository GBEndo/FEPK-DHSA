
##############################
# Country definition for ITA #
##############################

province =
{ id         = 368
  landfort   = 5
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Genoa
province =
{ id         = 369
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
}              # La Spezia
province =
{ id       = 370
  air_base = { size = 4 current_size = 4 }
  anti_air = 3
}            # Milan
province =
{ id         = 378
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Venice
province =
{ id       = 399
  air_base = { size = 4 current_size = 4 }
}            # Rhodes
province = { id = 512 anti_air = 1 } # Bologna
province = { id = 513 anti_air = 1 } # Florence
province =
{ id       = 515
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
}            # Rome
province =
{ id       = 521
  air_base = { size = 4 current_size = 4 }
}            # Naples
province =
{ id         = 523
  anti_air   = 1
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Taranto
province =
{ id         = 525
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Palermo
province = { id = 531 landfort = 5 anti_air = 3 } # Turin
province =
{ id         = 534
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  oilpool    = 100
  supplypool = 500
}              # Sardinia
province =
{ id         = 919
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  landfort   = 3
}              # Tobruk
province =
{ id         = 924
  anti_air   = 1
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 4 current_size = 4 }
}              # Bengazi
province =
{ id         = 932
  ic         = { size= 2 current_size = 2 }
  anti_air   = 1
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
  oilpool    = 100
  supplypool = 500
}              # Tripoli
province =
{ id         = 1033
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  oilpool    = 100
  supplypool = 500
}              # Massaua
province = { id = 1056 oilpool = 100 supplypool = 500 } # Mogadishu

#####################
# Country main data #
#####################

country =
{ tag                    = ITA
  manpower               = 460
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  belligerence           = 0 # to avoid MP problems
  capital                = 515
  transports             = 400
  escorts                = 100
  # Illyrian Coast
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation =
    { tag        = ALB
      value      = 10
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = 1 }
    relation =
    { tag        = AUS
      value      = 125
      guaranteed = { day = 17 month = march year = 1934 }
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
    relation =
    { tag        = GRE
      value      = -35
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = HOL value = -20 }
    relation =
    { tag        = HUN
      value      = 125
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = IRE value = 20 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
    relation =
    { tag        = ROM
      value      = 50
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = SAF value = 1 }
    relation = { tag = SAU value = -25 }
    relation =
    { tag        = SCH
      value      = 1
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SPR value = -50 }
    relation =
    { tag        = TUR
      value      = 1
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = YEM value = 50 }
    relation = { tag = YUG value = 75 }
  }
  SpyInfo                = { country = "ITA" NumberOfSpies = 9 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 6 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 8 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 8 }
  SpyInfo                = { country = "POL" NumberOfSpies = 6 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 9 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 6 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 6 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 8 }
  SpyInfo                = { country = "USA" NumberOfSpies = 8 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 6 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 3 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 3 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 9 }
  SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 6 }
  # Somaliland
  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 381 384 366 367 527}
			#    387 388 389 FEPKBETA3
  ownedprovinces         = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398 
                             399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
                             1039 1038 1034 1055 1056 1058
                           }
  # Somaliland
  controlledprovinces    = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398 
                             399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
                             1039 1038 1034 1055 1056 1058
                           }
  # ITA 1936 techs
  # ######################
  # Early fighter
  techapps               = { 4010  4120  4130  4190  4250  2150  2010  2020  2030  2290  2300  2310  2450  1010  1020  1190  1200  1110  5010  5020 
                             5080  5090  5190  5310  5320  5470  5480  9010  9020  9030  6010  6030  8010  8020  8030  8040  8050  8070  8120  3010 
                             3020  3030  3070  3080  3090  3130  3140  3150  3190  3250  3260  3270  3280  3400  3410 3470  3420 3480  14000
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 7
    professional_army = 3
    defense_lobby     = 6
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 3001 }
  headofgovernment       = { type = 9 id = 3002 }
  foreignminister        = { type = 9 id = 3052 }
  armamentminister       = { type = 9 id = 3070 }
  ministerofsecurity     = { type = 9 id = 3093 }
  ministerofintelligence = { type = 9 id = 3006 }
  chiefofstaff           = { type = 9 id = 3007 }
  chiefofarmy            = { type = 9 id = 3008 }
  chiefofnavy            = { type = 9 id = 3009 }
  chiefofair             = { type = 9 id = 3010 }
  landunit =
  { id       = { type = 23500 id = 1 }
    location = 531 # Turin
    name     = "第1軍"
    division =
    { id            = { type = 23500 id = 3 }
      name          = "第22師団「アルプス猟兵」"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 4 }
    location = 531 # Turin
    name     = "第2軍団"
    division =
    { id       = { type = 23500 id = 5 }
      name     = "第4師団「リヴォルノ」"
      type     = infantry
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 6 }
      name     = "第25師団「ボローニャ」"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 7 }
      name     = "第4山岳師団「クネーンゼ」"
      type     = bergsjaeger
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 8 }
    location = 531 # Turin
    name     = "第3軍団"
    division =
    { id       = { type = 23500 id = 9 }
      name     = "第3師団「ラヴェンナ」"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 10 }
      name     = "第6師団「クーネオ」"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 11 }
    location = 378 # Venezia
    name     = "第2軍"
    division =
    { id            = { type = 23500 id = 21 }
      name          = "第13師団「国王」"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 13 }
    location = 378 # Venezia
    name     = "第5軍団"
    # Gen. R. Balocco#
    division =
    { id       = { type = 23500 id = 14 }
      name     = "第12師団「サッサリ」"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 15 }
      name     = "第15師団「ベルガモ」"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 16 }
    location = 378 # Venezia
    name     = "第8軍団"
    # Gen. F Gambelli#
    division =
    { id       = { type = 23500 id = 18 }
      name     = "第9師団「パズビオ」"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 19 }
      name     = "第10師団「ピアヴェ」"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 20 }
    location = 378 # Venezia
    name     = "第11軍団"
    # Gen. C. Mercalli#
    division =
    { id       = { type = 23500 id = 22 }
      name     = "第14師団「イソンツォ」"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 79 }
      name     = "第3山岳師団「ジュリア」"
      type     = bergsjaeger
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 23 }
    location = 378 # Venezia
    name     = "快速軍団"
    # Gen. G. Messe#
    division =
    { id       = { type = 23500 id = 24 }
      name     = "第1師団「エウジェニオ・ディ・サヴォイア」"
      type     = cavalry
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 25 }
      name     = "第2師団「エマヌエーレ・フィリベルト」"
      type     = cavalry
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 26 }
      name     = "第3師団「プリンチペ・アメデオ」"
      type     = cavalry
      strength = 70
      model    = 1
      extra    = armored_car
    }
  }
  landunit =
  { id       = { type = 23500 id = 27 }
    location = 524 # Reggio di Calabria
    name     = "第3軍"
    division =
    { id            = { type = 23500 id = 29 }
      name          = "第16師団「ピストイア」"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 30 }
    location = 524 # Reggio di Calabria
    name     = "第7軍団"
    # Gen. A. Agromini#
    division =
    { id       = { type = 23500 id = 31 }
      name     = "第7師団「ルピ・ディ・トスカーナ」"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 32 }
      name     = "第20師団「フリウリ」"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 33 }
    location = 524 # Reggio di Calabria
    name     = "第9軍団"
    # Gen. C.Rossi#
    division =
    { id       = { type = 23500 id = 34 }
      name     = "第17師団「パヴィア」"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 35 }
      name     = "第23師団「フェッラーラ」"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 36 }
    location = 525 # Palermo
    name     = "第12軍団"
    # Gen. A.Rossi#
    division =
    { id       = { type = 23500 id = 37 }
      name     = "第28師団「アオスタ」"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 38 }
    location = 525 # Palermo
    name     = "第13軍団"
    division =
    { id       = { type = 23500 id = 39 }
      name     = "第31師団「カラブリア」"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 40 }
    location = 368 # Genoa
    name     = "第4軍"
    # Gen. A Guzzoni#
    division =
    { id            = { type = 23500 id = 42 }
      name          = "第11師団「ブレンネロ」"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 43 }
    location = 368 # Genoa
    name     = "第1軍団"
    # Gen. C. Vecchiarelli#
    division =
    { id       = { type = 23500 id = 44 }
      name     = "第1師団「スペルガ」"
      type     = infantry
      extra    = armored_car
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 45 }
    location = 368 # Genoa
    name     = "第4軍団"
    # Gen. C. Mercalli#
    division =
    { id       = { type = 23500 id = 46 }
      name     = "第2師団「スフォルツェスカ」"
      type     = infantry
      extra    = armored_car
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 47 }
    location = 368 # Genoa
    name     = "アルピノ軍団"
    # Gen. L. Negri#
    division =
    { id       = { type = 23500 id = 48 }
      name     = "第1山岳師団「タウリネーゼ」"
      type     = bergsjaeger
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 49 }
      name     = "第2山岳師団「トリデンティナ」"
      type     = bergsjaeger
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 50 }
    location = 515 # Roma
    name     = "リゼルヴァ・セントラル"
    division =
    { id       = { type = 23500 id = 51 }
      name     = "第21師団「サルディニア擲弾兵」"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 52 }
    location = 1033
    name     = "イタリア領東アフリカ総司令部"
    division =
    { id       = { type = 23500 id = 53 }
      name     = "イタリア領東アフリカ軍司令部"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id            = { type = 23500 id = 54 }
      name          = "第32師団「マルケ」"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 2
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 55 }
    location = 1038
    name     = "イタリア領東アフリカ第1軍"
    # Gen. Santini#
    division =
    { id       = { type = 23500 id = 56 }
      name     = "第26師団「アッシエッタ」"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 57 }
      name     = "第30師団「サバウダ」'"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 58 }
      name     = "第5山岳師団「プステリア」"
      type     = bergsjaeger
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 59 }
      name     = "第4CCNN「3ジェンナイヨ」"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 60 }
    location = 1039
    name     = "イタリア領東アフリカ第2軍"
    # Gen. Maravigna#
    division =
    { id       = { type = 23500 id = 61 }
      name     = "第19師団「ヴェネツィア」"
      type     = infantry
      model    = 1
      extra    = armored_car
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 62 }
      name     = "第24師団「ピネローロ」"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 63 }
      name     = "第3CCNN「21アプリーレ」"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 64 }
    location = 1038
    name     = "イタリア領東アフリカ第3軍"
    # Gen. Bastico#
    division =
    { id       = { type = 23500 id = 65 }
      name     = "第27師団「ブレシア」"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 66 }
      name     = "第1CCNN「23マルツォ」"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 67 }
    location = 1039
    name     = "イタリア領東アフリカ第4軍"
    # Gen. Babbini#
    division =
    { id       = { type = 23500 id = 68 }
      name     = "第5師団「コッセリア」"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 69 }
      name     = "第2CCNN「28オットーブレ」"
      type     = militia
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 70 }
      name     = "第5CCNN「1フェブライオ」"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 71 }
    location = 1039
    name     = "エリトレオ軍団"
    # Gen. Pirzio Biroli#
    division =
    { id       = { type = 23500 id = 72 }
      name     = "エリトリア第1師団"
      type     = militia
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 73 }
      name     = "エリトリア第2師団"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 74 }
    location = 1055
    name     = "リビコ軍団"
    # Gen. Graziani#
    division =
    { id       = { type = 23500 id = 75 }
      name     = "第29師団「ピエモンテ」"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 76 }
      name     = "リビア師団"
      type     = militia
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 77 }
      name     = "テベレ第6CCNN師団"
      type     = militia
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 78 }
      name     = "チレーネ第7CCNN師団"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 80 }
    location = 919
    name     = "北アフリカ軍総司令部"
    division =
    { id       = { type = 23500 id = 17 }
      name     = "第18師団「メッシーナ」"
      type     = infantry
      model    = 1
      strength = 70
    }
  }
  navalunit =
  { id       = { type = 23500 id = 125 }
    name     = "王立海軍"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 126 }
      name  = "第2魚雷艇師団"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 23500 id = 127 }
      name  = "RM アンドレーア・ドーリア"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 23500 id = 128 }
      name  = "RM カイオ・ドゥイリオ"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 23500 id = 300 }
      name  = "RM コンテ・ディ・カヴール"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 23500 id = 301 }
      name  = "RM ジューリオ・チェーザレ"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 23500 id = 129 }
      name  = "RM サン・ジョルジョ"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 23500 id = 130 }
      name  = "RM タラント"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23500 id = 131 }
      name  = "RM バーリ"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23500 id = 219 }
      name  = "RM リビア"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23500 id = 224 }
      name  = "第17魚雷艇師団"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 225 }
      name  = "第18魚雷艇師団"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 226 }
      name  = "第19魚雷艇師団"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 227 }
      name  = "第20魚雷艇師団"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 228 }
      name  = "第21魚雷艇師団"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 229 }
      name  = "第22魚雷艇師団"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 230 }
      name  = "第23魚雷艇師団"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 231 }
      name  = "第24魚雷艇師団"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 232 }
      name  = "第25魚雷艇師団"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 132 }
    name     = "第1戦隊"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 133 }
      name  = "RM ザラ"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 23500 id = 134 }
      name  = "RM ゴリッツィア"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 23500 id = 135 }
      name  = "RM フィウメ"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 23500 id = 136 }
      name  = "第9魚雷艇師団"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 23500 id = 137 }
      name  = "ジョルジョ・オルシーニ輸送隊"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 23500 id = 138 }
      name  = "タルクイニア輸送隊"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 141 }
    name     = "第4戦隊"
    location = 378
    base     = 378
    division =
    { id       = { type = 23500 id = 142 }
      name     = "RM アルベリコ・ダ・バルビアーノ"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 143 }
      name  = "RM ルイージ・カドルナ"
      type  = light_cruiser
      model = 1
    }
    division =
    { id       = { type = 23500 id = 144 }
      name     = "RM アルベルト・ダ・ギッサーノ"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 145 }
      name  = "RM アルマンド・ディアス"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 23500 id = 147 }
      name  = "アヴェンティーノ輸送隊"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 151 }
    name     = "第5戦隊"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 209 }
      name  = "第7魚雷艦隊"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 23500 id = 152 }
      name  = "第8魚雷艦隊"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 23500 id = 153 }
      name  = "サジッターリオ輸送隊"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 157 }
    name     = "第8戦隊"
    location = 378
    base     = 378
    division =
    { id    = { type = 23500 id = 158 }
      name  = "第16魚雷艦隊"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 159 }
    name     = "第9戦隊"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 162 }
      name  = "RM ポーラ"
      type  = heavy_cruiser
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 163 }
    name     = "第19戦隊"
    location = 932
    base     = 932
    division =
    { id       = { type = 23500 id = 164 }
      name     = "RM バンデ・ネーレ"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 165 }
      name     = "RM バルトロメーオ・コッレオー二"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 167 }
      name  = "ヴァレルンガ輸送隊"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 169 }
    name     = "第11戦隊"
    location = 368
    base     = 368
    division =
    { id    = { type = 23500 id = 170 }
      name  = "RM トレント"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 23500 id = 171 }
      name  = "RM ボルツァーノ"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 23500 id = 172 }
      name  = "RM トリエステ"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 23500 id = 174 }
      name  = "アスマラ輸送隊"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 175 }
    name     = "第17戦隊"
    location = 368
    base     = 368
    division =
    { id       = { type = 23500 id = 176 }
      name     = "RM ドゥーカ・ダオスタ"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 177 }
      name     = "RM ムツィオ・アッテンドロ"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 178 }
      name     = "RM ライモンド・モンテクッコリ"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 179 }
      name  = "第13魚雷艦隊"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 180 }
    name     = "第1潜水艦隊"
    location = 534
    base     = 534
    division =
    { id    = { type = 23500 id = 181 }
      name  = "第4潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 182 }
      name  = "第51潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 183 }
      name  = "第52潜水隊"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 184 }
    name     = "第2潜水艦隊"
    location = 525
    base     = 525
    division =
    { id    = { type = 23500 id = 185 }
      name  = "第11潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 186 }
      name  = "第12潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 187 }
      name  = "第13潜水隊"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 189 }
    name     = "第3潜水艦隊"
    location = 378
    base     = 378
    division =
    { id    = { type = 23500 id = 190 }
      name  = "第21潜水隊"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 192 }
    name     = "第4潜水艦隊"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 193 }
      name  = "第31潜水隊"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 23500 id = 194 }
      name  = "第33潜水隊"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 196 }
    name     = "第5潜水艦隊"
    location = 368
    base     = 368
    division =
    { id    = { type = 23500 id = 197 }
      name  = "第40潜水隊"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 199 }
    name     = "リビア艦隊"
    location = 932
    base     = 932
    division =
    { id    = { type = 23500 id = 200 }
      name  = "第1魚雷艇隊"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 201 }
    name     = "第6潜水艦隊"
    location = 932
    base     = 932
    division =
    { id    = { type = 23500 id = 202 }
      name  = "第61潜水隊"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 203 }
    name     = "紅海艦隊"
    location = 1033
    base     = 1033
    division =
    { id    = { type = 23500 id = 204 }
      name  = "第3魚雷艇隊"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 205 }
      name  = "第5魚雷艇隊"
      type  = destroyer
      model = 0
    }
  }
  airunit =
  { location = 368
    base     = 368
    id       = { type = 23500 id = 104 }
    name     = "第1空軍"
    division =
    { id       = { type = 23500 id = 105 }
      name     = "第9戦闘航空師団"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 534
    base     = 534
    id       = { type = 23500 id = 106 }
    name     = "第4戦術爆撃航空軍団「ドラゴ」"
    division =
    { id       = { type = 23500 id = 107 }
      name     = "第4爆撃航空師団「ドラゴ」"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
  }
  airunit =
  { location = 515
    base     = 515
    id       = { type = 23500 id = 108 }
    name     = "第2空軍"
    division =
    { id       = { type = 23500 id = 109 }
      name     = "第1戦闘航空師団「アークイラ」"
      strength = 50
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 515
    base     = 515
    id       = { type = 23500 id = 110 }
    name     = "第3航空軍団「ケンタウロ」"
    division =
    { id       = { type = 23500 id = 111 }
      name     = "第3爆撃航空師団「ケンタウロ」"
      strength = 100
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 23500 id = 112 }
    name     = "第3空軍"
    division =
    { id       = { type = 23500 id = 113 }
      name     = "第7戦闘航空師団"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 23500 id = 114 }
    name     = "第5航空軍団「エオロ」"
    division =
    { id       = { type = 23500 id = 115 }
      name     = "第5爆撃航空師団「エオロ」"
      strength = 50
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 932
    base     = 932
    id       = { type = 23500 id = 116 }
    name     = "第4空軍"
    division =
    { id       = { type = 23500 id = 117 }
      name     = "第35爆撃航空師団"
      strength = 50
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 118 }
      name     = "第39輸送航空師団"
      strength = 50
      type     = transport_plane
      model    = 0
    }
  }
  airunit =
  { location = 534
    base     = 534
    id       = { type = 23500 id = 119 }
    name     = "サルディニア航空軍"
    division =
    { id       = { type = 23500 id = 120 }
      name     = "第10爆撃航空師団「マルテ」"
      strength = 80
      type     = naval_bomber
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 121 }
      name     = "第2戦闘航空師団「ボーレア」"
      strength = 80
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 1033
    base     = 1033
    id       = { type = 23500 id = 122 }
    name     = "イタリア領東アフリカ空軍"
    division =
    { id       = { type = 23500 id = 123 }
      name     = "第14戦闘航空師団「レックス」"
      strength = 80
      type     = interceptor
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 124 }
      name     = "第13爆撃航空師団「ペーガゾ」"
      strength = 80
      type     = tactical_bomber
      model    = 0
    }
  }
  # Warships Under Construction#
  division_development =
  { name  = "RM エウジェニオ・ディ・サヴォイア"
    type  = light_cruiser
    model = 2
    cost  = 4.5
    id    = { type = 23500 id = 500 }
    date  = { year = 1936 month = january day = 16 }
  }
  division_development =
  { name  = "第27潜水隊"
    type  = submarine
    model = 1
    cost  = 1.8
    id    = { type = 23500 id = 501 }
    date  = { year = 1936 month = april day = 1 }
  }
}
