##############################
# Country definition for ECU #
##############################
province = {
  id = 815 # �L�g
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = ECU
  capital            = 815 # �L�g
  manpower           = 8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "ECU" NumberOfSpies = 3 }

  nationalprovinces      = { 814 815 817 818 }
  ownedprovinces         = { 814 815 817 818 }
  controlledprovinces    = { 814 815 817 818 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 5
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 40001 } # �t�F�f���R�E�p�G�X�E�`���{�A�K
  headofgovernment       = { type = 9 id = 40002 } # �t�F�f���R�E�p�G�X�E�`���{�A�K
  foreignminister        = { type = 9 id = 40003 } # �A���x���g�E�����A�E�`���{�A�K
  armamentminister       = { type = 9 id = 40004 } # �t�@�r�A���E�f���E�J�X�e����
  ministerofsecurity     = { type = 9 id = 40005 } # �_�r�f�E�t�����X
  ministerofintelligence = { type = 9 id = 40006 } # �A�E�����I�E���X�P���E�i���o�G�X
  chiefofstaff           = { type = 9 id = 40007 } # �x�j�O�m�E�A���h���[�f�E�t�����X
  chiefofarmy            = { type = 9 id = 40008 } # �q���x���g�E�G�����P�X�E�K����
  chiefofnavy            = { type = 9 id = 40009 } # �t�@���E�������E�J�X�g��
  chiefofair             = { type = 9 id = 40010 } # �R�X���E���l�����E�o���o�g

  landunit = {
    id       = { type = 29000 id = 50 }
    name     = "�G�N�A�h�����R"
    location = 815
    division = {
      id             = { type = 29000 id = 5000 }
      name           = "��1�������c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
  }
}