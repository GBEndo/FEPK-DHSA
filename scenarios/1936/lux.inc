##############################
# Country definition for LUX #
##############################

country = {
  tag                = LUX
  capital            = 71 # ルクセンブルク
  manpower           = 0
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = BEL value = 200 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = -50 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
  }
  SpyInfo                = { country = "LUX" NumberOfSpies = 3 }

  nationalprovinces      = { 71 }
  ownedprovinces         = { 71 }
  controlledprovinces    = { 71 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    freedom           = 9
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 66001 } # シャルロッテ
  headofgovernment       = { type = 9 id = 66002 } # ジョゼフ・ベッシュ
  foreignminister        = { type = 9 id = 66003 } # ジョゼフ・ベッシュ
  armamentminister       = { type = 9 id = 66004 } # ピエール・デュポン
  ministerofsecurity     = { type = 9 id = 66005 } # ノルベルト・ドゥモント
  ministerofintelligence = { type = 9 id = 66006 } # ニコラス・マルケ
  chiefofstaff           = { type = 9 id = 66007 } # ピエール・デュポン
  chiefofarmy            = { type = 9 id = 66008 } # エミーレ・シュペラー
  chiefofnavy            = { type = 9 id = 66009 } # エミーレ・シュペラー
  chiefofair             = { type = 9 id = 66010 } # ニコラス・ディートリヒ

  landunit = {
    id       = { type = 27500 id = 1 }
    name     = "ルクセンブルク軍"
    location = 71
    division = {
      id             = { type = 27500 id = 2 }
      name           = "第1国土防衛師団"
      type           = infantry
      strength       = 30
    }
  }
}
