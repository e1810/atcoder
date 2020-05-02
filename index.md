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

{% for cpsite in site.includes.kyopro %}
	##{{ cpsite.name }}
{% endfor %}

