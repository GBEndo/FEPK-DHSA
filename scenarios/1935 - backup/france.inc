
##############################
# Country definition for FRA #
##############################

province =
{ id         = 32
  ic         = 1
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # ブレスト
province = { id = 35 anti_air = 2 } # ナント
province =
{ id         = 38
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # シェルブール
province = { id = 39 anti_air = 1 } # カーン
province =
{ id       = 44
  air_base = { size = 10 current_size = 10 }
  anti_air = 1
}            # リール
province =
{ id       = 56
  ic       = 1
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
}            # パリ
province =
{ id       = 59
  air_base = { size = 10 current_size = 10 }
}            # ショレ
province =
{ id       = 62
  air_base = { size = 10 current_size = 10 }
}            # オセール
province =
{ id       = 72
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  landfort = 10
}            # メス
province = { id = 73 anti_air = 2 landfort = 10 } # ストラスブール
province = { id = 316 anti_air = 2 landfort = 10 } # ミュールーズ
province = { id = 317 anti_air = 1 } # ショーモン
province = { id = 320 ic = 1 anti_air = 1 } # ヴィシー
province =
{ id         = 325
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # ボルドー
province =
{ id       = 359
  air_base = { size = 10 current_size = 10 }
}            # トゥールーズ
province =
{ id         = 364
  ic         = 1
  anti_air   = 5
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # マルセイユ
province = { id = 366 landfort = 5 } # ニース
province = { id = 527 landfort = 3 } # グルノーブル
province = { id = 528 ic = 1 } # リヨン
province = { id = 875 supplypool = 1 } # カイエンヌ
province =
{ id         = 939
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}              # チュニス
province =
{ id         = 949
  supplypool = 500
  oilpool    = 1
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}              # アルジェ
province =
{ id         = 953
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # オラン
province =
{ id         = 958
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # カサブランカ
province =
{ id         = 981
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # ダカール
province =
{ id       = 993
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # アビジャン
province = { id = 1037 supplypool = 1 } # ジブチ
province =
{ id         = 1328
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # ハノイ
province =
{ id         = 1337
  supplypool = 100
  oilpool    = 1
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # サイゴン
province =
{ id         = 1794
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # ベイルート

#####################
# Country main data #
#####################

country =
{ tag                    = FRA
  capital                = 56
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  manpower               = 325
  transports             = 300
  escorts                = 60
  peacetime_ic_mod       = 0.5
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = AUS value = -10 }
    relation =
    { tag        = BEL
      value      = 120
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = BHU value = 150 }
    relation = { tag = BUL value = 20 }
    relation = { tag = CAN value = 150 }
    relation = { tag = CZE value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = EST value = 65 }
    relation = { tag = ETH value = 25 }
    relation = { tag = FIN value = 85 }
    relation = { tag = GER value = -35 }
    relation = { tag = GRE value = 20 }
    relation =
    { tag        = HOL
      value      = 75
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = HUN value = -70 }
    relation = { tag = IRE value = 25 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -50 }
    relation = { tag = JAP value = -20 }
    relation = { tag = LAT value = 65 }
    relation = { tag = LIT value = 65 }
    relation =
    { tag        = LUX
      value      = 120
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = NEP value = 150 }
    relation =
    { tag        = NOR
      guaranteed = { day = 30 month = august year = 1934 }
    }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation =
    { tag        = POL
      value      = 100
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 10 }
    relation =
    { tag        = SCH
      value      = 1
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = SPR value = 10 }
    relation =
    { tag        = TUR
      value      = 50
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = USA value = 65 }
    relation = { tag = YEM value = 150 }
    relation =
    { tag        = YUG
      value      = 50
      guaranteed = { day = 7 month = january year = 1935 }
    }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 10 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 4 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 4 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 2 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  # Togoland
  # Metropolitan France
  nationalprovinces      = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72 
                             64  53  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
                           }
  # Metropolitan France
  ownedprovinces         = { 529  527  366  365  367  364  363  362  358  328  327  326  325  324  359  361  319  360  322  323  59   60   61   62  
                             63   318  317  316  73   72   64   53   44   43   18   54   42   55   41   56   57   58   32   33   34   35   36   37  
                             38   39   40   320  321  528  875  898  899  956  969  968  959  958  960  966  1014 970  1013 943  942  945  944  946 
                             947  949  948  951  950  952  953  935  934  936  938  937  939  940  941  1862 1861 1863 1792 1793 1794 1795 1037 973 
                             974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980  986  979  994  996  997  1005 1006 991  995 
                             993  1088 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135 1338 1339 1340 1337 1335
                             1336 1334 1333 1332 1341 1329 1328 1306 1326 1692 1691 1687 1690 1689 1688 1751 1003 1004
                           }
  # Togoland
  # Metropolitan France
  controlledprovinces    = { 529  527  366  365  367  364  363  362  358  328  327  326  325  324  359  361  319  360  322  323  59   60   61   62  
                             63   318  317  316  73   72   64   53   44   43   18   54   42   55   41   56   57   58   32   33   34   35   36   37  
                             38   39   40   320  321  528  875  898  899  956  969  968  959  958  960  966  1014 970  1013 943  942  945  944  946 
                             947  949  948  951  950  952  953  935  934  936  938  937  939  940  941  1862 1861 1863 1792 1793 1794 1795 1037 973 
                             974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980  986  979  994  996  997  1005 1006 991  995 
                             993  1088 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135 1338 1339 1340 1337 1335
                             1336 1334 1333 1332 1341 1329 1328 1306 1326 1692 1691 1687 1690 1689 1688 1751 1003 1004
                           }
  # FRA 1936 techs
  # ######################
  techapps               = { 1010  1020  1110  1190  1200  1310  14000 2010  2020  2030  2040  2150  2290  2300  2310  2400  2450  2460  2510  3010 
                             3020  3030  3070  3080  3090  3100  3130  3140  3150  3190  3200  3210  3220  3250  3260  3270  3280  3320  3330  3400 
                             3410 3470  3420 3480  4010  4020  4120  4130  5010  5020  5050  5080  5090  5190  5200  5310  5320  5470  5480  6010  6030  6110 
                             6120  8010  8020  8030  8040  8050  8070  8100  9010  9020  9030  9040 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    free_market       = 8
    freedom           = 10
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 2001 }
  headofgovernment       = { type = 9 id = 2002 }
  foreignminister        = { type = 9 id = 2003 }
  armamentminister       = { type = 9 id = 2004 }
  ministerofsecurity     = { type = 9 id = 2005 }
  ministerofintelligence = { type = 9 id = 2006 }
  chiefofstaff           = { type = 9 id = 2007 }
  chiefofarmy            = { type = 9 id = 2008 }
  chiefofnavy            = { type = 9 id = 2009 }
  chiefofair             = { type = 9 id = 2010 }
  # #################
  # ###FRENCH OOB####
  # #################
  landunit =
  { id       = { type = 13500 id = 1 }
    name     = "第7軍"
    location = 55
    division =
    { id    = { type = 13500 id = 2 }
      name  = "第4歩兵師団"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 13500 id = 3 }
      name = "第60歩兵師団"
      type = infantry
    }
    division =
    { id    = { type = 13500 id = 5 }
      name  = "第41予備戦車師団"
      type  = light_armor
      model = 1
    }
    division =
    { id       = { type = 13500 id = 6 }
      name     = "第25自動車化師団"
      strength = 70
      type     = infantry
      model    = 1
      extra    = armored_car
    }
  }
  landunit =
  { id       = { type = 13500 id = 8 }
    name     = "第1軍"
    location = 63
    division =
    { id    = { type = 13500 id = 9 }
      name  = "第1軽自動車化師団"
      type  = infantry
      model = 1
      extra = armored_car
    }
    division =
    { id    = { type = 13500 id = 10 }
      name  = "第1歩兵師団"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id    = { type = 13500 id = 11 }
      name  = "第2予備戦車師団"
      type  = light_armor
      model = 1
    }
    division =
    { id    = { type = 13500 id = 15 }
      name  = "第12自動車化師団"
      type  = infantry
      model = 1
      extra = armored_car
    }
    division =
    { id    = { type = 13500 id = 17 }
      name  = "第2北アフリカ歩兵師団"
      type  = infantry
      extra = anti_tank
    }
  }
  landunit =
  { id       = { type = 13500 id = 18 }
    name     = "第9軍"
    location = 64
    division =
    { id    = { type = 13500 id = 19 }
      name  = "第1軽騎兵師団"
      type  = cavalry
      model = 1
    }
    division =
    { id   = { type = 13500 id = 21 }
      name = "第4歩兵師団"
      type = infantry
    }
    division =
    { id       = { type = 13500 id = 23 }
      name     = "第1自動車化歩兵師団"
      strength = 70
      type     = infantry
      model    = 1
      extra    = armored_car
    }
    division =
    { id    = { type = 13500 id = 24 }
      name  = "第18歩兵師団"
      type  = infantry
      extra = anti_air
    }
  }
  landunit =
  { id       = { type = 13500 id = 26 }
    name     = "第2軍"
    location = 72
    division =
    { id   = { type = 13500 id = 27 }
      name = "第2軽騎兵師団"
      type = cavalry
    }
    division =
    { id    = { type = 13500 id = 29 }
      name  = "第71歩兵師団"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id       = { type = 13500 id = 31 }
      name     = "第41歩兵師団"
      strength = 70
      type     = infantry
    }
    division =
    { id   = { type = 13500 id = 32 }
      name = "第1植民地歩兵師団"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 13500 id = 35 }
    name     = "第3軍"
    location = 53
    division =
    { id       = { type = 13500 id = 36 }
      name     = "第3軽騎兵師団"
      strength = 75
      type     = cavalry
    }
    division =
    { id   = { type = 13500 id = 37 }
      name = "第6歩兵師団"
      type = infantry
    }
    division =
    { id   = { type = 13500 id = 39 }
      name = "第8歩兵師団"
      type = infantry
    }
    division =
    { id    = { type = 13500 id = 41 }
      name  = "第3北アフリカ歩兵師団"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id   = { type = 13500 id = 43 }
      name = "第26歩兵師団"
      type = infantry
    }
    division =
    { id   = { type = 13500 id = 45 }
      name = "第42歩兵師団"
      type = infantry
    }
    division =
    { id    = { type = 13500 id = 47 }
      name  = "第20歩兵師団"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 13500 id = 49 }
    name     = "第4軍"
    location = 316
    division =
    { id       = { type = 13500 id = 51 }
      name     = "第11歩兵師団"
      strength = 70
      type     = infantry
    }
    division =
    { id   = { type = 13500 id = 52 }
      name = "第45歩兵師団"
      type = infantry
    }
    division =
    { id    = { type = 13500 id = 54 }
      name  = "第52アフリカ歩兵師団"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 13500 id = 55 }
    name     = "第5軍"
    location = 366
    division =
    { id       = { type = 13500 id = 57 }
      name     = "第24歩兵師団"
      strength = 70
      type     = infantry
    }
    division =
    { id   = { type = 13500 id = 58 }
      name = "第31山岳歩兵師団"
      type = bergsjaeger
    }
    division =
    { id    = { type = 13500 id = 61 }
      name  = "第70歩兵師団"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id    = { type = 13500 id = 62 }
      name  = "第30歩兵師団"
      type  = infantry
      extra = anti_tank
    }
  }
  landunit =
  { id       = { type = 13500 id = 64 }
    name     = "第8軍"
    location = 73
    division =
    { id       = { type = 13500 id = 706 }
      name     = "マジノ線司令部"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 13500 id = 65 }
      name     = "第13歩兵師団"
      strength = 70
      type     = infantry
      extra    = anti_tank
    }
    division =
    { id       = { type = 13500 id = 67 }
      name     = "第19歩兵師団"
      strength = 70
      type     = infantry
    }
    division =
    { id   = { type = 13500 id = 68 }
      name = "第54歩兵師団"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 13500 id = 70 }
    name     = "アルプス軍"
    location = 527
    division =
    { id   = { type = 13500 id = 71 }
      name = "第65山岳歩兵師団"
      type = bergsjaeger
    }
    division =
    { id   = { type = 13500 id = 72 }
      name = "第64山岳歩兵師団"
      type = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 13500 id = 76 }
    name     = "第19ミリテール地域軍"
    location = 949
    division =
    { id   = { type = 13500 id = 77 }
      name = "第85アフリカ歩兵師団"
      type = infantry
    }
    division =
    { id       = { type = 13500 id = 79 }
      name     = "第182アフリカ歩兵師団"
      strength = 60
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 13500 id = 82 }
    name     = "チュニジア軍"
    location = 939
    division =
    { id       = { type = 14000 id = 709 }
      name     = "アフリカ軍司令部"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 13500 id = 83 }
      name     = "第83アフリカ歩兵師団"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
    division =
    { id   = { type = 13500 id = 85 }
      name = "第81アフリカ歩兵師団"
      type = infantry
    }
    division =
    { id       = { type = 13500 id = 88 }
      name     = "第6軽騎兵師団"
      strength = 65
      type     = cavalry
    }
  }
  landunit =
  { id       = { type = 13500 id = 89 }
    name     = "モロッコ隊"
    location = 959
    division =
    { id       = { type = 13500 id = 90 }
      name     = "第3モロッコ師団"
      strength = 60
      type     = infantry
      extra    = anti_tank
    }
  }
  landunit =
  { id       = { type = 13500 id = 91 }
    name     = "インドシナ隊"
    location = 1337
    division =
    { id       = { type = 13500 id = 92 }
      name     = "トンキン師団"
      strength = 65
      type     = infantry
    }
    division =
    { id       = { type = 13500 id = 93 }
      name     = "コーチシナ=カンボジア師団"
      strength = 60
      type     = infantry
      extra    = engineer
    }
  }
  landunit =
  { id       = { type = 13500 id = 94 }
    name     = "遠征軍"
    location = 1037
    division =
    { id       = { type = 13500 id = 95 }
      name     = "第1軽歩兵隊"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 13500 id = 96 }
      name     = "第1/2山岳猟兵師団"
      strength = 100
      type     = bergsjaeger
    }
  }
  navalunit =
  { id       = { type = 13500 id = 98 }
    name     = "フランス第1艦隊"
    location = 32
    base     = 32
    division =
    { id            = { type = 13500 id = 99 }
      name          = "MN ベアルヌ"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 1
    }
    division =
    { id    = { type = 13500 id = 400 }
      name  = "MN アルジェリ"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 13500 id = 126 }
      name  = "MN プリモゲ"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 127 }
      name  = "MN デュケイ・トルーアン"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 129 }
      name  = "MN ラモット・ピケ"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 131 }
      name  = "MN ラ・ガリソニエール"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 13500 id = 243 }
      name  = "MN ル・マルス"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 13500 id = 244 }
      name  = "MN ラ・ライユゥズ"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 13500 id = 245 }
      name  = "MN ル・フォルトゥネ"
      type  = destroyer
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 100 }
    name     = "フランス第2艦隊"
    location = 364
    base     = 364
    division =
    { id    = { type = 13500 id = 101 }
      name  = "MN クールベ"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 13500 id = 103 }
      name  = "MN パリ"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 13500 id = 118 }
      name  = "MN シュフラン"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 116 }
      name  = "MN デュケーヌ"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 259 }
      name  = "MN プリュトン"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 13500 id = 133 }
      name  = "MN ジャンヌ・ダルク"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 139 }
      name  = "MN ブレストーズ"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 13500 id = 144 }
      name  = "MN ル・ボルドレ"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 13500 id = 246 }
      name  = "MN ブーロネーズ"
      type  = destroyer
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 104 }
    name     = "フランス第3艦隊"
    location = 949
    base     = 949
    division =
    { id    = { type = 13500 id = 105 }
      name  = "MN オーシャン"
      type  = battleship
      model = 0
    }         # Renamed Jean Bart 1937
    division =
    { id    = { type = 13500 id = 109 }
      name  = "MN ブルターニュ"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 13500 id = 120 }
      name  = "MN フォッシュ"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 115 }
      name  = "MN トゥールヴィル"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 255 }
      name  = "MN フォルバン"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 13500 id = 152 }
      name  = "MN フグー"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 13500 id = 157 }
      name  = "MN ル・フードロワイヤン"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 13500 id = 242 }
      name  = "MN バスク"
      type  = destroyer
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 110 }
    name     = "フランス第4艦隊"
    location = 32
    base     = 32
    division =
    { id    = { type = 13500 id = 111 }
      name  = "MN ロレーヌ"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 13500 id = 113 }
      name  = "MN プロヴァンス"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 13500 id = 122 }
      name  = "MN コルベール"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 124 }
      name  = "MN デュプレ"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 137 }
      name  = "MN エミール・ベルタン"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 13500 id = 165 }
      name  = "MN フロンデル"
      type  = destroyer
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 171 }
    name     = "第1潜水隊"
    location = 364
    base     = 364
    division =
    { id    = { type = 13500 id = 172 }
      name  = "第1潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 177 }
      name  = "第2潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 248 }
      name  = "第3潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 268 }
      name  = "第4潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 247 }
      name  = "第1潜水隊"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13500 id = 181 }
    name     = "第2潜水隊"
    location = 364
    base     = 364
    division =
    { id    = { type = 13500 id = 249 }
      name  = "第6潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 250 }
      name  = "第7潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 251 }
      name  = "第8潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 182 }
      name  = "第9潜水隊"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 187 }
      name  = "第10潜水隊"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 191 }
    name     = "第3潜水隊"
    location = 949
    base     = 949
    division =
    { id    = { type = 13500 id = 254 }
      name  = "第11潜水隊"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 252 }
      name  = "第12潜水隊"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 253 }
      name  = "第13潜水隊"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 192 }
      name  = "第14潜水隊"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 197 }
      name  = "第15潜水隊"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 198 }
    location = 1337
    base     = 1337
    name     = "遠征輸送隊"
    division =
    { id   = { type = 13500 id = 199 }
      name = "第1輸送隊"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 200 }
      name = "第2輸送隊"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 201 }
      name = "第3輸送隊"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 13500 id = 202 }
    location = 364
    base     = 364
    name     = "総合輸送隊"
    division =
    { id   = { type = 13500 id = 203 }
      name = "第4輸送隊"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 204 }
      name = "第5輸送隊"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 205 }
      name = "第6輸送隊"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 500 }
      name = "第7輸送隊"
      type = transport
    }
  }
  airunit =
  { id       = { type = 13500 id = 206 }
    name     = "第1爆撃航空群"
    location = 56
    base     = 56
    division =
    { id       = { type = 13500 id = 207 }
      name     = "第1戦術爆撃航空群"
      strength = 100
      type     = tactical_bomber
    }
    division =
    { id       = { type = 13500 id = 211 }
      name     = "第2戦術爆撃航空群"
      strength = 100
      type     = tactical_bomber
    }
    division =
    { id       = { type = 13500 id = 215 }
      name     = "第3戦術爆撃航空群"
      strength = 100
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 949
    base     = 949
    id       = { type = 13500 id = 218 }
    name     = "第4爆撃航空群"
    division =
    { id       = { type = 13500 id = 219 }
      name     = "第6戦術爆撃航空群"
      strength = 100
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 364
    base     = 364
    id       = { type = 13500 id = 222 }
    name     = "第5爆撃航空群"
    division =
    { id       = { type = 13500 id = 223 }
      name     = "第7戦術爆撃航空群"
      strength = 100
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 56
    base     = 56
    id       = { type = 13500 id = 226 }
    name     = "第1戦闘航空群"
    division =
    { id       = { type = 13500 id = 227 }
      name     = "第24戦闘航空群"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 13500 id = 231 }
      name     = "第21戦闘航空群"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 364
    base     = 364
    id       = { type = 13500 id = 234 }
    name     = "第3戦闘航空群"
    division =
    { id       = { type = 13500 id = 235 }
      name     = "第23戦闘航空群"
      strength = 100
      type     = interceptor
    }
  }
  # #################################
  # Naval units under construction
  # #################################
  division_development =
  { name  = "MN ダンケルク"
    type  = battlecruiser
    model = 3
    cost  = 7.2
    id    = { type = 13500 id = 300 }
    date  = { year = 1936 month = october day = 1 }
  }
}
