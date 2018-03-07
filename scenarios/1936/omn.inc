##############################
# Country definition for OMN #
##############################
province = {
  id = 1819 # �}�X�J�b�g
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = OMN
  puppet             = ENG
  control            = ENG
  capital            = 1819 # �}�X�J�b�g
  manpower           = 5
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "OMN" NumberOfSpies = 1 }

  nationalprovinces      = { 1819 }
  ownedprovinces         = { 1819 }
  controlledprovinces    = { 1819 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 92001 } # �T�C�[�h�E�C�u���E�e�B���[��
  headofgovernment       = { type = 9 id = 92002 } # �T�C�[�h�E�C�u���E�e�B���[��
  foreignminister        = { type = 9 id = 92003 } # �T�C�[�h�E�C�u���E�e�B���[��
  armamentminister       = { type = 9 id = 92004 } # �W���[���Y�EE�E�h�������h
  ministerofsecurity     = { type = 9 id = 92005 } # �w�����[�EL�EW�EL�E�o�[�i��
  ministerofintelligence = { type = 9 id = 92006 } # �W�F�t���[�E�f�j�X
  chiefofstaff           = { type = 9 id = 92007 } # �T�C�[�h�E�C�u���E�e�B���[��
  chiefofarmy            = { type = 9 id = 92008 } # �T�C�[�h�E�C�u���E�e�B���[��
  chiefofnavy            = { type = 9 id = 92009 } # �W�F�t���[�E�N���C�h��
  chiefofair             = { type = 9 id = 92010 } # �A�u�_���[�E�C�u���E�e�B���[��

  landunit = {
    id       = { type = 11114 id = 1 }
    name     = "�I�}�[�������R"
    location = 1819
    division = {
      id             = { type = 11114 id = 2 }
      name           = "�I�}�[�������R"
      type           = cavalry
      strength       = 15
    }
  }
}