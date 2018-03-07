##############################
# Country definition for SAL #
##############################
province = {
  id = 759 # �T���T���o�h��
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SAL
  capital            = 759 # �T���T���o�h��
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
  SpyInfo                = { country = "SAL" NumberOfSpies = 2 }

  nationalprovinces      = { 759 }
  ownedprovinces         = { 759 }
  controlledprovinces    = { 759 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 77001 } # �}�L�V�~���A�m�E�G���i���f�X�E�}���e�B�l�X
  headofgovernment       = { type = 9 id = 77002 } # �}�L�V�~���A�m�E�G���i���f�X�E�}���e�B�l�X
  foreignminister        = { type = 9 id = 77003 } # �~�Q���E�A���w���E�A���E�W��
  armamentminister       = { type = 9 id = 77004 } # �A���x���g�E�S���X�E�T���e
  ministerofsecurity     = { type = 9 id = 77005 } # �t�B�f���E�N���X�e�B�m�E�K���C
  ministerofintelligence = { type = 9 id = 77006 } # �I�X�J���EA�E�{���m�X
  chiefofstaff           = { type = 9 id = 77007 } # �}���R�EA�E�����i
  chiefofarmy            = { type = 9 id = 77008 } # �}�L�V�~���A�m�E�G���i���f�X�E�}���e�B�l�X
  chiefofnavy            = { type = 9 id = 77009 } # ���E���E���h���t�B�E�T���`�F�X
  chiefofair             = { type = 9 id = 77010 } # �E���x���g�E�A�x����

  landunit = {
    id       = { type = 21600 id = 70 }
    name     = "�T���o�h�����R"
    location = 759
    division = {
      id             = { type = 21600 id = 7000 }
      name           = "��1�������c"
      type           = infantry
      extra          = anti_air
      strength       = 40
    }
  }
}