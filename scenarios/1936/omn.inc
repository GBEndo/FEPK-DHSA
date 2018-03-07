##############################
# Country definition for OMN #
##############################
province = {
  id = 1819 # マスカット
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = OMN
  puppet             = ENG
  control            = ENG
  capital            = 1819 # マスカット
  manpower           = 5
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "OMN" NumberOfSpies = 1 }

  nationalprovinces      = { 1819 }
  ownedprovinces         = { 1819 }
  controlledprovinces    = { 1819 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 92001 } # サイード・イブン・ティモール
  headofgovernment       = { type = 9 id = 92002 } # サイード・イブン・ティモール
  foreignminister        = { type = 9 id = 92003 } # サイード・イブン・ティモール
  armamentminister       = { type = 9 id = 92004 } # ジャームズ・E・ドラモンド
  ministerofsecurity     = { type = 9 id = 92005 } # ヘンリー・L・W・L・バーナム
  ministerofintelligence = { type = 9 id = 92006 } # ジェフリー・デニス
  chiefofstaff           = { type = 9 id = 92007 } # サイード・イブン・ティモール
  chiefofarmy            = { type = 9 id = 92008 } # サイード・イブン・ティモール
  chiefofnavy            = { type = 9 id = 92009 } # ジェフリー・クレイドン
  chiefofair             = { type = 9 id = 92010 } # アブダラー・イブン・ティムール

  landunit = {
    id       = { type = 11114 id = 1 }
    name     = "オマーン王立軍"
    location = 1819
    division = {
      id             = { type = 11114 id = 2 }
      name           = "オマーン王立軍"
      type           = cavalry
      strength       = 15
    }
  }
}
