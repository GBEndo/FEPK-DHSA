##############################
# Country definition for CHL #
##############################
province = {
  id = 840 # �T���e�B�A�S
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CHL
  capital            = 840 # �T���e�B�A�S
  manpower           = 15
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ARG value = -20 }
    relation = { tag = BOL value = -50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = COL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 30 }
    relation = { tag = JAP value = 20 }
    relation = { tag = PAR value = 35 }
    relation = { tag = PRU value = -25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "CHL" NumberOfSpies = 3 }

  nationalprovinces      = { 864 861 860 856 840 839 841 842 }
  ownedprovinces         = { 864 861 860 856 840 839 841 842 }
  controlledprovinces    = { 864 861 860 856 840 839 841 842 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 3020 3260 3410 3470 6210 6300 3010 3070 3130 3250 3400 8010 8020 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 44001 } # �A���g�D�[���E�A���b�T���h���E�p���}
  headofgovernment       = { type = 9 id = 44002 } # �O�X�^�{�E���X�E�T���^�E�}���A
  foreignminister        = { type = 9 id = 44003 } # �~�Q���E�N���`���K�E�^�R�}�[��
  armamentminister       = { type = 9 id = 44004 } # �G�h�D�A���h�E�C���}��
  ministerofsecurity     = { type = 9 id = 44005 } # �A���g�D�[���E�A���b�T���h���E�p���}
  ministerofintelligence = { type = 9 id = 44006 } # �t���I�E�A�����h�E�s���g
  chiefofstaff           = { type = 9 id = 44007 } # C�EJ�E�f�E���E���b�e
  chiefofarmy            = { type = 9 id = 44008 } # E�E�m�{�A�E�t�G���e�X
  chiefofnavy            = { type = 9 id = 44009 } # C�EJ�E�f�E���E���b�e
  chiefofair             = { type = 9 id = 44010 } # �_���I�E���q�J�E�K���{�A

  landunit = {
    id       = { type = 12500 id = 1 }
    name     = "�`�����R"
    location = 840
    division = {
      id             = { type = 12500 id = 2 }
      name           = "��1�����t�c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 3 }
      name           = "��2�����t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 4 }
      name           = "�`����1�R�x�t�c"
      type           = bergsjaeger
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 5 }
      name           = "��1�R���t�c"
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 12500 id = 6 }
    name     = "�`���C�R"
    location = 840
    base     = 840
    division = {
      id             = { type = 12500 id = 7 }
      name           = "��1�쒀��"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 12500 id = 9 }
      name           = "BACH �A���~�����e�E���g�[��"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 12500 id = 14 }
      name           = "BACH �A���~�����e�E�I�q�M���Y"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 10 }
      name           = "BACH �u�����R�E�G���J���_"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 11 }
      name           = "BACH �`���J�u�R"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 12 }
      name           = "��1������"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 13 }
      name           = "��2������"
      type           = submarine
      model          = 1
    }
  }
}