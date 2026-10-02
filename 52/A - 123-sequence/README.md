<h2><a href="https://codeforces.com/contest/52/problem/A" target="_blank" rel="noopener noreferrer">52A — 123-sequence</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 52A](https://codeforces.com/contest/52/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. 123-sequence</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>There is a given sequence of integers <span class="tex-span"><i>a</i><sub class="lower-index">1</sub>, <i>a</i><sub class="lower-index">2</sub>, ..., <i>a</i><sub class="lower-index"><i>n</i></sub></span>, where every number is from 1 to 3 inclusively. You have to replace the minimum number of numbers in it so that all the numbers in the sequence are equal to each other.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 10<sup class="upper-index">6</sup></span>). The second line contains a sequence of integers <span class="tex-span"><i>a</i><sub class="lower-index">1</sub>, <i>a</i><sub class="lower-index">2</sub>, ..., <i>a</i><sub class="lower-index"><i>n</i></sub></span> (<span class="tex-span">1 ≤ <i>a</i><sub class="lower-index"><i>i</i></sub> ≤ 3</span>).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the minimum number of replacements needed to be performed to make all the numbers in the sequence equal.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004451581186570529" id="id0025761447773548973" class="input-output-copier">Copy</div></div><pre id="id004451581186570529">9<br>1 3 2 2 2 1 1 2 3<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008616395047547991" id="id009892292938114632" class="input-output-copier">Copy</div></div><pre id="id008616395047547991">5<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the example all the numbers equal to 1 and 3 should be replaced by 2.</p></div>