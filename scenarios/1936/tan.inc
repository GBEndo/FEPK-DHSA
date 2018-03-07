##############################
# Country definition for TAN #
##############################

country = {
  tag                = TAN
  capital            = 1418 # キジル
  manpower           = 1
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = MON value = 200 }
    relation = { tag = SIK value = 125 }
    relation = { tag = SOV value = 200 }
    relation = { tag = TAN value = 50 }
  }
  SpyInfo                = { country = "TAN" NumberOfSpies = 1 }

  nationalprovinces      = { 1418 }
  ownedprovinces         = { 1418 }
  controlledprovinces    = { 1418 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 71001 } # サルチャク・トカ
  headofgovernment       = { type = 9 id = 71002 } # ケムチク＝ウール
  foreignminister        = { type = 9 id = 71003 } # ケムチク＝ウール
  armamentminister       = { type = 9 id = 71004 } # S・T・ペリレンコ
  ministerofsecurity     = { type = 9 id = 71005 } # A・D・クラフチェンコ
  ministerofintelligence = { type = 9 id = 71006 } # ヴァレリー・メジラウク
  chiefofstaff           = { type = 9 id = 71007 } # タンチャク・ショマ
  chiefofarmy            = { type = 9 id = 71008 } # タンチャク・ショマ
  chiefofnavy            = { type = 9 id = 71009 } # V・I・クリコフスキー
  chiefofair             = { type = 9 id = 71010 } # I・P・ルガリンスキー

  landunit = {
    id       = { type = 31600 id = 1 }
    name     = "トゥンスカ第1軍"
    location = 1418
    division = {
      id             = { type = 31600 id = 2 }
      name           = "トゥヴァンスカ第1狙撃兵師団"
      type           = infantry
      strength       = 100
    }
  }
}
