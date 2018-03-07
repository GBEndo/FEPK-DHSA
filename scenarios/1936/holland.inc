##############################
# Country definition for HOL #
##############################
province = {
  id = 46 # ���b�e���_��
  anti_air = 2
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 47 # �A���X�e���_��
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 49 anti_air = 2 } # �A�C���g�z�[�t�F��
province = {
  id = 1359 # �I�[�X�g�n�[�t�F��
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 1628 # �o�^���B�A
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 3 current_size = 3 }
  supplypool = 100
}
province = {
  id = 1632 # �X���o��
  anti_air = 2
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 1653 # ���i�h
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = HOL
  capital            = 47 # �A���X�e���_��
  manpower           = 40
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 40
  transports     = 250 
  escorts        = 21

  diplomacy = {
    relation = { tag = BEL value = 150 }
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
  SpyInfo                = { country = "HOL" NumberOfSpies = 6 }

  nationalprovinces      = { 46 47 48 49 77 78 79 1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673 1674 801 874 }
  ownedprovinces         = { 46 47 48 49 77 78 79 1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673 1674 801 874 }
  controlledprovinces    = { 46 47 48 49 77 78 79 1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673 1674 801 874 }

  techapps               = { 4010 4020 4120 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 5200 5470 6010 6020 3010 3020 3070 3080 3130 3140 3190 3200 3250 3400 3410 3470 3420 3480 8010 8020 8030 8040 8050 8070 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 10
    free_market       = 9
    professional_army = 5
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 8001 } # �E�B���w���~�i
  headofgovernment       = { type = 9 id = 8002 } # �w���h���N�X�E�R���C��
  foreignminister        = { type = 9 id = 8003 } # �t�����X�E�t�@���E�u���b�N�����g
  armamentminister       = { type = 9 id = 8004 } # �s�e�[���E�I�E�h
  ministerofsecurity     = { type = 9 id = 8005 } # ���Z�t�X�E�t�@���E�X�n�C�N
  ministerofintelligence = { type = 9 id = 8006 } # ���n���EW�E�t�@���E�I�[���X�z�g
  chiefofstaff           = { type = 9 id = 8007 } # �G�C�h���A���E�f�C�N�X�z�[����
  chiefofarmy            = { type = 9 id = 8008 } # �C�U�b�N�E���C���_�[�X
  chiefofnavy            = { type = 9 id = 8009 } # ���n���E�t�����X�g�i�[
  chiefofair             = { type = 9 id = 8010 } # �}���E�X�E���[�C�}�[�J�[�X

  landunit = {
    id       = { type = 18500 id = 1 }
    name     = "��1�R�c"
    location = 47
    division = {
      id             = { type = 18500 id = 2 }
      name           = "��1�t�c"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 18500 id = 3 }
      name           = "��2�t�c"
      type           = infantry
    }
  }
  landunit = {
    id       = { type = 18500 id = 4 }
    name     = "��2�R�c"
    location = 77
    division = {
      id             = { type = 18500 id = 5 }
      name           = "��3�t�c"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 18500 id = 6 }
      name           = "��4�t�c"
      type           = infantry
    }
  }
  landunit = {
    id       = { type = 18500 id = 7 }
    name     = "��3�R�c"
    location = 49
    division = {
      id             = { type = 18500 id = 8 }
      name           = "��5�t�c"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 18500 id = 9 }
      name           = "��6�t�c"
      type           = infantry
    }
  }
  landunit = {
    id       = { type = 18500 id = 10 }
    name     = "��4�R�c"
    location = 79
    division = {
      id             = { type = 18500 id = 11 }
      name           = "��7�t�c"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 18500 id = 12 }
      name           = "��8�t�c"
      type           = infantry
    }
  }
  landunit = {
    id       = { type = 18500 id = 13 }
    name     = "�I�����_�Ɨ��A���n�R"
    location = 1628
    division = {
      id             = { type = 18500 id = 14 }
      name           = "�W������1�t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18500 id = 15 }
      name           = "�W������2�t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18500 id = 16 }
      name           = "�W������3�t�c"
      type           = infantry
    }
  }

  navalunit = {
    id       = { type = 18500 id = 17 }
    name     = "�����C�R"
    location = 47
    base     = 47
    division = {
      id             = { type = 18500 id = 18 }
      name           = "HrMs �f�E���C�e��"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 19 }
      name           = "HrMs �W����"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 20 }
      name           = "HrMs �X�}�g��"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 21 }
      name           = "��1�쒀��"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 22 }
      name           = "��2�쒀��"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 39 }
      name           = "��1������"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 18500 id = 40 }
      name           = "��2������"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 41 }
      name           = "��3������"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 18500 id = 23 }
      name           = "��1�A����"
      type           = transport
    }
    division = {
      id             = { type = 18500 id = 24 }
      name           = "��2�A����"
      type           = transport
    }
    division = {
      id             = { type = 18500 id = 25 }
      name           = "��3�A����"
      type           = transport
    }
    division = {
      id             = { type = 18500 id = 26 }
      name           = "��4�A����"
      type           = transport
    }
  }
}