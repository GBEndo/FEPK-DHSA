##############################
# Country definition for MEX #
##############################
province = { id = 747 anti_air = 1 } # �����e���[
province = { id = 751 anti_air = 1 } # �O�A�_���n��
province = { id = 752 anti_air = 2 } # ���L�V�R�V�e�B�[
province = {
  id = 754 # �A�J�v���R
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = MEX
  capital            = 752 # ���L�V�R�V�e�B�[
  manpower           = 62
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = IRE value = 30 }
    relation = { tag = USA value = 125 }
  }
  SpyInfo                = { country = "MEX" NumberOfSpies = 5 }

  nationalprovinces      = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  ownedprovinces         = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  controlledprovinces    = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }

  techapps               = { 1010 1020 1110 1190 2150 2290 2300 2310 2450 2460 2510 4010 5010 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 8
    freedom           = 6
    free_market       = 6
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 36001 } # ���T���E�J���f�i�X
  headofgovernment       = { type = 9 id = 36002 } # ���T���E�J���f�i�X
  foreignminister        = { type = 9 id = 36003 } # �G�h�D�A���h�E�A�C
  armamentminister       = { type = 9 id = 36004 } # �G�����P�E�G�X�g���_�E���C�m�\
  ministerofsecurity     = { type = 9 id = 36005 } # �t�����V�X�R�EU�E�x�i�r�f�X
  ministerofintelligence = { type = 9 id = 36006 } # �v���^���R�EE�E�J���F�X
  chiefofstaff           = { type = 9 id = 36007 } # �x���n�~���EG�E�C��
  chiefofarmy            = { type = 9 id = 36008 } # �p�u���E�L���K�E�G�X�J�~����
  chiefofnavy            = { type = 9 id = 36009 } # �G�N�g���E���C�N�Z�C��
  chiefofair             = { type = 9 id = 36010 } # �O�X�^�{�E�T���i�X�E�J�~�i

  landunit = {
    id       = { type = 29500 id = 1 }
    name     = "���L�V�R���R"
    location = 752
    division = {
      id             = { type = 29500 id = 2 }
      name           = "�哝�̌�q��"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 3 }
      name           = "��1�����t�c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 4 }
      name           = "��2�����t�c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 5 }
      name           = "��3�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 29500 id = 6 }
    name     = "���L�V�R�R������"
    location = 742
    division = {
      id             = { type = 29500 id = 7 }
      name           = "��1�R���t�c"
      type           = cavalry
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 8 }
      name           = "��2�R���t�c"
      type           = cavalry
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 29500 id = 11 }
    name     = "���L�V�R��R"
    location = 754
    base     = 754
    division = {
      id             = { type = 29500 id = 12 }
      name           = "��1�퓬�q��Q"
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
}