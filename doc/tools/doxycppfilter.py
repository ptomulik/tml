# 
# @COPYRIGHT@
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE

# doxycppfilter.py: doxygen filter (e.g. for stripping some comment types)

"""
Input filter for doxygen.
"""

import re
import sys

subst_list = [
  (re.compile(r'^\s*//.*{{{.*\n',re.M), "")
, (re.compile(r'^\s*//.*}}}.*\n',re.M), "")
, (re.compile(r'//.*{{{.*$',re.M), "")
, (re.compile(r'//.*}}}.*$',re.M), "")
# XXX: sorry, this breaks code snippets
#, (re.compile(r'^\s*//\s*\[[^\]]+\]\s*\n',re.M), "")
]

content = sys.stdin.read()
for se in subst_list:
  content = se[0].sub(se[1],content)
sys.stdout.write(content)
