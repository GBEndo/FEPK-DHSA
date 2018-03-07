##############################
# Country definition for COS #
##############################
province = {
  id = 540 # �T���m�[
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = COS
  capital            = 540 # �T���m�[
  manpower           = 5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "COS" NumberOfSpies = 1 }

  nationalprovinces      = { 540 }
  ownedprovinces         = { 540 }
  controlledprovinces    = { 540 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 5
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 47001 } # �����A���h�E�q���l�X�E�I���A�����I
  headofgovernment       = { type = 9 id = 47002 } # ���I���E�R���e�X�E�J�X�g��
  foreignminister        = { type = 9 id = 47003 } # ���E���E�O���f�B�A��
  armamentminister       = { type = 9 id = 47004 } # �t���I�E�A�R�X�^�E�K���V�A
  ministerofsecurity     = { type = 9 id = 47005 } # �r�N�g���E�T�i�u���A�E�}���e�B�l�X
  ministerofintelligence = { type = 9 id = 47006 } # �t�F�f���R�E�e�B�m�R
  chiefofstaff           = { type = 9 id = 47007 } # �t�F�f���R�E�e�B�m�R
  chiefofarmy            = { type = 9 id = 47008 } # �t�F�f���R�E�e�B�m�R
  chiefofnavy            = { type = 9 id = 47009 } # ���x���g�E�t�A���X�E�J���|�V�m
  chiefofair             = { type = 9 id = 47010 } # �h���E�A���i���h�E�T����

  landunit = {
    id       = { type = 25000 id = 60 }
    name     = "�R�X�^���J���R"
    location = 540
    division = {
      id             = { type = 25000 id = 6000 }
      name           = "��1�������c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
}