##############################
# Country definition for GUA #
##############################
province = {
  id = 757 # グアテマラ
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = GUA
  capital            = 757 # グアテマラ
  manpower           = 7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
    relation = { tag = ENG value = 50 }
  }
  SpyInfo                = { country = "GUA" NumberOfSpies = 2 }

  nationalprovinces      = { 757 759 }
  ownedprovinces         = { 757 }
  controlledprovinces    = { 757 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 46001 } # ホルヘ・ウビコ・カスタネダ
  headofgovernment       = { type = 9 id = 46002 } # ホルヘ・ウビコ・カスタネダ
  foreignminister        = { type = 9 id = 46003 } # アルフレド・スキナー・クレー
  armamentminister       = { type = 9 id = 46004 } # ギリェルモ・フロレス・アレンダノ
  ministerofsecurity     = { type = 9 id = 46005 } # T・カストロ・ドミンゲス
  ministerofintelligence = { type = 9 id = 46006 } # エドゥアルド・ビジャグラン・アリサ
  chiefofstaff           = { type = 9 id = 46007 } # フェデリコ・ポンセ・バイデス
  chiefofarmy            = { type = 9 id = 46008 } # ホルヘ・ウビコ・カスタネダ
  chiefofnavy            = { type = 9 id = 46009 } # トマス・メンドーサ・ウリベ
  chiefofair             = { type = 9 id = 46010 } # R・ブエナベントゥレ・ピネダ

  landunit = {
    id       = { type = 16500 id = 65 }
    name     = "グアテマラ陸軍"
    location = 757
    division = {
      id             = { type = 16500 id = 6500 }
      name           = "第1歩兵旅団「アドルフォ・V・ホール」"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
  }
}
