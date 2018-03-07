##############################
# Country definition for SAF #
##############################
province = {
  id = 1108 # ウォルヴィスベイ
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1116 # ケープタウン
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1117 anti_air = 1 } # ポートエリザベス
province = {
  id = 1119 # ダーバン
  anti_air = 3
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = { id = 1120 anti_air = 3 } # ヨハネスブルク

#####################
# Country main data #
#####################

country = {
  tag                = SAF
  capital            = 1121 # プレトリア
  manpower           = 20
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 35 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 80 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "SAF" NumberOfSpies = 5 }

  nationalprovinces      = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1109 1108 1107 1106 1110 }
  ownedprovinces         = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1109 1108 1107 1106 1110 }
  controlledprovinces    = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1109 1108 1107 1106 1110 }

  techapps               = { 4010 4020 4120 4130 2150 2010 2290 2300 2310 2450 2460 2510 1010 1020 1190 1200 1210 5010 5020 5080 5090 5190 5310 9010 9020 9030 9140 6010 6030 6110 6120 8010 8020 8030 8040 8050 8070 8100 8120 3010 14000 1310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 70001 } # クラレンドン伯爵ジョージ・ヴィリエ
  headofgovernment       = { type = 9 id = 70002 } # ジェームズ・ヘルツォーク
  foreignminister        = { type = 9 id = 70003 } # ジェームズ・ヘルツォーク
  armamentminister       = { type = 9 id = 70004 } # ニコラース・ハフェンハ
  ministerofsecurity     = { type = 9 id = 70005 } # ヤン・C・スマッツ
  ministerofintelligence = { type = 9 id = 70006 } # ヤン・C・スマッツ
  chiefofstaff           = { type = 9 id = 70007 } # ピエール・ファン･レイネフェルト
  chiefofarmy            = { type = 9 id = 70008 } # ヤン・C・スマッツ
  chiefofnavy            = { type = 9 id = 70009 } # ピエール・オリヴァー＝ノール
  chiefofair             = { type = 9 id = 70010 } # ピエール・ファン･レイネフェルト

  landunit = {
    id       = { type = 26600 id = 1 }
    name     = "ケープ軍団"
    location = 1116
    division = {
      id             = { type = 26600 id = 2 }
      name           = "ケープ駐屯部隊"
      type           = garrison
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 26600 id = 3 }
    name     = "ヴィットバーテルスラント軍団"
    location = 1120
    division = {
      id             = { type = 26600 id = 4 }
      name           = "ヴィットバーテルスラント駐屯部隊"
      type           = garrison
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 26600 id = 5 }
    name     = "ナタール軍団"
    location = 1119
    division = {
      id             = { type = 26600 id = 6 }
      name           = "ナタール駐屯部隊"
      type           = garrison
      strength       = 50
    }
  }

  navalunit = {
    id       = { type = 26600 id = 7 }
    name     = "南アフリカ海軍"
    location = 1116
    base     = 1116
    division = {
      id             = { type = 26600 id = 10 }
      name           = "SAN 第1輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 11 }
      name           = "SAN 第2輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 12 }
      name           = "SAN 第3輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 13 }
      name           = "SAN 第4輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 14 }
      name           = "SAN 第5輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 15 }
      name           = "SAN 第6輸送隊"
      type           = transport
    }
  }
}
