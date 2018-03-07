##############################
# Country definition for BEL #
##############################
province = {
  id = 45 # ゲント
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 50 # アントワープ
  anti_air = 2
  air_base = { size = 6 current_size = 3 }
}
province = {
  id = 51 # ブリュッセル
  anti_air = 1
  air_base = { size = 6 current_size = 6 }
}
province = { id = 68 landfort = 2 anti_air = 2 } # リエージュ
province = {
  id = 1095 # バナナ
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
  supplypool = 50
  oilpool = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = BEL
  capital            = 51 # ブリュッセル
  manpower           = 40
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100
  escorts        = 20

  diplomacy = {
    relation = { tag = AST value = 75 }
    relation = { tag = CAN value = 150 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -5 }
    relation = { tag = JAP value = -25 }
    relation = { tag = LUX value = 200 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 20 }
    relation = { tag = POR value = -20 }
    relation = { tag = SAF value = 35 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "BEL" NumberOfSpies = 6 }

  nationalprovinces      = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  ownedprovinces         = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  controlledprovinces    = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }

  techapps               = { 4010 4020 4120 2150 2010 2020 2290 2300 2310 2450 2460 2510 1010 1020 1310 1190 1200 1110 9010 5010 5020 5080 5090 5190 6010 6020 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 3
    freedom           = 10
    free_market       = 9
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 15001 } # レオポルド3世
  headofgovernment       = { type = 9 id = 15002 } # ポール・ヴァン・ズィーランド
  foreignminister        = { type = 9 id = 15003 } # ポール・ヴァン・ズィーランド
  armamentminister       = { type = 9 id = 15004 } # アルベール・デヴチェ
  ministerofsecurity     = { type = 9 id = 15005 } # エウグネ・ソウダン
  ministerofintelligence = { type = 9 id = 15006 } # アルベール・デヴチェ
  chiefofstaff           = { type = 9 id = 15007 } # オスカー・クモント
  chiefofarmy            = { type = 9 id = 15008 } # ヴィクトル・ヴァン・ストリドンク・デ・バーケル
  chiefofnavy            = { type = 9 id = 15009 } # G・ティマーマン
  chiefofair             = { type = 9 id = 15010 } # L・F・E・ワウテル

  landunit = {
    id       = { type = 11500 id = 1 }
    name     = "第1軍"
    location = 51
    division = {
      id             = { type = 11500 id = 2 }
      name           = "第1歩兵師団"
      type           = infantry
      model          = 0
      extra          = artillery
    }
  }
  landunit = {
    id       = { type = 11500 id = 3 }
    name     = "第2軍"
    location = 52
    division = {
      id             = { type = 11500 id = 4 }
      name           = "第2歩兵師団"
      type           = infantry
      model          = 0
    }
    division = {
      id             = { type = 11500 id = 5 }
      name           = "第3歩兵師団"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 11500 id = 6 }
    name     = "第3軍"
    location = 51
    division = {
      id             = { type = 11500 id = 7 }
      name           = "第1猟兵師団"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 11500 id = 8 }
    name     = "第4軍"
    location = 69
    division = {
      id             = { type = 11500 id = 9 }
      name           = "第4歩兵師団"
      type           = infantry
      model          = 0
      extra          = engineer
    }
    division = {
      id             = { type = 11500 id = 10 }
      name           = "第5歩兵師団"
      type           = infantry
      model          = 0
      extra          = artillery
    }
  }
  landunit = {
    id       = { type = 11500 id = 11 }
    name     = "第5軍"
    location = 70
    division = {
      id             = { type = 11500 id = 12 }
      name           = "第6歩兵師団"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 11500 id = 13 }
    name     = "第6軍"
    location = 68
    division = {
      id             = { type = 11500 id = 14 }
      name           = "第2猟兵師団"
      type           = infantry
      model          = 0
    }
    division = {
      id             = { type = 11500 id = 15 }
      name           = "第7歩兵師団"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 11500 id = 16 }
    name     = "第7軍"
    location = 45
    division = {
      id             = { type = 11500 id = 17 }
      name           = "第1アルデンヌ猟兵師団"
      type           = bergsjaeger
      model          = 0
      extra          = artillery
    }
  }
  landunit = {
    id       = { type = 11500 id = 18 }
    name     = "槍騎兵軍"
    location = 51
    division = {
      id             = { type = 11500 id = 19 }
      name           = "第1自動車化師団"
      type           = infantry
      model          = 1
      extra          = armored_car
    }
    division = {
      id             = { type = 11500 id = 20 }
      name           = "第1先導騎兵師団"
      type           = cavalry
      model          = 1
    }
  }
  landunit = {
    id       = { type = 11500 id = 21 }
    name     = "植民地近衛軍"
    location = 1095
    division = {
      id             = { type = 11500 id = 22 }
      name           = "第1殖民近衛師団"
      type           = infantry
      model          = 0
    }
  }

  navalunit = {
    id       = { type = 11500 id = 23 }
    name     = "第1輸送隊"
    location = 45
    base     = 45
    division = {
      id             = { type = 11500 id = 24 }
      name           = "海軍第1輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 11500 id = 25 }
      name           = "海軍第2輸送隊"
      type           = transport
    }
  }
}
