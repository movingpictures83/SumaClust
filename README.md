# SumaClust 
# Language: C++
# Input: FASTA
# Output: TXT
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependency: sumaclust

PluMA plugin to run the SumaClust clustering algorithm (Mercier et al, 2014)
on a set of sequences.

The plugin expects as input a FASTA file and will generate an output list of the clusters in FASTA format, separated by 'C'

The plugin relies on sumaclust being in your system PATH.
