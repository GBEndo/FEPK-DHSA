##############################
# Country definition for POR #
##############################
province = { id = 335 anti_air = 1 } # ポルト
province = {
  id = 336 # リスボン
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 983 # ビサウ
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1090 # サントメ
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}
province = {
  id = 1094 # カビンダ
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}
province = {
  id = 1101 # ベンゲラ
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1123 # イニャンバネ
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1146 # ヴェルデ岬諸島
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1316 # 澳門
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1658 # 東チモール
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1867 # アゾレス諸島
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = POR
  capital            = 336 # リスボン
  manpower           = 70
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 15
  transports     = 50
  escorts        = 7

  diplomacy = {
    relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 25 }
    relation = { tag = ITA value = 65 }
    relation = { tag = SAF value = 125 access = yes }
    relation = { tag = SPR value = -50 }
  }
  SpyInfo                = { country = "POR" NumberOfSpies = 5 }

  nationalprovinces      = { 335 336 337 344 345 1867 }
  ownedprovinces         = { 335 336 337 344 345 1867 1146 983 1090 1096 1097 1101 1100 1102 1103 1122 1123 1130 1131 1133 1138 1658 1316 1094 }
  controlledprovinces    = { 335 336 337 344 345 1867 1146 983 1090 1096 1097 1101 1100 1102 1103 1122 1123 1130 1131 1133 1138 1658 1316 1094 }

  techapps               = { 1010 1110 1190 2010 2020 2150 2290 2300 2310 2450 2460 2510 3010 3020 3070 3400 3410 3470 4010 4020 4120 5010 5080 5090 5190 6010 6020 8040 8050 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 9001 } # アントニオ・デ・フラゴソ・カルモナ
  headofgovernment       = { type = 9 id = 9002 } # A・オリヴェイラ・サラザール
  foreignminister        = { type = 9 id = 9003 } # A・オリヴェイラ・サラザール
  armamentminister       = { type = 9 id = 9004 } # ラウル・ブランダン
  ministerofsecurity     = { type = 9 id = 9005 } # マリオ・パイス・ソウサ
  ministerofintelligence = { type = 9 id = 9006 } # ペドロ・テオトニオ・ペレイラ
  chiefofstaff           = { type = 9 id = 9007 } # タッソ・ミランダ・カブラル
  chiefofarmy            = { type = 9 id = 9008 } # J・A・ロバト・グエラ
  chiefofnavy            = { type = 9 id = 9009 } # ジャイメ・アフレイショ
  chiefofair             = { type = 9 id = 9010 } # マニュエル・ゴウヴェイア

  landunit = {
    id       = { type = 19600 id = 1000 }
    name     = "ポルトガル陸軍"
    location = 336
    division = {
      id             = { type = 19600 id = 1001 }
      name           = "第1歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 19600 id = 1002 }
      name           = "第2歩兵師団"
      type           = infantry
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 19600 id = 1003 }
    name     = "ポルトガル海上輸送隊"
    location = 336
    base     = 336
    division = {
      id             = { type = 19600 id = 1004 }
      name           = "第1水上輸送隊"
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 19600 id = 1005 }
    name     = "コロニア水上輸送隊"
    location = 983
    base     = 983
    division = {
      id             = { type = 19600 id = 1006 }
      name           = "第2水上輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 19600 id = 1007 }
      name           = "ドウロ隊"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 19600 id = 9302 }
    name     = "ポルトガル海軍"
    location = 336
    base     = 336
    division = {
      id             = { type = 19600 id = 9303 }
      name           = "ヴィアナドカシュテロ隊"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19600 id = 9304 }
      name           = "第1潜水隊"
      type           = submarine
      model          = 1
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 19600 id = 9300 }
    name     = "ポルトガル空軍"
    location = 336
    base     = 336
    division = {
      id             = { type = 19600 id = 9301 }
      name           = "第1戦術爆撃隊"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
  }
}
