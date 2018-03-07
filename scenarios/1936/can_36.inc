##############################
# Country definition for CAN #
##############################
province = {
  id = 541 # �o���N�[�o�[
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 569 # �E�B�j�y�O
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 579 # �n���t�@�b�N�X
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 581 # �Z���g�W����
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 585 # �����g���I�[��
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 586 # �P�x�b�N�V�e�B�[
  anti_air = 4
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 588 # �I�^��
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}
province = { id = 589 anti_air = 1 } # �g�����g
province = {
  id = 797 # �J���K���[
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CAN
  capital            = 588 # �I�^��
  manpower           = 30
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 10
  escorts        = 1

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = HOL value = 80 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 175 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "CAN" NumberOfSpies = 6 }

  nationalprovinces      = { 556 541 555 554 552 558 557 796 797 799 798 795 794 559 560 561 563 566 567 570 568 569 571 565 572 588 589 590 591 587 585 584 573 586 574 564 581 580 579 578 1909 }
  ownedprovinces         = { 556 541 555 554 552 558 557 796 797 799 798 795 794 559 560 561 563 566 567 570 568 569 571 565 572 588 589 590 591 587 585 584 573 586 574 564 581 580 579 578 1909 }
  controlledprovinces    = { 556 541 555 554 552 558 557 796 797 799 798 795 794 559 560 561 563 566 567 570 568 569 571 565 572 588 589 590 591 587 585 584 573 586 574 564 581 580 579 578 1909 }

  techapps               = { 1010 1020 1190 1200 1210 1220 14000 2010 2150 2290 2300 2310 2450 2460 2510 3010 3020 3070 4010 4020 4120 4130 5010 5020 5080 5090 5190 5310 6010 6030 6110 6120 8010 8020 8030 8040 8050 8070 8100 8120 9010 9020 9030 9140 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 10
    free_market       = 10
    professional_army = 6
    defense_lobby     = 2
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 45001 } # �W�����E�g�E�B�[�Y�~���A�j��
  headofgovernment       = { type = 9 id = 45002 } # �}�b�P���W�[�E�L���O
  foreignminister        = { type = 9 id = 45003 } # �}�b�P���W�[�E�L���O
  armamentminister       = { type = 9 id = 45004 } # �C�A���EA�E�}�b�P���W�[
  ministerofsecurity     = { type = 9 id = 45005 } # �A�[�l�X�g�E���|�C���e
  ministerofintelligence = { type = 9 id = 45006 } # �w�����[�E�N���[���[
  chiefofstaff           = { type = 9 id = 45007 } # �A�[�l�X�g�E�A�V���g��
  chiefofarmy            = { type = 9 id = 45008 } # �A�[�l�X�g�E�A�V���g��
  chiefofnavy            = { type = 9 id = 45009 } # �p�[�V�[�E�l���X
  chiefofair             = { type = 9 id = 45010 } # �W���[�W�E�N���C��

  landunit = {
    id       = { type = 20000 id = 1 }
    name     = "�J�i�_�����R"
    location = 588
    division = {
      id             = { type = 20000 id = 2 }
      name           = "�J�i�_��1�����t�c"
      type           = infantry
      model          = 0
      strength       = 1
    }
  }

  navalunit = {
    id       = { type = 20000 id = 500 }
    name     = "�J�i�_�A���͑�"
    location = 579
    base     = 579
    division = {
      id             = { type = 30053 id = 501 }
      name           = "�G���y���X�E�I�u�E�W���p���A����"
      type           = transport
    }
    division = {
      id             = { type = 30053 id = 502 }
      name           = "�G���y���X�E�I�u�E�I�[�X�g�����A�A����"
      type           = transport
    }
    division = {
      id             = { type = 30053 id = 503 }
      name           = "�G���y���X�E�I�u�E�u���e���A����"
      type           = transport
    }
    division = {
      id             = { type = 30053 id = 504 }
      name           = "�G���y���X�E�I�u�E�J�i�_�A����"
      type           = transport
    }
    division = {
      id             = { type = 30053 id = 505 }
      name           = "�G���y���X�E�I�u�E���V�A�A����"
      type           = transport
    }
    division = {
      id             = { type = 30053 id = 506 }
      name           = "�G���y���X�E�I�u�E�G�C�W�A�A����"
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 20000 id = 7 }
    name     = "�J�i�_�����C�R"
    location = 579
    base     = 579
    division = {
      id             = { type = 20000 id = 8 }
      name           = "��1�쒀�͑�"
      type           = destroyer
      model          = 0
      strength       = 100
    }
  }
}