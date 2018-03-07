##############################
# Country definition for DOM #
##############################
province = {
  id = 894 # �T���g�h�~���S
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = DOM
  capital            = 894 # �T���g�h�~���S
  manpower           = 8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = CUB value = 50 }
    relation = { tag = HAI value = -30 }
    relation = { tag = USA value = 125 }
  }
  SpyInfo                = { country = "DOM" NumberOfSpies = 1 }

  nationalprovinces      = { 893 894 }
  ownedprovinces         = { 893 894 }
  controlledprovinces    = { 893 894 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 49001 } # ���t�@�G���E�g���q�[��
  headofgovernment       = { type = 9 id = 49002 } # �n�V���g�E�r�G���x�j�[�h�E�y�C�i�[�h
  foreignminister        = { type = 9 id = 49003 } # �G���A�X�E�u���`�F
  armamentminister       = { type = 9 id = 49004 } # �}�k�G���E�f�E�w�X�X�E�g�����R�\
  ministerofsecurity     = { type = 9 id = 49005 } # ���t�@�G���E�g���q�[��
  ministerofintelligence = { type = 9 id = 49006 } # �w�X�X�E�_�E�R�X�^�E���C�X
  chiefofstaff           = { type = 9 id = 49007 } # ���t�@�G���E�g���q�[��
  chiefofarmy            = { type = 9 id = 49008 } # ���t�@�G���E�g���q�[��
  chiefofnavy            = { type = 9 id = 49009 } # �E���x���g�E���n�X
  chiefofair             = { type = 9 id = 49010 } # �A�j�o���E�o���F�z�E�\�[�T

  landunit = {
    id       = { type = 28000 id = 75 }
    name     = "�h�~�j�J���a�����R"
    location = 894
    division = {
      id             = { type = 28000 id = 7500 }
      name           = "��1�����t�c"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 50
    }
  }
}