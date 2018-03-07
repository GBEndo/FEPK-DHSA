##############################
# Country definition for BOL #
##############################
province = {
  id = 832 # ���p�X
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = BOL
  capital            = 832 # ���p�X
  manpower           = 8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }
  SpyInfo                = { country = "BOL" NumberOfSpies = 3 }

  nationalprovinces      = { 836 833 838 832 828 827 837 822 839 }
  ownedprovinces         = { 836 833 838 832 828 827 }
  controlledprovinces    = { 836 833 838 832 828 827 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6210 6300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 7
    defense_lobby     = 8
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 43001 } # �z�Z�E�e�n�_�E�\���T�m
  headofgovernment       = { type = 9 id = 43002 } # �z�Z�E�e�n�_�E�\���T�m
  foreignminister        = { type = 9 id = 43003 } # �z�Z�E�}���A�E�O�e�B�G���X
  armamentminister       = { type = 9 id = 43004 } # �����b�c�E�z�b�z�V���g
  ministerofsecurity     = { type = 9 id = 43005 } # �z�Z�E�T���g�X�E�L���e���X
  ministerofintelligence = { type = 9 id = 43006 } # �J�����X�E�A���^�~���m
  chiefofstaff           = { type = 9 id = 43007 } # �O�A���x���g�E�r�W�����G���E���y�X
  chiefofarmy            = { type = 9 id = 43008 } # �n���X�E�N���g
  chiefofnavy            = { type = 9 id = 43009 } # �q���E�C�o���E�t�A���X
  chiefofair             = { type = 9 id = 43010 } # �G�N�g�[���E�r���o�I�E���n

  landunit = {
    id       = { type = 17000 id = 40 }
    name     = "�{���r�A���R"
    location = 832
    division = {
      id             = { type = 17000 id = 4000 }
      name           = "��1�������c�u�{���o���v"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 17000 id = 4001 }
      name           = "�{���r�A��1�������c"
      type           = militia
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 17000 id = 4002 }
      name           = "�{���r�A��2�������c"
      type           = militia
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 17000 id = 4003 }
      name           = "��1�R�����c�u�`���R�v"
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }
}