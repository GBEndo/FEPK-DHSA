##############################
# Country definition for VEN #
##############################
province = {
  id = 804 # �}���J�C�{
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}
province = { id = 811 anti_air = 2 } # �J���J�X

#####################
# Country main data #
#####################

country = {
  tag                = VEN
  capital            = 811 # �J���J�X
  manpower           = 12
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -15 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = ECU value = 20 }
    relation = { tag = ENG value = -10 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 125 }
  }
  SpyInfo                = { country = "VEN" NumberOfSpies = 5 }

  nationalprovinces      = { 804 802 810 811 869 870 871 }
  ownedprovinces         = { 804 802 810 811 869 870 }
  controlledprovinces    = { 804 802 810 811 869 870 }

  techapps               = { 4010 2150 2290 2300 2310 2400 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 1
    freedom           = 5
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 38001 } # �G���A�T���E�R���g�����X
  headofgovernment       = { type = 9 id = 38002 } # �G���A�T���E�R���g�����X
  foreignminister        = { type = 9 id = 38003 } # �G�X�e�o���E�q���E�{���w�X
  armamentminister       = { type = 9 id = 38004 } # �y�h���E�x�A�E�y���g�D�C�E�E���`
  ministerofsecurity     = { type = 9 id = 38005 } # �T���e�B�A�S�E�P�C�E�A����
  ministerofintelligence = { type = 9 id = 38006 } # �t�����A�o���h�E�f�E�o�X�P�X�E���i���X
  chiefofstaff           = { type = 9 id = 38007 } # �C�T�C�A�X�E���f�B�i�E�A���K���^
  chiefofarmy            = { type = 9 id = 38008 } # �C�T�C�A�X�E���f�B�i�E�A���K���^
  chiefofnavy            = { type = 9 id = 38009 } # �E���x���g�E�T���^�u���A�E�r����
  chiefofair             = { type = 9 id = 38010 } # �^�r�h�E���y�X�E�G�����P�X

  landunit = {
    id       = { type = 15800 id = 45 }
    name     = "�x�l�Y�G�����R"
    location = 811
    division = {
      id             = { type = 15800 id = 4500 }
      name           = "��1�����t�c�u�G�h�D�A���h�E�u�����R�v"
      type           = infantry
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 15800 id = 4501 }
      name           = "��1�����t�c"
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 15800 id = 4502 }
      name           = "���F�l�Y�G���R����"
      type           = cavalry
      extra          = artillery
      strength       = 100
    }
  }
}