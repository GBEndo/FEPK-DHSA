##############################
# Country definition for LIB #
##############################
province = {
  id = 992 # モンロヴィア
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = LIB
  puppet             = USA
  control            = USA
  capital            = 992 # モンロヴィア
  manpower           = 7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = PHI value = 200 }
    relation = { tag = USA value = 200 }
  }
  SpyInfo                = { country = "LIB" NumberOfSpies = 1 }

  nationalprovinces      = { 992 }
  ownedprovinces         = { 992 }
  controlledprovinces    = { 992 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 69001 } # エドウィン・J・バークレイ
  headofgovernment       = { type = 9 id = 69002 } # エドウィン・J・バークレイ
  foreignminister        = { type = 9 id = 69003 } # クラレンス・L・シンプソン
  armamentminister       = { type = 9 id = 69004 } # フレデリック・K・ニールセン
  ministerofsecurity     = { type = 9 id = 69005 } # ヘンリー・R・グライムス
  ministerofintelligence = { type = 9 id = 69006 } # ヘンリー・M・ロビンソン
  chiefofstaff           = { type = 9 id = 69007 } # ベンジャミン・O・デイヴィス
  chiefofarmy            = { type = 9 id = 69008 } # アイヴァー・ヴァージン
  chiefofnavy            = { type = 9 id = 69009 } # レジナルド・ブランドン
  chiefofair             = { type = 9 id = 69010 } # ウォン・ロイ・チャン

  landunit = {
    id       = { type = 25500 id = 1 }
    name     = "リベリア軍"
    location = 992
    division = {
      id             = { type = 25000 id = 2 }
      name           = "共和国第1防衛師団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 25500 id = 3 }
      name           = "共和国第2防衛師団"
      type           = infantry
      strength       = 100
    }
  }
}
