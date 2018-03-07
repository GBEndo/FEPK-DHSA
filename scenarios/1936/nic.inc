##############################
# Country definition for NIC #
##############################
province = {
  id = 539 # �}�i�O�A
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = NIC
  capital            = 539 # �}�i�O�A
  manpower           = 5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "NIC" NumberOfSpies = 2 }

  nationalprovinces      = { 539 }
  ownedprovinces         = { 539 }
  controlledprovinces    = { 539 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 4
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 48001 } # �t�@���E�o�E�e�B�X�^�E�T�J�T
  headofgovernment       = { type = 9 id = 48002 } # �t���A���E�C���A�X�E�i�o��
  foreignminister        = { type = 9 id = 48003 } # ���I�i���h�E�A���Q�����E�o���K�X
  armamentminister       = { type = 9 id = 48004 } # �A�i�X�^�V�I�EG�E�\���T
  ministerofsecurity     = { type = 9 id = 48005 } # �A���J�V�I�E�g�����F�X�E�����h�[�T
  ministerofintelligence = { type = 9 id = 48006 } # ���I�i���h�E�A���Q�����E�o���K�X
  chiefofstaff           = { type = 9 id = 48007 } # �A�i�X�^�V�I�EG�E�\���T
  chiefofarmy            = { type = 9 id = 48008 } # �A�E�O�X�g�E�J���o���E�A���g�j�I
  chiefofnavy            = { type = 9 id = 48009 } # �O�X�^�{�E�t�����X�E�����f�B�G���^
  chiefofair             = { type = 9 id = 48010 } # �M���F�����ER�E�N�A�h��

  landunit = {
    id       = { type = 11600 id = 45 }
    name     = "�j�J���O�A���R"
    location = 539
    division = {
      id             = { type = 11600 id = 4500 }
      name           = "�哝�̌�q��"
      type           = infantry
      extra          = anti_air
      strength       = 60
    }
  }
}