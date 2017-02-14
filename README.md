# PandoraTeXTable

## Compilation
You should just be able to build with `make TeXTable`

## Running
TeXTable takes two (or more) arguments

- A settings file
    - An example is `settings.txt`
    - Start a new table definition with 
```
> myTableName
```

    - Then supply the following parameters
        - `data` - path to a data file obtained from Validation.C
            - You can also supply two data file paths (delimited by a comma) which will then return a "comparison" table between the two sets
        - `use-cols` - choose if you want your table to be coloured (`true` or `false`)
        - `interactions` -  A list of interaction types you want to include in the table. You can see the available interactions in TeXTable.h
            - You can list interactions to include delimited by a `+`
            - You can also use the keyword `all` and list interactions to omit delimited by `-`
```
interactions: CCQEL_MU + CCQEL_MU_P
```
```
interactions: all - OTHER_INTERACTIONS
```
- (3... 4...) As many data files as you require for the settings supplied
    - The data files come from the format of the "map" files from Validation.C
    - You can massage them into the right format using `helpers/scrapeData.sh`
    - See the `data` subdirectory for details
