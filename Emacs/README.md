# Installation

1. Navigate to your `~/.emacs.d/themes` directory.
 - If the `themes` directory does not exist, create it.
2. Open the color theme file on GitHub - **[Polykai-theme.el](https://raw.githubusercontent.com/adamgraham/polykai/master/Emacs/Polykai-theme.el)**.
3. **Right-click** and select **Save As**.
4. Save the file into the `themes` folder.
 - *Note: If a `.txt` extension is added to the end of the file, it must be removed.*
5. Add the following code to either your `~/.emacs.d/init.el`, `~/.emacs.el`, or `~/.emacs` file:

 ```
 (add-to-list 'custom-theme-load-path "~/.emacs.d/themes")
 (load-theme 'Polykai t)
 ```
6. Open or restart Emacs.
7. Click the **Options** menu item on the top menu bar.
8. Choose **Customize Emacs > Custom Themes**.
9. Select the **Polykai** theme.
