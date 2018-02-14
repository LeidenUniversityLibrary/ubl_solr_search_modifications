# ubl solr search modifications

## Introduction
Several search modifications.


### Omit collections
Modify Solr search queries on the fly to better suit our needs. This module omits collections from the search results, unless the search is only for collections.

### Alternative primary display profile "Grid Alternative"
Our alternative profile prepares query results in the same way the default (list view) results are prepared. This allows for greater code similarity in the list view template and the grid view template.

## License

[GPLv3](LICENSE.txt)
Copyright 2017 Leiden University Library
