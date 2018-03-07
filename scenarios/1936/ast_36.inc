##############################
# Country definition for AST #
##############################
province = {
  id = 1670 # ラバウル
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 1672 # ラエ
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 1679 # ポートモレスビー
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
  supplypool = 50
  oilpool = 1
}
province = {
  id = 1703 # ダーウィン
  ic = 1
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1712 # パース
  coastalfort = 1
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1718 anti_air = 1 } # ポートオーガスタ
province = {
  id = 1722 # ブリズベン
  ic = 3
  coastalfort = 1
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1724 ic = 1 anti_air = 3 } # ニューカッスル
province = {
  id = 1727 # シドニー
  ic = 2
  coastalfort = 2
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1728 anti_air = 2 } # キャンベラ
province = { id = 1730 ic = 2 coastalfort = 1 anti_air = 3 } # メルボルン
province = { id = 1733 ic = 2 anti_air = 2 } # アデレード

#####################
# Country main data #
#####################

country = {
  tag                = AST
  capital            = 1728 # キャンベラ
  manpower           = 25
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 20
  escorts        = 1

  diplomacy = {
    relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 65 }
    relation = { tag = FRA value = 0 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 40 }
    relation = { tag = SAF value = 200 }
    relation = { tag = SAU value = 50 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "AST" NumberOfSpies = 6 }

  nationalprovinces      = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726 1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 }
  ownedprovinces         = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726 1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1668 1669 1670 1671 1681 1682 1666 1667 1672 1675 1676 1677 1678 1679 1680 }
  controlledprovinces    = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726 1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1668 1669 1670 1671 1681 1682 1666 1667 1672 1675 1676 1677 1678 1679 1680 }

  techapps               = { 1010 1020 1190 1200 1210 1220 14000 2010 2150 2290 2300 2310 2450 2460 2510 3010 3020 3070 3080 3090 3130 3140 3190 4010 4020 4120 4130 5010 5020 5080 5090 5190 5310 5320 6010 6030 6110 6120 8010 8020 8030 8040 8050 8070 8100 8120 9010 9020 9030 9140 1310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 56001 } # アイザック・アルフレッド・アイザックス
  headofgovernment       = { type = 9 id = 56002 } # ジョセフ・A・ライオンズ
  foreignminister        = { type = 9 id = 56003 } # ジョージ・F・ピアース
  armamentminister       = { type = 9 id = 56004 } # ロバート・A・パークヒル
  ministerofsecurity     = { type = 9 id = 56005 } # トーマス・パターソン
  ministerofintelligence = { type = 9 id = 56006 } # アレクサンダー・マクラクラン
  chiefofstaff           = { type = 9 id = 56007 } # ジョセフ・A・ライオンズ
  chiefofarmy            = { type = 9 id = 56008 } # ジョン・ラヴァラック
  chiefofnavy            = { type = 9 id = 56009 } # ラグナー・M・コルヴィン
  chiefofair             = { type = 9 id = 56010 } # リチャード・ウィリアムス

  landunit = {
    id       = { type = 30001 id = 1 }
    name     = "第1軍管区"
    location = 1693
    division = {
      id             = { type = 30001 id = 2 }
      name           = "第1軍管区"
      type           = garrison
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 3 }
    name     = "第6軍管区"
    location = 1729
    division = {
      id             = { type = 30001 id = 4 }
      name           = "第6軍管区"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 5 }
    name     = "第2軍管区"
    location = 1727
    division = {
      id             = { type = 30001 id = 6 }
      name           = "第1歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 30
    }
    division = {
      id             = { type = 30001 id = 195 }
      name           = "第2歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 30
    }
    division = {
      id             = { type = 30001 id = 226 }
      name           = "第1騎兵師団"
      type           = cavalry
      model          = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 7 }
    name     = "第4軍管区"
    location = 1733
    division = {
      id             = { type = 30001 id = 8 }
      name           = "第4軍管区"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 9 }
    name     = "第5軍管区"
    location = 1712
    division = {
      id             = { type = 30001 id = 10 }
      name           = "第5軍管区"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 11 }
    name     = "第7軍管区"
    location = 1703
    division = {
      id             = { type = 30001 id = 12 }
      name           = "ダーウィン守備隊"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 13 }
    name     = "ポートモレスビー守備隊"
    location = 1679
    division = {
      id             = { type = 30001 id = 14 }
      name           = "ポートモレスビー守備隊"
      type           = garrison
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 205 }
    name     = "第2軍管区"
    location = 1730
    division = {
      id             = { type = 30001 id = 206 }
      name           = "第3歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 30
    }
    division = {
      id             = { type = 30001 id = 207 }
      name           = "第2騎兵師団"
      type           = cavalry
      model          = 2
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 10500 id = 17 }
    name     = "HM オーストラリア艦隊"
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 18 }
      name           = "HMAS オーストラリア"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 19 }
      name           = "HMAS キャンベラ"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 20 }
      name           = "HMAS シドニー"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 21 }
      name           = "第1駆逐艦隊"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10500 id = 22 }
    name     = "輸送隊"
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 23 }
      name           = "HMAS カニンブラ・フロティラ"
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 10500 id = 24 }
    name     = "HM オーストラリア予備艦隊"
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 25 }
      name           = "HMAS アデレード"
      type           = light_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10500 id = 28 }
    name     = "オーストラリア輸送艦隊"
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 29 }
      name           = "第1輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 30 }
      name           = "第2輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 31 }
      name           = "第3輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 32 }
      name           = "第4輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 33 }
      name           = "第5輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 34 }
      name           = "第6輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 35 }
      name           = "第7輸送隊"
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 10500 id = 15 }
    name     = "RAAF 第1戦術爆撃航空群"
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 16 }
      name           = "RAAF 第1戦術爆撃航空群"
      type           = tactical_bomber
      model          = 1
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 10500 id = 101 }
    name           = "HMAS パース"
    type           = light_cruiser
    model          = 2
    cost           = 3.1
    date           = { year = 1936 month = january day = 13 }
  }
}
