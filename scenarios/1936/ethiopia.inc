##############################
# Country definition for ETH #
##############################

country = {
  tag                = ETH
  capital            = 1046 # �A�f�B�X�A�x�o
  manpower           = 80
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = IRE value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = 35 }
  }
  SpyInfo                = { country = "ETH" NumberOfSpies = 2 }

  nationalprovinces      = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 1033 1038 1039 }
  ownedprovinces         = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 }
  controlledprovinces    = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 7
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 65001 } # �n�C���E�Z���V�G1��
  headofgovernment       = { type = 9 id = 65002 } # �x�h�W�����f�E�e�N���E�n�����A�e
  foreignminister        = { type = 9 id = 65003 } # �G���[�C�E�E�H���f�E�T���V�F
  armamentminister       = { type = 9 id = 65004 } # �G���[�C�E�E�H���f�E�T���V�F
  ministerofsecurity     = { type = 9 id = 65005 } # �x�h�W�����f�E�e�N���E�n�����A�e
  ministerofintelligence = { type = 9 id = 65006 } # �n�C���E�Z���V�G1��
  chiefofstaff           = { type = 9 id = 65007 } # ���X�E�����O�G�^
  chiefofarmy            = { type = 9 id = 65008 } # �f�X�^�E�_���e�E
  chiefofnavy            = { type = 9 id = 65009 } # ���X�E�Z����
  chiefofair             = { type = 9 id = 65010 } # �W�����E���r���\��

  landunit = {
    id       = { type = 31000 id = 1 }
    name     = "�鍑���R"
    location = 1046
    division = {
      id             = { type = 31000 id = 2 }
      name           = "�鍑�e�q��"
      type           = infantry
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 31000 id = 3 }
      name           = "��1�t�c"
      type           = militia
      model          = 0
      strength       = 70
    }
    division = {
      id             = { type = 31000 id = 4 }
      name           = "��2�t�c"
      type           = militia
      model          = 0
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 31000 id = 5 }
    name     = "��1�����c"
    location = 1052
    division = {
      id             = { type = 31000 id = 6 }
      name           = "��1������"
      type           = militia
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 7 }
      name           = "��2������"
      type           = militia
      model          = 0
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 31000 id = 8 }
    name     = "��2�����c"
    location = 1043
    division = {
      id             = { type = 31000 id = 9 }
      name           = "��3������"
      type           = militia
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 10 }
      name           = "��4������"
      type           = militia
      model          = 0
      strength       = 60
    }
  }
}