# Flow

Flow plug-in for Unreal Engine provides a graph editor tailored for scripting flow of events in virtual worlds. It's based on a decade of experience with designing and implementing narrative in video games. All we need here is simplicity.
* Licensed under MIT license. You are free to use it for commercial projects, modify it however you see fit, and distribute it further.

![Flow101](https://user-images.githubusercontent.com/5065057/103543817-6d924080-4e9f-11eb-87d9-15ab092c3875.png)

# Development moved to the FlowGraph repository
Many people asked to move plugin to the repository that would only contain the Flow plugin itself.
I did exactly that. Moved the plugin with entire history of changes, roadmap, issue and wiki.
[FlowGraph repository](https://github.com/MothCocoon/FlowGraph)

This repository won't be updated anymore.
Initially I considered the idea of using git submodules. This repo would include Flow plugin + example content... However, I discovered that I'm making practically zero changes to the example project. I won't find time to update samples in the current form. 
And git submodules are tricky, it's not like the old repo would be automatically updated... People would need to call additional commands to update plugin there... which would be counter-productive, because the example project itself doesn't change between plugin releases.

I'm still planning on creating zip with example project (using the latest engine release) while releasing the new version of the plugin. So it would help out people evaluating the plugin!
