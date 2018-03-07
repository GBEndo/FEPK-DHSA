##############################
# Country definition for PAR #
##############################
province = {
  id = 837 # �A�X���V�I��
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PAR
  capital            = 837 # �A�X���V�I��
  manpower           = 5
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
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "PAR" NumberOfSpies = 4 }

  nationalprovinces      = { 837 846 }
  ownedprovinces         = { 837 846 }
  controlledprovinces    = { 837 846 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 42001 } # �G�E�Z�r�I�E�A����
  headofgovernment       = { type = 9 id = 42002 } # �G�E�Z�r�I�E�A����
  foreignminister        = { type = 9 id = 42003 } # ���C�X�E�A���x���g�E���A��
  armamentminister       = { type = 9 id = 42004 } # �t�F�f���R�E�`���׃X
  ministerofsecurity     = { type = 9 id = 42005 } # �j�R���X�E�f���K�h
  ministerofintelligence = { type = 9 id = 42006 } # �t�@���E�}�k�G���E�t���g�X
  chiefofstaff           = { type = 9 id = 42007 } # �C�S�[���E�G����
  chiefofarmy            = { type = 9 id = 42008 } # �}�k�G���ET�E�A�|���e
  chiefofnavy            = { type = 9 id = 42009 } # �}�k�G���ET�E�A�|���e
  chiefofair             = { type = 9 id = 42010 } # �r�Z���e�E�A�����i�V�h

  landunit = {
    id       = { type = 15600 id = 60 }
    name     = "�p���O�A�C���R"
    location = 837
    division = {
      id             = { type = 15600 id = 6000 }
      name           = "��1�����t�c"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 15600 id = 6001 }
      name           = "��106���ƌx�@���c"
      type           = militia
      strength       = 100
    }
  }
}