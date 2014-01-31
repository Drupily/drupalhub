#!/bin/bash

rm -rf www
mkdir www

bash scripts/build
bash scripts/setup

cd www/sites/default
mkdir files
touch settings.php
chmod -R 777.

drush si -y idea --account-pass=admin --db-url=mysql://root:root@localhost/idea
drush mi --all --user=1
