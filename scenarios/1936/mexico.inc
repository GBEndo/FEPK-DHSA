##############################
# Country definition for MEX #
##############################
province = { id = 747 anti_air = 1 } # モンテレー
province = { id = 751 anti_air = 1 } # グアダラハラ
province = { id = 752 anti_air = 2 } # メキシコシティー
province = {
  id = 754 # アカプルコ
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = MEX
  capital            = 752 # メキシコシティー
  manpower           = 62
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = IRE value = 30 }
    relation = { tag = USA value = 125 }
  }
  SpyInfo                = { country = "MEX" NumberOfSpies = 5 }

  nationalprovinces      = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  ownedprovinces         = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  controlledprovinces    = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }

  techapps               = { 1010 1020 1110 1190 2150 2290 2300 2310 2450 2460 2510 4010 5010 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 8
    freedom           = 6
    free_market       = 6
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 36001 } # ラサロ・カルデナス
  headofgovernment       = { type = 9 id = 36002 } # ラサロ・カルデナス
  foreignminister        = { type = 9 id = 36003 } # エドゥアルド・アイ
  armamentminister       = { type = 9 id = 36004 } # エンリケ・エストラダ・レイノソ
  ministerofsecurity     = { type = 9 id = 36005 } # フランシスコ・U・ベナビデス
  ministerofintelligence = { type = 9 id = 36006 } # プルタルコ・E・カリェス
  chiefofstaff           = { type = 9 id = 36007 } # ベンハミン・G・イル
  chiefofarmy            = { type = 9 id = 36008 } # パブロ・キロガ・エスカミリョ
  chiefofnavy            = { type = 9 id = 36009 } # エクトル・メイクセイロ
  chiefofair             = { type = 9 id = 36010 } # グスタボ・サリナス・カミナ

  landunit = {
    id       = { type = 29500 id = 1 }
    name     = "メキシコ陸軍"
    location = 752
    division = {
      id             = { type = 29500 id = 2 }
      name           = "大統領護衛隊"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 3 }
      name           = "第1歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 4 }
      name           = "第2歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 5 }
      name           = "第3歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 29500 id = 6 }
    name     = "メキシコ騎兵部隊"
    location = 742
    division = {
      id             = { type = 29500 id = 7 }
      name           = "第1騎兵師団"
      type           = cavalry
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 8 }
      name           = "第2騎兵師団"
      type           = cavalry
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 29500 id = 11 }
    name     = "メキシコ空軍"
    location = 754
    base     = 754
    division = {
      id             = { type = 29500 id = 12 }
      name           = "第1戦闘航空群"
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
}
