<h2><a href="https://codeforces.com/contest/887/problem/A" target="_blank" rel="noopener noreferrer">887A — Div. 64</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 887A](https://codeforces.com/contest/887/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Div. 64</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Top-model Izabella participates in the competition. She wants to impress judges and show her mathematical skills.</p><p>Her problem is following: for given string, consisting of only 0 and 1, tell if it's possible to remove some digits in such a way, that remaining number is a representation of some positive integer, divisible by 64, in the binary numerical system.</p></div><div class="input-specification"><div class="section-title">Input</div><p>In the only line given a non-empty binary string <span class="tex-span"><i>s</i></span> with length up to <span class="tex-span">100</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print «<span class="tex-font-style-tt">yes</span>» (without quotes) if it's possible to remove digits required way and «<span class="tex-font-style-tt">no</span>» otherwise.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020255354769436673" id="id0028193581999765704" class="input-output-copier">Copy</div></div><pre id="id0020255354769436673">100010001<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006437829765062142" id="id009991039846493418" class="input-output-copier">Copy</div></div><pre id="id006437829765062142">yes</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003276079282046056" id="id009908037108036966" class="input-output-copier">Copy</div></div><pre id="id003276079282046056">100<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001754962044729388" id="id001168808423774712" class="input-output-copier">Copy</div></div><pre id="id001754962044729388">no</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can get string <span class="tex-span">1 000 000</span> after removing two ones which is a representation of number <span class="tex-span">64</span> in the binary numerical system.</p><p>You can read more about binary numeral system representation here: <a href="https://en.wikipedia.org/wiki/Binary_system">https://en.wikipedia.org/wiki/Binary_system</a></p></div>