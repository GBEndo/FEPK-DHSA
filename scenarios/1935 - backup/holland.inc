
##############################
# Country definition for HOL #
##############################

province =
{ id         = 46
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
}              # ���b�e���_��
province =
{ id         = 47
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # �A���X�e���_��
province = { id = 49 anti_air = 2 } # �A�C���g�z�[�t�F��
province =
{ id         = 1359
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
  supplypool = 1
}              # �I�X�g�n�[�t�F��
province =
{ id         = 1628
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 4 current_size = 4 }
  oilpool    = 1
  supplypool = 100
}              # �o�^���B�A
province =
{ id         = 1632
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
}              # �X���o��
province = { id = 1641 supplypool = 1 } # �o���W�F���}�V��
province =
{ id         = 1653
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 2 current_size = 2 }
}              # ���i�h

#####################
# Country main data #
#####################

country =
{ tag                    = HOL
  capital                = 47
  manpower               = 40
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 40
  transports             = 200 
  escorts                = 21
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    free_market       = 9
    freedom           = 10
    professional_army = 5
    defense_lobby     = 1
    interventionism   = 1
  }
  SpyInfo                = { country = "HOL" NumberOfSpies = 6 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 6 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 6 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 6 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 3 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 3 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  # Homeland
  nationalprovinces      = { 46   47   48   49   77   78   79   1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638
                             1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673
                             1674   
                           }
  # Homeland
  ownedprovinces         = { 46   47   48   49   77   78   79   1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638
                             1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673
                             1674 801  874 
                           }
  # Homeland
  controlledprovinces    = { 46   47   48   49   77   78   79   1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638
                             1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673
                             1674 801  874 
                           }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120  2150  2010  2290  2300  2310  2450  2460  2510  1010  1190  1110  9010  5010  5020  5080  5090  5190 
                             5200  5470  6010  6020  3010  3020  3070  3080  3130  3140  3190  3200  3250  3400  3410 3470  3420 3480  8010  8020  8030  8040 
                             8050  8070  14000
                           }
  diplomacy =
  { relation = { tag = BEL value = 150 }
    relation = { tag = CAN value = 80 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 75 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -20 }
    relation = { tag = JAP value = -50 }
    relation = { tag = LUX value = 150 }
    relation = { tag = MEX value = 25 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
  }
  headofstate            = { type = 9 id = 8001 }
  headofgovernment       = { type = 9 id = 8002 }
  foreignminister        = { type = 9 id = 8003 }
  armamentminister       = { type = 9 id = 8004 }
  ministerofsecurity     = { type = 9 id = 8005 }
  ministerofintelligence = { type = 9 id = 8006 }
  chiefofstaff           = { type = 9 id = 8007 }
  chiefofarmy            = { type = 9 id = 8008 }
  chiefofnavy            = { type = 9 id = 8009 }
  chiefofair             = { type = 9 id = 8010 }
  landunit =
  { id       = { type = 18500 id = 1 }
    location = 47
    name     = "��1�R�c"
    division =
    { id    = { type = 18500 id = 2 }
      name  = "��1�t�c"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 18500 id = 3 }
      name = "��2�t�c"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18500 id = 4 }
    location = 77
    name     = "��2�R�c"
    division =
    { id    = { type = 18500 id = 5 }
      name  = "��3�t�c"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 18500 id = 6 }
      name = "��4�t�c"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18500 id = 7 }
    location = 49
    name     = "��3�R�c"
    division =
    { id    = { type = 18500 id = 8 }
      name  = "��5�t�c"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 18500 id = 9 }
      name = "��6�t�c"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18500 id = 10 }
    location = 79
    name     = "��4�R�c"
    division =
    { id    = { type = 18500 id = 11 }
      name  = "��7�t�c"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 18500 id = 12 }
      name = "��8�t�c"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18500 id = 13 }
    location = 1628
    name     = "�I�����_�Ɨ��A���n�R"
    division =
    { id   = { type = 18500 id = 14 }
      name = "�W������1�t�c"
      type = infantry
    }
    division =
    { id   = { type = 18500 id = 15 }
      name = "�W������2�t�c"
      type = infantry
    }
    division =
    { id   = { type = 18500 id = 16 }
      name = "�W������3�t�c"
      type = infantry
    }
  }
  navalunit =
  { id       = { type = 18500 id = 17 }
    location = 47
    base     = 47
    name     = "�����C�R"
    division =
    { id    = { type = 18500 id = 18 }
      name  = "HrMs �f�E���C�e��"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 18500 id = 19 }
      name  = "HrMs �W����"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 18500 id = 20 }
      name  = "HrMs �X�}�g��"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 18500 id = 21 }
      name  = "��1�쒀��"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 18500 id = 22 }
      name  = "��2�쒀��"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 18500 id = 39 }
      name  = "��1������"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 18500 id = 40 }
      name  = "��2������"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 18500 id = 41 }
      name  = "��3������"
      type  = submarine
      model = 2
    }
    division =
    { id   = { type = 18500 id = 23 }
      name = "��1�A����"
      type = transport
    }
    division =
    { id   = { type = 18500 id = 24 }
      name = "��2�A����"
      type = transport
    }
    division =
    { id   = { type = 18500 id = 25 }
      name = "��3�A����"
      type = transport
    }
    division =
    { id   = { type = 18500 id = 26 }
      name = "��4�A����"
      type = transport
    }
  }
}
