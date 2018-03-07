##############################
# Country definition for JAP #
##############################
province = {
  id = 1181 # H“c
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1182 anti_air = 2 } # •Ÿ“‡
province = {
  id = 1184 # “Œ‹
  ic = 7
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1185 # –¼ŒÃ‰®
  ic = 3
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1186 # ‹à‘ò
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1187 # ‘åã
  ic = 2
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1188 # L“‡
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1189 # l‘
  ic = 3
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1190 # •Ÿ‰ª
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1193 # ‰«“ê
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 6 current_size = 6 }
  supplypool = 1000
}
province = {
  id = 1196 # Š˜R
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1202 # ‘å˜A
  anti_air = 4
  air_base = { size = 7 current_size = 7 }
  naval_base = { size = 5 current_size = 5 }
  supplypool = 500
  oilpool = 100
}
province = { id = 1203 supplypool = 1000 oilpool = 100 } # “‚R
province = {
  id = 1322 # ‚—Y
  anti_air = 2
  air_base = { size = 8 current_size = 8 }
  naval_base = { size = 10 current_size = 10 }
  supplypool = 1000
  oilpool = 100
}
province = { id = 1323 anti_air = 2 } # ‘ä–k
province = { id = 1376 supplypool = 5000 oilpool = 100 } # ´’Ã
province = {
  id = 1391 # œ¨R
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 1397 # ³“¿
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}
province = { id = 1599 supplypool = 500 } # —°‰©“‡
province = {
  id = 1601 # ƒGƒjƒEƒFƒgƒN
  anti_air = 5
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
  supplypool = 500
}
province = { id = 1605 anti_air = 3 } # ƒ}ƒWƒ…ƒ
province = {
  id = 1608 # ƒNƒFƒ[ƒŠƒ“
  anti_air = 5
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
  supplypool = 2000
}
province = { id = 1610 supplypool = 500 } # ƒ|ƒiƒy
province = {
  id = 1613 # ƒgƒ‰ƒbƒN
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  supplypool = 500
}
province = { id = 1618 supplypool = 500 } # ƒEƒ‹ƒV[
province = { id = 1619 anti_air = 3 supplypool = 500 } # ƒ„ƒbƒv
province = {
  id = 1621 # ƒpƒ‰ƒI
  supplypool = 500
  rare_materials = 5
}
province = { id = 1625 supplypool = 500 } # ƒƒ^
province = { id = 1626 supplypool = 500 } # ƒeƒjƒAƒ“
province = { id = 1627 anti_air = 3 supplypool = 500 } # ƒTƒCƒpƒ“
province = { id = 1784 anti_air = 2 } # ¬Š}Œ´”“‡
province = { id = 1785 supplypool = 500 } # “ì’¹“‡

#####################
# Country main data #
#####################

country = {
  tag                = JAP
  belligerence       = 10
  capital            = 1184 # “Œ‹
  manpower           = 735
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 100
  transports     = 600
  escorts        = 100
  peacetime_ic_mod = 1.1

  diplomacy = {
    relation = { tag = BEL value = -25 }
    relation = { tag = CGX value = -75 }
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CHL value = 20 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = ENG value = -25 }
    relation = { tag = ETH value = 35 }
    relation = { tag = FIN value = 20 }
    relation = { tag = FRA value = -20 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = -50 }
    relation = { tag = MAN value = 200 access = yes }
    relation = { tag = PHI value = 1 }
    relation = { tag = SIA value = 75 }
    relation = { tag = SOV value = -10 }
    relation = { tag = USA value = 15 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 2 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SIK" NumberOfSpies = 1 }
  SpyInfo                = { country = "TAN" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 2 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 1 }
  SpyInfo                = { country = "PHI" NumberOfSpies = 2 }
  SpyInfo                = { country = "NZL" NumberOfSpies = 1 }
  SpyInfo                = { country = "AST" NumberOfSpies = 2 }

  nationalprovinces      = { 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1174 1176 1175 1194 1195 1196 1197 1198 1199 1393 1391 1376 1392 1200 1201 1624 }
  ownedprovinces         = { 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1627 1626 1625 1619 1621 1604 1620 1618 1617 1616 1615 1613 1612 1610 1609 1600 1601 1602 1603 1605 1606 1607 1608 1323 1322 1324 1376 1391 1392 1200 1201 1199 1198 1197 1196 1195 1194 1393 1398 1397 1202 1203 1176 1174 }
  controlledprovinces    = { 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1627 1626 1625 1619 1621 1604 1620 1618 1617 1616 1615 1613 1612 1610 1609 1600 1601 1602 1603 1605 1606 1607 1608 1323 1322 1324 1376 1391 1392 1200 1201 1199 1198 1197 1196 1195 1194 1393 1202 1203 1397 1398 1176 1174 }
  claimedprovinces       = { 1202 }

  techapps               = { 1010 1020 1190 1200 12100 12110 1310 14000 2010 2020 2150 2290 2300 2310 2400 2450 2460 2510 3010 3020 3030 3070 3080 3090 3100 3130 3140 3150 3190 3200 3210 3250 3260 3270 3280 3320 3330 3340 3400 3410 3470 3420 3480 3430 4010 4020 4120 4130 4190 5010 5080 5090 5190 5310 5320 5350 5470 6010 6030 6110 6120 8010 8020 8030 8040 8050 8060 8090 8100 8110 9010 9020 9030 9040 }
  blueprints             = { 8180 8230 8310 8320 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 6
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 5001 } # —Tm
  headofgovernment       = { type = 9 id = 5002 } # ‰ª“cŒ[‰î
  foreignminister        = { type = 9 id = 5003 } # œA“cO‹B
  armamentminister       = { type = 9 id = 5004 } # ’¬“c’‰¡
  ministerofsecurity     = { type = 9 id = 5005 } # Œã“¡•¶•v
  ministerofintelligence = { type = 9 id = 5006 } # ‰ª‘º”JŸ
  chiefofstaff           = { type = 9 id = 5007 } # ŠÕ‰@‹{Úme‰¤
  chiefofarmy            = { type = 9 id = 5008 } # ŠÕ‰@‹{Úme‰¤
  chiefofnavy            = { type = 9 id = 5009 } # ‘åŠp›¨¶
  chiefofair             = { type = 9 id = 5010 } # R–{ŒÜ\˜Z
  dormant_leaders        = { 101382 101386 101015 }
  dormant_ministers      = { 5555 5556 5557 5653 5655 5656 
  5658 5659 5670 5671 5672 5673 5674 5675 5676 5677 5678 5679 5680 5681 5682 5683 #è—ÌŒRi—ßŠ¯
  5684 5685 5686 5687 5688 5689 5690 #íŒã•¶–¯–‹—»
  }
  landunit = {
    id       = { type = 13016 id = 500 }
    name     = "–B”hŒ­ŒRi—ß•”"
    location = 1379
    division = {
      id             = { type = 13016 id = 501 }
      name           = "–B”hŒ­ŒRi—ß•”"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 537 }
      name           = "‘æ36•à•ºt’c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 538 }
      name           = "‘æ37•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 511 }
    name     = "‘æ13•º’c"
    location = 1397
    division = {
      id             = { type = 13016 id = 512 }
      name           = "‘æ15•à•ºt’c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 513 }
      name           = "‘æ17•à•ºt’c"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 549 }
    name     = "ƒ‚ƒ“ƒSƒ‹ŒR"
    location = 1398
    division = {
      id             = { type = 13016 id = 550 }
      name           = "‘æ26•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 551 }
      name           = "‘æ2“Æ—§¬¬—·’c"
      type           = infantry
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 13016 id = 552 }
      name           = "–ÖŒÃ‹R•º‘æ1t’c"
      type           = cavalry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 553 }
      name           = "–ÖŒÃ‹R•º‘æ2t’c"
      type           = cavalry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 554 }
      name           = "–ÖŒÃ‹R•º‘æ3t’c"
      type           = cavalry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 555 }
      name           = "–ÖŒÃ‹R•º‘æ4t’c"
      type           = cavalry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 556 }
      name           = "–ÖŒÃ‹R•º‘æ5t’c"
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 561 }
    name     = "ŠÖ“ŒŒRi—ß•”"
    location = 1203
    division = {
      id             = { type = 13016 id = 562 }
      name           = "ŠÖ“ŒŒRi—ß•”"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 563 }
      name           = "‘æ10•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 564 }
      name           = "‘æ28•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 566 }
      name           = "ŠÖ“Œ–h‰qŒR"
      type           = garrison
      model          = 0
      extra          = police
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 567 }
    name     = "‘æ3•º’c"
    location = 1530
    division = {
      id             = { type = 13016 id = 568 }
      name           = "‘æ9•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 569 }
      name           = "‘æ12•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 573 }
    name     = "‘æ4•º’c"
    location = 1381
    division = {
      id             = { type = 13016 id = 574 }
      name           = "‘æ1•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 575 }
      name           = "‘æ2‘‹«Œx”õ‘à"
      type           = garrison
      model          = 0
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 576 }
      name           = "‘æ3‘‹«Œx”õ‘à"
      type           = garrison
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 577 }
    name     = "‘æ5•º’c"
    location = 1374
    division = {
      id             = { type = 13016 id = 581 }
      name           = "‘æ4‘‹«Œx”õ‘à"
      type           = garrison
      model          = 0
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 582 }
      name           = "‘æ5‘‹«Œx”õ‘à"
      type           = garrison
      model          = 0
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 583 }
      name           = "–B‘æ3‹R•ºt’c"
      type           = cavalry
      model          = 0
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 13016 id = 584 }
    name     = "‘æ6•º’c"
    location = 1378
    division = {
      id             = { type = 13016 id = 585 }
      name           = "‘æ14•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 586 }
      name           = "‘æ23•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = police
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 587 }
    name     = "‘æ20•º’c"
    location = 1375
    division = {
      id             = { type = 13016 id = 588 }
      name           = "‘æ8•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 589 }
      name           = "‘æ25•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 590 }
      name           = "‘æ6‘‹«Œx”õ‘à"
      type           = garrison
      model          = 0
      extra          = anti_tank
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 597 }
    name     = "‘æ14•º’c"
    location = 1323
    division = {
      id             = { type = 13016 id = 598 }
      name           = "‘æ16•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = engineer
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 599 }
      name           = "‘æ48•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 605 }
    name     = "‘æ15•º’c"
    location = 1184
    division = {
      id             = { type = 13016 id = 606 }
      name           = "‘æ2•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = engineer
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 607 }
      name           = "‘æ56—·’c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 50
    }
    division = {
      id             = { type = 13016 id = 612 }
      name           = "‹ß‰qt’c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 614 }
    name     = "‘å–{‰ci—ß•”"
    location = 1184
    division = {
      id             = { type = 13016 id = 615 }
      name           = "‘å–{‰ci—ß•”"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 616 }
      name           = "‘æ4•à•ºt’c"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 618 }
    name     = "“ú–{–k•”ŒR"
    location = 1181
    division = {
      id             = { type = 13016 id = 622 }
      name           = "‘æ1’nˆæ–h‰q‘à"
      type           = garrison
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 623 }
      name           = "‘æ2’nˆæ–h‰q‘à"
      type           = garrison
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 626 }
    name     = "“ú–{’†•”ŒR"
    location = 1185
    division = {
      id             = { type = 13016 id = 627 }
      name           = "‘æ53•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 632 }
    name     = "“ú–{¼•”ŒR"
    location = 1187
    division = {
      id             = { type = 13016 id = 635 }
      name           = "‘æ8’nˆæ–h‰q‘à"
      type           = garrison
      model          = 0
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 641 }
      name           = "‘æ14’nˆæ–h‰q‘à"
      type           = garrison
      model          = 0
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 642 }
    name     = "“ú–{“Œ•”ŒR"
    location = 1190
    division = {
      id             = { type = 13016 id = 643 }
      name           = "‘æ52•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 647 }
    name     = "’©‘NŒR"
    location = 1376
    division = {
      id             = { type = 13016 id = 648 }
      name           = "‘æ19•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 649 }
      name           = "‘æ20•à•ºt’c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 1200 }
    name     = "“ì’©‘NŒR"
    location = 1199
    division = {
      id             = { type = 13016 id = 650 }
      name           = "’©‘N‘æ1ç”õ‘à"
      type           = garrison
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 651 }
      name           = "’©‘N‘æ2ç”õ‘à"
      type           = garrison
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 658 }
    name     = "ÏB•º’c"
    location = 1194
    division = {
      id             = { type = 13016 id = 659 }
      name           = "ÏB•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 660 }
    name     = "“ß”e•º’c"
    location = 1193
    division = {
      id             = { type = 13016 id = 661 }
      name           = "“ß”e•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 662 }
    name     = "–LŒ´•º’c"
    location = 1176
    division = {
      id             = { type = 13016 id = 663 }
      name           = "–LŒ´•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 664 }
    name     = "ƒgƒ}ƒŠ•º’c"
    location = 1604
    division = {
      id             = { type = 13016 id = 665 }
      name           = "ƒgƒ}ƒŠ•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 667 }
    name     = "Ñ“ß•º’c"
    location = 1177
    division = {
      id             = { type = 13016 id = 668 }
      name           = "Ñ“ß•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 669 }
    name     = "ƒ}ƒŠƒAƒi•º’c"
    location = 1603
    division = {
      id             = { type = 13016 id = 670 }
      name           = "ƒ}ƒŠƒAƒi•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 671 }
    name     = "ƒpƒ‰ƒI•º’c"
    location = 1621
    division = {
      id             = { type = 13016 id = 672 }
      name           = "ƒpƒ‰ƒI•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 673 }
    name     = "ƒGƒjƒEƒFƒgƒN•º’c"
    location = 1601
    division = {
      id             = { type = 13016 id = 674 }
      name           = "ƒGƒjƒEƒFƒgƒN•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 675 }
    name     = "ƒrƒLƒj•º’c"
    location = 1600
    division = {
      id             = { type = 13016 id = 676 }
      name           = "ƒrƒLƒj•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 677 }
    name     = "ƒNƒGƒ[ƒŠƒ“•º’c"
    location = 1608
    division = {
      id             = { type = 13016 id = 678 }
      name           = "ƒNƒGƒ[ƒŠƒ“•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 679 }
    name     = "ƒTƒCƒpƒ“•º’c"
    location = 1627
    division = {
      id             = { type = 13016 id = 680 }
      name           = "ƒTƒCƒpƒ“•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 681 }
    name     = "ƒVƒ…ƒ€ƒVƒ…“‡•º’c"
    location = 1174
    division = {
      id             = { type = 13016 id = 682 }
      name           = "ƒVƒ…ƒ€ƒVƒ…“‡•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 683 }
    name     = "ƒ{ƒjƒ“•º’c"
    location = 1599
    division = {
      id             = { type = 13016 id = 684 }
      name           = "ƒ{ƒjƒ“•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 685 }
    name     = "ƒ}[ƒJƒX•º’c"
    location = 1785
    division = {
      id             = { type = 13016 id = 686 }
      name           = "ƒ}[ƒJƒX•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 687 }
    name     = "ƒEƒ‹ƒV[•º’c"
    location = 1618
    division = {
      id             = { type = 13016 id = 688 }
      name           = "ƒEƒ‹ƒV[•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 689 }
    name     = "ƒgƒ‰ƒbƒN•º’c"
    location = 1613
    division = {
      id             = { type = 13016 id = 690 }
      name           = "ƒgƒ‰ƒbƒN•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 691 }
    name     = "ƒ|ƒiƒy•º’c"
    location = 1610
    division = {
      id             = { type = 13016 id = 692 }
      name           = "ƒ|ƒiƒy•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 693 }
    name     = "ƒ}[ƒVƒƒƒ‹•º’c"
    location = 1605
    division = {
      id             = { type = 13016 id = 694 }
      name           = "ƒ}[ƒVƒƒƒ‹•º’c"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 695 }
    name     = "ƒ„ƒbƒv•º’c"
    location = 1619
    division = {
      id             = { type = 13016 id = 696 }
      name           = "ƒ„ƒbƒv•º’c"
      type           = garrison
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 13016 id = 1001 }
    name     = "“ú–{ŠCŒR"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1002 }
      name           = "IJN ‹à„"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1003 }
      name           = "IJN ”ä‰b"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1004 }
      name           = "IJN Y–¼"
      type           = battlecruiser
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1005 }
    name     = "ŠCŒR‘æ1•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1006 }
      name           = "IJN –¶“‡"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1007 }
      name           = "IJN •}ŒK"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1008 }
      name           = "IJN Ré"
      type           = battleship
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1009 }
    name     = "ŠCŒR‘æ2•”‘à"
    location = 1188
    base     = 1188
    division = {
      id             = { type = 13016 id = 1010 }
      name           = "IJN ˆÉ¨"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1011 }
      name           = "IJN “úŒü"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1012 }
      name           = "IJN ’·–å"
      type           = battleship
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1013 }
    name     = "ŠCŒR‘æ3•”‘à"
    location = 1189
    base     = 1189
    division = {
      id             = { type = 13016 id = 1014 }
      name           = "IJN —¤‰œ"
      type           = battleship
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1015 }
    name     = "ŠCŒR‘æ4•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1016 }
      name           = "IJN —´“c"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1017 }
      name           = "IJN •½ŒË"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1018 }
      name           = "IJN –î”Š"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1019 }
      name           = "IJN ‹…–"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1020 }
      name           = "IJN ‘½–€"
      type           = light_cruiser
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1021 }
    name     = "ŠCŒR‘æ5•”‘à"
    location = 1188
    base     = 1188
    division = {
      id             = { type = 13016 id = 1022 }
      name           = "IJN ŒÃ‘é"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1023 }
      name           = "IJN –kã"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1024 }
      name           = "IJN –Ø‘\"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1025 }
      name           = "IJN ‘åˆä"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1026 }
      name           = "IJN ’·—Ç"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1027 }
      name           = "IJN o‰_"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1028 }
      name           = "IJN “V—´"
      type           = light_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1029 }
    name     = "ŠCŒR‘æ6•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1030 }
      name           = "IJN –¼æ"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1031 }
      name           = "IJN ‹S“{"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1032 }
      name           = "IJN —R—Ç"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1033 }
      name           = "IJN óŠÔ"
      type           = heavy_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1034 }
    name     = "ŠCŒR‘æ7•”‘à"
    location = 1189
    base     = 1189
    division = {
      id             = { type = 13016 id = 1035 }
      name           = "IJN —[’£"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1036 }
      name           = "IJN ŒÜ\—é"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1037 }
      name           = "IJN ì“à"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1038 }
      name           = "IJN ˆ¢•ŒG"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1039 }
      name           = "IJN _’Ê"
      type           = light_cruiser
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1040 }
    name     = "ŠCŒR‘æ8•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1041 }
      name           = "IJN ‰ÁŒÃ"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1042 }
      name           = "IJN Â—t"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1043 }
      name           = "IJN ˆßŠ}"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1044 }
      name           = "IJN “ß’q"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1045 }
      name           = "IJN ‰H•"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1046 }
      name           = "IJN “ß‰Ï"
      type           = light_cruiser
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1047 }
    name     = "ŠCŒR‘æ9•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1048 }
      name           = "IJN –­‚"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1049 }
      name           = "IJN ‘«•¿"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1050 }
      name           = "IJN ˆ¤“†"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1051 }
      name           = "IJN ‚—Y"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1052 }
      name           = "IJN ’¹ŠC"
      type           = heavy_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1053 }
    name     = "ŠCŒR‘æ10•”‘à"
    location = 1189
    base     = 1189
    division = {
      id             = { type = 13016 id = 1054 }
      name           = "IJN –€–ë"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1055 }
      name           = "IJN OŒG"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1056 }
      name           = "IJN Åã"
      type           = heavy_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1057 }
    name     = "ŠCŒR‘æ11•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1058 }
      name           = "IJN –P"
      type           = escort_carrier
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1059 }
    name     = "ŠCŒR‘æ12•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1060 }
      name           = "IJN Ôé"
      type           = carrier
      model          = 2
      extra1         = cag
      brigade_model1 = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1061 }
    name     = "ŠCŒR‘æ13•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1062 }
      name           = "IJN ‰Á‰ê"
      type           = carrier
      model          = 2
      extra1         = cag
      brigade_model1 = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1063 }
    name     = "ŠCŒR‘æ14•”‘à"
    location = 1188
    base     = 1188
    division = {
      id             = { type = 10300 id = 21405 }
      name           = "IJN —´éˆ"
      type           = carrier
      model          = 2
      extra1         = cag
      brigade_model1 = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1065 }
    name     = "ŠCŒR‘æ15•”‘à"
    location = 1187
    base     = 1187
    division = {
      id             = { type = 13016 id = 1066 }
      name           = "IJN ”–‰_"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1067 }
      name           = "IJN ”’‰_"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1068 }
      name           = "IJN ˆé”g"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1069 }
      name           = "IJN ‰Y”g"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1070 }
      name           = "IJN ˆ»”g"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1071 }
      name           = "IJN •~”g"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1072 }
      name           = "‘æ1—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1073 }
      name           = "‘æ2—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1074 }
      name           = "‘æ3—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1075 }
      name           = "‘æ4—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1076 }
      name           = "‘æ5—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1077 }
      name           = "‘æ6—A‘—‘à"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1078 }
    name     = "ŠCŒR‘æ16•”‘à"
    location = 1187
    base     = 1187
    division = {
      id             = { type = 13016 id = 1079 }
      name           = "IJN ’©–¶"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1080 }
      name           = "IJN —[–¶"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1081 }
      name           = "IJN “V–¶"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1082 }
      name           = "IJN ‹·–¶"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1083 }
      name           = "IJN O"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1084 }
      name           = "IJN Œ"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1085 }
      name           = "IJN —ø"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1086 }
      name           = "IJN ’ª"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1087 }
      name           = "‘æ7—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1088 }
      name           = "‘æ8—A‘—‘à"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1089 }
    name     = "ŠCŒR‘æ18•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1090 }
      name           = "IJN ‹Å"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1091 }
      name           = "IJN ‹¿"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1092 }
      name           = "IJN —‹"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1093 }
      name           = "‘æ9—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1094 }
      name           = "‘æ10—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1095 }
      name           = "‘æ11—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1096 }
      name           = "‘æ12—A‘—‘à"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1097 }
    name     = "ŠCŒR‘æ19•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1098 }
      name           = "IJN “d"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1099 }
      name           = "IJN ‰t"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1100 }
      name           = "IJN q“ú"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1122 }
      name           = "IJN á—t"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1123 }
      name           = "IJN ‰‘š"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1101 }
      name           = "‘æ13—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1102 }
      name           = "‘æ14—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1103 }
      name           = "‘æ15—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1104 }
      name           = "‘æ16—A‘—‘à"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1105 }
    name     = "ŠCŒR‘æ20•”‘à"
    location = 1188
    base     = 1188
    division = {
      id             = { type = 13016 id = 1106 }
      name           = "‘æ17—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1107 }
      name           = "‘æ18—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1108 }
      name           = "‘æ19—A‘—‘à"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1109 }
      name           = "‘æ20—A‘—‘à"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1110 }
    name     = "ŠCŒR‘æ21•”‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1111 }
      name           = "‘æ1ö…‘à"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1112 }
      name           = "‘æ2ö…‘à"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1113 }
    name     = "ŠCŒR‘æ22•”‘à"
    location = 1188
    base     = 1188
    division = {
      id             = { type = 13016 id = 1114 }
      name           = "‘æ5ö…‘à"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1115 }
      name           = "‘æ6ö…‘à"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1116 }
    name     = "ŠCŒR‘æ23•”‘à"
    location = 1190
    base     = 1190
    division = {
      id             = { type = 13016 id = 1117 }
      name           = "‘æ7ö…‘à"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1118 }
      name           = "‘æ8ö…‘à"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1119 }
      name           = "‘æ9ö…‘à"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1120 }
      name           = "‘æ10ö…‘à"
      type           = submarine
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 13016 id = 1413 }
    name     = "‘æ1q‹ó‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1412 }
      name           = "‘æ1Œy”šŒ‚”òs’c"
      type           = tactical_bomber
      model          = 0
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1411 }
    name     = "‘æ2q‹ó‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1410 }
      name           = "‘æ2Œy”šŒ‚”òs’c"
      type           = tactical_bomber
      model          = 0
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1409 }
    name     = "‘æ1”òs‘à"
    location = 1202
    base     = 1202
    division = {
      id             = { type = 13016 id = 1408 }
      name           = "‘æ3Œy”šŒ‚”òs’c"
      type           = tactical_bomber
      model          = 0
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1406 }
    name     = "‘æ3q‹ó‘à"
    location = 1202
    base     = 1202
    division = {
      id             = { type = 13016 id = 1407 }
      name           = "‘æ4Œy”šŒ‚”òs’c"
      type           = tactical_bomber
      model          = 0
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1405 }
    name     = "‘æ2”òs‘à"
    location = 1202
    base     = 1202
    division = {
      id             = { type = 13016 id = 1404 }
      name           = "‘æ5Œy”šŒ‚”òs’c"
      type           = tactical_bomber
      model          = 0
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1403 }
    name     = "‘æ4q‹ó‘à"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1402 }
      name           = "ŠCŒR‘æ13UŒ‚‘à"
      type           = naval_bomber
      model          = 0
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1400 }
    name     = "‘æ5q‹ó‘à"
    location = 1202
    base     = 1202
    division = {
      id             = { type = 13016 id = 1401 }
      name           = "‘æ33—‹Œ‚‘à"
      type           = naval_bomber
      model          = 0
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1414 }
    name     = "‘æ1í“¬”òs’c"
    location = 1379
    base     = 1379
    division = {
      id             = { type = 13016 id = 1415 }
      name           = "‘æ1í“¬”òs’c"
      type           = interceptor
      model          = 0
      strength       = 85
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1416 }
    name     = "‘æ2í“¬”òs’c"
    location = 1379
    base     = 1379
    division = {
      id             = { type = 13016 id = 1417 }
      name           = "‘æ2í“¬”òs’c"
      type           = interceptor
      model          = 0
      strength       = 85
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1418 }
    name     = "‘æ3í“¬”òs’c"
    location = 1202
    base     = 1202
    division = {
      id             = { type = 13016 id = 1419 }
      name           = "‘æ3í“¬”òs’c"
      type           = interceptor
      model          = 0
      strength       = 85
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1420 }
    name     = "‘æ4í“¬”òs’c"
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1421 }
      name           = "‘æ4í“¬”òs’c"
      type           = interceptor
      model          = 0
      strength       = 85
    }
  }

  division_development = {
    id             = { type = 13016 id = 1121 }
    name           = "IJN ”’˜I"
    type           = destroyer
    model          = 2
    cost           = 0.3
    date           = { year = 1936 month = August day = 19 }
  }

  landdivision = { dormant = yes id = { type = 13016 id = 3 } name = "•à•º‘æ145˜A‘à"  type = garrison model = 2 extra = artillery brigade_model = 4 locked = yes strength = 50 } 
  landdivision = { dormant = yes id = { type = 13016 id = 4 } name = "íÔ‘æ26˜A‘à"  type = light_armor model = 2 locked = yes strength = 30 } 
  
   #‘å˜Ai—·‡j
  landdivision = { dormant = yes id = { type = 13016 id = 10 } name = "—·‡—v`•”“Á•Ê—¤í‘à" type = garrison model = 0 extra = police locked = yes strength = 100 } 
  #Š˜R
  landdivision = { dormant = yes id = { type = 13016 id = 11 } name = "’©‘N‘æ2ç”õ‘à" type = garrison model = 0 locked = yes strength = 100 } 
  #•½ë
  landdivision = { dormant = yes id = { type = 13016 id = 12 } name = "’©‘N‘æ3ç”õ‘à" type = garrison model = 0 locked = yes strength = 100 } 
  #‹éiSeoulji•ÏX•s—vj
  #ˆ®ì
  landdivision = { dormant = yes id = { type = 13016 id = 13 } name = "‘æ2’nˆæ–h‰q‘à" type = garrison model = 0 locked = yes strength = 100 } 
  #D–y
  landdivision = { dormant = yes id = { type = 13016 id = 14 } name = "‘æ3’nˆæ–h‰q‘à" type = garrison model = 0 locked = yes strength = 100 } 
  #å‘ä
  landdivision = { dormant = yes id = { type = 13016 id = 15 } name = "‘æ4’nˆæ–h‰q‘à" type = garrison model = 0 locked = yes strength = 100 } 
  #H“ci•ÏX•s—vj
  #“Œ‹
  landdivision = { dormant = yes id = { type = 13016 id = 16 } name = "‘æ5’nˆæ–h‰q‘à" type = garrison model = 0 extra = artillery brigade_model = 0 locked = yes strength = 100 } 
  #–¼ŒÃ‰®
  landdivision = { dormant = yes id = { type = 13016 id = 17 } name = "‘æ6’nˆæ–h‰q‘à" type = garrison model = 0 locked = yes strength = 100 } 
  #‘åãi•ÏX•s—vj
  #L“‡
  landdivision = { dormant = yes id = { type = 13016 id = 18 } name = "‘æ7’nˆæ–h‰q‘à" type = garrison model = 0 locked = yes strength = 100 } 
  #l‘
  landdivision = { dormant = yes id = { type = 13016 id = 19 } name = "‘æ9’nˆæ–h‰q‘à" type = garrison model = 0 locked = yes strength = 100 } 
  #•Ÿ‰ª
  landdivision = { dormant = yes id = { type = 13016 id = 20 } name = "‘æ10’nˆæ–h‰q‘à" type = garrison model = 0 locked = yes strength = 100 } 
  #­™“‡
  landdivision = { dormant = yes id = { type = 13016 id = 21 } name = "‘æ11’nˆæ–h‰q‘à" type = garrison model = 0 locked = yes strength = 100 } 
  #‚—Y
  landdivision = { dormant = yes id = { type = 13016 id = 22 } name = "‘ä“ì•º’c" type = garrison model = 0 locked = yes strength = 100 } 
  #‘ä–k
  landdivision = { dormant = yes id = { type = 13016 id = 23 } name = "‘ä–k•º’c" type = garrison model = 0 locked = yes strength = 100 } 
  #ƒeƒjƒAƒ“
  landdivision = { dormant = yes id = { type = 13016 id = 24 } name = "ƒeƒjƒAƒ“•º’c" type = garrison model = 0 locked = yes strength = 100 } 
}
