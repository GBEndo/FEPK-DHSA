##############################
# Country definition for PAN #
##############################
province = {
  id = 888 # �p�i�}
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PAN
  capital            = 888 # �p�i�}
  manpower           = 3
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
  }
  SpyInfo                = { country = "PAN" NumberOfSpies = 2 }

  nationalprovinces      = { 889 888 }
  ownedprovinces         = { 888 }
  controlledprovinces    = { 888 }

  techapps               = { 4010 2150 2290 1010 1190 5010 5080 5090 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 95001 } # �A�����f�B�I�E�A���A�X�E�f�E���E�}�h��
  headofgovernment       = { type = 9 id = 95002 } # �A�����f�B�I�E�A���A�X�E�f�E���E�}�h��
  foreignminister        = { type = 9 id = 95003 } # �i���V�\�E�K���C�E�f�B�A�X
  armamentminister       = { type = 9 id = 95004 } # �_�j�G���EC�E�s���\��
  ministerofsecurity     = { type = 9 id = 95005 } # �C�O�i�V�I�EE�E�����h�[�T
  ministerofintelligence = { type = 9 id = 95006 } # �G�Z�L�G���E�t�F���i���f�X�E�n�G��
  chiefofstaff           = { type = 9 id = 95007 } # �t�@���E������
  chiefofarmy            = { type = 9 id = 95008 } # �{���o���E�r�������m
  chiefofnavy            = { type = 9 id = 95009 } # �t�@���EA�E�G���i���f�X
  chiefofair             = { type = 9 id = 95010 } # �t�@���E������

  landunit = {
    id       = { type = 14600 id = 50 }
    name     = "�p�i�}���R"
    location = 888
    division = {
      id             = { type = 14600 id = 5000 }
      name           = "��1�������c"
      type           = infantry
      strength       = 60
    }
  }
}