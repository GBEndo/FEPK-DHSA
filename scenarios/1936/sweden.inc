##############################
# Country definition for SWE #
##############################
province = { id = 93 coastalfort = 1 } # マルメー
province = {
  id = 95 # カールスクルーナ
  coastalfort = 3
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 98 # イェーテボリ
  coastalfort = 3
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
}
province = { id = 99 landfort = 1 } # シェーブデ
province = {
  id = 101 # ストックホルム
  coastalfort = 3
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 127 # ルレオ
  landfort = 3
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SWE
  regular_id         = SCA
  capital            = 101 # ストックホルム
  manpower           = 85
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "EST" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 1 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }

  nationalprovinces      = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  ownedprovinces         = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  controlledprovinces    = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }

  techapps               = { 4010 4020 4120 4190 2150 4130 2010 3190 2290 2300 2310 3130 2450 2460 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 5470 6010 6020 3010 3020 3070 3080 3250 3400 3410 3470 8010 8020 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 6
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 7001 } # グスタフ5世
  headofgovernment       = { type = 9 id = 7033 } # ペール・アルビン・ハンソン
  foreignminister        = { type = 9 id = 7038 } # リカルド・サンドラー
  armamentminister       = { type = 9 id = 7047 } # エルンスト・ヴィグフォルス
  ministerofsecurity     = { type = 9 id = 7058 } # カール・シリター
  ministerofintelligence = { type = 9 id = 7006 } # カルロス・アドラークロイツ
  chiefofstaff           = { type = 9 id = 7007 } # オスカー・ニグレン
  chiefofarmy            = { type = 9 id = 7008 } # オスカー・ニグレン
  chiefofnavy            = { type = 9 id = 7009 } # シャルル・デ・シャンプス
  chiefofair             = { type = 9 id = 7010 } # トルステン・フリース

  landunit = {
    id       = { type = 29600 id = 1 }
    name     = "第1軍師団"
    location = 101
    division = {
      id             = { type = 29600 id = 2 }
      name           = "第1師団"
      type           = infantry
      model          = 0
      extra          = artillery
    }
  }
  landunit = {
    id       = { type = 29600 id = 9 }
    name     = "北部遠征軍"
    location = 127
    division = {
      id             = { type = 29600 id = 10 }
      name           = "第5師団"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 29600 id = 11 }
    name     = "民兵部隊"
    location = 102
    division = {
      id             = { type = 29600 id = 12 }
      name           = "民兵部隊"
      type           = militia
    }
  }

  navalunit = {
    id       = { type = 29600 id = 16 }
    name     = "海上部隊"
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 17 }
      name           = "HMS スヴェリエ"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 18 }
      name           = "HMS ドロットニング・ヴィクトリア"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 19 }
      name           = "HMS グスタフ5世"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 21 }
      name           = "HMS クラス・フレミング"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 22 }
      name           = "HMS ゴトランド"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 23 }
      name           = "第1駆逐隊"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 25 }
      name           = "第1輸送隊"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 29600 id = 26 }
    name     = "巡洋艦隊"
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 27 }
      name           = "HMS アラン"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 28 }
      name           = "HMS タッぺルヘッテン"
      type           = heavy_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 29600 id = 30 }
    name     = "カールスクルーナ部隊"
    location = 95
    base     = 95
    division = {
      id             = { type = 29600 id = 31 }
      name           = "HMS オスカル2世"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 33 }
      name           = "第1潜水隊"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 29600 id = 34 }
    name     = "イェーテボリ部隊"
    location = 98
    base     = 98
    division = {
      id             = { type = 29600 id = 35 }
      name           = "HMS マンリヘテン"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 37 }
      name           = "第2潜水隊"
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 29600 id = 13 }
    name     = "第1飛行師団"
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 14 }
      name           = "第1戦術爆撃飛行隊"
      type           = tactical_bomber
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 15 }
      name           = "第1海上攻撃飛行隊"
      type           = naval_bomber
      model          = 0
    }
  }
}
