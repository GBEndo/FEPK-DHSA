##############################
# Country definition for GUA #
##############################
province = {
  id = 757 # �O�A�e�}��
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = GUA
  capital            = 757 # �O�A�e�}��
  manpower           = 7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
    relation = { tag = ENG value = 50 }
  }
  SpyInfo                = { country = "GUA" NumberOfSpies = 2 }

  nationalprovinces      = { 757 759 }
  ownedprovinces         = { 757 }
  controlledprovinces    = { 757 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 46001 } # �z���w�E�E�r�R�E�J�X�^�l�_
  headofgovernment       = { type = 9 id = 46002 } # �z���w�E�E�r�R�E�J�X�^�l�_
  foreignminister        = { type = 9 id = 46003 } # �A���t���h�E�X�L�i�[�E�N���[
  armamentminister       = { type = 9 id = 46004 } # �M���F�����E�t�����X�E�A�����_�m
  ministerofsecurity     = { type = 9 id = 46005 } # T�E�J�X�g���E�h�~���Q�X
  ministerofintelligence = { type = 9 id = 46006 } # �G�h�D�A���h�E�r�W���O�����E�A���T
  chiefofstaff           = { type = 9 id = 46007 } # �t�F�f���R�E�|���Z�E�o�C�f�X
  chiefofarmy            = { type = 9 id = 46008 } # �z���w�E�E�r�R�E�J�X�^�l�_
  chiefofnavy            = { type = 9 id = 46009 } # �g�}�X�E�����h�[�T�E�E���x
  chiefofair             = { type = 9 id = 46010 } # R�E�u�G�i�x���g�D���E�s�l�_

  landunit = {
    id       = { type = 16500 id = 65 }
    name     = "�O�A�e�}�����R"
    location = 757
    division = {
      id             = { type = 16500 id = 6500 }
      name           = "��1�������c�u�A�h���t�H�EV�E�z�[���v"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
  }
}