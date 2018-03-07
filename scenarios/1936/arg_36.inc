##############################
# Country definition for ARG #
##############################
province = {
  id = 667 # ブエノスアイレス
  anti_air = 5
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 853 # バイアブランカ
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 8 current_size = 8 }
}

#####################
# Country main data #
#####################

country = {
  tag                = ARG
  capital            = 667 # ブエノスアイレス
  manpower           = 50
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 20 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "ARG" NumberOfSpies = 6 }

  nationalprovinces      = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 866 }
  ownedprovinces         = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  controlledprovinces    = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }

  techapps               = { 4010 4020 4120 4130 4190 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 6010 6020 3010 3020 3070 3080 3130 3140 3250 3400 3410 3470 8010 8020 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 6
    free_market       = 8
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 35001 } # アグスティン・P・フスト
  headofgovernment       = { type = 9 id = 35002 } # アグスティン・P・フスト
  foreignminister        = { type = 9 id = 35003 } # カルロス・サベドラ・ラマス
  armamentminister       = { type = 9 id = 35004 } # アルベルト・ウエヨ
  ministerofsecurity     = { type = 9 id = 35005 } # ラモン・カスティリョ
  ministerofintelligence = { type = 9 id = 35006 } # ホルヘ・デ・ラ・トーレ
  chiefofstaff           = { type = 9 id = 35007 } # マヌエル・A・ロドリゲス
  chiefofarmy            = { type = 9 id = 35008 } # マヌエル・A・ロドリゲス
  chiefofnavy            = { type = 9 id = 35009 } # ペドロ・S・カサル
  chiefofair             = { type = 9 id = 35010 } # アントニオ・パロディ

  landunit = {
    id       = { type = 12000 id = 1 }
    name     = "第1軍団"
    location = 667
    division = {
      id             = { type = 12000 id = 706 }
      name           = "最高司令部"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 2 }
      name           = "第3旅団「ペジェグリーニ」"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 3 }
      name           = "第2旅団「サンマルティン」"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 4 }
      name           = "第1旅団「インヘニエロ・クラウセ」"
      type           = infantry
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12000 id = 6 }
    name     = "第2軍団"
    location = 667
    division = {
      id             = { type = 12000 id = 7 }
      name           = "第6山岳旅団「ビジェーガス」"
      type           = bergsjaeger
      strength       = 65
    }
    division = {
      id             = { type = 12000 id = 8 }
      name           = "第4歩兵旅団"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 12000 id = 13 }
    name     = "アルゼンチン海軍"
    location = 853
    base     = 853
    division = {
      id             = { type = 12000 id = 14 }
      name           = "ARA ベインティシンコ・デ・マジョ"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12000 id = 16 }
      name           = "ARA アルミランテ・ブラウン"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12000 id = 18 }
      name           = "ARA モレノ"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 20 }
      name           = "ARA リヴァダヴィア"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 22 }
      name           = "ARA インデペンデンシア"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 24 }
      name           = "ARA ラ・リベルタード"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 26 }
      name           = "ARA ヘネラル・ベルグラノ"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 28 }
      name           = "ARA ヘネラル・プレイレドン"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 30 }
      name           = "第1駆逐隊"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 12000 id = 32 }
      name           = "第2駆逐隊"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 34 }
      name           = "第1潜水隊"
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 12000 id = 9 }
    name     = "陸軍航空隊"
    location = 667
    base     = 667
    division = {
      id             = { type = 12000 id = 10 }
      name           = "第1航空群"
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 12000 id = 11 }
    name     = "海軍航空隊"
    location = 667
    base     = 667
    division = {
      id             = { type = 12000 id = 12 }
      name           = "第1海上飛行隊"
      type           = naval_bomber
      model          = 0
      strength       = 50
    }
  }
}
