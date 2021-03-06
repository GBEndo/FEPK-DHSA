##############################
# Country definition for AST #
##############################
province = {
  id = 1670 # oE
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 1672 # G
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 1679 # |[gXr[
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
  supplypool = 50
  oilpool = 1
}
province = {
  id = 1703 # _[EB
  ic = 1
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1712 # p[X
  coastalfort = 1
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1718 anti_air = 1 } # |[gI[KX^
province = {
  id = 1722 # uYx
  ic = 3
  coastalfort = 1
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1724 ic = 1 anti_air = 3 } # j[JbX
province = {
  id = 1727 # Vhj[
  ic = 2
  coastalfort = 2
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1728 anti_air = 2 } # Lx
province = { id = 1730 ic = 2 coastalfort = 1 anti_air = 3 } # {
province = { id = 1733 ic = 2 anti_air = 2 } # Af[h

#####################
# Country main data #
#####################

country = {
  tag                = AST
  capital            = 1728 # Lx
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
  headofstate            = { type = 9 id = 56001 } # ACUbNEAtbhEACUbNX
  headofgovernment       = { type = 9 id = 56002 } # WZtEAECIY
  foreignminister        = { type = 9 id = 56003 } # W[WEFEsA[X
  armamentminister       = { type = 9 id = 56004 } # o[gEAEp[Nq
  ministerofsecurity     = { type = 9 id = 56005 } # g[}XEp^[\
  ministerofintelligence = { type = 9 id = 56006 } # ANT_[E}NN
  chiefofstaff           = { type = 9 id = 56007 } # WZtEAECIY
  chiefofarmy            = { type = 9 id = 56008 } # WE@bN
  chiefofnavy            = { type = 9 id = 56009 } # Oi[EMERB
  chiefofair             = { type = 9 id = 56010 } # `[hEEBAX

  landunit = {
    id       = { type = 30001 id = 1 }
    name     = "æ1RÇæ"
    location = 1693
    division = {
      id             = { type = 30001 id = 2 }
      name           = "æ1RÇæ"
      type           = garrison
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 3 }
    name     = "æ6RÇæ"
    location = 1729
    division = {
      id             = { type = 30001 id = 4 }
      name           = "æ6RÇæ"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 5 }
    name     = "æ2RÇæ"
    location = 1727
    division = {
      id             = { type = 30001 id = 6 }
      name           = "æ1àºtc"
      type           = infantry
      extra          = artillery
      strength       = 30
    }
    division = {
      id             = { type = 30001 id = 195 }
      name           = "æ2àºtc"
      type           = infantry
      extra          = artillery
      strength       = 30
    }
    division = {
      id             = { type = 30001 id = 226 }
      name           = "æ1Rºtc"
      type           = cavalry
      model          = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 7 }
    name     = "æ4RÇæ"
    location = 1733
    division = {
      id             = { type = 30001 id = 8 }
      name           = "æ4RÇæ"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 9 }
    name     = "æ5RÇæ"
    location = 1712
    division = {
      id             = { type = 30001 id = 10 }
      name           = "æ5RÇæ"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 11 }
    name     = "æ7RÇæ"
    location = 1703
    division = {
      id             = { type = 30001 id = 12 }
      name           = "_[EBçõà"
      type           = garrison
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 13 }
    name     = "|[gXr[çõà"
    location = 1679
    division = {
      id             = { type = 30001 id = 14 }
      name           = "|[gXr[çõà"
      type           = garrison
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 205 }
    name     = "æ2RÇæ"
    location = 1730
    division = {
      id             = { type = 30001 id = 206 }
      name           = "æ3àºtc"
      type           = infantry
      extra          = artillery
      strength       = 30
    }
    division = {
      id             = { type = 30001 id = 207 }
      name           = "æ2Rºtc"
      type           = cavalry
      model          = 2
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 10500 id = 17 }
    name     = "HM I[XgAÍà"
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 18 }
      name           = "HMAS I[XgA"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 19 }
      name           = "HMAS Lx"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 20 }
      name           = "HMAS Vhj["
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 21 }
      name           = "æ1ìÍà"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10500 id = 22 }
    name     = "Aà"
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 23 }
      name           = "HMAS JjuEteB"
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 10500 id = 24 }
    name     = "HM I[XgA\õÍà"
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 25 }
      name           = "HMAS Af[h"
      type           = light_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10500 id = 28 }
    name     = "I[XgAAÍà"
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 29 }
      name           = "æ1Aà"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 30 }
      name           = "æ2Aà"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 31 }
      name           = "æ3Aà"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 32 }
      name           = "æ4Aà"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 33 }
      name           = "æ5Aà"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 34 }
      name           = "æ6Aà"
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 35 }
      name           = "æ7Aà"
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 10500 id = 15 }
    name     = "RAAF æ1ípqóQ"
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 16 }
      name           = "RAAF æ1ípqóQ"
      type           = tactical_bomber
      model          = 1
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 10500 id = 101 }
    name           = "HMAS p[X"
    type           = light_cruiser
    model          = 2
    cost           = 3.1
    date           = { year = 1936 month = january day = 13 }
  }
}
