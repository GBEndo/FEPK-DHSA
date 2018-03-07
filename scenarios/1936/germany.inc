##############################
# Country definition for GER #
##############################
province = { id = 66 landfort = 1 } # アーヘン
province = {
  id = 67 # エッセン
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}
province = { id = 74 landfort = 1 anti_air = 2 } # ザールブリュッケン
province = { id = 75 landfort = 1 } # ケルン
province = { id = 76 anti_air = 2 } # ドルトムント
province = {
  id = 80 # ヴィルヘルムスハーフェン
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 82 # カッセル
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = { id = 88 anti_air = 2 } # ハンブルク
province = { id = 89 anti_air = 1 } # リューベック
province = {
  id = 90 # キール
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 296 # ロストク
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 298 anti_air = 2 } # マクデブルク
province = {
  id = 300 # ベルリン
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = { id = 304 supplypool = 100 } # エルビング
province = { id = 310 anti_air = 1 } # ライプツィヒ
province = { id = 312 anti_air = 1 } # ニュルンベルク
province = {
  id = 313 # フランクフルト・アム・マイン
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 314 # シュトゥットガルト
  landfort = 1
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = { id = 315 landfort = 1 } # フライブルク
province = {
  id = 376 # ミュンヘン
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 473 # ブレスラウ
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 510 # ケーニヒスベルク
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = GER
  flag_ext           = _nazi
  capital            = 300 # ベルリン
  manpower           = 850
  peacetime_ic_mod       = 0.9
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 70
  transports     = 35
  escorts        = 23
  tc_mod = 1.0500	#1.0+0.05
  ai_settings	= { flags = {
  	Kiel_Canel = 1
  } }
  diplomacy = {
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 1 }
    relation = {
      tag        = AUS
      value      = 100
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = {
      tag        = BUL
      value      = 25
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation = {
      tag        = CZE
      value      = -25
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = ENG value = 1 }
    relation = {
      tag        = DEN
      value      = 25
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = EST value = 10 }
    relation = {
      tag        = FIN
      value      = 25
      guaranteed = { year = 1934 month = august day = 22 }
    }
    relation = { tag = FRA value = -35 }
    relation = { tag = GRE value = 15 }
    relation = { tag = HOL value = 1 }
    relation = { tag = HUN value = 100 }
    relation = { tag = IRE value = 15 }
    relation = { tag = IRQ value = 25 }
    relation = {
      tag        = ITA
      value      = 50
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 1 }
    relation = {
      tag        = POL
      value      = -10
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = POR value = 75 }
    relation = {
      tag        = ROM
      value      = 50
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = SAF value = 1 }
    relation = {
      tag        = SCH
      value      = 50
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = -50 }
    relation = {
      tag        = SWE
      value      = 50
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = TUR
      value      = 10
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = USA value = -10 }
    relation = { tag = YEM value = 1 }
    relation = {
      tag        = YUG
      value      = 50
      guaranteed = { year = 1932 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 4 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 2 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 3 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 5 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }

  nationalprovinces      = { 66 67 74 75 76 80 81 82 83 84 85 86 87 88 89 90 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 374 375 376 473 482 510 72 73 316 71 }
  ownedprovinces         = { 66 67 74 75 76 80 81 82 83 84 85 86 87 88 89 90 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 374 375 376 473 482 510 }
  controlledprovinces    = { 66 67 74 75 76 80 81 82 83 84 85 86 87 88 89 90 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 374 375 376 473 482 510 }

  techapps               = { 4010 4020 4120 4130 4250 2150 2010 2020 2030 2290 2300 2310 2320 2400 2450 2460 2510 1010 1020 1190 1200 1210 1220 1110 1310 5010 5020 5080 5090 5190 5310 5470 5480 5490 5550 9010 9020 9030 9040 9050 9090 6210 6220 6230 6240 6250 8010 8020 8030 8040 8050 8080 8150 8160 8170 3010 3020 3070 3080 3090 3100 3130 3140 3150 3160 3190 3200 3210 3220 3250 3260 3270 3280 3320 3400 3410 3470 3420 3480 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    freedom           = 2
    free_market       = 5
    professional_army = 7
    defense_lobby     = 6
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 1 } # アドルフ・ヒトラー
  headofgovernment       = { type = 9 id = 2 } # ルドルフ・ヘス
  foreignminister        = { type = 9 id = 3 } # コンスタンティン・フォン・ノイラート
  armamentminister       = { type = 9 id = 77 } # ヒャルマル・シャハト
  ministerofsecurity     = { type = 9 id = 5 } # ヴィルヘルム・フリック
  ministerofintelligence = { type = 9 id = 6 } # ヴィルヘルム・カナリス
  chiefofstaff           = { type = 9 id = 7 } # ルートヴィヒ・ベック
  chiefofarmy            = { type = 9 id = 8 } # ヴェルナー・フォン・フリッチュ
  chiefofnavy            = { type = 9 id = 9 } # エーリヒ・レーダー
  chiefofair             = { type = 9 id = 10 } # ヘルマン・ゲーリング
  dormant_leaders        = { 
  	544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 1101925 1101926 
  	798 # von Boehm-Ermolli
	811 # von Esebeck F.
	826 # von Kayser
	809 # von Epp
	804 # von dem Bussche-Ippenbrug
	662 # Brandt F.W.
	700 # Fleck
	791 # von Bergmann
	790 # von Berendt
	746 # Heye
	1102076 1102077 1102078 1102079 1102080	#ヴラソフ軍＋白軍
  	}
  	dormant_ministers      = { 229 267 260 270 }

  landunit = {
    id       = { type = 14500 id = 34 }
    name     = "第1軍団"
    location = 510
    division = {
      id             = { type = 14500 id = 35 }
      name           = "第1歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 36 }
      name           = "第11歩兵師団"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 3
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 14500 id = 37 }
      name           = "第21歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 38 }
    name     = "第2軍団"
    location = 302
    division = {
      id             = { type = 14500 id = 39 }
      name           = "第2歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 40 }
      name           = "第12歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 41 }
      name           = "第32歩兵師団"
      type           = infantry
      model          = 1
      extra          = anti_tank
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 42 }
    name     = "第3軍団"
    location = 300
    division = {
      id             = { type = 14500 id = 1706 }
      name           = "A軍集団"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 43 }
      name           = "第3歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 44 }
      name           = "第23歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 45 }
    name     = "第8軍団"
    location = 300
    division = {
      id             = { type = 14500 id = 46 }
      name           = "第8歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 47 }
      name           = "第18歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 48 }
      name           = "第28歩兵師団"
      type           = infantry
      model          = 1
      extra          = engineer
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 49 }
    name     = "第5軍団"
    location = 314
    division = {
      id             = { type = 14500 id = 50 }
      name           = "第5歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 51 }
      name           = "第25歩兵師団"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 52 }
      name           = "第35歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 53 }
    name     = "第6軍団"
    location = 81
    division = {
      id             = { type = 14500 id = 54 }
      name           = "第6歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 55 }
      name           = "第16歩兵師団"
      type           = infantry
      model          = 1
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 56 }
      name           = "第26歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 57 }
    name     = "第9軍団"
    location = 313
    division = {
      id             = { type = 14500 id = 58 }
      name           = "第9歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 59 }
      name           = "第15歩兵師団"
      type           = infantry
      model          = 1
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 60 }
      name           = "第29歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 61 }
    name     = "第12軍団"
    location = 76
    division = {
      id             = { type = 14500 id = 62 }
      name           = "第33歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 63 }
      name           = "第34歩兵師団"
      type           = infantry
      model          = 1
      extra          = engineer
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 64 }
      name           = "第36歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 65 }
    name     = "第4軍団"
    location = 311
    division = {
      id             = { type = 14500 id = 66 }
      name           = "第4歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 67 }
      name           = "第14歩兵師団"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 68 }
      name           = "第24歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 69 }
    name     = "第7軍団"
    location = 376
    division = {
      id             = { type = 14500 id = 70 }
      name           = "第7歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 71 }
      name           = "第10歩兵師団"
      type           = infantry
      model          = 1
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 72 }
      name           = "第17歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 73 }
      name           = "第27歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 74 }
    name     = "第10軍団"
    location = 88
    division = {
      id             = { type = 14500 id = 75 }
      name           = "第20歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 76 }
      name           = "第22歩兵師団"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 77 }
      name           = "第30歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 78 }
    name     = "第11軍団"
    location = 86
    division = {
      id             = { type = 14500 id = 79 }
      name           = "第13歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 80 }
      name           = "第19歩兵師団"
      type           = infantry
      model          = 1
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 81 }
      name           = "第31歩兵師団"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 82 }
    name     = "第1装甲軍団"
    location = 300
    division = {
      id             = { type = 14500 id = 83 }
      name           = "第1装甲師団"
      type           = light_armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 84 }
      name           = "第2装甲師団"
      type           = light_armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 85 }
      name           = "第3装甲師団"
      type           = light_armor
      model          = 0
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }

  navalunit = {
    id       = { type = 14500 id = 1 }
    name     = "ドイツ海軍"
    location = 80
    base     = 80
    division = {
      id             = { type = 14500 id = 2 }
      name           = "KMS ドイッチュラント"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 3 }
      name           = "KMS アドミラル・シェーア"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 4 }
      name           = "KMS ニュルンベルク"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 5 }
      name           = "KMS ライプツィヒ"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 14500 id = 6 }
      name           = "KMS ケーニヒスベルグ"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 14500 id = 7 }
      name           = "KMS カールスルーエ"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 14500 id = 8 }
      name           = "KMS ケルン"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 14500 id = 9 }
      name           = "KMS エムデン"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 17750 id = 10 }
      name           = "KMS レオパルト"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14500 id = 20 }
    name     = "Uボート第2艦隊"
    location = 90
    base     = 90
    division = {
      id             = { type = 14500 id = 21 }
      name           = "Uボート第2艦隊"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 25 }
      name           = "Uボート第3艦隊"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14500 id = 26 }
    name     = "Uボート第1艦隊"
    location = 80
    base     = 80
    division = {
      id             = { type = 14500 id = 27 }
      name           = "Uボート第1艦隊"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 14500 id = 28 }
    name     = "バルト艦隊"
    location = 510
    base     = 510
    division = {
      id             = { type = 14500 id = 29 }
      name           = "KMS シュレスヴィヒ=ホルシュタイン"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 30 }
      name           = "KMS シュレジエン"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 31 }
      name           = "KMS ヴォルフ"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 32 }
      name           = "KMS ティーガー"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 33 }
      name           = "KMS ルクス"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 92 }
      name           = "KMS ヤグアル"
      type           = destroyer
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 14500 id = 86 }
    name     = "第2航空艦隊"
    location = 300
    base     = 300
    division = {
      id             = { type = 14500 id = 87 }
      name           = "第2爆撃航空団「ホルツハマー」"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 88 }
      name           = "第3爆撃航空団「ブリッツ」"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 89 }
      name           = "第51急降下爆撃航空団"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 90 }
      name           = "第2戦闘航空団「リヒトホーフェン」"
      type           = interceptor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 91 }
      name           = "第26戦闘航空団「シュラーゲーター」"
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 95 }
    name     = "第3航空艦隊"
    location = 473
    base     = 473
    division = {
      id             = { type = 14500 id = 96 }
      name           = "第53爆撃航空団「レギオン・コンドル」"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 97 }
      name           = "第25爆撃航空団"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 98 }
      name           = "第30爆撃航空団「アドラー」"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 99 }
    name     = "第4航空艦隊"
    location = 82
    base     = 82
    division = {
      id             = { type = 14500 id = 100 }
      name           = "第1爆撃航空団「ヒンデンブルク」"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 101 }
      name           = "第3戦闘航空団「ウーデット」"
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 102 }
    name     = "第5航空艦隊"
    location = 376
    base     = 376
    division = {
      id             = { type = 14500 id = 103 }
      name           = "第4爆撃航空団「ゲネラル・ヴェーファー」"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 14500 id = 500 }
    name           = "KMS グラーフ・シュペー"
    type           = heavy_cruiser
    model          = 3
    cost           = 5.6
    date           = { year = 1936 month = january day = 6 }
  }
  division_development = {
    id             = { type = 14500 id = 502 }
    name           = "Uボート第4艦隊"
    type           = submarine
    model          = 1
    cost           = 1.6
    date           = { year = 1936 month = march day = 1 }
  }
}
