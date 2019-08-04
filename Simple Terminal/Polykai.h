/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1e2424", /* black   */
  [1] = "#ff0060", /* red     */
  [2] = "#a0ff20", /* green   */
  [3] = "#ffe080", /* yellow  */
  [4] = "#6080ff", /* blue    */
  [5] = "#c080ff", /* magenta */
  [6] = "#40c4ff", /* cyan    */
  [7] = "#f8f8f8", /* white   */

  /* 8 bright colors */
  [8]  = "#3c4848", /* black   */
  [9]  = "#ff0060", /* red     */
  [10] = "#a0ff20", /* green   */
  [11] = "#ffe080", /* yellow  */
  [12] = "#6080ff", /* blue    */
  [13] = "#c080ff", /* magenta */
  [14] = "#40c4ff", /* cyan    */
  [15] = "#f8f8f8", /* white   */

  /* special colors */
  [256] = "#141818", /* background */
  [257] = "#f8f8f8", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
