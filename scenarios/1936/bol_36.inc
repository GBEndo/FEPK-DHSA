##############################
# Country definition for BOL #
##############################
province = {
  id = 832 # ラパス
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = BOL
  capital            = 832 # ラパス
  manpower           = 8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }
  SpyInfo                = { country = "BOL" NumberOfSpies = 3 }

  nationalprovinces      = { 836 833 838 832 828 827 837 822 839 }
  ownedprovinces         = { 836 833 838 832 828 827 }
  controlledprovinces    = { 836 833 838 832 828 827 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6210 6300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 7
    defense_lobby     = 8
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 43001 } # ホセ・テハダ・ソルサノ
  headofgovernment       = { type = 9 id = 43002 } # ホセ・テハダ・ソルサノ
  foreignminister        = { type = 9 id = 43003 } # ホセ・マリア・グティエレス
  armamentminister       = { type = 9 id = 43004 } # モリッツ・ホッホシルト
  ministerofsecurity     = { type = 9 id = 43005 } # ホセ・サントス・キンテロス
  ministerofintelligence = { type = 9 id = 43006 } # カルロス・アルタミラノ
  chiefofstaff           = { type = 9 id = 43007 } # グアルベルト・ビジャロエル・ロペス
  chiefofarmy            = { type = 9 id = 43008 } # ハンス・クント
  chiefofnavy            = { type = 9 id = 43009 } # ヒル・イバラ・フアレス
  chiefofair             = { type = 9 id = 43010 } # エクトール・ビルバオ・ロハ

  landunit = {
    id       = { type = 17000 id = 40 }
    name     = "ボリビア陸軍"
    location = 832
    division = {
      id             = { type = 17000 id = 4000 }
      name           = "第1歩兵旅団「ボリバル」"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 17000 id = 4001 }
      name           = "ボリビア第1民兵旅団"
      type           = militia
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 17000 id = 4002 }
      name           = "ボリビア第2民兵旅団"
      type           = militia
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 17000 id = 4003 }
      name           = "第1騎兵旅団「チャコ」"
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }
}
