##############################
# Country definition for NIC #
##############################
province = {
  id = 539 # マナグア
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = NIC
  capital            = 539 # マナグア
  manpower           = 5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "NIC" NumberOfSpies = 2 }

  nationalprovinces      = { 539 }
  ownedprovinces         = { 539 }
  controlledprovinces    = { 539 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 4
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 48001 } # ファン・バウティスタ・サカサ
  headofgovernment       = { type = 9 id = 48002 } # フリアン・イリアス・ナバロ
  foreignminister        = { type = 9 id = 48003 } # レオナルド・アルゲリョ・バルガス
  armamentminister       = { type = 9 id = 48004 } # アナスタシオ・G・ソモサ
  ministerofsecurity     = { type = 9 id = 48005 } # アルカシオ・トレリェス・メンドーサ
  ministerofintelligence = { type = 9 id = 48006 } # レオナルド・アルゲリョ・バルガス
  chiefofstaff           = { type = 9 id = 48007 } # アナスタシオ・G・ソモサ
  chiefofarmy            = { type = 9 id = 48008 } # アウグスト・カラバル・アントニオ
  chiefofnavy            = { type = 9 id = 48009 } # グスタボ・フロレス・メンディエンタ
  chiefofair             = { type = 9 id = 48010 } # ギリェルモ・R・クアドラ

  landunit = {
    id       = { type = 11600 id = 45 }
    name     = "ニカラグア陸軍"
    location = 539
    division = {
      id             = { type = 11600 id = 4500 }
      name           = "大統領護衛隊"
      type           = infantry
      extra          = anti_air
      strength       = 60
    }
  }
}
