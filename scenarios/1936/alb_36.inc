##############################
# Country definition for ALB #
##############################
province = {
  id = 390 # �e�B���i
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 6 current_size = 6 }
}

#####################
# Country main data #
#####################

country = {
  tag                = ALB
  regular_id         = YUG
  capital            = 390 # �e�B���i
  manpower           = -20
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ITA value = 100 }
  }

  nationalprovinces      = { 390 391 413 415 }
  ownedprovinces         = { 390 391 }
  controlledprovinces    = { 390 391 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5080 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 7
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 32001 } # �]�O1��
  headofgovernment       = { type = 9 id = 32002 } # �~�_�[�g�E�t���V�F��
  foreignminister        = { type = 9 id = 32003 } # �t�A�g�E�A�X����
  armamentminister       = { type = 9 id = 32004 } # ���[�N�E�Q���W
  ministerofsecurity     = { type = 9 id = 32005 } # �W���X�����E�p�[�V�[
  ministerofintelligence = { type = 9 id = 32006 } # �]�O1��
  chiefofstaff           = { type = 9 id = 32007 } # �P�}���E�R�}�j
  chiefofarmy            = { type = 9 id = 32008 } # �X�e�t�L�E�V���g�D��
  chiefofnavy            = { type = 9 id = 32009 } # �N�A�}���E�p�J�W
  chiefofair             = { type = 9 id = 32010 } # �W���X�����E�p�[�V�[
}