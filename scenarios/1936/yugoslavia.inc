##############################
# Country definition for YUG #
##############################
province = { id = 382 anti_air = 2 } # ザクレブ
province = {
  id = 384 # スプリト
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 3 current_size = 3 }
}
province = { id = 388 anti_air = 2 } # ドゥブロヴニク
province = {
  id = 389 # ポドゴリツァ
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 453 # ベオグラード
  anti_air = 3
  air_base = { size = 6 current_size = 6 }
}

#####################
# Country main data #
#####################

country = {
  tag                = YUG
  capital            = 453 # ベオグラード
  manpower           = 155
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 15

  diplomacy = {
    relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 50 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = HUN value = 80 }
    relation = { tag = ITA value = 75 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = {
      tag        = TUR
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "YUG" NumberOfSpies = 7 }

  nationalprovinces      = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  ownedprovinces         = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  controlledprovinces    = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 4120 9010 6210 6300 3010 3020 3030 3400 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 20001 } # パヴレ・カラジョルジェヴィチ
  headofgovernment       = { type = 9 id = 20002 } # ミラン・ストジャディノヴィッチ
  foreignminister        = { type = 9 id = 20003 } # ミラン・ストジャディノヴィッチ
  armamentminister       = { type = 9 id = 20004 } # ボガルジャブ・ジェヴティク
  ministerofsecurity     = { type = 9 id = 20005 } # パヴレ・カラジョルジェヴィチ
  ministerofintelligence = { type = 9 id = 20006 } # ボリヴォジェ・ヨシモヴィッチ
  chiefofstaff           = { type = 9 id = 20007 } # ペータル・コシック
  chiefofarmy            = { type = 9 id = 20008 } # アレクサンダー・シンカー＝マルコヴィッチ
  chiefofnavy            = { type = 9 id = 20009 } # ボゴルジャブ・イリッチ
  chiefofair             = { type = 9 id = 20010 } # デュサン・シモヴィッチ

  landunit = {
    id       = { type = 19800 id = 1 }
    name     = "ユーゴスラビア第4軍"
    location = 453
    division = {
      id             = { type = 19800 id = 2 }
      name           = "第27サフスカ歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 3 }
    name     = "ユーゴスラビア第7軍"
    location = 453
    division = {
      id             = { type = 19800 id = 4 }
      name           = "第32トリグラフスカ歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 5 }
      name           = "トリグラフスキ分遣隊"
      type           = bergsjaeger
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 6 }
      name           = "第1騎兵師団"
      type           = cavalry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 7 }
    name     = "ユーゴスラビア第1軍"
    location = 453
    division = {
      id             = { type = 19800 id = 8 }
      name           = "第7ポティスカ歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 9 }
      name           = "第3騎兵師団"
      type           = cavalry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 10 }
    name     = "ユーゴスラビア第2軍"
    location = 386
    division = {
      id             = { type = 19800 id = 11 }
      name           = "第10ボサンスカ歩兵師団"
      type           = infantry
      extra          = anti_air
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 12 }
      name           = "第17ヴルバスカ歩兵師団"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 13 }
    name     = "ユーゴスラビア第3軍"
    location = 415
    division = {
      id             = { type = 19800 id = 14 }
      name           = "第13ヘルツェゴヴァツカ歩兵師団"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 15 }
      name           = "第15ゼツカ歩兵師団"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 16 }
    name     = "第3軍"
    location = 384
    division = {
      id             = { type = 19800 id = 17 }
      name           = "第5スマデイスカ歩兵師団"
      type           = infantry
      extra          = anti_air
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 18 }
      name           = "第20ブレガリニツカ歩兵師団"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 19 }
      name           = "第22イバルスカ歩兵師団"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 20 }
    name     = "第5軍"
    location = 380
    division = {
      id             = { type = 19800 id = 21 }
      name           = "第8クラインスカ歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 22 }
      name           = "第9ティモツカ歩兵師団"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 23 }
      name           = "第2騎兵師団"
      type           = cavalry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 24 }
    name     = "第6軍"
    location = 453
    division = {
      id             = { type = 19800 id = 25 }
      name           = "第3ドゥナフスカ歩兵師団"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 26 }
      name           = "第4騎兵師団"
      type           = cavalry
      strength       = 70
    }
  }

  navalunit = {
    id       = { type = 19800 id = 30 }
    name     = "ユーゴスラビア海軍"
    location = 384
    base     = 384
    division = {
      id             = { type = 19800 id = 32 }
      name           = "第1駆逐隊"
      type           = destroyer
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 19800 id = 33 }
      name           = "第1潜水隊"
      type           = submarine
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 19800 id = 27 }
    name     = "ユーゴスラビア空軍"
    location = 453
    base     = 453
    division = {
      id             = { type = 19800 id = 28 }
      name           = "第2戦闘航空連隊"
      type           = interceptor
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 19800 id = 29 }
      name           = "第26戦術爆撃機連隊"
      type           = tactical_bomber
      model          = 0
      strength       = 30
    }
  }
}
