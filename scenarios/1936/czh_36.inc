##############################
# Country definition for CZE #
##############################
province = { id = 466 landfort = 5 } # �X�g���R�j�c�F
province = { id = 467 landfort = 2 } # �^�[�{��
province = {
  id = 469 # �v���n
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
}
province = { id = 470 anti_air = 2 } # �v���[�j
province = { id = 471 landfort = 5 } # �E�[�X�`�[
province = { id = 472 landfort = 6 } # ���x���c
province = { id = 474 landfort = 6 } # �I�X�g�����@
province = { id = 475 landfort = 2 anti_air = 2 } # �u���m
province = {
  id = 476 # �u���e�B�X�����@
  ic = 5
  landfort = 2
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
}
province = { id = 477 landfort = 1 } # �o���X�J�[�E�r�X�g���c�@
province = { id = 490 ic = 3 } # �R�V�c�F

#####################
# Country main data #
#####################

country = {
  tag                = CZE
  capital            = 469 # �v���n
  manpower           = 150
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -25 }
    relation = { tag = HUN value = -50 }
    relation = { tag = ITA value = 15 }
    relation = { tag = POL value = -1 }
    relation = { tag = ROM value = 20 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YUG value = 50 }
  }
  SpyInfo                = { country = "CZE" NumberOfSpies = 7 }

  nationalprovinces      = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  ownedprovinces         = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  controlledprovinces    = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }

  techapps               = { 1010 1020 1110 1190 1310 14000 2010 2020 2030 2040 2150 2290 2300 2310 2450 2460 2510 4010 4020 4120 5010 5020 5080 5090 5190 6010 6020 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    freedom           = 8
    free_market       = 9
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 24001 } # �G�h���@���h�E�x�l�V��
  headofgovernment       = { type = 9 id = 24002 } # �~�����E�z�b�W��
  foreignminister        = { type = 9 id = 24003 } # �G�h���@���h�E�x�l�V��
  armamentminister       = { type = 9 id = 24004 } # ���Z�t�E�J���t�@�X
  ministerofsecurity     = { type = 9 id = 24005 } # �C�����E�f���[��
  ministerofintelligence = { type = 9 id = 24006 } # �t�����e�B�Z�N�E�}�t�j�b�N
  chiefofstaff           = { type = 9 id = 24007 } # �t�����e�B�Z�N�E�}�t�j�b�N
  chiefofarmy            = { type = 9 id = 24008 } # ���h���B�[�N�E�N���W
  chiefofnavy            = { type = 9 id = 24009 } # �A���g�j���E�n�T��
  chiefofair             = { type = 9 id = 24010 } # �G�~�[���E���m�E�X�J
  dormant_ministers      = { 24129 }	#Vlassov

  landunit = {
    id       = { type = 23000 id = 1 }
    name     = "��8�R�\��"
    location = 490
    division = {
      id             = { type = 26000 id = 2 }
      name           = "��9�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 3 }
      name           = "��15�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 4 }
      name           = "��21�t�c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 5 }
    name     = "���i�ߕ��\��"
    location = 467
    division = {
      id             = { type = 26000 id = 6 }
      name           = "��1�����t�c"
      type           = light_armor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 7 }
      name           = "��4�t�c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 8 }
      name           = "��12�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 9 }
      name           = "��13�����ԉ��t�c"
      type           = infantry
      model          = 1
      extra          = armored_car
    }
    division = {
      id             = { type = 26000 id = 10 }
      name           = "��16�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 11 }
      name           = "��22�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 12 }
    name     = "��1�R"
    location = 471
    division = {
      id             = { type = 26000 id = 13 }
      name           = "��18�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 14 }
      name           = "��2�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 15 }
      name           = "��5�t�c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 16 }
      name           = "��3�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 17 }
      name           = "��17�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 18 }
    name     = "��2�R"
    location = 472
    division = {
      id             = { type = 26000 id = 19 }
      name           = "��1�R�x���c"
      type           = bergsjaeger
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 20 }
      name           = "��7�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 21 }
    name     = "��4�R"
    location = 477
    division = {
      id             = { type = 26000 id = 22 }
      name           = "��3�����t�c"
      type           = light_armor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 23 }
      name           = "��10�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 24 }
      name           = "��11�t�c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 25 }
    name     = "��3�R"
    location = 467
    division = {
      id             = { type = 26000 id = 26 }
      name           = "��2�����t�c"
      type           = light_armor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 27 }
      name           = "��4�����t�c"
      type           = light_armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 28 }
      name           = "��14�����ԉ��t�c"
      type           = infantry
      model          = 1
      extra          = armored_car
    }
    division = {
      id             = { type = 26000 id = 29 }
      name           = "��19�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 30 }
      name           = "��6�t�c"
      type           = infantry
      model          = 0
      extra          = engineer
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 31 }
      name           = "��20�t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
}
