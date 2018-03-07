##############################
# Country definition for IRE #
##############################
province = {
  id = 30 # �_�u����
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = IRE
  capital            = 30 # �_�u����
  manpower           = 30
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 20 }
    relation = { tag = AST value = 75 }
    relation = { tag = AUS value = 10 }
    relation = { tag = BEL value = 75 }
    relation = { tag = BRA value = 20 }
    relation = { tag = CAN value = 75 }
    relation = { tag = ENG value = 25 }
    relation = { tag = ETH value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = GER value = 15 }
    relation = { tag = HOL value = 75 }
    relation = { tag = HUN value = 25 }
    relation = { tag = ITA value = 20 }
    relation = { tag = LUX value = 75 }
    relation = { tag = MEX value = 30 }
    relation = { tag = NZL value = 75 }
    relation = { tag = POR value = 25 }
    relation = { tag = SAF value = 80 }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = 50 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "IRE" NumberOfSpies = 5 }

  nationalprovinces      = { 27 26 25 24 30 29 28 }
  ownedprovinces         = { 27 26 25 24 30 }
  controlledprovinces    = { 27 26 25 24 30 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    freedom           = 8
    free_market       = 7
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 25001 } # �h���i�[���E�E�A�E�u�A�n��
  headofgovernment       = { type = 9 id = 25002 } # �C�[�����E�f�E���@����
  foreignminister        = { type = 9 id = 25003 } # �C�[�����E�f�E���@����
  armamentminister       = { type = 9 id = 25004 } # �V���[���E�}�b�P���e�B�[
  ministerofsecurity     = { type = 9 id = 25005 } # �p�g���b�N�EJ�E���g���b�W
  ministerofintelligence = { type = 9 id = 25006 } # �W�F�����h�E�{�����h
  chiefofstaff           = { type = 9 id = 25007 } # M�EJ�E�R�X�e��
  chiefofarmy            = { type = 9 id = 25008 } # �h���i�[���E�E�A�E�u�A�n��
  chiefofnavy            = { type = 9 id = 25009 } # H�ET�E�O���[��
  chiefofair             = { type = 9 id = 25010 } # P�EA�E�����J�q�[

  landunit = {
    id       = { type = 21500 id = 1 }
    name     = "���e�A��"
    location = 30
    division = {
      id             = { type = 21500 id = 2 }
      name           = "1/2/3/4/5 ���e���"
      type           = infantry
      strength       = 50
      max_strength   = 50
    }
  }

  navalunit = {
    id       = { type = 21500 id = 5 }
    name     = "�A�C�������h���a���C�R"
    location = 30
    base     = 30
    division = {
      id             = { type = 21500 id = 7 }
      name           = "��1�A����"
      type           = transport
      model          = 0
    }
  }
}