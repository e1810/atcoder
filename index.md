---
# You don't need to edit this file, it's empty on purpose.
# Edit theme's home layout instead if you wanna make some changes
# See: https://jekyllrb.com/docs/themes/#overriding-theme-defaults
layout: home
title: AC history
parmalink: /
---


<style>
ul li p {
  margin-bottom: 0.25em;
}

</style>

AC_history

<ul>
{% for pg in site.cpsites %}
  <li><a href="{{ pg.url | relative_url }}" style="font-weight:bold;font-size:3vw;">{{ pg.name }}</a></li>
{% endfor %}
</ul>
