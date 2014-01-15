Custom features are divided into folders named for their install profiles.

Each install profile causes the others' Features to be hidden from the UI upon
installation. This is accomplished via hook_system_info_alter() in the umn_groups module.

The "common/" folder contains Features that are not specific to any install
profile and can be enabled in more than one. It does not contain the rapper from
Chicago who goes by the same name.
