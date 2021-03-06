
##############################
# Country definition for AST #
##############################

province =
{ id         = 1670
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 2
}              # ���o�E��
province =
{ id       = 1672
  air_base = { size = 1 current_size = 1 }
  anti_air = 1
}            # ���G
province =
{ id         = 1679
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 1
  oilpool    = 1
  supplypool = 50
}              # �|�[�g�����X�r�[
province =
{ id         = 1703
  anti_air   = 5
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
  ic         = 1
}              # �_�[�E�B��
province =
{ id          = 1712
  anti_air    = 5
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }
  landfort    = 0
  coastalfort = 1
}               # �p�[�X
province = { id = 1718 anti_air = 1 } # �|�[�g�I�[�K�X�^
province =
{ id          = 1722
  anti_air    = 4
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }
  landfort    = 0
  coastalfort = 1
  ic          = 3
}               # �u���X�x��
province = { id = 1724 ic = 1 } # �j���[�L���b�X��
province = { id = 1725 anti_air = 3 } # �E�F���g���[�X
province =
{ id          = 1727
  anti_air    = 4
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }
  landfort    = 0
  coastalfort = 2
  ic          = 2
}               # �V�h�j�[
province = { id = 1728 anti_air = 2 } # �L�����x��
province = { id = 1730 landfort = 0 coastalfort = 1 anti_air = 3 ic = 2 } # �����{����
province = { id = 1733 anti_air = 2 ic = 2 } # �A�f���[�h

#####################
# Country main data #
#####################

country =
{ tag                    = AST
  manpower               = 25
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  capital                = 1728
  # 1st Transport Flotilla#
  transports             = 20
  escorts                = 1
  diplomacy =
  { relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 } # was access = yes
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FIN value = 65 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 } # was access = yes
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 40 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = SAU value = 50 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  nationalprovinces      = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
                             1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734
                           }
  ownedprovinces         = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
                             1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1668 1669 1670 1671 1681 1682
                             1666 1667 1672 1675 1676 1677 1678 1679 1680
                           }
  controlledprovinces    = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
                             1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1668 1669 1670 1671 1681 1682
                             1666 1667 1672 1675 1676 1677 1678 1679 1680
                           }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  1210  1220  14000 2010  2150  2290  2300  2310  2450  2460  2510  3010  3020  3070  3080  3090 
                             3130  3140  3190  4010  4020  4120  4130  5010  5020  5080  5090  5190  5310  5320  6010  6030  6110  6120  8010  8020 
                             8030  8040  8050  8070  8100  8120  9010  9020  9030  9140 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    free_market       = 8
    freedom           = 10
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  SpyInfo                = { country = "AST" NumberOfSpies = 6 }
  SpyInfo                = { country = "NZL" NumberOfSpies = 3 }
  SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "PHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "SIA" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 6 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "SAF" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 56001 }
  headofgovernment       = { type = 9 id = 56002 }
  foreignminister        = { type = 9 id = 56003 }
  armamentminister       = { type = 9 id = 56004 }
  ministerofsecurity     = { type = 9 id = 56005 }
  ministerofintelligence = { type = 9 id = 56006 }
  chiefofstaff           = { type = 9 id = 56007 }
  chiefofarmy            = { type = 9 id = 56008 }
  chiefofnavy            = { type = 9 id = 56009 }
  chiefofair             = { type = 9 id = 56010 }
  # ##	1932:  The total Militia was only 28,000 men strong
  # ##	Regular Army had about 1500 men (mostly coastal artillery)
  # ##	This was brought upto 46,000 by 1938
  # ##	The Militia was used in New Guinea against Japan
  # ######### Australian Army ##############
  landunit =
  { id       = { type = 30001 id = 1 }
    name     = "��1�R�ǋ�"
    location = 1693
    division =
    { id       = { type = 30001 id = 2 }
      name     = "��1�R�ǋ�"
      strength = 100
      type     = garrison
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 30001 id = 3 }
    name     = "��6�R�ǋ�"
    location = 1729
    division =
    { id       = { type = 30001 id = 4 }
      name     = "��6�R�ǋ�"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 5 }
    name     = "��2�R�ǋ�"
    location = 1727
    division =
    { id       = { type = 30001 id = 6 }
      name     = "��1�����t�c"
      strength = 30
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30001 id = 195 }
      name     = "��2�����t�c"
      strength = 30
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30001 id = 226 }
      name     = "��1�R���t�c"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 30001 id = 7 }
    name     = "��4�R�ǋ�"
    location = 1733
    division =
    { id       = { type = 30001 id = 8 }
      name     = "��4�R�ǋ�"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 9 }
    name     = "��5�R�ǋ�"
    location = 1712
    division =
    { id       = { type = 30001 id = 10 }
      name     = "��5�R�ǋ�"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 11 }
    name     = "��7�R�ǋ�"
    location = 1703
    division =
    { id       = { type = 30001 id = 12 }
      name     = "�_�[�E�B�������"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 13 }
    name     = "�|�[�g�����X�r�[�����"
    location = 1679
    division =
    { id       = { type = 30001 id = 14 }
      name     = "�|�[�g�����X�r�[�����"
      strength = 100
      type     = garrison
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 30001 id = 205 }
    name     = "��2�R�ǋ�"
    location = 1730
    division =
    { id       = { type = 30001 id = 206 }
      name     = "��3�����t�c"
      strength = 30
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30001 id = 207 }
      name     = "��2�R���t�c"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  # ######### Australian Navy ##############
  navalunit =
  { id       = { type = 10500 id = 17 }
    name     = "HM �I�[�X�g�����A�͑�"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id    = { type = 10500 id = 18 }
      name  = "HMAS �I�[�X�g�����A"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10500 id = 19 }
      name  = "HMAS �L�����x��"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10500 id = 20 }
      name  = "HMAS �V�h�j�["
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 10500 id = 21 }
      name  = "��1�쒀�͑�"
      type  = destroyer
      model = 0
    }
  }
  # 1st Transport Flotilla#
  navalunit =
  { id       = { type = 10500 id = 22 }
    name     = "�A����"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id   = { type = 10500 id = 23 }
      name = "HMAS �J�j���u���E�t���e�B��"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10500 id = 24 }
    name     = "HM �I�[�X�g�����A�\���͑�"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id    = { type = 10500 id = 25 }
      name  = "HMAS �A�f���[�h"
      type  = light_cruiser
      model = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 28 }
    name     = "�I�[�X�g�����A�A���͑�"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id   = { type = 10500 id = 29 }
      name = "��1�A����"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 30 }
      name = "��2�A����"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 31 }
      name = "��3�A����"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 32 }
      name = "��4�A����"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 33 }
      name = "��5�A����"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 34 }
      name = "��6�A����"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 35 }
      name = "��7�A����"
      type = transport
    }
  }
  # ################## Australian Air Force #######################
  # ## An approximation of the 13 squadron airforce in 1936.###
  airunit =
  { location = 1727
    base     = 1727
    id       = { type = 10500 id = 15 }
    name     = "RAAF ��1��p�����q��Q"
    division =
    { id       = { type = 10500 id = 16 }
      name     = "RAAF ��1��p�����q��Q"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
  }
  # Note on Warships Under Construction or Refit#
  # HMAS Adelaide was refitted by 1939.
  # Adelaide had a max speed of only 24 knots.
  division_development =
  { name  = "HMAS �p�[�X"
    type  = light_cruiser
    model = 2
    cost  = 3.1
    id    = { type = 10500 id = 101 }
    date  = { year = 1936 month = january day = 13 }
  }
}
