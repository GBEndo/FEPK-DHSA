
##############################
# Country definition for CSX #
##############################

province =
{ id       = 1205
  air_base = { size = 5 current_size = 5 }
}            # Beiping
province =
{ id       = 1216
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Jinan
 
#####################
# Country main data #
#####################

country =
{ tag                    = CSX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 20
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  capital                = 1225 # Taiyuan
  manpower               = 200
  dissent                = 25
  diplomacy =
  { relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }
  nationalprovinces      = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 1398 1397 1203 }
  # Shanxi
  ownedprovinces         = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 1398 1397 1203 }
  controlledprovinces    = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 1398 1397 1203 }
  # Shanxi
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
free = {
	 ic 		 = 4
	 energy 	 = 10
	 metal	 	 = 5
	 rare_materials	 = 3
}
  SpyInfo                = { country = "CSX" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 1 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 2 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "MAN" NumberOfSpies = 1 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }
  SpyInfo                = { country = "SIA" NumberOfSpies = 1 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 1 }
  headofstate            = { type = 9 id = 503001 }
  headofgovernment       = { type = 9 id = 503002 }
  foreignminister        = { type = 9 id = 503003 }
  armamentminister       = { type = 9 id = 503004 }
  ministerofsecurity     = { type = 9 id = 503005 }
  ministerofintelligence = { type = 9 id = 503006 }
  chiefofstaff           = { type = 9 id = 503007 }
  chiefofarmy            = { type = 9 id = 503008 }
  chiefofnavy            = { type = 9 id = 503009 }
  chiefofair             = { type = 9 id = 503010 }
  # ######
  # SHANXI Land 1936 OOB
  # TYPE: 22300
  # ######
  landunit =
  { location = 1225 # Taiyuan
    name     = "�R���x����"
    # ## leader = # Yan Xishan
    id       = { type = 22300 id = 1 }
    division =
    { id       = { type = 22300 id = 2 }
      name     = "��1�Ɨ���"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 7 }
      name     = "��1�R���t"
      type     = cavalry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1226 # Changzhi
    name     = "��34�R"
    # ## leader = # Yang Aiyuan
    id       = { type = 22300 id = 9 }
    division =
    { id       = { type = 22300 id = 10 }
      name     = "��66�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 12 }
      name     = "��71�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "��35�R"
    # ## leader = # Fu Zuoyi
    id       = { type = 22300 id = 13 }
    division =
    { id       = { type = 22300 id = 14 }
      name     = "��72�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "�V���x����"
    id       = { type = 22300 id = 16 }
    division =
    { id       = { type = 22300 id = 17 }
      name     = "�V���x����"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1205 # Beiping
    name     = "��29�R"
    # ## leader = # Song Zheyuan
    id       = { type = 22300 id = 18 }
    division =
    { id       = { type = 22300 id = 19 }
      name     = "��37�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 20 }
      name     = "��37�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 21 }
      name     = "��37�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 22 }
      name     = "��37�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 23 }
      name     = "��9�R���t"
      type     = cavalry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 24 }
      name     = "��39�Ɨ���"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1210 # Baoding
    name     = "�͖k�x����"
    id       = { type = 22300 id = 26 }
    division =
    { id       = { type = 22300 id = 27 }
      name     = "�͖k�ۈ���"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1206 # Kalgan
    name     = "�`���n���x����"
    id       = { type = 22300 id = 28 }
    division =
    { id       = { type = 22300 id = 29 }
      name     = "�`���n���ۈ���"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "��3���R"
    # ## leader = # Han Fuqu
    id       = { type = 22300 id = 30 }
    division =
    { id       = { type = 22300 id = 31 }
      name     = "��22�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 32 }
      name     = "��22�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "��12�R"
    # ## leader = # Sun Tongxuan
    id       = { type = 22300 id = 35 }
    division =
    { id       = { type = 22300 id = 36 }
      name     = "��20�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 37 }
      name     = "��81�����t"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "�R���x����"
    id       = { type = 22300 id = 38 }
    division =
    { id       = { type = 22300 id = 39 }
      name     = "�R���ۈ���"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "��13�R"
    # ## leader = 50278 # Tang Enbo
    id       = { type = 22000 id = 27 }
    division =
    { id    = { type = 22000 id = 28 }
      name  = "��13�R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1225 # Taiyuan
    name     = "��19�R"
    # ## leader = # Li Shengda
    id       = { type = 22000 id = 43 }
    division =
    { id    = { type = 22000 id = 44 }
      name  = "��19�R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1212 # Handan
    name     = "��32�R"
    # ## leader = 50253 # Shang Zhen
    id       = { type = 22000 id = 79 }
    division =
    { id    = { type = 22000 id = 80 }
      name  = "��32�R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1209 # Datong
    name     = "��33�R"
    # ## leader = 50296 # Xu Yongchang
    id       = { type = 22000 id = 83 }
    division =
    { id    = { type = 22000 id = 84 }
      name  = "��33�R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1226 # Changzhi
    name     = "��42�R"
    # ## leader = # ???
    id       = { type = 22000 id = 103 }
    division =
    { id    = { type = 22000 id = 104 }
      name  = "��42�R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1210 # Baoding
    name     = "��53�R"
    # ## leader = 50305 # Wan Fulin
    id       = { type = 22000 id = 128 }
    division =
    { id    = { type = 22000 id = 129 }
      name  = "��53�R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "��63�R"
    # ## leader = # Feng Zhanhai
    id       = { type = 22000 id = 136 }
    division =
    { id    = { type = 22000 id = 137 }
      name  = "��63�R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "���k�R���R"
    # ## leader = 50091 # He Zhuguo
    id       = { type = 22000 id = 145 }
    division =
    { id    = { type = 22000 id = 146 }
      name  = "���k�R���R"
      type  = cavalry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "�b�@�V������"
    # ## leader = #
    id       = { type = 22000 id = 205 }
    division =
    { id    = { type = 22000 id = 206 }
      name  = "�b�@�V������"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1225 # Taiyuan
    name     = "�R���ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 266 }
    division =
    { id    = { type = 22000 id = 267 }
      name  = "�R���ۈ���"
      type  = militia
      model = 0
      locked = yes
    }
  }
}