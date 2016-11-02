![alt text](https://github.com/reliableJARED/OriginLab/raw/master/logo.png "OriginLab")

[http://originlab.com/]


##Setup

First: You'll need to have a github account and have git installed on your machine.  To sign up for github go to [https://github.com/join,  Then install git for windows [https://git-scm.com/download/win]

Once you have git installed you're going to open a command prompt on your machine (right click windows icon and choose 'command prompt') then navigate to your Origin User Files folder.  To change directories in the command prompt us 'cd'  below is an example of:

**C:\> cd "Users\jared\Documents\OriginLab\2017\User Files\OriginC"**

For help using the command prompt you could use this resource [http://simplyadvanced.net/blog/cheat-sheet-for-windows-command-prompt/]


Now that you're in the right directory of your machine, you'll need to clone this repository into your Origin 'User Files\OriginC' Folder.  Above on this page you'll see a **green** button that says *"Clone or download"* click it and copy the link.  Then in your command prompt type:

**C:\Users\jared\Documents\OriginLab\2017\User Files\OriginC> git clone https://github.com/reliableJARED/OriginLab.git**

That will create a *NEW* folder in your OriginC folder that has all the files from this repository.  When the clone is done you'll need to cd into the new folder that was created, or you can go to it from windows explorer.

**C:\Users\jared\Documents\OriginLab\2017\User Files\OriginC> cd OriginLab**

###Now lets get started!

####Hello World
Inside of this repository there's a Hello World example that we'll go through.
First start Origin.
Then launch Origin's **Code Builder** by pressing Alt+4 or clicking on the gear icon in the top menu.

On the left side of the **Code Builder** window you'll see a Workspace window.  In there you'll see some directories.  Right click on the 'User' directory (not User [AutoLoad]) and choose **Add Files...**.  Nagigate to our github files> OriginC > OriginLab > HelloWorld, and add the **HelloWorldDlg.cpp** file.

Now build the app by pressing **Shift + F8** or go to the Build menu and choose Build.

>We have just compiled a C++ file that links Origin to our index.html document (also >in the HellowWorld directory).

If you go back to the Origin workspace and start a *Script Window* by going to Window > Script Window or pressing Shift+Alt+3

You can now type **hello** and press enter, and it will open our HTML file!

