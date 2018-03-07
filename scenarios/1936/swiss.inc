##############################
# Country definition for SCH #
##############################
province = { id = 372 landfort = 4 anti_air = 3 } # クール
province = { id = 530 landfort = 5 anti_air = 3 } # ジュネーヴ
province = {
  id = 532 # ベルン
  landfort = 5
  anti_air = 5
  air_base = { size = 4 current_size = 4 }
}
province = { id = 533 landfort = 5 anti_air = 3 } # チューリヒ

#####################
# Country main data #
#####################

country = {
  tag                = SCH
  capital            = 532 # ベルン
  manpower           = 135
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 25

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = SOV value = 1 }
    relation = { tag = USA value = 1 }
  }
  SpyInfo                = { country = "SCH" NumberOfSpies = 6 }

  nationalprovinces      = { 532 530 533 372 }
  ownedprovinces         = { 532 530 533 372 }
  controlledprovinces    = { 532 530 533 372 }

  techapps               = { 4010 4020 4120 2400 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1310 1110 9010 5010 5020 5080 5090 5190 6010 6020 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 17001 } # アルベルト・マイヤー
  headofgovernment       = { type = 9 id = 17002 } # アルベルト・マイヤー
  foreignminister        = { type = 9 id = 17003 } # ジュゼッペ・モッタ
  armamentminister       = { type = 9 id = 17004 } # アルベルト・マイヤー
  ministerofsecurity     = { type = 9 id = 17005 } # ヨハンネス・バウマン
  ministerofintelligence = { type = 9 id = 17006 } # ロジェ・マッソン
  chiefofstaff           = { type = 9 id = 17007 } # ヤコブ・I・フーバー
  chiefofarmy            = { type = 9 id = 17008 } # ヨハン・アウグスト・ズター
  chiefofnavy            = { type = 9 id = 17009 } # レネ・フォン・グラフェンリート
  chiefofair             = { type = 9 id = 17010 } # オスカー・ビダー

  landunit = {
    id       = { type = 30600 id = 1 }
    name     = "第1軍団"
    location = 532
    division = {
      id             = { type = 30600 id = 2 }
      name           = "第1野戦師団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30600 id = 3 }
    name     = "第2軍団"
    location = 533
    division = {
      id             = { type = 30600 id = 4 }
      name           = "第2歩兵師団"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 5 }
      name           = "第1アルプス猟兵師団"
      type           = bergsjaeger
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 30600 id = 6 }
    name     = "第3軍団"
    location = 530
    division = {
      id             = { type = 30600 id = 7 }
      name           = "第3歩兵師団"
      type           = infantry
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 8 }
      name           = "第4野戦師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 9 }
      name           = "第2山岳歩兵師団"
      type           = bergsjaeger
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 30600 id = 10 }
    name     = "第4軍団"
    location = 372
    division = {
      id             = { type = 30600 id = 11 }
      name           = "第5歩兵師団"
      type           = infantry
      extra          = engineer
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 12 }
      name           = "第6歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 13 }
      name           = "第3山岳師団"
      type           = bergsjaeger
      strength       = 30
    }
  }

  airunit = { 
    id       = { type = 30600 id = 14 }
    name     = "ヒーレン第1航空大隊"
    location = 532
    base     = 532
    division = {
      id             = { type = 30600 id = 15 }
      name           = "第1戦術爆撃航空団"
      type           = tactical_bomber
      model          = 0
      strength       = 40
    }
  }
}
