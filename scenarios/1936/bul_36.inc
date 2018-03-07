##############################
# Country definition for BUL #
##############################
province = { id = 417 ic = 2 anti_air = 2 } # �\�t�B�A
province = { id = 420 ic = 2 } # �v�����F��
province = {
  id = 422 # ���@���i
  ic = 2
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}

#####################
# Country main data #
#####################

country = {
  tag                = BUL
  capital            = 417 # �\�t�B�A
  manpower           = 60
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 50
  transports     = 10
  escorts        = 4

  diplomacy = {
    relation = { tag = ENG value = 20 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 25 }
    relation = { tag = GRE value = -75 }
    relation = { tag = ITA value = 150 }
    relation = { tag = ROM value = 25 }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 75 }
    relation = { tag = YUG value = 25 }
  }
  SpyInfo                = { country = "BUL" NumberOfSpies = 6 }

  nationalprovinces      = { 419 420 422 421 417 416 413 414 412 410 423 }
  ownedprovinces         = { 419 420 422 421 417 416 }
  controlledprovinces    = { 419 420 422 421 417 416 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 6
    free_market       = 7
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 19001 } # �{���X3��
  headofgovernment       = { type = 9 id = 19002 } # �Q�I���M�E�L�I�Z�C���@�m�t
  foreignminister        = { type = 9 id = 19003 } # �Q�I���M�E�L�I�Z�C���@�m�t
  armamentminister       = { type = 9 id = 19004 } # �L�����E�S�E�l�t
  ministerofsecurity     = { type = 9 id = 19005 } # �Q�I���M�E�T�|�t
  ministerofintelligence = { type = 9 id = 19006 } # �f�B�~�^�[���E�y�V�F�t
  chiefofstaff           = { type = 9 id = 19007 } # �t���X�g�E���R�t
  chiefofarmy            = { type = 9 id = 19008 } # �g�h�[���E�W�����W�G�t
  chiefofnavy            = { type = 9 id = 19009 } # �T���@�E�C���@�m�t
  chiefofair             = { type = 9 id = 19010 } # ���@�V���E�{�C�f�t

  landunit = {
    id       = { type = 19000 id = 1 }
    name     = "��1�R"
    location = 417
    division = {
      id             = { type = 19000 id = 2 }
      name           = "��1�\�t�B�X�J�����t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 3 }
      name           = "��7�����X�J�����t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 4 }
      name           = "��1�R���t�c"
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 19000 id = 5 }
    name     = "��2�R"
    location = 422
    division = {
      id             = { type = 19000 id = 6 }
      name           = "��2�g���L�X�J�����t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 7 }
      name           = "��8�g�D���W�����X�J�����t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 19 }
      name           = "��2�R���t�c"
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 19000 id = 9 }
    name     = "��3�R"
    location = 421
    division = {
      id             = { type = 19000 id = 10 }
      name           = "��3�o���J���X�J�����t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 11 }
      name           = "��4�v���X���t�X�J�����t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 19000 id = 12 }
    name     = "��4�R"
    location = 420
    division = {
      id             = { type = 19000 id = 13 }
      name           = "��5�h�D�i�t�X�J�����t�c"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 14 }
      name           = "��6�u�f�B���X�J�����t�c"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
}