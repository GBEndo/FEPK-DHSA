##############################
# Country definition for ARG #
##############################
province = {
  id = 667 # �u�G�m�X�A�C���X
  anti_air = 5
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 853 # �o�C�A�u�����J
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 8 current_size = 8 }
}

#####################
# Country main data #
#####################

country = {
  tag                = ARG
  capital            = 667 # �u�G�m�X�A�C���X
  manpower           = 50
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 20 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "ARG" NumberOfSpies = 6 }

  nationalprovinces      = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 866 }
  ownedprovinces         = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  controlledprovinces    = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }

  techapps               = { 4010 4020 4120 4130 4190 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 6010 6020 3010 3020 3070 3080 3130 3140 3250 3400 3410 3470 8010 8020 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 6
    free_market       = 8
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 35001 } # �A�O�X�e�B���EP�E�t�X�g
  headofgovernment       = { type = 9 id = 35002 } # �A�O�X�e�B���EP�E�t�X�g
  foreignminister        = { type = 9 id = 35003 } # �J�����X�E�T�x�h���E���}�X
  armamentminister       = { type = 9 id = 35004 } # �A���x���g�E�E�G��
  ministerofsecurity     = { type = 9 id = 35005 } # �������E�J�X�e�B����
  ministerofintelligence = { type = 9 id = 35006 } # �z���w�E�f�E���E�g�[��
  chiefofstaff           = { type = 9 id = 35007 } # �}�k�G���EA�E���h���Q�X
  chiefofarmy            = { type = 9 id = 35008 } # �}�k�G���EA�E���h���Q�X
  chiefofnavy            = { type = 9 id = 35009 } # �y�h���ES�E�J�T��
  chiefofair             = { type = 9 id = 35010 } # �A���g�j�I�E�p���f�B

  landunit = {
    id       = { type = 12000 id = 1 }
    name     = "��1�R�c"
    location = 667
    division = {
      id             = { type = 12000 id = 706 }
      name           = "�ō��i�ߕ�"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 2 }
      name           = "��3���c�u�y�W�F�O���[�j�v"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 3 }
      name           = "��2���c�u�T���}���e�B���v"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 4 }
      name           = "��1���c�u�C���w�j�G���E�N���E�Z�v"
      type           = infantry
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12000 id = 6 }
    name     = "��2�R�c"
    location = 667
    division = {
      id             = { type = 12000 id = 7 }
      name           = "��6�R�x���c�u�r�W�F�[�K�X�v"
      type           = bergsjaeger
      strength       = 65
    }
    division = {
      id             = { type = 12000 id = 8 }
      name           = "��4�������c"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 12000 id = 13 }
    name     = "�A���[���`���C�R"
    location = 853
    base     = 853
    division = {
      id             = { type = 12000 id = 14 }
      name           = "ARA �x�C���e�B�V���R�E�f�E�}�W��"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12000 id = 16 }
      name           = "ARA �A���~�����e�E�u���E��"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12000 id = 18 }
      name           = "ARA �����m"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 20 }
      name           = "ARA �����@�_���B�A"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 22 }
      name           = "ARA �C���f�y���f���V�A"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 24 }
      name           = "ARA ���E���x���^�[�h"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 26 }
      name           = "ARA �w�l�����E�x���O���m"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 28 }
      name           = "ARA �w�l�����E�v���C���h��"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 30 }
      name           = "��1�쒀��"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 12000 id = 32 }
      name           = "��2�쒀��"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12000 id = 34 }
      name           = "��1������"
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 12000 id = 9 }
    name     = "���R�q���"
    location = 667
    base     = 667
    division = {
      id             = { type = 12000 id = 10 }
      name           = "��1�q��Q"
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 12000 id = 11 }
    name     = "�C�R�q���"
    location = 667
    base     = 667
    division = {
      id             = { type = 12000 id = 12 }
      name           = "��1�C���s��"
      type           = naval_bomber
      model          = 0
      strength       = 50
    }
  }
}