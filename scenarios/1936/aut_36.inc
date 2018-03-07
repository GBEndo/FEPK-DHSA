##############################
# Country definition for AUS #
##############################
province = {
  id = 377 # インスブルック
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = { id = 461 anti_air = 1 } # クラーゲンフルト
province = {
  id = 463 # ウィーン
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = AUS
  regular_id         = GER
  intrinsic_gov_type = social_liberal
  capital            = 463 # ウィーン
  manpower           = 65
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 75 }
    relation = { tag = FIN value = 55 }
    relation = { tag = FRA value = -10 }
    relation = { tag = GER value = 100 }
    relation = {
      tag        = HUN
      value      = 100
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = IRE value = 10 }
    relation = { tag = ITA value = 125 }
    relation = { tag = SCH value = 50 }
  }
  SpyInfo                = { country = "AUS" NumberOfSpies = 6 }

  nationalprovinces      = { 373 377 460 461 462 463 464 465 467 371 }
  ownedprovinces         = { 373 377 460 461 462 463 464 465 }
  controlledprovinces    = { 373 377 460 461 462 463 464 465 }

  techapps               = { 4010 4020 4120 2150 2010 2020 2290 2300 2310 2450 2460 2510 1010 1190 1110 1310 9010 5010 5020 5080 5090 5190 6010 6020 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    freedom           = 7
    free_market       = 8
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 23001 } # ヴィルヘルム・ミクラス
  headofgovernment       = { type = 9 id = 23002 } # クルト・シュシュニック
  foreignminister        = { type = 9 id = 23003 } # エゴン・ベルガー＝ヴァルデネック
  armamentminister       = { type = 9 id = 23004 } # ユリウス・ラープ
  ministerofsecurity     = { type = 9 id = 23005 } # エドゥアルト・バール＝バーレンフェルス
  ministerofintelligence = { type = 9 id = 23006 } # ヴィルヘルム・ゲバウアー
  chiefofstaff           = { type = 9 id = 23007 } # クルト・フォン・ヤンザ
  chiefofarmy            = { type = 9 id = 23008 } # ウィルヘルム・ツェーナー
  chiefofnavy            = { type = 9 id = 23009 } # パウル・フォン・ヘゲデュス
  chiefofair             = { type = 9 id = 23010 } # アレクサンダー・レーア
  dormant_ministers		= { 
  	23155	#Tito
  	23156	#Schumpeter
  }
  dormant_leaders		= {   
  #Hugarian Leaders
  131100 131101 131102 131103 131104 131105 131106 131107 131108 131109 131110 
  131111 131112 131113 131114 131115 131116 131117 131118 131119 131120 
  131121 131122 131123 131124 131125 131126 131127 131128 131129 131130 
  131131 131132 131133 131134 131135 131136 131137 131138 131139 131140 
  131141 131142 131143 131144 131145 131146 131147 131148 131149 131150 
  131151 131152 131153 131154 131155 131156 131157 131158 131159 131160 
  131161 131162 131163 131164 131165 131166 131167 131168 131169 131170 
  131171 131172 131173 131174 131175 131176 131177 131178 131179 131180 
  131181 131182 131183 131184 131185 131186 131187 131188 131189 131190 
  131191 131192 131193 131194 131195 131196 131197 131198 131199 131200 
  131201 131202 131203 131204 131212 131213 131214 131216 131218 131219 
  131220 131232 131233 131234 131236 131239 131240 131241 131245 131246 
  131247 131248 131250 131254 131255 131256 131257 131260 131262 131263 
  131266 131268 131269 131270 131271 131274 131275 131280 131281 131284 
  131285 131286 131287 131289 131293 131297 131298 131299 131300 131302 
  131303 131304 131307 131319 131322 131324 131325 131329 131331 131333 
  131334 131341 131342 131351 131365 131368 131370 131371 131374 131391 
  131392 131393 131394 131396 131397 131398 131399 131405 131421 131426 
  131427 131430 131431 131436 131437 131438 131440 131456 131458 131459 
  131461 131463 131464 131465 131466 131468 131471 131474 132475 132476 
  132477 132478 132480 132483 132484 132485 132486 132487 132488 132489 
  132490 132491 132492 132493 132494 132495 132496 132497 132498 132499 132500
  132501	#Tito
  #Austro-Hungary Leaders
  132502 132503 132504
  }
  landunit = {
    id       = { type = 14000 id = 9000 }
    name     = "第1軍団"
    location = 463
    division = {
      id             = { type = 14000 id = 1706 }
      name           = "陸軍参謀司令部"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14000 id = 9001 }
      name           = "第1騎兵師団"
      type           = cavalry
      model          = 0
      strength       = 70
    }
    division = {
      id             = { type = 14000 id = 9002 }
      name           = "第1歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14000 id = 9003 }
      name           = "第2歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14000 id = 9004 }
      name           = "第3歩兵師団"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9005 }
    name     = "第2軍団"
    location = 463
    division = {
      id             = { type = 14000 id = 9006 }
      name           = "第4歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9007 }
    name     = "第3軍団"
    location = 463
    division = {
      id             = { type = 14000 id = 9009 }
      name           = "第5歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9008 }
    name     = "第4軍団"
    location = 463
    division = {
      id             = { type = 14000 id = 9011 }
      name           = "第6歩兵師団"
      type           = infantry
      model          = 0
      extra          = engineer
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9010 }
    name     = "第5軍団"
    location = 463
    division = {
      id             = { type = 14000 id = 9012 }
      name           = "第7歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14000 id = 9013 }
    name     = "第6軍団"
    location = 463
    division = {
      id             = { type = 14000 id = 9014 }
      name           = "第1アルプス猟兵師団"
      type           = bergsjaeger
      model          = 0
      strength       = 30
    }
  }
}
