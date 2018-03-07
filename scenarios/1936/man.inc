##############################
# Country definition for MAN #
##############################
province = {
  id = 1379 # 哈爾濱
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = MAN
  puppet             = JAP
  control            = JAP
  capital            = 1390 # 新京
  manpower           = 100
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 100
  money          = 10
  free = {
    energy         = 14
    metal          = 7
    rare_materials = 4
  }

  diplomacy = {
    relation = { tag = CHC value = -100 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = CGX value = -75 }
    relation = { tag = GER value = 20 }
    relation = { tag = JAP value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = USA value = 1 }
  }
  SpyInfo                = { country = "MAN" NumberOfSpies = 5 }

  nationalprovinces      = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1397 1398 1386 }
  ownedprovinces         = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1386 }
  controlledprovinces    = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1386 }

  techapps               = { 1010 1190 2150 2290 2400 4010 5080 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 58001 } # 溥儀 (プーイー)
  headofgovernment       = { type = 9 id = 58002 } # 張景惠 (チャン・チンフイ)
  foreignminister        = { type = 9 id = 58003 } # 張景惠 (チャン・チンフイ)
  armamentminister       = { type = 9 id = 58004 } # 李紹庚 (リー・シャオケン)
  ministerofsecurity     = { type = 9 id = 58005 } # チン・チューハン
  ministerofintelligence = { type = 9 id = 58006 } # 川島芳子
  chiefofstaff           = { type = 9 id = 58007 } # 吉興 (チ・シン)
  chiefofarmy            = { type = 9 id = 58008 } # 吉興 (チ・シン)
  chiefofnavy            = { type = 9 id = 58009 } # セルゲイ・ラミルチェフ
  chiefofair             = { type = 9 id = 58010 } # 横山正幸

  landunit = {
    id       = { type = 28500 id = 1 }
    name     = "奉天第1軍團"
    location = 1389
    division = {
      id             = { type = 28500 id = 2 }
      name           = "滿州第7守備隊"
      type           = militia
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 28500 id = 3 }
    name     = "齊齊哈爾第3軍團"
    location = 1382
    division = {
      id             = { type = 28500 id = 4 }
      name           = "滿州第9守備隊"
      type           = militia
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 28500 id = 5 }
    name     = "哈爾濱第4軍團"
    location = 1379
    division = {
      id             = { type = 28500 id = 6 }
      name           = "滿州第10守備隊"
      type           = militia
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 7 }
    name     = "承徳第5軍團"
    location = 1374
    division = {
      id             = { type = 28500 id = 8 }
      name           = "滿州第12守備隊"
      type           = militia
      strength       = 45
    }
  }
  landunit = {
    id       = { type = 28500 id = 9 }
    name     = "吉林第2軍團"
    location = 1389
    division = {
      id             = { type = 28500 id = 10 }
      name           = "滿州第8守備隊"
      type           = militia
      strength       = 60
    }
    division = {
      id             = { type = 28500 id = 11 }
      name           = "滿州第2騎兵隊"
      type           = cavalry
      strength       = 45
    }
  }
}
