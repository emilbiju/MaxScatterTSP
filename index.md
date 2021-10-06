---
layout: default
title: Home
nav_order: 1
description: "MaxScatterTSP++ presents six practical algorithms for the Maximum Scatter Travelling Salesman Problem and performs perturbation studies to analyze trade-offs among the runtime, quality and stability of these algorithms."
permalink: /
---

# Perturbation Analysis for Maximum Scatter TSP
{: .fs-8.5}

MaxScatterTSP++ presents six practical algorithms for the Maximum Scatter Travelling Salesman Problem and performs perturbation studies to analyze trade-offs among the runtime, quality and stability of these algorithms.
{: .fs-6 .fw-300 }

[ALENEX 2022 Paper](https://www.aclweb.org/anthology/2020.coling-main.87/){: .btn .btn-primary .fs-5 .mb-4 .mb-md-0 .mr-2 } [View it on GitHub](https://github.com/emilbiju/MaxScatterTSP){: .btn .fs-5 .mb-4 .mb-md-0 }
---

## About

The Maximum Scatter Traveling Salesman Problem (MSTSP) is a variant of the famous Traveling Salesman Problem (TSP) and finds its use in several real-world applications including manufacturing, imaging and laser melting processes. The objective of this problem is to maximize the cost of the least cost edge in a tour of an input graph. Akin to the TSP and several of its variants, the MSTSP is an NP-hard problem. While several approxima- tion algorithms have been proposed for this problem, many of them suffer from bad worst-case complexities and present challenges in scalability and practical use.

In this work, we describe six algorithms for MSTSP inspired by prior work in the area, along with improved formulations that enhance their utility in real-world scenarios. Further, we perform experimental studies motivated by smoothed analysis to comprehensively evaluate these algorithms from the perspective of run-time, quality and stability.

The six algorithms that we describe in this work are:

- Naive Greedy Algorithm
- Naive Weave Algorithm
- Hoffmann Weave Algorithm
- Dirac Algorithm
- Pure 2-opt Algorithm
- Randomized 2-opt Algorithm

Experiments that we perform to benchmark these algorithms can be broadly split into three categories:
- Closeness of algorithm predictions to the scatter bound
- Deviation of maximum scatter predictions under perturbation
- Variation in the runtime of algorithms

<p align="center">
   <img src="assets/images/gesture_sample.jpg" width=400 height=400>
</p>

## Key Contributions

1. We present the Naive Greedy algorithm as a fast and easy-to-implement baseline for MSTSP.
2. We present the Naive Weave and Hoffmann Weave algorithms which introduce an improved formulation of the work by Arkin et al. and Hoffmann et al. to extend their usability to non-regular grids.
3. We extend the work in Johnson et al. to introduce Pure 2-opt and Randomised 2-opt as very close approximation algorithms for the MSTSP.
4. We use a real-world dataset augmented using five graph perturbations and evaluated with three edge cost metrics to perform a comprehensive perturba- tion analysis of the algorithms and compare results on three critical performance measures, namely, the quality, runtime and stability of the algorithms.

## Publication
Our paper on this work titled "Perturbation Analysis of Practical Algorithms for the Maximum Scatter Travelling Salesman Problem" has been accepted as a conference paper at the [ALENEX workshop](https://www.siam.org/conferences/cm/conference/alenex22) as part of the Symposium on Discrete Algorithms (SODA), 2022 to be held at Alexandria, Virginia, U.S.A.
<!-- You could also refer to our [presentation poster](https://emilbiju.github.io/indic-swipe/assets/IndicSwipe-Poster.pdf). -->

<p align="center">
   <a href="https://emilbiju.github.io/indic-swipe/assets/IndicSwipe-Poster.pdf">
   <embed src="assets/IndicSwipe-Poster.pdf" type="application/pdf" width=800 height=500 />
   </a>
</p>

## People

This work has been developed by [Emil Biju](https://in.linkedin.com/in/emilbiju) and [Sundar Raman](https://in.linkedin.com/in/sundar2000) from the Indian Institute of Technology, Madras. Ask us your questions at [emilbiju7@gmail.com](mailto:emilbiju7@gmail.com) or [sundarramanp2000@gmail.com](mailto:sundarramanp2000@gmail.com).

<!-- ## Citation
If you are referring to our work, please cite it as follows:

    @inproceedings{biju-etal-2020-joint,
    title = "Joint Transformer/{RNN} Architecture for Gesture Typing in Indic Languages",
    author = "Biju, Emil  and
      Sriram, Anirudh  and
      Khapra, Mitesh M.  and
      Kumar, Pratyush",
    booktitle = "Proceedings of the 28th International Conference on Computational Linguistics",
    month = dec,
    year = "2020",
    address = "Barcelona, Spain (Online)",
    publisher = "International Committee on Computational Linguistics",
    url = "https://www.aclweb.org/anthology/2020.coling-main.87",
    pages = "999--1010"} -->

## Learnings and Further Work
Through this paper, we have presented a comprehensive study of different approximation methods for the MSTSP that highlight critical factors that must influence the choice of an algorithm in practical settings. Our procedural philosophy can further be extended to the study of other NP-hard problems of practical im- portance.

<script type="text/javascript" src="//rf.revolvermaps.com/0/0/6.js?i=5mg2ififv86&amp;m=7&amp;c=e63100&amp;cr1=ffffff&amp;f=arial&amp;l=0&amp;bv=90&amp;lx=-420&amp;ly=420&amp;hi=20&amp;he=7&amp;hc=a8ddff&amp;rs=80" async="async"></script>
