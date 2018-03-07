##############################
# Country definition for URU #
##############################
province = {
  id = 849 # �����e�r�f�I
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}

#####################
# Country main data #
#####################

country = {
  tag                = URU
  capital            = 849 # �����e�r�f�I
  manpower           = 7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = -50 }
    relation = { tag = BOL value = 10 }
    relation = { tag = BRA value = 125 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = PAR value = 20 }
    relation = { tag = PRU value = 25 }
    relation = { tag = SOV value = -100 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "URU" NumberOfSpies = 4 }

  nationalprovinces      = { 849 }
  ownedprovinces         = { 849 }
  controlledprovinces    = { 849 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 41001 } # �K�u���G���E�e��
  headofgovernment       = { type = 9 id = 41002 } # �K�u���G���E�e��
  foreignminister        = { type = 9 id = 41003 } # �z�Z�E�G�X�p���e��
  armamentminister       = { type = 9 id = 41004 } # �A���t���h�E�o���h�~��
  ministerofsecurity     = { type = 9 id = 41005 } # �n�C���c�E�O���b�P���o�[�K�[
  ministerofintelligence = { type = 9 id = 41006 } # �N���X�e�B�A�m�E�s���O�C�E�g�����F�X
  chiefofstaff           = { type = 9 id = 41007 } # �}�k�G���E�G�C���X�E�A�X�v���A
  chiefofarmy            = { type = 9 id = 41008 } # �z���w�E�G���I�E�����h�[�T
  chiefofnavy            = { type = 9 id = 41009 } # �J�����X�E�W���N�\���E�E���x
  chiefofair             = { type = 9 id = 41010 } # �R�X���E�A���o���X�E�x���b�\

  landunit = {
    id       = { type = 13700 id = 40 }
    name     = "�E���O�A�C���R"
    location = 849
    division = {
      id             = { type = 13700 id = 4000 }
      name           = "��4�������c�u�h��=�N���E�f�B�I�v"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
}