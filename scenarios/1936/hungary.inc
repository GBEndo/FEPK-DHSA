##############################
# Country definition for HUN #
##############################
province = { id = 456 ic = 2 } # ペーチ
province = {
  id = 457 # ブダペスト
  ic = 2
  anti_air = 2
  air_base = { size = 8 current_size = 8 }
}
province = { id = 497 ic = 2 } # デブレツェン

#####################
# Country main data #
#####################

country = {
  tag                = HUN
  regular_id         = AUS
  capital            = 457 # ブダペスト
  manpower           = 150
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = {
      tag        = AUS
      value      = 100
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = CZE value = -50 }
    relation = { tag = ENG value = -50 }
    relation = { tag = FIN value = 75 }
    relation = { tag = FRA value = -70 }
    relation = { tag = GER value = 100 }
    relation = { tag = IRE value = 25 }
    relation = { tag = ITA value = 125 }
    relation = { tag = POL value = 50 }
    relation = { tag = ROM value = 1 }
    relation = { tag = YUG value = 80 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 5 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }

  nationalprovinces      = { 456 457 458 491 492 497 428 496 498 476 477 478 490 499 493 }
  ownedprovinces         = { 456 457 458 491 492 497 }
  controlledprovinces    = { 456 457 458 491 492 497 }

  techapps               = { 4010 4020 4120 2150 2010 2020 2290 2300 2310 2450 2460 2400 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 6010 6020 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 1
    freedom           = 3
    free_market       = 4
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 21001 } # ミクローシュ・ホルティ
  headofgovernment       = { type = 9 id = 21002 } # ジュラ・ゲンベシュ
  foreignminister        = { type = 9 id = 21003 } # カルマン・カンヤ
  armamentminister       = { type = 9 id = 21004 } # ティハメル・ファビニ
  ministerofsecurity     = { type = 9 id = 21005 } # ミクローシュ・コズマ
  ministerofintelligence = { type = 9 id = 21006 } # ジュラ・ゲンベシュ
  chiefofstaff           = { type = 9 id = 21007 } # グスタフ・ヘネイエイ
  chiefofarmy            = { type = 9 id = 21008 } # イシュトヴァーン・シュヴォイ
  chiefofnavy            = { type = 9 id = 21009 } # ミクローシュ・ホルティ
  chiefofair             = { type = 9 id = 21010 } # ラースロー・トモール
  dormant_leaders        = { 
  44640 44641 44642 44643 44644 44645 44646 44647 44648 44649 44650 44651 44652 44653 44654 44655 44656 44657 44658 44659 44660 44661 44662 44663 44664 44665 44666 44667 44668 44669 44670
  44671	#Rehal
   }

  landunit = {
    id       = { type = 20500 id = 1 }
    name     = "マジャール軍"
    location = 457
    division = {
      id             = { type = 20500 id = 2 }
      name           = "第6歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 3 }
      name           = "第7歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 4 }
      name           = "第10歩兵師団"
      type           = infantry
      extra          = anti_tank
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20500 id = 5 }
    name     = "第1正規軍"
    location = 457
    division = {
      id             = { type = 20500 id = 6 }
      name           = "第12歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 7 }
      name           = "第13歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 8 }
      name           = "第16歩兵師団"
      type           = infantry
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20500 id = 9 }
    name     = "第2正規軍"
    location = 457
    division = {
      id             = { type = 20500 id = 10 }
      name           = "第20歩兵師団"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 11 }
      name           = "第24歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 12 }
      name           = "第25歩兵師団"
      type           = infantry
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 20500 id = 13 }
    name     = "第1空軍"
    location = 457
    base     = 457
    division = {
      id             = { type = 20500 id = 14 }
      name           = "第1戦闘航空群"
      type           = interceptor
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 20500 id = 15 }
      name           = "第1戦闘爆撃航空群"
      type           = tactical_bomber
      model          = 0
      strength       = 30
    }
  }
}
