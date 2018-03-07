##############################
# Country definition for NZL #
##############################
province = {
  id = 1871 # ウェリントン
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}

#####################
# Country main data #
#####################

country = {
  tag                = NZL
  capital            = 1871 # ウェリントン
  manpower           = 18
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100
  escorts        = 15

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 25 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "NZL" NumberOfSpies = 5 }

  nationalprovinces      = { 1868 1869 1870 1871 1872 1873 }
  ownedprovinces         = { 1868 1869 1870 1871 1872 1873 }
  controlledprovinces    = { 1868 1869 1870 1871 1872 1873 }

  techapps               = { 1010 1020 1190 1200 1210 1220 1310 14000 2010 2290 2300 2310 2450 2460 2510 3010 3020 3070 3080 4010 4020 4120 4130 5010 5020 5080 5090 5190 5310 6010 6030 6110 6120 8010 8020 8030 8040 8050 8070 8100 8120 9010 9020 9030 9140 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 55001 } # ジョルジュ・モンクトン＝アランデル卿
  headofgovernment       = { type = 9 id = 55002 } # マイケル・ジョセフ・サヴェージ
  foreignminister        = { type = 9 id = 55003 } # マイケル・ジョセフ・サヴェージ
  armamentminister       = { type = 9 id = 55004 } # ウォルター・ナッシュ
  ministerofsecurity     = { type = 9 id = 55005 } # ウィリアム・パリー
  ministerofintelligence = { type = 9 id = 55006 } # ケネス・フォークス
  chiefofstaff           = { type = 9 id = 55007 } # ウィリアム・シンクレア＝バージェス
  chiefofarmy            = { type = 9 id = 55008 } # ウィリアム・シンクレア＝バージェス
  chiefofnavy            = { type = 9 id = 55009 } # E・R・ドラモンド
  chiefofair             = { type = 9 id = 55010 } # R・A・コクラン

  landunit = {
    id       = { type = 10600 id = 1 }
    name     = "ニュージーランド遠征軍"
    location = 1871
    division = {
      id             = { type = 10600 id = 2 }
      name           = "ニュージーランド第2歩兵師団"
      type           = infantry
      extra          = engineer
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10600 id = 3 }
    name     = "北部軍管区"
    location = 1869
    division = {
      id             = { type = 10600 id = 4 }
      name           = "第1小銃騎兵師団"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 10600 id = 5 }
      name           = "ニュージーランド第3歩兵師団"
      type           = infantry
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10600 id = 6 }
    name     = "中央軍管区"
    location = 1872
    division = {
      id             = { type = 10600 id = 7 }
      name           = "第2小銃騎兵師団"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 10600 id = 8 }
      name           = "ニュージーランド第1歩兵師団"
      type           = infantry
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10600 id = 9 }
    name     = "南部軍管区"
    location = 1873
    division = {
      id             = { type = 10600 id = 10 }
      name           = "第3小銃騎兵師団"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 10600 id = 11 }
      name           = "ニュージーランド第4歩兵師団"
      type           = infantry
      extra          = anti_air
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 10600 id = 12 }
    name     = "HM ニュージーランド海軍"
    location = 1871
    base     = 1871
    division = {
      id             = { type = 10600 id = 15 }
      name           = "第1輸送隊"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 20 }
      name           = "第2輸送隊"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 21 }
      name           = "第3輸送隊"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 22 }
      name           = "第4輸送隊"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 23 }
      name           = "第5輸送隊"
      type           = transport
      model          = 0
    }
  }
}
