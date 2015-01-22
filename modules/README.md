# Modules Directory

Drupal will look in this folder for modules. Inside this folder they can be organized however you wish.
One way to do this is to make a 'contrib' directory for modules that come from drupal.org, a 'custom'
folder for modules written specifically for this site (or customized version of contrib modules), and
a 'features' folder for exported configuration settings.

Modules in this directory will take precedence over modules in `sites/all`, so if you need to override
a module in the platform you can put a copy of it here.

