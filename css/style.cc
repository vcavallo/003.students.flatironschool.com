body, div, dl, dt, dd, ul, ol, li, h1, h2, h3, h4, h5, h6, pre, form, fieldset, input, textarea, p, blockquote, th, td {
    margin: 0;
    padding: 0;
}

table {
    border-collapse: collapse;
    border-spacing: 0;
}

fieldset, img { border: 0 }

ol, ul { list-style: none }

caption, th { text-align: left }

h1, h2, h3, h4, h5, h6 {
    font-size: 100%;
    font-family: 'Merriweather', Georgia, serif;
    font-weight: normal;
    color: #4c4c4c;
}

html { height: 100% }

body {
    font: 14px/24px "Merriweather", Georgia, serif;
    margin: 0 auto;
    padding: 0;
    background: #fff;
    overflow-x: hidden;
    height: 100%;
    color: #555;
}

* {
    -webkit-box-sizing: border-box;
    -moz-box-sizing: border-box;
    box-sizing: border-box;
}

a { text-decoration: none }

a:hover { color: #555 }

hr {
    margin: 20px 0 30px;
    border: 0;
    border-bottom: 1px dotted #ddd;
    height: 1px;
}

h1 {
    font-size: 30px;
    line-height: 36px;
    margin-bottom: 15px;
}

h2 {
    font-size: 24px;
    line-height: 36px;
    margin-bottom: 15px;
}

h3, h4, h5, h6 {
    line-height: 28px;
    margin-bottom: 12px;
}

h3 { font-size: 18px }

h4 { font-size: 16px }

h5 { font-size: 14px }

h6 {
    font-size: 13px;
    color: #bfbfbf;
    text-transform: uppercase;
}

p { margin-bottom: 15px }

.clear {
    clear: both;
    font-size: 0px;
    line-height: 0px;
    display: block;
}

.clearfix:after {
    content: "";
    display: block;
    clear: both;
    visibility: hidden;
    font-size: 0;
    height: 0;
}

.clearfix {
    *display: inline-block;
    height: 1%;
}

.last { margin-right: 0 !important }

blockquote p {
    position: relative;
    font-family: 'Merriweather', Georgia, serif;
    color: #aaa;
    font-size: 16px;
    font-weight: 400;
    line-height: 28px;
    padding: 15px 0 15px 30px;
    margin: 25px 0;
}

blockquote p:before {
    position: absolute;
    left: 0;
    top: 14px;
    content: "\f0e5";
    font-family: "FontAwesome";
    display: block;
    color: #bbb;
}

::selection {
    background: #fff666;
    color: #222;
}

::-moz-selection {
    background: #fff666;
    color: #222;
}

img {
    max-width: 100%;
    height: auto;
}

/* ===[ Layout Styles ]===================================================== */

.main-wrapper {
    width: 100%;
    margin: 0 auto;
}


.header-wrapper {
    width: 100%;
    margin: 0 0 0 0;
    position: fixed;
    z-index: 99999;
    background: #fff;
}

.header-hidden-wrap {
    z-index: 999;
    position: relative;
}

.header-hidden {
    margin: 0 auto;
    max-width: 980px;
    padding: 10px 10px 0px 10px;
    position: relative;
    display: none;
    background: #f3f3f3;
}

.header-hidden-toggle-wrap {
    max-width: 980px;
    position: relative;
    margin: 0 auto;
}

.show-hidden {
    margin-top: 0;
    -webkit-transition: .1s ease-in;
    -moz-transition: .1s ease-in;
    -o-transition: .1s ease-in;
    transition: .1s ease-in;
}

.hidden-toggle {
    position: absolute;
    right: 0px;
    bottom: -35px;
    display: block;
    width: 21px;
    height: 21px;
    text-align: right;
    color: #ccc;
    -webkit-transition: .2s ease-in;
    -moz-transition: .2s ease-in;
    -o-transition: .2s ease-in;
    transition: .2s ease-in;
}

.show-hidden .hidden-toggle {

}

.header-hidden-left {
    width: 60%;
    float: left;
    font-size: 12px;
    line-height: 20px;
    color: #999;
    padding-top: 3px;
}

.header-hidden-right {
    float: right;
    width: 40%;
}

.lights {
    float: right;
    color: #aaa;
}

.icons {
    float: right;
}

.icons a {
    margin-bottom: 0 !important;
}

.header {
    max-width: 980px;
    margin: 0 auto;
    padding-top: 40px;
    border-bottom: solid 1px #eee;
}

.header-left {
    width: 25%;
    float: left;
}

.header-left img { padding: 0 0 0 0 }

.header-left h1 {
    margin: 5px 0 0 0;
}

.header-left h1 a {
    color: #555;
    text-decoration: none;
    font-size: 34px;
    font-weight: 600;
    line-height: 28px;
    letter-spacing: -2px;
    -webkit-transition: .04s ease-in;
    -moz-transition: .04s ease-in;
    transition: .04s ease-in;
}

.header-left h1 a:hover {
    color: #999;
    -webkit-transition: .04s ease-in;
    -moz-transition: .04s ease-in;
    transition: .04s ease-in;
}

.logo {
    margin-top: -30px !important;
}

.header-right {
    width: 75%;
    float: right;
}

/* ===[ Header Navigation Styles ]===================================================== */

.select-menu, .select { display: none }

.menu-main-container { position: relative }

#nav { float: right }

#nav, #nav ul {
    margin: 13px 0 0 0;
    padding: 0;
    list-style-type: none;
    list-style-position: outside;
    position: relative;
    line-height: 1.5em;
    z-index: 1000;
}

#nav a {
    display: block;
    padding: 5px;
    color: #aaa;
    text-decoration: none;
    text-align: left;
    outline: none;
    font-weight: normal;
    font-family: 'Merriweather', Georgia, serif;
}

#nav > .current-menu-item > a, #nav > li a:hover { color: #4C4C4C }

.plus { color: #aaa }

#nav ul {
    position: absolute;
    display: none;
}

#nav li {
    float: left;
    position: relative;
    list-style-type: none;
    padding-bottom: 17px;
}

#nav li a {
    font-size: 12px;
    font-weight: bold;
    text-transform: uppercase;
    padding: 8px 15px;
}

#nav > li > a { padding: 5px 12px }

#nav > li:last-child a {
    margin-right: 0px;
    padding-right: 0px;
    border-right: none;
}

#nav > li:first-child a {

}

#nav li ul a {
    width: 150px;
    height: auto;
    float: left;
    font-size: 12px;
    color: #999;
}

#nav .sub-menu {
    box-shadow: rgba(0,0,0, 0.07) 0px 1px 2px;
    -moz-box-shadow: rgba(0,0,0, 0.07) 0px 1px 2px;
    -webkit-box-shadow: rgba(0,0,0, 0.07) 0px 1px 2px;
}

#nav .sub-menu li {
    background: #fff;
    border-left: solid 1px #eee;
    border-right: solid 1px #eee;
}

#nav .sub-menu li:first-child { border-top: solid 1px #eee }

#nav > li > ul { margin-top: 17px }

#nav li ul li {
    border-bottom: solid 1px #eee;
    padding-bottom: 0px;
}

#nav li ul li:last-child { border-bottom: none }

#nav li ul li a {
    margin-right: 0px;
    font-size: 10px;
}

#nav li ul li a:hover {
    background: #f9f9f9;
    color: #555;
}

#nav ul ul { top: auto }

#nav ul ul li:first-child { border-top: solid 1px #eee }

#nav li ul ul {
    left: 150px;
    margin: -1px 0 0 0;
    padding-right: 5px;
}

#nav li ul ul li { border-top: none }

#nav li:hover ul ul, #nav li:hover ul ul ul, #nav li:hover ul ul ul ul { display: none }

#nav li:hover ul, #nav li li:hover ul, #nav li li li:hover ul, #nav li li li li:hover ul { display: block }

/* ===[ Title Styles ]===================================================== */

.home .page-title {
    text-align: center;
    border-bottom: none;
}

.error404 .page-title {
    text-align: center;
}

.page-title {
    border-bottom: solid 1px #eee;
    padding: 30px 0;
    margin-bottom: 40px;
    position: relative;
}

.page-title-portfolio {
    border-bottom: none;
    margin-bottom: 0;
    display: inline-block;
    width: 100%;
    position: relative;
}

.portfolio-titles {
    float: left;
    width: 75%;
    display: inline-block;
}

.project-nav {
    font-size: 11px;
    text-transform: uppercase;
    text-align: right;
    position: absolute;
    right: 0;
    bottom: 30px;
    width: 25%;
    margin-top: 15px;
}

.project-nav a {
    color: #aaa !important;
    margin-left: 10px;
}

.project-nav a:hover { color: #555 !important }

.next-project span {
    padding-left: 10px;
    border-left: solid 1px #eee;
}

.project-nav i {
    padding: 0 2px;
}

.page-title a { color: #4c4c4c }

.page-title h2 {
    margin-bottom: 0px;
    font-size: 34px;
    letter-spacing: -1px;
    line-height: 42px;
}

.page-title h3 {
    color: #aaa;
    font-size: 16px;
    line-height: 24px;
    margin: 5px 0 0 0;
}

.page-title h3 a { color: #aaa }

.post-nav {
    position: absolute;
    bottom: 50px;
    right: 0;
    font-size: 11px;
    text-transform: uppercase;
}

.post-nav a {
    color: #aaa;
    margin-left: 20px;
    float: right;
}

.post-nav a:hover { color: #555 }

/* ===[ Blog Styles ]===================================================== */

.blog-post {
    margin-bottom: 50px;
    padding-bottom: 30px;
    border-bottom: solid 1px #eee;
}

.blog-post:last-child {
    margin-bottom: 0;
    padding-bottom: 0;
    border-bottom: none;
}

.blog-content { padding: 0 0 0 0 }

.readmore {
    text-align: center;
    font-size: 10px;
    letter-spacing: 2px;
    text-transform: uppercase;
    padding-top: 5px;
    margin-top: 10px;
}

.more-link {
    margin-top: 10px;
    clear: both;
    padding: 5px 5px 5px 0px;
}

.blog-meta {
    float: left;
    width: 15%;
    margin: 5px 5% 20px 0;
    text-align: right;
    display: inline-block;
}

.blog-meta-date {
    padding-bottom: 10px !important;
    margin-bottom: 10px !important;
    border-bottom: solid 1px #eee;
    float: left;
}

.share-title { color: #555 !important }

.single-attachment .share-title {
    display: none;
}

.blog-meta ul {
    margin-bottom: 15px !important;
    padding-bottom: 15px !important;
    border-bottom: solid 1px #eee;
    display: inline-block;
}

.blog-meta ul:last-child {
    border-bottom: none;
    margin-bottom: 0 !important;
    padding-bottom: 0 !important;
}

.blog-meta li {
    list-style-type: none !important;
    background: none !important;
    padding: 0 0 0 0 !important;
    margin: 0 0 6px 0 !important;
    color: #999;
    width: 100%;
    line-height: 18px;
    float: left;
    font-size: 11px;
}

.blog-meta ul li:last-child {
    border-bottom: none;
    margin-bottom: 0 !important;
    padding-bottom: 0 !important;
}

.blog-meta li a, .blog-meta li { color: #999 }

.blog-meta li a:hover { color: #4c4c4c }

.content .blog-text {
    float: right;
    width: 80%;
}

.title-meta h2 {
    margin: 0 0 0 0;
    padding-bottom: 10px;
    line-height: 38px;
    font-size: 28px;
    letter-spacing: -1px;
}

.title-meta h2 a {
    color: #555;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
}

.title-meta h2 a:hover {
    color: #999;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
}

.blog-image {
    width: 100%;
    margin-bottom: 35px;
    float: left;
}

.blog-image img {
    -webkit-transition: .1s ease-in;
    -moz-transition: .1s ease-in;
    -o-transition: .1s ease-in;
    transition: .1s ease-in;
}

.blog-image img:hover {
    -webkit-transition: .1s ease-in;
    -moz-transition: .1s ease-in;
    -o-transition: .1s ease-in;
    transition: .1s ease-in;
    opacity: .9;
}

.blog-read-more {
    font-size: 11px;
    letter-spacing: 2px;
    text-transform: uppercase;
    padding-top: 15px;
}

/* ===[ Tagcloud Styles ]===================================================== */

.tags {
    width: 620px;
    padding: 15px 0 15px 0;
    clear: both;
    margin-right: 35px;
    background: #f9f9f9;
}

.tags-list {
    width: 505px;
    float: left;
}

.tags-list ul {
    float: left;
    padding: 0 0 0 5px;
    width: 100%;
    margin-bottom: 0;
}

.tags-list ul li {
    display: block;
    padding: 0 19px 0 0;
    float: left;
}

.tags-list ul li p {
    font-size: 11px;
    font-weight: bold;
    color: #5a5a5a;
    float: none;
    padding: 0;
}

.tags-list ul li span {
    font-size: 11px;
    font-weight: bold;
    color: #a2a2a2;
    display: inline;
    padding: 0 0 0 4px;
}

.tags_rgt {
    float: right;
    width: 81px;
    margin-right: 15px;
}

.search .post-share, .archive .post-share { display: none }

.blog-navigation {
    padding-bottom: 25px;
}

.blog-navigation a {
    text-decoration: none;
    padding: 10px 0;
    color: #555;
    font-weight: normal;
    font-size: 12px;
    text-transform: uppercase;
    letter-spacing: 2px;
}

.blog-navigation a:hover { color: #999 }

.blog-navigation .alignright a:after  {
    font-family: 'FontAwesome';
    -webkit-font-smoothing: antialiased;
    content: "\f0da";
    margin-left: 5px;
}

.blog-navigation .alignleft a:before {
    font-family: 'FontAwesome';
    -webkit-font-smoothing: antialiased;
    content: "\f0d9";
    margin-right: 5px;
}

.navigation a {
    text-decoration: none;
    padding: 10px 0;
    color: #555;
    font-weight: normal;
    font-size: 12px;
    text-transform: uppercase;
    letter-spacing: 2px;
}

.navigation a:hover { color: #999 }

.featured-image {
    margin: 0 0 20px 0;
    float: left;
    width: 100%;
}

.fullsize-image {
    margin: 0 0 30px 0;
    float: left;
    width: 100%;
}

.okvideo { margin-bottom: 30px }

.intro {
    color: #979797;
    font-size: 16px;
    line-height: 28px;
    margin-bottom: 15px;
    border-top: solid 1px #EEE;
    border-bottom: solid 1px #EEE;
    padding: 10px 0;
}

/* ===[ Search Form Styles ]===================================================== */

.search-404 {
    text-align: center;
    width: 65%;
    margin: 0 auto;
}

.search-404 .searchform {
    margin-top: 25px;
}

.searchform {
    position: relative;
    width: 100%;
}

#searchsubmit {
    position: absolute;
    right: 0;
    top: 0;
    background: #e8e8e8;
    border: none;
    padding: 8px 10px;
    height: 34px;
    font-size: 9px;
    font-weight: bold;
    line-height: 20px;
    text-transform: uppercase;
    font-family: "Merriweather", Georgia, serif;
    color: #777;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
    -webkit-appearance:none;
}

#searchsubmit:hover {
    background: #fff666;
    color: #222;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
}

#searchform {
    float: left;
    width: 100%;
}

#s {
    background: #f7f7f7;
    float: left;
    padding: 10px 65px 10px 8px;
    border: 0;
    font-size: 12px;
    color: #999;
    outline: none;
    width: 190px;
    margin: 0 0 0 0;
    font-family: Georgia, serif;
    -webkit-transition: .2s ease-in;
    -moz-transition: .2s ease-in;
    -o-transition: .2s ease-in;
    transition: .2s ease-in;
    font-style: italic;
    width: 100%;
    -webkit-appearance:caret;
}

#s:focus, #s:hover {
    -webkit-transition: .2s ease-in;
    -moz-transition: .2s ease-in;
    -o-transition: .2s ease-in;
    transition: .2s ease-in;
}

#searchsubmit {
}

.content #searchsubmit { float: left }

#searchsubmit:hover { cursor: pointer }

#searchform .screen-reader-text { display: none }

/* ===[ Sidebar Styles ]===================================================== */

#sidebar-close { display: none }

#sidebar {
    width: 25%;
    float: right;
    font-size: 12px;
    line-height: 22px;
}

#sidebar p {
    font-size: 12px;
}

#sidebar a {
    text-decoration: none;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
}

#sidebar a:hover {
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
}

.widget {
    margin-bottom: 40px;
    clear: both;
    float: left;
    width: 100%;
}

.widget h2, .portfolio-sidebar h2 {
    font-size: 10px;
    font-weight: bold;
    text-transform: uppercase;
    letter-spacing: 1px;
    display: block;
    line-height: 26px;
    margin: 0 0 10px 0;
    font-family: 'Merriweather', Georgia, serif;
    text-align: center;
    background: #f7f7f7;
    color: #999;
}

#sidebar .widget ul {
    margin: 0;
    padding: 0;
}

#sidebar .widget li {
    margin: 0 0 5px 15px;
    list-style-type: square;
}

#sidebar .slides li {
    list-style-type: none;
    margin: 0;
}

.widget ul { padding: 0 0 0 15px }

.widget ul li {
    padding: 0;
    list-style-type: none;
}

.widget ul li ul { padding: 0 0 0 0 }

.tagcloud {
    padding: 0 0 0 0;
    text-align: center;
}

.tagcloud a {
    text-decoration: none;
    float: left;
    color: #888;
    padding: 10px;
    position: relative;
    font-weight: bold;
}

.tagcloud a:hover { color: #555 }

/* ===[ Default Widget Styles ]===================================================== */

.widget_archive select {
    width: 100%;
}

#wp-calendar {
    width: 100%;
}

#wp-calendar caption {
    text-align: center;
    margin-bottom: 5px;
}

.widget_rss li {
    margin: 0 0 15px 0 !important;
    list-style-type: none !important;
}

.widget_rss .rsswidget {
    width: 100%;
}

.widget_rss .rss-date {
    width: 100%;
    float: left;
    font-size: 11px;
    color: #999;
}

.widget_rss cite {
    color: #999;
    font-size: 11px;
}

#sidebar .wp-caption {
    width: 100%;
    text-align: center;
    color: #999;
}

.widget_text {
    word-wrap: break-word;
}

/* ===[ Comment Styles ]===================================================== */

.comments {
    float: left;
    margin: 50px 0px 50px 0px;
    background: #f6f6f6;
    width: 100%;
    border-top: none;
    padding: 30px;
}

.commentlist {
    margin-bottom: 0 !important;
}

.comments li { background: none !important }

h3#comments {
    padding: 0 0 20px 0;
    margin: 0 0 25px 0 !important;
    font-size: 20px;
    font-weight: bold;
    border-bottom: solid 1px #eee;
    line-height: 30px;
    text-align: center;
}

#respond {
    margin: 0;
    padding: 0;
}

.commentlist #respond {
    margin: 20px 0 20px 0;
}

#respond h3 {
    padding: 0 0 3px 0;
    font-size: 20px;
    font-weight: bold;
    margin: 0 !important;
}

#reply-title small {
    font-weight: bold;
    font-size: 9px;
    text-transform: uppercase;
    margin-left: 5px;
}

#respond .logged-in-as, .comment-notes {
    font-size: 13px;
    padding-bottom: 10px;
    margin-bottom: 15px;
    border-bottom: solid 1px #e6e6e6;
}

#comments .form-allowed-tags {
    display: none;
}

#respond label {
    font-size: 10px;
    text-transform: uppercase;
    letter-spacing: 1px;
    margin: 5px 0 0 0px;
    color: #aaa;
}

#respond p { margin-bottom: 15px }

#respond input[type="text"], #respond textarea {
    color: #777;
    border: none;
    border: solid 1px #eee;
    border-bottom: solid 1px #ddd;
    background: #fff;
    width: 100%;
    padding: 10px;
    font-size: 13px;
    -webkit-appearance:caret;
}

#respond input:focus, #respond textarea:focus { outline: none }

#respond textarea {
    line-height: 22px;
    width: 100%;
    -webkit-box-sizing: border-box;
    -moz-box-sizing: border-box;
    box-sizing: border-box;
}

.form-submit {
    margin-bottom: 0 !important;
}

#respond #submit {
    background: #555;
    color: #fff;
    font-size: 12px;
    font-weight: bold;
    font-family: 'Merriweather', Georgia, serif;
    padding: 10px 20px;
    margin: 5px 0 0 0;
    border: none;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
    -webkit-appearance:none;
}

#respond #submit:hover {
    background: #666;
    cursor: pointer;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
}

#respond #commentform p {

}

.comment #respond #commentform p {

}

#respond #commentform .form-author { background: #fff }

#respond #commentform .form-email { background: #fff }

#respond #commentform .form-website { background: #fff }

.allowed {
    font-size: 11px;
    color: #888;
    width: 500px;
    float: left;
    margin: 0 0 15px 0;
}

.commentlist { list-style-type: none !important }

.commentlist li {
    padding: 0 0 15px 0;
    margin: 0 0 15px 0 !important;
    position: relative;
    list-style-type: none !important;
}

.commentlist li:last-child {
    margin-bottom: 40px !important;
    padding-bottom: 0;
}

.commentlist li:before, .commentlist ol .num {
    float: left;
    margin: 0 0 0 0 !important;
    content: none !important;
    counter-increment: none !important;
}

#comments .children {
    margin: 25px 0 0 25px !important;
}

#comments .children li {
    margin: 0;
    padding: 0;
}

#comments .children li:last-child {
    margin-bottom: 0 !important;
    padding-bottom: 0;
}

.comment-block { padding: 0 }

.comment-text {
    background: #fff;
    border: solid 1px #eee;
    padding: 20px;
    font-size: 14px;
    line-height: 22px;
    border-bottom: solid 1px #ddd;
}

.comment-text:before {
    width: 0;
    height: 0;
}

.reply {
    margin: 0px !important;
    font-size: 12px;
}

.comments .children .reply { text-align: left }

.reply a:hover { text-decoration: none }

.reply a:hover:after { content: "\2192" }

#cancel-comment-reply {
    margin: 0 0 15px 0;
    float: right;
}

.comments .logged-in {
    float: left;
    font-size: 14px !important;
}

.comment-awaiting-moderation {
    color: #555;
    font-weight: bold;
    font-size: 11px;
}

.vcard {
    margin: 0 0 0 0;
    padding: 0 0 0 0;
    float: left;
}

.vcard img {
    float: left;
    background: #fff;
    border: solid 1px #eee;
    padding: 3px;
}

.fn {
    float: left;
    font-style: normal;
    font-size: 15px;
    font-weight: bold;
    line-height: 20px;
    margin-top: 0;
    margin-bottom: -6px;
}

.fn a { color: #666 }

.comment-info {
    margin-bottom: 15px;
    position: relative;
}

.comment-meta {
    float: left;
    margin: 2px 0 0 12px;
}

.comment-time {
    font-size: 11px;
    color: #999;
}

.comment-edit-link { font-size: 11px }

/* ===[ Sidebar Styles ]===================================================== */

.blog-entry {

}

.pro-title h4 {
    display: block float:left;
    width: 295px;
    background: url(images/design-repeat.gif) right center repeat-x;
}

.pro-title h4 span {
    font-size: 14px;
    color: #FFF;
    font-weight: bold;
    background: #3e3e3e;
    padding: 0 10px 0 0;
}

.pro-title h3 {
    font-size: 14px;
    color: #FFF;
    font-weight: bold;
    display: block float:left;
    width: 295px;
    background: url(images/design-repeat.gif) right center repeat-x;
}

.pro-title h3 span {
    font-size: 14px;
    color: #FFF;
    font-weight: bold;
    background: #3e3e3e;
    padding: 0 10px 0 0;
}

/* ===[ Section Styles ]===================================================== */

.container {
    max-width: 980px;
    margin: 0 auto;
    padding-top: 140px;
}

#sections {
    max-width: 980px;
    margin: 0 auto;
    padding-top: 140px;
}

.section-title {
    letter-spacing: 5px;
    font-size: 13px;
    font-weight: bold;
    text-transform: uppercase;
    margin-bottom: 40px;
    text-align: center;
    padding: 5px;
    border-top: solid 1px #eee;
    border-bottom: solid 1px #eee;
}

.section-title span {
    background: #fff;
    padding: 0 15px;
}

.section:first-child {
    padding-top: 0px;
    border-top: none;
}

.section {
    padding: 0 0 0 0;
    float: left;
    width: 100%;
    position: relative;
}

.section-slider {
    padding-bottom: 70px;
}

.section-services {
    padding-bottom: 80px;
}

.section-services.student-index {
    padding-bottom: 0px;
}

.section-portfolio {
    padding-bottom: 45px;
}

.section-blog {
    padding-bottom: 30px;
}

.section-faq {
    padding-bottom: 30px;
}


.section-testimonials {
    padding-top: 100px;
    padding-bottom: 300px;
}


.section-testimonials a {
    color: #aaa;
}
.section-testimonials a:hover {
    color: #60BDDB;
}

.section-testimonials-curriculum {
    padding-top: 40px;
    padding-bottom: 150px;
}

.section-testimonials-curriculum a {
    color: #aaa;
}
.section-testimonials-curriculum a:hover {
    color: #60BDDB;
}


.section .column {
    width: 33%;
    margin: 0 0 3% 0;
    float: left;
    padding-left: 4%;
    margin-bottom: 3%;
}

.section .column.fourth{
  width: 25%;
}

.section.coder-cred{
  margin-left: 20px;
}
.section .column:last-child {
    margin-right: 0px;
    border-right: none;
}

.section-titlea {
    font-size: 10px;
    text-transform: uppercase;
    letter-spacing: 2px;
    color: #999;
    background: #f7f7f7;
    padding: 0 10px;
    margin: 0 0 35px 0;
    text-align: center;
}

.section-title2a {
    font-size: 48px;
    letter-spacing: -2px;
    color: #eee;
    position: absolute;
    bottom: -16px;
    right: 0;
    padding: 0;
    text-align: center;
    display: none;
}

.section-title3a {
    font-size: 28px;
    text-align: center;
    display: none;
}

/* ===[ Ribbon Styles ]===================================================== */

.ribbon {
    font-size: 11px !important;
    text-transform: uppercase;
    letter-spacing: 2px;
    width: 30%;
    position: relative;
    background: #ededed;
    color: #777;
    text-align: center;
    padding: 8px 2em;
    margin: 0 auto 45px;
    line-height: 16px;
}

.ribbon:before, .ribbon:after {
    content: "";
    position: absolute;
    display: block;
    bottom: -1em;
    border: 1.5em solid #e4e2e2;
    z-index: -1;
}

.ribbon:before {
    left: -2em;
    border-right-width: 1.5em;
    border-left-color: transparent;
}

.ribbon:after {
    right: -2em;
    border-left-width: 1.5em;
    border-right-color: transparent;
}

.ribbon .ribbon-content:before, .ribbon .ribbon-content:after {
    content: "";
    position: absolute;
    display: block;
    border-style: solid;
    border-color: #cfcfcf transparent transparent transparent;
    bottom: -1em;
}

.ribbon .ribbon-content:before {
    left: 0;
    border-width: 1em 0 0 1em;
}

.ribbon .ribbon-content:after {
    right: 0;
    border-width: 1em 1em 0 0;
}

.non-semantic-protector {
    position: relative;
    z-index: 1;
    background: url(images/ribbon-bg.png) no-repeat 0 24px;
    display: none;
}

/* ===[ Slider Styles ]===================================================== */

.single .gallery-wrap {
    margin-bottom: 40px;
    margin-top: -1px;
}

.slides .featured-thumb img {
    -webkit-transition: .1s ease-in;
    -moz-transition: .1s ease-in;
    -o-transition: .1s ease-in;
    transition: .1s ease-in;
}

.featured-thumb img:hover {
    opacity: .9;
    -webkit-transition: .1s ease-in;
    -moz-transition: .1s ease-in;
    -o-transition: .1s ease-in;
    transition: .1s ease-in;
}

/* ===[ Services Styles ]===================================================== */

.services-wrap {
    display: block;
    float: left;
    margin-left: -4%;
    margin-bottom: -2%;
    max-width: 1020px;
}

.services-title {
    float: left;
    width: 75%;
    padding-top: 11px;
}

.services h3 {
    font-size: 14px;
    font-weight: bold;
    line-height: 20px;
    margin-bottom: 0;
}

.services h3 a { color: #4c4c4c }

.services h3 a:hover { color: #888 }

.services .service-icon {
    float: left;
    margin: 0 5% 0 0;
    font-size: 20px;
    line-height: 22px;
    text-align: center;
    color: #555;
    background: #f3f3f3;
    display: block;
    padding: 11px 10px 9px 10px;
    -webkit-transition: .1s ease-in;
    -moz-transition: .1s ease-in;
    -o-transition: .1s ease-in;
    transition: .1s ease-in;
    height: 40px;
    width: 40px;
    overflow: hidden;
}

.services p {
    margin: 15px 0 20px 0;
    font-size: 13px;
    border-top: dotted 1px #e6e6e6;
    padding-top: 8px;
}

.services ul{
  margin-top: 15px;
  font-size: 13px;
  border-top: dotted 1px #e6e6e6;
  padding-top: 6px;
}

.services ul li{
  border-bottom: dotted 1px #e6e6e6;
  padding: 3px 0 4px 0;
}

.services h4{
  font-size: 14px;
  line-height: 0;
  text-decoration: underline
}
.services:hover .service-icon {
    background: #fff666;
    -webkit-transition: .1s ease-in;
    -moz-transition: .1s ease-in;
    -o-transition: .1s ease-in;
    transition: .1s ease-in;
}

/* ===[ Home Blog Styles ]===================================================== */

body.students .home-blog {
    display: block;
    margin-left: -2.2%;
    max-width: 1020px;
}

.home-blog-post li{
    list-style-type:none;
}

body.students ul li.home-blog-post{
    list-style-type:none;
    height: 600px;
}

.home-blog-post {
    float: left;
    width: 31%;
    margin: 0 0 5% 2.2%;
    border: solid 1px #eee;
    padding: 30px;
    position: relative;
}

.big-comment h3 { position: relative }

.home-blog-post h3 {
    font-size: 18px;
    line-height: 24px;
    margin-bottom: 5px;
}

.home-blog-post h3 a { color: #4c4c4c }

.home-blog-post h3 a:hover { color: #888 }

.home-blog-post .excerpt p {
    font-size: 13px;
    margin-bottom: 0;
    padding: 0;
}

.home-blog-post .blog-text {
    font-size: 14px;
    line-height: 26px;
}

.home-blog-post-meta {
    text-transform: uppercase;
    font-size: 10px;
    color: #aaa;
    line-height: 16px;
    margin-bottom: 20px;
    padding-bottom: 20px;
    border-bottom: solid 1px #eee;
}

.home-blog-post .blog-thumb {
    margin: -31px -31px 25px -31px;
    -webkit-transition: .1s ease-in;
    -moz-transition: .1s ease-in;
    -o-transition: .1s ease-in;
    transition: .1s ease-in;
    position: relative;
    overflow: hidden;
    height: 310px;
}

.home-blog-post .blog-thumb img {
    max-width: 100%;
    min-width: 100%;
    height: auto;
}

.home-blog-post img:hover {
    opacity: .9;
    -webkit-transition: .1s ease-in;
    -moz-transition: .1s ease-in;
    -o-transition: .1s ease-in;
    transition: .1s ease-in;
}

.home-blog-right {
    float: right;
    width: 300px;
}

.okay-recent-posts {
    margin: 0;
    padding: 0;
}

.okay-recent-posts .pane {
    padding-top: 10px !important;
    border: none !important;
    padding: 0;
}

.okay-recent-posts .pane h4 {
    font-size: 10px;
    text-transform: uppercase;
    letter-spacing: 2px;
    display: block;
    line-height: 30px;
    margin: 0 0 15px 0;
    font-family: 'Merriweather', Georgia, serif;
    text-align: center;
    background: #f7f7f7;
    color: #999;
}

.recent-posts-widget .recent-posts {
    width: 100%;
}

.recent-posts-widget li, .recent-comments-widget li {
    list-style-type: none;
    margin: 0 0 15px 0 !important;
    padding: 0 0 15px 0 !important;
    border-bottom: solid 1px #eee;
    display: inline-block;
}

.recent-posts-widget li:last-child, .recent-comments-widget li:last-child {
    border-bottom: none !important;
    margin-bottom: 0 !important;
    padding-bottom: 5px !important;
}

.recent-posts h3 {
    line-height: 18px;
    margin-bottom: 2px;
    font-weight: bold;
    font-size: 12px;
}

.recent-posts h3 a { color: #4c4c4c }

.recent-posts h3 a:hover { color: #888 }

.recent-posts p {
    font-size: 10px;
    line-height: 15px;
    color: #aaa;
    margin-bottom: 0px;
}

/* ===[ Homepage Testimonial Styles ]===================================================== */


.testimonials h2 {
    font-size: 30px;
    margin: 15px 0 0 0;
    text-align: center;
}

.testimonials h3 {
    font-weight: normal;
    font-size: 20px;
    line-height: 32px;
    text-align: center;
}

/* ===[ Homepage FAQ Styles ]===================================================== */


.faq h2 {
    font-size: 30px;
    margin: 15px 0 0 0;
    text-align: center;
}

.faq h3 {
    font-weight: normal;
    font-size: 20px;
    line-height: 32px;
    text-align: center;
}

/* ===[ Portfolio Page Styles ]===================================================== */

.mobile-slide { display: none !important }

.portfolio-big-slide {
    float: left;
    width: 100%;
    position: relative;
}

.portfolio-large-image {
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
    position: relative;
    display: inline-block;
    width: 100%;
}

.portfolio-big-slide:hover .portfolio-large-image, .portfolio-block:hover .portfolio-small-image {
    opacity: .16;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
}

.portfolio-block .students {
    display:none;
    }
.portfolio-block:hover .students {
    display:block;
    position:absolute;
    z-index:1;
    left:-1px;
    text-align: center;
    top:68px;
    color: #000;
    width:312px;
    height:100px;
    }


.portfolio-large-image img {
    min-width: 100%;
    height: auto;
}

.portfolio-big-slide .portfolio-block {
    width: 980px;
    margin-bottom: 40px;
}

/* ===[ Portfolio Page Titles ]===================================================== */

.portfolio-big-title {
    text-align: center;
    margin-bottom: 40px;
    display: block;
    clear: both;
}

.portfolio-big-title h2 {
    letter-spacing: 0px;
    font-size: 32px;
    line-height: 40px;
    margin-bottom: 0px;
    text-align: center;
}

.portfolio-big-title h3 {
    font-size: 16px;
    line-height: 26px;
    letter-spacing: 0px;
    color: #aaa;
    text-align: center;
    margin: 15px 0 0 0;
    padding: 0 50px;
}

#portfolio-blocks .slides li:first-child { display: none }

.paged #portfolio-blocks .slides li:first-child, .home #portfolio-blocks .slides li:first-child { display: block }

.page-template-portfolio-php #portfolio-blocks { margin-bottom: 60px }

.portfolio-navigation {
    width: 100%;
    max-width: 980px;
    clear: both;
    margin-top: 20px;
    display: inline-block;
    position: relative;
}

.portfolio-navigation a {
    color: #555;
}

.portfolio-navigation .alignleft, .portfolio-navigation .alignright {
    color: #555;
    font-size: 12px;
    line-height: 30px;
    font-weight: bold;
    position: relative;
}

.portfolio-navigation .alignleft a {
    padding: 10px 15px 10px 22px;
    background: #f7f7f7;
}

.portfolio-navigation .alignleft a:before {
    position: absolute;
    top: -1px;
    left: 12px;
    display: block;
    content: "\f0d9";
    font-family: "FontAwesome";
}

.portfolio-navigation .alignright a {
    padding: 10px 22px 10px 15px;
    background: #f7f7f7;
}

.portfolio-navigation .alignright a:before {
    position: absolute;
    top: -1px;
    right: 12px;
    display: block;
    content: "\f0da";
    font-family: "FontAwesome";
}

.portfolio-navigation .alignleft i {
    margin: 0 5px 0 0;
    font-size: 10px;
    position: absolute;
    top: 14px;
    left: 12px;
}

.portfolio-navigation .alignright i {
    margin: 0 0 0 5px;
}

/* ===[ Portfolio Block Styles ]===================================================== */

.portfolio-blocks-wrap {
    width: 103%;
}

.portfolio-blocks {
    max-width: 1008px;
    overflow: hidden;
    color: white;
    position: relative;
}

.portfolio-block {
    position: relative;
    z-index: 5;
    overflow: hidden;
    float: left;
    display: inline-block;
}

.page-template-portfolio-php .portfolio-blocks .portfolio-block:first-child {
    display: none;
}

.home .portfolio-block:first-child {
    display: block !important;
}

.portfolio-block-large {
    margin-bottom: 40px;
}

.portfolio-block-inside {
    position: absolute;
    height: 100%;
    width: 100%;
    overflow: hidden;
    display: inline-block;
}

.portfolio-block-inside a {
    display: block;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
}

.portfolio-block-inside img {
    width: 100%;
    max-width: 100%;
    height: auto;
}

/* ===[ Portfolio Meta Styles ]===================================================== */

.portfolio-sidebar {
    width: 25%;
    float: right;
    font-size: 12px;
    line-height: 22px;
}

.portfolio-meta {
    margin: 0 0 0 0;
}

.portfolio-meta h3 {
    border-bottom: solid 1px #eee;
    padding-bottom: 12px;
}

.portfolio-meta li {
    background: none !important;
    padding: 0 0 10px 0 !important;
    margin: 0 0 10px 0 !important;
    color: #999;
    width: 100%;
    line-height: 18px;
    float: left;
    border-bottom: solid 1px #eee;
}

.portfolio-meta li:last-child {
    border-bottom: none;
    margin-bottom: 0 !important;
    padding-bottom: 0 !important;
}

.portfolio-meta li span {
    color: #555;
    width: 100%;
    float: left;
}

/* ===[ Testimonial Styles ]===================================================== */

.faq h2 { font-size: 26px }

.faq h3 { color: #aaa }


/* ===[ Testimonial Styles ]===================================================== */

.testimonials h2 { font-size: 26px }

.testimonials h3 { color: #aaa }

/* ===[ Recent Posts Widget Styles ]===================================================== */

.recent-comment-text {
    margin-top: 5px;
    font-size: 11px !important;
    line-height: 18px !important;
}

.recent-comments-widget .comment-txt:hover { color: #888 }

/* ===[ Content Styles ]===================================================== */

.content {
    width: 70%;
    float: left;
    margin: 0 0 0 0;
    padding: 0 0 0 0;
}

.content-full {
    width: 100%;
}

.portfolio-full {
    padding-top: 30px;
    max-width: 980px !important
}

.archive .portfolio-full {
    padding-top: 0;
}

.content ul, .content ol {
    margin: 0 0 20px 15px;
}

.content ul li {
    list-style-type: square;
    margin-bottom: 5px;
}

.content ol li {
    list-style-type: decimal;
}

/* ===[ Footer Styles ]===================================================== */

.footer { width: 100% }

.footer-text {
    max-width: 980px;
    margin: 0 auto;
    padding: 10px 0px 30px 0px;
    border-top: solid 1px #eee;
    border-bottom: solid 0px #eee;
}

.footer-text-left {
    width: 50%;
    float: left;
}

.footer-text-left ul { float: left }

.footer-text-left ul li {
    float: left;
    display: inline;
    margin: 0 5px 0 0;
}

.footer-text-left ul li a {
    font-size: 11px;
    font-weight: bold;
    text-transform: uppercase;
    color: #999;
    text-decoration: none;
    padding: 0px 10px 0 0;
}

.footer-text-left ul li a:hover {
    color: #555;
}

.footer-text-left ul li:first-child { padding-left: 0px }

.footer-text-left ul li.last { padding: 3px 0 0 0 }

.footer-text-right {
    float: right;
    font-size: 11px;
    color: #999;
    text-decoration: none;
    text-transform: uppercase;
}

.footer-text-right a { color: #4c4c4c }

.footer-text-right a:hover { color: #999 }

.footer-widgets {
    max-width: 980px;
    margin: 50px auto 0 auto;
    padding: 0px 0 75px 0;
    border-top: solid 5px #f2f2f2;
}

.footer-widgets-wrap {
    margin-left: -5%;
}

.footer-widget {
    width: 33%;
    float: left;
    padding: 30px 0 0 5%;
    font-size: 12px;
}

.footer-widget:last-child {

}

.footer-widget a { text-decoration: none }

.footer-widget ul { margin: 0 0 0 0 }

.footer-widget li {
    margin-left: 15px;
    list-style-type: square;
}

.footer-widget p { line-height: 22px }

.footer-widget h2 {
    font-size: 11px;
    font-weight: bold;
    text-transform: uppercase;
    letter-spacing: 1px;
    display: block;
    line-height: 24px;
    padding: 0 0 5px 0;
    margin: 0 0 20px 0;
    border-bottom: solid 1px #eee;
}

/* ===[ Deafult WP Styles ]===================================================== */

.wp-caption {
}

.wp-caption.alignnone { margin: 5px 20px 20px 0 }

.wp-caption.alignleft { margin: 5px 20px 20px 0 }

.wp-caption.alignright { margin: 5px 0 20px 20px }

img.alignleft, img.alignright {

}

.alignright { float: right }

.alignleft { float: left }

.aligncenter { text-align: center }

img.alignleft { margin: 5px 25px 20px 0 }

img.alignright { margin: 5px 0 20px 20px }

.wp-caption img {
    border: 0 none;
    height: auto;
    margin: 0;
    max-width: 98.5%;
    padding: 0;
    width: auto;
}

.wp-caption p.wp-caption-text {
    font-size: 10px !important;
    margin: 0 !important;
    padding: 3px 0 0 0!important;
}

.gallery-caption { text-align: center }

.gallery-item {
    width: 105px !important;
    margin-right: 15px;
    margin-bottom: 20px;
}

.gallery-icon { width: 105px }

.gallery-item img {
    width: 95px;
    height: auto;
    padding: 8px;
    border: solid 1px #eee !important;
}

.gallery-item img:hover {
    border: solid 1px #ddd !important;
}

.sticky {
}

.bypostauthor {
}

/* ===[ Contact Form 7 Styles ]===================================================== */

.hbspt-form input[type="text"], .hbspt-form textarea { font-family: Georgia, serif }

.hbspt-form input[type="text"] {
    padding: 10px;
    font-size: 16px;
    font-weight: 200;
    color: #777;
    border: none;
    width: 100%;
    background: #f0f0f0;
    -webkit-transition: .2s ease-in;
    -moz-transition: .2s ease-in;
    -o-transition: .2s ease-in;
    transition: .2s ease-in;
}

.hbspt-form input[type="email"] {
    padding: 10px;
    font-size: 16px;
    font-weight: 200;
    color: #777;
    border: none;
    width: 100%;
    background: #f0f0f0;
    -webkit-transition: .2s ease-in;
    -moz-transition: .2s ease-in;
    -o-transition: .2s ease-in;
    transition: .2s ease-in;
}

.hbspt-form textarea {
    margin: 0;
    padding: 10px;
    font-size: 16px;
    width: 100%;
    height: 250px;
    box-sizing: border-box;
    -moz-box-sizing: border-box;
    color: #777;
    border: none;
    background: #f0f0f0;
    margin-top: 5px;
    -webkit-transition: .2s ease-in;
    -moz-transition: .2s ease-in;
    -o-transition: .2s ease-in;
    transition: .2s ease-in;
}

.hbspt-form input:focus, .hbspt-form textarea:focus {
    outline: none;
    background: #e9e9e9;
    -webkit-transition: .2s ease-in;
    -moz-transition: .2s ease-in;
    -o-transition: .2s ease-in;
    transition: .2s ease-in;
}

.hbspt-form p {
    font-size: 11px !important;
    font-weight: bold;
    text-transform: uppercase;
    letter-spacing: 1px;
    margin: 0 0 20px 0;
}

.hbspt-form br { margin-bottom: 10px }

input.hs-button.primary.large{
    background: #555;
    color: #fff;
    font-size: 12px;
    font-weight: bold;
    font-family: 'Merriweather', Georgia, serif;
    padding: 10px 20px;
    margin: 5px 0 0 0;
    border: none;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
    -webkit-appearance:none;
}

.hbspt-form-submit:hover {
    background: #666;
    cursor: pointer;
    -webkit-transition: .07s ease-in;
    -moz-transition: .07s ease-in;
    transition: .07s ease-in;
}

.hbspt-form-response-output {
    background: #faf7d6;
    border: none !important;
}

.hbspt-form-mail-sent-ok {
    margin-left: 0px !important;
    margin-right: 0px !important;
    background: #ECF3E5;
    background: rgba(229, 243, 212, .5);
    padding: 15px !important;
    border: solid 1px #D2EFAC !important;
}

.hbspt-form-validation-errors {
    margin-left: 0px !important;
    background: #FCF3F3;
    background: rgba(255, 238, 238, .5);
    border: solid 1px #FBDCDC !important;
    padding: 10px !important;
    margin-right: 0px !important;
}

/* ===[ Page With Sidebar Shortcode Column Styles ]===================================================== */

.highlight {
    background: #fff9ce;
    width: auto;
    display: inline;
    padding: 0px 3px;
    font-weight: bold;
}

/* ===[ Full Width Shortcode Column Styles ]===================================================== */

.two-thirds, .two-thirds-last {
    width: 65.319148936%;
    margin: 0 4% 20px 0;
    float: left;
}

.two-thirds-last { margin-right: 0px !important }

.one-third, .one-third-last {
    width: 30.425531915%;
    float: left;
    margin: 0 4% 20px 0;
}

.one-third-last { margin-right: 0px !important }

.one-quarter, .one-quarter-last {
    width: 21.914893617%;
    float: left;
    margin: 0 4% 20px 0;
}

.one-quarter-last { margin-right: 0px !important }

.one-half, .one-half-last {
    width: 47.872340426%;
    margin: 0 4% 20px 0;
    float: left;
}

.one-half-last { margin-right: 0px !important }

/* ===[ Shortcode Button Styles ]===================================================== */

.highlight {
    background: #fff666;
    color: #222;
    width: auto;
    display: inline;
    padding: 2px 3px;
    font-weight: normal;
}

.demo-button {
    margin-bottom: 6px;
    padding-top: 4px;
}

.demo-button span { margin-right: 2px }

.button a {

}

.button a:hover {

}

.button {
    display: inline-block;
    text-decoration: none;
    font: bold 11px/12px Georgia, HelveticaNeue, Arial;
    text-transform: uppercase;
    padding: 6px 11px;
    color: #555;
    border: 1px solid #dedede;
    -webkit-border-radius: 3px;
    -moz-border-radius: 3px;
    border-radius: 3px;
    text-align: center;
}

.button:hover { cursor: pointer }

.button.white {
    background: #f5f5f5;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#f9f9f9', endColorstr='#f0f0f0'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#f9f9f9), to(#f0f0f0)); /*  WebKit */
    background: -moz-linear-gradient(top,  #f9f9f9, #f0f0f0);
    border-color: #dedede #d8d8d8 #d3d3d3;
    color: #555;
    text-shadow: 0 1px 0 #fff;
    -webkit-box-shadow: 0 1px 1px #eaeaea, inset 0 1px 0 #fbfbfb;
    -moz-box-shadow: 0 1px 1px #eaeaea, inset 0 1px 0 #fbfbfb;
    box-shadow: 0 1px 1px #eaeaea, inset 0 1px 0 #fbfbfb;
}

.button.white:hover {
    background: #f4f4f4;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#efefef', endColorstr='#f8f8f8'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#efefef), to(#f8f8f8)); /*  WebKit */
    background: -moz-linear-gradient(top,  #efefef, #f8f8f8);
    border-color: #c7c7c7 #c3c3c3 #bebebe;
    text-shadow: 0 1px 0 #fdfdfd;
    -webkit-box-shadow: 0 1px 1px #ebebeb, inset 0 1px 0 #f3f3f3;
    -moz-box-shadow: 0 1px 1px #ebebeb, inset 0 1px 0 #f3f3f3;
    box-shadow: 0 1px 1px #ebebeb, inset 0 1px 0 #f3f3f3;
}

.button.white a { color: #555 }

.button.gray {
    background: #bdbdbd;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#cacaca', endColorstr='#aeaeae'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#cacaca), to(#aeaeae)); /*  WebKit */
    background: -moz-linear-gradient(top,  #cacaca, #aeaeae);
    border-color: #b5b5b5 #a1a1a1 #8f8f8f;
    color: #555;
    text-shadow: 0 1px 0 #d4d4d4;
    -webkit-box-shadow: 0 1px 1px #c9c9c9, inset 0 1px 0 #d7d7d7;
    -moz-box-shadow: 0 1px 1px #c9c9c9, inset 0 1px 0 #d7d7d7;
    box-shadow: 0 1px 1px #c9c9c9, inset 0 1px 0 #d7d7d7;
}

.button.gray:hover {
    background: #c2c2c2;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#bcbcbc', endColorstr='#c2c2c2'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#bcbcbc), to(#c2c2c2)); /*  WebKit */
    background: -moz-linear-gradient(top,  #bcbcbc, #c2c2c2);
    border-color: #989898 #8e8e8e #878787;
    text-shadow: 0 1px 0 #dadada;
    -webkit-box-shadow: 0 1px 1px #cdcdcd, inset 0 1px 0 #ccc;
    -moz-box-shadow: 0 1px 1px #cdcdcd, inset 0 1px 0 #ccc;
    box-shadow: 0 1px 1px #cdcdcd, inset 0 1px 0 #ccc;
}

.button.gray a { color: #555 }

.button.pink {
    background: #f67689;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#f78297', endColorstr='#f56778'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#f78297), to(#f56778)); /*  WebKit */
    background: -moz-linear-gradient(top,  #f78297, #f56778);
    border-color: #df6f8b #da5f75 #d55061;
    color: #913944;
    text-shadow: 0 1px 0 #f89ca9;
    -webkit-box-shadow: 0 1px 1px #c1c1c1, inset 0 1px 0 #f9a1b1;
    -moz-box-shadow: 0 1px 1px #c1c1c1, inset 0 1px 0 #f9a1b1;
    box-shadow: 0 1px 1px #c1c1c1, inset 0 1px 0 #f9a1b1;
}

.button.pink:hover {
    background: #f67c90;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#f56c7e', endColorstr='#f78297'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#f56c7e), to(#f78297)); /*  WebKit */
    background: -moz-linear-gradient(top,  #f56c7e, #f78297);
    border-color: #c36079 #c25669 #c14e5c;
    text-shadow: 0 1px 0 #f9a6b4;
    -webkit-box-shadow: 0 1px 1px #c3c3c3, inset 0 1px 0 #f8909e;
    -moz-box-shadow: 0 1px 1px #c3c3c3, inset 0 1px 0 #f8909e;
    box-shadow: 0 1px 1px #c3c3c3, inset 0 1px 0 #f8909e;
}

.button.pink a { color: #913944 }

.button.orange {
    background: #fecc5f;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#feda71', endColorstr='#febb4a'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#feda71), to(#febb4a)); /*  WebKit */
    background: -moz-linear-gradient(top,  #feda71, #febb4a);
    border-color: #f5b74e #e5a73e #d6982f;
    color: #996633;
    text-shadow: 0 1px 0 #fedd9b;
    -webkit-box-shadow: 0 1px 1px #d3d3d3, inset 0 1px 0 #fee395;
    -moz-box-shadow: 0 1px 1px #d3d3d3, inset 0 1px 0 #fee395;
    box-shadow: 0 1px 1px #d3d3d3, inset 0 1px 0 #fee395;
}

.button.orange:hover {
    background: #fecb5e;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#fec354', endColorstr='#fecd61'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#fec354), to(#fecd61)); /*  WebKit */
    background: -moz-linear-gradient(top,  #fec354, #fecd61);
    border-color: #d29a3a #cc9436 #c89133;
    text-shadow: 0 1px 0 #fee1a0;
    -webkit-box-shadow: 0 1px 1px #d4d4d4, inset 0 1px 0 #fed17e;
    -moz-box-shadow: 0 1px 1px #d4d4d4, inset 0 1px 0 #fed17e;
    box-shadow: 0 1px 1px #d4d4d4, inset 0 1px 0 #fed17e;
}

.button.orange a { color: #996633 }

.button.green {
    background: #b7d770;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#cae285', endColorstr='#9fcb57'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#cae285), to(#9fcb57)); /*  WebKit */
    background: -moz-linear-gradient(top,  #cae285, #9fcb57);
    border-color: #adc671 #98b65b #87aa4a;
    color: #5d7731;
    text-shadow: 0 1px 0 #cfe5a4;
    -webkit-box-shadow: 0 1px 1px #d3d3d3, inset 0 1px 0 #d7e9a4;
    -moz-box-shadow: 0 1px 1px #d3d3d3, inset 0 1px 0 #d7e9a4;
    box-shadow: 0 1px 1px #d3d3d3, inset 0 1px 0 #d7e9a4;
}

.button.green:hover {
    background: #b9d972;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#b8d872', endColorstr='#b9d972'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#b8d872), to(#b9d972)); /*  WebKit */
    background: -moz-linear-gradient(top,  #b8d872, #b9d972);
    border-color: #8bb14d #83a648 #7d9e45;
    text-shadow: 0 1px 0 #d5e8aa;
    -webkit-box-shadow: 0 1px 1px #d5d5d5, inset 0 1px 0 #cae295;
    -moz-box-shadow: 0 1px 1px #d5d5d5, inset 0 1px 0 #cae295;
    box-shadow: 0 1px 1px #d5d5d5, inset 0 1px 0 #cae295;
}

.button.green a { color: #5d7731 }

.button.blue {
    background: #92dbf6;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#abe4f8', endColorstr='#6fcef3'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#abe4f8), to(#6fcef3)); /*  WebKit */
    background: -moz-linear-gradient(top,  #abe4f8, #6fcef3);
    border-color: #8dc5da #76b7cf #63abc7;
    text-shadow: 0 1px 0 #b6e6f9;
    -webkit-box-shadow: 0 1px 1px #d6d6d6, inset 0 1px 0 #c0ebfa;
    -moz-box-shadow: 0 1px 1px #d6d6d6, inset 0 1px 0 #c0ebfa;
    box-shadow: 0 1px 1px #d6d6d6, inset 0 1px 0 #c0ebfa;
}

.button.blue:hover {
    background: #92dbf6;
    border-color: #7caec0 #68a3ba #5a9cb5;
    text-shadow: 0 1px 0 #bee9fa;
    -webkit-box-shadow: 0 1px 1px #d6d6d6, inset 0 1px 0 #ade4f8;
    -moz-box-shadow: 0 1px 1px #d6d6d6, inset 0 1px 0 #ade4f8;
    box-shadow: 0 1px 1px #d6d6d6, inset 0 1px 0 #ade4f8;
}

.button.blue a { color: #42788e }

.button.purple {
    background: #dfaeda;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#e8c4e4', endColorstr='#d494ce'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#e8c4e4), to(#d494ce)); /*  WebKit */
    background: -moz-linear-gradient(top,  #e8c4e4, #d494ce);
    border-color: #bc9db9 #ad89aa #a1799d;
    color: #7b5777;
    text-shadow: 0 1px 0 #eacae6;
    -webkit-box-shadow: 0 1px 1px #d5d5d5, inset 0 1px 0 #eed3eb;
    -moz-box-shadow: 0 1px 1px #d5d5d5, inset 0 1px 0 #eed3eb;
    box-shadow: 0 1px 1px #d5d5d5, inset 0 1px 0 #eed3eb;
}

.button.purple:hover {
    background: #e0b1db;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#deabd9', endColorstr='#e0b1db'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#deabd9), to(#e0b1db)); /*  WebKit */
    background: -moz-linear-gradient(top,  #deabd9, #e0b1db);
    border-color: #a482a0 #9b7897 #947090;
    text-shadow: 0 1px 0 #ecd0e9;
    -webkit-box-shadow: 0 1px 1px #cdcdcd, inset 0 1px 0 #ccc;
    -moz-box-shadow: 0 1px 1px #cdcdcd, inset 0 1px 0 #ccc;
    box-shadow: 0 1px 1px #cdcdcd, inset 0 1px 0 #ccc;
}

.button.purple a { color: #7b5777 }

.button.black {
    background: #525252;
    filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#5e5e5e', endColorstr='#434343'); /*  IE */
    background: -webkit-gradient(linear, left top, left bottom, from(#5e5e5e), to(#434343)); /*  WebKit */
    background: -moz-linear-gradient(top,  #5e5e5e, #434343);
    border-color: #4c4c4c #313131 #1f1f1f;
    color: #fff;
    text-shadow: 0 1px 0 #2e2e2e;
    -webkit-box-shadow: 0 1px 1px #afafaf, inset 0 1px 0 #868686;
    -moz-box-shadow: 0 1px 1px #afafaf, inset 0 1px 0 #868686;
    box-shadow: 0 1px 1px #afafaf, inset 0 1px 0 #868686;
}

.button.black:hover {
    background: #5a5a5a;
    border-color: #2c2c2c #1c1c1c #101010;
    text-shadow: 0 1px 0 #363636;
    -webkit-box-shadow: 0 1px 1px #b1b1b1, inset 0 1px 0 #838383;
    -moz-box-shadow: 0 1px 1px #b1b1b1, inset 0 1px 0 #838383;
    box-shadow: 0 1px 1px #b1b1b1, inset 0 1px 0 #838383;
}

.button.black a { color: #fff }

/* ===[ Shortcode Message Style ]===================================================== */

.message {
    width: 100%;
    float: left;
    margin: 0 0 15px 0;
}

.message a { color: #555 }

.message a:hover { text-decoration: underline }

.message strong {
    text-transform: uppercase;
    font-size: 12px;
    letter-spacing: 1px;
}

.red-message {
    background: #fff7f7;
    border: solid 1px #fddcdc;
    padding: 15px;
}

.green-message {
    background: #f1f9ea;
    padding: 15px;
    border: solid 1px #d0eeac;
}

.yellow-message {
    background: #fcfbe4;
    border: solid 1px #efebbc;
    padding: 15px;
}

.gray-message {
    background: #f5f5f5;
    border: solid 1px #ddd;
    padding: 15px;
}

/* ===[ Shortcode Tooltip Styles ]===================================================== */

.tooltip {
    display: inline;
    position: relative;
}

.tooltip a span {
    width: 115px;
    height: auto;
    line-height: 20px;
    padding: 5px 10px 0px 10px;
    left: 50%;
    margin-left: -58px;
    font-family: Georgia, serif;
    font-size: 11px;
    color: #777;
    text-align: center;
    border: 4px solid #fff;
    background: rgba(255,255,255,1);
    text-indent: 0px;
    border-radius: 5px;
    position: absolute;
    pointer-events: none;
    bottom: 30px;
    opacity: 0;
    box-shadow: 1px 1px 2px rgba(0,0,0,0.1);
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    border-left: solid 1px #f5f5f5;
    border-top: solid 1px #f5f5f5;
}

.tooltip a span:before, .tooltip a span:after {
    content: '';
    position: absolute;
    bottom: -15px;
    left: 50%;
    margin-left: -9px;
    width: 0;
    height: 0;
    border-left: 10px solid transparent;
    border-right: 10px solid transparent;
    border-top: 10px solid rgba(0,0,0,0.1);
}

.tooltip a span:after {
    bottom: -14px;
    margin-left: -10px;
    border-top: 10px solid #fff;
}

.tooltip a:hover span {
    opacity: 0.9;
    bottom: 35px;
}

/* ===[ Shortcode Tabbed Box Styles ]===================================================== */

.tabs {
    list-style-type: none !important;
    margin: 0 !important;
    padding: 0;
    height: 30px;
    border-bottom: solid 1px #eee;
}

#sidebar .tabs {
    border-bottom: none;
    height: auto;
}

.tabs li {
    float: left;
    text-indent: 0;
    padding: 0 !important;
    margin: 0 !important;
    list-style-type: none !important;
    background: none !important;
}

.content .tabs li a:hover { background: #f7f7f7 }

.content .tabs li a:hover {
    -webkit-transition: .2s ease-in;
    -moz-transition: .2s ease-in;
    -o-transition: .2s ease-in;
    transition: .2s ease-in;
}

.tabs a {
    display: block;
    font-size: 11px;
    text-transform: uppercase;
    line-height: 30px;
    text-align: center;
    text-decoration: none;
    padding: 0 10px;
    margin: 0px;
    position: relative;
    color: #888;
}

.tabs a:hover { color: #555 }

.tabs a:active { outline: none }

.tabs .current, .tabs .current:hover, .tabs li.current a {
    cursor: default !important;
    color: #555 !important;
    background: #f2f2f2;
}

.tab-wrapper li .current, .tab-wrapper li .current:hover, .tab-wrapper li.current a, .tab-wrapper a:hover { background: #fff666 }

.tab-wrapper {
    padding: 0;
    width: 435px;
    height: 70px;
    margin: 80px auto 30px auto;
}

#sidebar .tab-wrapper { width: 100% }

.tab-wrapper li {
    float: left;
    background: none !important;
    padding: 0 !important;
    margin: 0 1% 0 0 !important;
    width: 24%;
}

.tab-wrapper li:last-child {
    margin-right: 0px !important;
}

.tab-wrapper li a {
    display: block;
    height: 32px;
    text-align: center;
    line-height: 34px;
    margin: 0;
    outline: none;
    background: #f2f2f2;
    padding: 0;
    position: relative;
    font-family: 'ModernPictogramsNormal';
    -webkit-font-smoothing: antialiased;
    color: #555;
    font-size: 22px;
    text-transform: none;
}

.tab-wrapper li a.current {  }

.tab-wrapper li a:hover { }

.tab-wrapper li a:active i {
    line-height: 34px;
}

.tab-wrapper li i {
    font-size: 17px;
    line-height: 32px;
}

#sidebar .panes {
    width: 99%;
}

#sidebar .panes .pane {
    margin-top: 2px;
    background: #f7f7f7;
    padding: 15px !important;
}

.panes .pane {
    display: none;
    padding-top: 15px;
    margin-top: -1px;
}

.change-font a {
    text-transform: uppercase;
    font-size: 10px;
    color: #999;
    margin-right: 15px;
}

.change-font a:hover { color: #4c4c4c }

.chirp li {
    border-bottom: solid 1px #eee !important;
    padding-bottom: 10px !important;
    margin: 0 0 10px 0 !important;
    list-style-type: none !important;
}

.chirp li:last-child {
    border-bottom: none !important;
    margin-bottom: 0 !important;
    padding-bottom: 0 !important;
}

/* Styles for Student Profile - from desmond.css */

.ib_main_header {
  padding: 0;
  margin-top: 30px;
  font-size: 40px;
}

.student_pic {
  border-radius: 100px;
  -webkit-border-radius: 100px;
  -moz-border-radius: 100px;
  width: 140px;
  height: 140px;
  top: -212px;
  left: 41.07%;
  border: 2px solid white;
  margin-top: 205px;
}


.page-title, .top-page-title {
  /*background: url(../img/plaza_espana.jpg) no-repeat top center;*/
  margin-bottom: 0;
  padding: 0;
  height: 275px;
  text-align: bottom;
}

.page-title {
  position: relative;
  vertical-align:bottom;
}

.top-page-title {
  background: url(../img/j-collins-background.jpg) no-repeat top center;
  background-size: 100% 100%;
  margin-bottom: 100px;
  text-align: center;
}

.ib-social-icons {
  font-size: 40px;
  padding: 0 10px;
}

.social-icons {
  padding:20px 0;
}

.title-div {
  background: white;
  width: 500px;
  margin: 0 auto;
  position: relative;
  top: 20px;
}

.icon-twitter:hover {
  color: #06ADE8;
}

.icon-linkedin-sign:hover {
  color: #1F83B9;
}

.icon-github:hover {
  color: black;
}

.icon-edit:hover {
  color: #FFCC00;
}

.icon-rss:hover {
  color: #009933;
}

.link-subs {
  padding-top: 10px;
  margin: 0 auto;
  width: 980px;
  text-align: left;
  padding-bottom: 10px;
  border-bottom: solid 1px #eee;
  padding-left: 2px;
  padding-right: 2px;
}
.link-subs span{
  display: inline;
  font-size: 20px;
  font-weight: bold;
  color: #000;
}
.link-subs li{
  display: inline;
}

.link-subs ul {
  float: right;
  text-align: right;
  letter-spacing: 2px;
  font-size: 10px;
  text-transform: uppercase;
}
.link-subs ul li a{
  color: #aaa;
}
.link-subs ul a:hover {
  color: #37C5FD;
}

.section-testimonials-curriculum {
    padding-top: 40px;
    padding-bottom: 50px;
}

.quote-div {
  padding: 15px 0;
}

.testimonials h3 {
  font-size: 16px;
  line-height: 140%;
}

.section-title {
    letter-spacing: 5px;
    font-size: 40px;
    font-weight: bold;
    text-transform: uppercase;
    /*margin-bottom: 40px;*/
    text-align: center;
    padding-top: 35px;
    border-top: solid 1px #eee;
    border-bottom: solid 1px #eee;
}

.services h3 {
    font-size: 18px;
    font-weight: bold;
    line-height: 20px;
    margin-bottom: 0;
    text-align: center;
    width: 295px;
}

.services first-child {
    width: 100%;
    padding-top: none;
    border-top: none;
}

.services {
  width: 100%;
}

.go-to-top {
  text-align: right;
  font-size: 11px;
  letter-spacing: 1px;
}

.about-text {
  width: 500px;
  margin: 0 auto;
  padding-bottom: 20px;
}

.about-text p {
  font-size: 20px;
  line-height: 130%;
  border-top: none;

}

body.students a{color:#60BDDB} /*Causing the social icons to be blue*/
