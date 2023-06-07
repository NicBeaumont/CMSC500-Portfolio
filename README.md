# 500 Portfolio Template

Template for a Final Portfolio for CMSC 500 at Lawrence University.

## Guidelines

Your final portfolio allows you to showcase the work you have done for this course and make sense of it at the end of the term. It serves as your final piece of work for the class; you will use it to self-assign a grade for the course in your final reflection. 

**Put each piece of evidence in the appropriate folder.** You can either keep or delete the `.md` files which come with this repository; each folder needs at least one file in it to properly sync to GitHub. 

## Final Reflection Guidelines

The reflection can be as long or short as you need to accomplish the following three goals, but as a guideline, should probably be about 1 to 2 pages. There are no formatting rules. 

The goals for your written reflection are:

- **Self-assign a grade.** This will be your grade for the course unless there is a large (more than one-third letter grade) discrepancy between my assessment and yours, which there should not be if you've attended your check-ins.
- **Make some justifications for this grade using the pieces of evidence you have provided.** This can look like whatever you want it to look like. You can format it as a bulleted list, as paragraphs, as a table -- whatever makes sense for your brain.
- **Include both praise and critique.** No matter how you feel like you did, make sure you point out what you did well! Point out and own your successes. Include some compassionate critique too; where do you have capacity to grow? 

# Nicolas H. Beaumont CMSC 500 Final Portfolio

## Checklist

As this file is already here and will show up when opening the repository, I will add on to the checklist for my reflection and justification. I would say I've fairly consistently met or exceeded the benchmarks set out in the course, and therefore would assign myself an A in the class. I hope after going through the evidence and reasoning below, you come to a similar conclusion.

### L1: Evolution as an Algorithm
- [ ] The file ga.py was from the tournament vs. roulette assignment, and was one of my first attemptes actually playing around with algorithms for selection and reproduction in ALife.
- [ ] I modified logic_9.mabe to utilize my new evaluation conditions, then proceeded to have to modify the task rewards and reproduction conditions in order to encourage the population and the tasks it can perform to grow in a certain way.
- [ ] Implementing a genome, organism and population was the first thing we did coding-wise in artificial life, and is the foundation everything else is built off of.

### L2: Artificial Life as a Field

- [ ] The reading Open Problems in Artificial Life provided me with a good overview of the current state of ALife as a field, as well as the potential directions it could be taken in the future though the open problems listed.
- [ ] The reading Survival of the Flattest provided an interesting look at how higher rates of mutation and less specialized organisms can actually be better suited to problems or enviornments where conditions change rapidly.
- [ ] Our discussions in class, especially early in the term, were very enlightening on what ALife is as a field, and how it differentiates itself from other fields and problem-solving methods in CS, such as artificial intellegence.

### L3: Computational Collaboration

- [ ] For the roulette vs. tournament task, myself and my partners focused on aspects of the problem we were best specialized in, with myself focusing on ensuring the code was efficient, while my partners focused on properly implementing the algorithms, as they had done more prior experimentation than me.
- [ ] I sought help with issues I had with compiling MABE after adding in my new evaluation modules, and was able to easily resolve them as a result, which was very useful as the issue was not one I myself would've anticipated or been able to find.
- [ ] For our initial exercise on implementing an artificial organism and population, I worked with my partners to determine what such a program would require and how to best implement it, along with remembering how to specifically implement those things in C++.

### L4: Failure

- [ ] There was a lot of trial and error in modifying the values for each task in logic_9.mabe, because even with very low rewards, the population would prioritize true, false, identity, and not, due to the ease or even garuntee of completing at least one of those tasks.
- [ ] I had issues getting MABE to recompile or recognize my new evaluation modules due to lack of knowlegde on MAKE files and forgetting to properly update my dependencies, which I sought help with and was easily able to resolve as a result.
- [ ] Again on evaluation of the tasks in logic_9.mabe, I should've tried to implement a no-input evaluator, as I think that may have helped with the earlier mentioned task reward issues, though I'm not entierly certain.

### L5: Reflection and Metacognition

- [ ] I would've liked to play around with the underlying C++ for evaluation in MABE more, namely revisiting an earlier idea I had to implement a no-input evaluator for true and false, especially as I think it may have resolved some issues with true/false being disproportionately rewarded.
- [ ] An example output of my LOGIC16 code, as can be seen, the population doesn't perform all tasks, but it's still a large improvement over the initial attempts where it would only perform true, false, is, not, and occasionally and. 
- [ ] The other portion of the example output, showing the best organism of each check. This more so shows where there's room to grow, as the best organism only performs 4 tasks, even though the population as a whole performs most of the tasks. The solutions that have worked best are providing no reward or even a slightly negative reward for true and false, trying to make sure organisms that only do true and false don't succeed. Similar methods are employed for is and not.
