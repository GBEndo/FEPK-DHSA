##############################
# Country definition for CUB #
##############################
province = {
  id = 654 # �n�o�i
  anti_air = 1
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CUB
  capital            = 654 # �n�o�i
  manpower           = 15
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = DOM value = 50 }
    relation = { tag = ENG value = 30 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 }
  }
  SpyInfo                = { country = "CUB" NumberOfSpies = 2 }

  nationalprovinces      = { 654 655 656 657 }
  ownedprovinces         = { 654 655 656 657 }
  controlledprovinces    = { 654 655 656 657 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 5
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 33001 } # �z�Z�E�o���l�E�C�E�r�i�w���X
  headofgovernment       = { type = 9 id = 33002 } # �~�Q���E�S���X�E�C�E�A���A�X
  foreignminister        = { type = 9 id = 33003 } # �z�Z�E�o���l�E�C�E�r�i�w���X
  armamentminister       = { type = 9 id = 33004 } # �J�����X�E�v���I
  ministerofsecurity     = { type = 9 id = 33005 } # �Z���W�I�E�J���{
  ministerofintelligence = { type = 9 id = 33006 } # �}�k�G���E�t�F���[��
  chiefofstaff           = { type = 9 id = 33007 } # �t���I�E�T���M��
  chiefofarmy            = { type = 9 id = 33008 } # �T���o�h���E�J�X�^�l�_�E�J�X�g��
  chiefofnavy            = { type = 9 id = 33009 } # ���h���S�EA�E�t�G���e�X
  chiefofair             = { type = 9 id = 33010 } # �h�~���S�ER�E�f���E�g��

  landunit = {
    id       = { type = 26000 id = 40 }
    name     = "�L���[�o���R"
    location = 654
    division = {
      id             = { type = 26000 id = 4000 }
      name           = "��1�������c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 4001 }
      name           = "��1�R�����c�u�t�����f�B�[�^�v"
      type           = cavalry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
}