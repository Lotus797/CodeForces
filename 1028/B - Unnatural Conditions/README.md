<h2><a href="https://codeforces.com/contest/1028/problem/B" target="_blank" rel="noopener noreferrer">1028B — Unnatural Conditions</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1028B](https://codeforces.com/contest/1028/problem/B) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Unnatural Conditions</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let $$$s(x)$$$ be sum of digits in decimal representation of positive integer $$$x$$$. Given two integers $$$n$$$ and $$$m$$$, find some positive integers $$$a$$$ and $$$b$$$ such that </p><ul> <li> $$$s(a) \ge n$$$, </li><li> $$$s(b) \ge n$$$, </li><li> $$$s(a + b) \le m$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The only line of input contain two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 1129$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two lines, one for decimal representation of $$$a$$$ and one for decimal representation of $$$b$$$. Both numbers must not contain leading zeros and must have length no more than $$$2230$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016261730212452818" id="id005911698485460841" class="input-output-copier">Copy</div></div><pre id="id0016261730212452818">6 5<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008536226028762316" id="id0039112628197628807" class="input-output-copier">Copy</div></div><pre id="id008536226028762316">6 <br>7<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008920661210829984" id="id006919953823300493" class="input-output-copier">Copy</div></div><pre id="id008920661210829984">8 16<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007997793684968515" id="id0010760459858654847" class="input-output-copier">Copy</div></div><pre id="id007997793684968515">35 <br>53<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, we have $$$n = 6$$$ and $$$m = 5$$$. One valid solution is $$$a = 6$$$, $$$b = 7$$$. Indeed, we have $$$s(a) = 6 \ge n$$$ and $$$s(b) = 7 \ge n$$$, and also $$$s(a + b) = s(13) = 4 \le m$$$.</p></div>