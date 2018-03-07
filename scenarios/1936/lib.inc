##############################
# Country definition for LIB #
##############################
province = {
  id = 992 # ���������B�A
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = LIB
  puppet             = USA
  control            = USA
  capital            = 992 # ���������B�A
  manpower           = 7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = PHI value = 200 }
    relation = { tag = USA value = 200 }
  }
  SpyInfo                = { country = "LIB" NumberOfSpies = 1 }

  nationalprovinces      = { 992 }
  ownedprovinces         = { 992 }
  controlledprovinces    = { 992 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 69001 } # �G�h�E�B���EJ�E�o�[�N���C
  headofgovernment       = { type = 9 id = 69002 } # �G�h�E�B���EJ�E�o�[�N���C
  foreignminister        = { type = 9 id = 69003 } # �N�������X�EL�E�V���v�\��
  armamentminister       = { type = 9 id = 69004 } # �t���f���b�N�EK�E�j�[���Z��
  ministerofsecurity     = { type = 9 id = 69005 } # �w�����[�ER�E�O���C���X
  ministerofintelligence = { type = 9 id = 69006 } # �w�����[�EM�E���r���\��
  chiefofstaff           = { type = 9 id = 69007 } # �x���W���~���EO�E�f�C���B�X
  chiefofarmy            = { type = 9 id = 69008 } # �A�C���@�[�E���@�[�W��
  chiefofnavy            = { type = 9 id = 69009 } # ���W�i���h�E�u�����h��
  chiefofair             = { type = 9 id = 69010 } # �E�H���E���C�E�`����

  landunit = {
    id       = { type = 25500 id = 1 }
    name     = "���x���A�R"
    location = 992
    division = {
      id             = { type = 25000 id = 2 }
      name           = "���a����1�h�q�t�c"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 25500 id = 3 }
      name           = "���a����2�h�q�t�c"
      type           = infantry
      strength       = 100
    }
  }
}