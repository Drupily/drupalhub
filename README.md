drupalhub
=========

Drupal hub is a distribution which allow for each local drupal community to own
a Q&A site.

This will enhance the business connections between people/company, will make a
more stronger and better community.

Join into the development party
=========
How to help the development:
1. Fork the project
2. Clone your fork to your local computer and checkout to a new branch.
3. Create a pull request(PR) from your forked project into this project.
4.  If there an existing issue paste the address of the PR in one of the comment.
    If there isn't a issue open an issue an paste in the description the PR
    URL.


Install process
=========
1.  Create a file named install.sh(the file is in the .gitignore file so git will
    not track the file).
2. Adjust the command:
    drush si -y idea --account-pass=admin --db-url=mysql://root:root@localhost/idea
   to the information of your local machine.
