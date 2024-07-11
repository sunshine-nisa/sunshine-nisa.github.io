@import url('https://fonts.googleapis.com/css2?family=Kurale&family=Overpass:ital,wght@0,100..900;1,100..900&display=swap');



.iframe_listContainer__8Yb7E {
    background: #31b7ff!important;
    border: 1px solid #ffffff!important;
}

/*1*/


* {
font-family: "Overpass", sans-serif;
}

.datebg {
    font-family: "Kurale", serif;
}

div#footer, .footer__infolinks.p-1, div#app+div+[style="text-align: center"], div#page__rendertime.p-1, .text-center {
font-size:0;
}

div#app {
    position: fixed;
    overflow: auto;
    right: 0;
    padding: 1%;
    width: 71%;
    height: 100%;
    border-left: 1px solid #ffffff;
    margin: auto;
    background-color: #31b7ff;
}

body.bodybg {
    margin: 0;
    background: url(https://i.ibb.co/W0Gk1bp/2.png) no-repeat left fixed, #31b7ff;
    background-size: contain;
}


.content {
    position: relative;
    width: 100%;
    margin-left: auto;
    padding: 25px;
}

a, div {
    color: #ffffff;
    transition: 0.2s;
}

span[data-target="#deleteconfirmmodal"] {
    color:#ffffff;
    transition: 0.2s;
}

a:hover, span[data-target="#deleteconfirmmodal"]:hover {
    color: #000000;
    transition: 0.2s;
}

.post-text a, .comment-text a {
    color:#dbdbdb;
    transition: .3s;
}

.post-text a:hover, .comment-text a:hover {
   color:#fff;
    transition: .3s;
}

.row {
    display: flex;
    flex-wrap: wrap;
    margin-right: -15px;
    margin-left: -15px;
    align-items: flex-end;
}

.row.w-100 {
    position: sticky;
    top: 100%;
}

.comment-text+div {
    position: sticky;
    top: 100%;
    padding-left: 10px;
   transition: .3s;
}

.post-opt [style="font-size: 1rem;"] {
    font-size: 13px!important;
}
  
.fa-retweet::before, .fa-bookmark::before, .fa-exclamation-triangle::before, .fa-quote-left::before  {
    color: #dbdbdb;
   padding: 3px;
   transition: .5s;
}

.fa-heart:hover:before, .fa-retweet:hover:before, .fa-bookmark:hover:before, .fa-exclamation-triangle:hover:before, .fa-quote-left:hover:before  {
    color: #fff;
   cursor:pointer;
   transition: .2s;
}

 [class="post-opt col-12 col-md-6"] span, .post-opt a, [onclick="deleteComment(this)"]  {
    color: #ffffff;
   transition: .3s;
}

 [class="post-opt col-12 col-md-6"] span:hover,  .post-opt a:hover, [onclick="deleteComment(this)"]:hover {
    color: #000000;
   transition: .3s;
}


::selection {
    background: #ffffff;
    color: #000;
}


span.post-title-date+span {
    font-size:0px;
}


[src="//beon.fun/i/offline.png"],
[src="//beon.fun/i/online.png"],
[src="//beon.fun/i/design-off.png"],
[src="/i/blog.png"],
[src="/i/offline.png"],
[src="/i/user.png"],
.pagination-goto,
.left-menu__friends,
.left-menu__unread-message img.flag,
.post-content.blog_total_counter,
 .user:before, img.flag {
    display:none;
}


/*----------*/


/*2*/

.post-title  {
    font-size: 170%;
    text-decoration: none;
     font-family: "Kurale", serif;
    color: #ffffff;
    padding-right: 5px;
    margin-left: 110px;
}
 
 h1 {
    text-align: right;
    font-size: 170%;
    text-decoration: none;
    font-family: "Kurale", serif;
    color: #ffffff;
    padding-right: 5px;
}

.post-title-user {
    font-size: 13px;
}
 
#usermenu {
    border-radius: 0;
     background: #31b7ff;
    border:2px solid #ffffff;
}

.user-drop-menu {
    margin-left: 0.2rem;
    margin-right: 0.2rem;
}

.post-title-date {
    font-size: 9px;
    color: #ffffff;
    padding-left: 0;
}

.post-title-date+a {
    font-size: 10px;
}

h2, .comment-box__message-partial.comment-content {
    font-family: "Kurale", serif;
    font-size: 14px;
    text-transform: lowercase;
    letter-spacing: 0.5px;
    text-align: center;
}

 .comment-content > div:first-child, div.post-content.post-page > div.post-header {
    font-size: 1rem;
    margin-left: 110px;
}

.post-content  {
    padding-left: 18px;
    padding-right: 18px;
    padding-top: 36px;
    background: #31b7ff;
    border: 1px solid #ffffff;
    font-size: calc(13px - .5px);
    line-height: 1.5em;
    margin: 10px 10px 20px;
    box-shadow: inset 0px 0px 10px rgba(255,255,255,69%);
}

 .comment-content {
    padding-left: 18px;
    padding-right: 18px;
    padding-top: 50px;
    background: #31b7ff;
    border: 1px solid #ffffff;
    font-size: calc(13px - .5px);
    line-height: 1.5em;
    margin: 10px 10px 20px;
}

 .post-text, .comment-text {
    flex-grow: 1;
    border-top: 1px solid #ffffff;
    padding: 10px;
}

main.py-4 {
    padding-top: 0 !important;
    padding-bottom: 0 !important;
    background: aliceblue;
    margin-left: auto;
    background: #31b7ff;
}

.post-content > div:first-child {
    color: #505050;
    padding: 3px 10px !important;

}

.post-avatar {
    margin-top: -47px;

}

#app > main > div.content > div.post-content > div:nth-child(2) > a {
margin-left:110px ;
}

div#preview-area .post-content > div:nth-child(2) {
margin-left:110px;
}

.post-avatar img, img.imagefsme  {
    /*filter: brightness(0.9) grayscale(1);*/
    transition: 0.3s;
    border: 1px solid #ffffff;
}

.post-avatar img:hover, img.imagefsme:hover  {
  /*filter: brightness(1) grayscale(0);*/
   transition: 0.3s;
}

.quotation {
    border-left: 4px solid #ffffff;
    font-weight: bold;
    color: #ffffff;
    font-size: 12px;
    padding-left: 5px;
    margin-left: 12px;
    margin-bottom: 0;
    padding-top: 0;
}

.small-text { 
   color: #ffffff;
   text-align: right;
    position: relative;
}

.small-text+div { 
    margin-left: auto !important;
    flex-direction: column; 
    align-items: flex-end;
}


/*--------*/



/*3*/


.left-menu {
    position: fixed;
    width: 26%;
    left: 1.5%;
    bottom: 5%;
    height: 40%;
    overflow: auto;
}

div.left-menu {
    line-height: normal;
    color: #31b7ff!important;
    padding: calc(16px - 3px) 16px;
    background: #ffffff9e;
    backdrop-filter: blur(3px);
    border: 1px solid #ffffff;
    border-radius: 6px;
    box-sizing: border-box;
    box-shadow: inset 0px 0px 10px rgba(49,183,255,69%);
    /*text-shadow: 1px 1.3px 2.5px #fffff7;*/
}

div.left-menu a,
div.left-menu div,
div.left-menu span.readertime {
    color: #31b7ff;
}

div.left-menu a:hover {
    color: #000000!important;
}

div.left-menu input,
div.left-menu input[type="submit"] {
    border: 1px solid #31b7ff;
    color: #31b7ff;
}

 .left-menu::-webkit-scrollbar {
    width: 0px;
}

h3.left-menu-text {
    background: transparent !important;
    font-size: 0;
    border-bottom: 1px solid #31b7ff;
    padding-bottom:10px;
}

/* .text-center+div {
    font-size: 13px;
    color: #a3a3a3;
    font-weight: bold;
    text-align: center;
    margin-bottom: 10px;
    margin-top: 10px;
}*/

.blog__about  [href="/design/disable"] {
    color: #ffffff!important;
}


.readertime {
    color: #fff;
}

.text-center img {
    width: 100px;
    height: 100px;
    object-fit: cover;
    margin-bottom: 10px;
    margin-top: 5px;
    /*filter: brightness(0.9) grayscale(1);*/
}

.left-menu__unread-message img {
    margin-top: -20px;
    width: 70px;
    height: 70px;
    float: left;
    object-fit: cover;
/*filter: brightness(0.9) grayscale(1);*/
}


.left-menu__user-notification.left-menu__unread-message img+p {
    font-size: 13px;
    color: #fff;
    overflow: auto;
    line-height: normal;
    max-height: 50px;
    margin-top: -10px;
}




/*-------*/



/*4*/

.bg-white {
    background-color: #fff0;
    box-shadow: none!important;
}

a.navbar-brand {
font-size:0px;
}

.navbar-brand:before {
    content: 'EXIT';
    font-size: 25px;
    position: fixed;
    writing-mode: vertical-rl;
    transform: rotate(180deg);
    left: 29.6%;
    top: 2%;
    width: 35px;
    height: 105px;
    border: 1px solid #ffffff;
    background: #31b7ff;
    padding-top: 5px;
    line-height: 1.3;
    font-family: "Kurale", serif;
    color: #ffffff;
    letter-spacing: 14px;
    cursor: pointer;
}

.m2 {
    font-size: 0;
}

.pc-menu {
    display: none;
}

.hamburger-menu {
    display: block;
    position: fixed;
    left: 29.6%;
    top: 140px;
    width: 35px;
    height: 35px;
    border: 1px solid #ffffff;
    background: #31b7ff;
    padding-left: 4px;
    padding-top: 4px;
    z-index: 1;
    transition: 0.4s;
}

ul.menu__box {
    overflow: auto;
    width: 26%;
    height: 40%;
    padding: 100px 10px 20px 10px;
    padding: calc(16px - 3px) 16px;
    background: #ffffff9e;
    backdrop-filter: blur(3px);
    border: 1px solid #ffffff;
    border-radius: 6px;
    box-sizing: border-box;
    box-shadow: inset 0px 0px 10px rgba(48,193,255,69%);
    text-shadow: 1px 1.3px 2.5px #fffff7;
}

ul.menu__box::-webkit-scrollbar {
    width: 0px;
}

.menu__box {
    top: 5%;
    left: -100%;
}

#menu__toggle:checked ~ .menu__box {
    visibility: visible;
    top: 5%;
    left: 1.5%;
}

a.menu__item {
    font-family: "Kurale", serif;
    text-align: center;
    line-height: normal;
    color: #31b7ff;
    font-size: 14px;
    text-transform: uppercase;
}

.menu__item:hover {
    background-color: #31b7ff1f;
    color: #000000; 
    border-radius:2px;
    transition-duration: unset;
    transition: 0.2s;
}

.menu__btn > span, .menu__btn > span::before, .menu__btn > span::after {
    width: 25px;
    background: #ffffff;
    height: 2px;
}


/*-----------*/

.datebg {
    max-width: fit-content;
    padding-right: 5px;
    margin: 0px 10px -11px 10px;
    padding-top: 0px;
    font-weight: 100;
    letter-spacing: 1px;
    font-size: 10px;
    color: #ffffff;
    border: 1px solid #ffffff;
    box-shadow: inset 0px 0px 5px rgba(255,255,255,69%);
    /*text-shadow: 1px 1.3px 2.5px #fffff7;*/
    backdrop-filter: blur(3px);
}


 .py-4 + .crumbs  {
display:none;
}

div.crumbs {
    text-align: center;
    font-size: 0px;
    margin-top: 0px;
    margin-bottom: 10px;
    text-transform: uppercase;
    font-family: "Kurale", serif;
}

.crumbs a {
    font-size: 28px;
    padding-right: 20px;
}

.crumbs span {
   font-family: "Kurale", serif;
}

.crumb-item {
    font-weight: bold;
    font-size: 25px;
    letter-spacing: 5px;
    font-family: "Kurale", serif;
    border-bottom: 1px solid #ffffff;
    text-transform: uppercase;
    text-shadow: 1px 1.3px 2.5px #fffff7;
}

.pagination {
    float: none;
    padding-top: 2px;
    display: block;
    font-size: 8px;
    letter-spacing: 2px;
}

.pagination a {
    font-size: 8px;
padding-right: 0px;
}


[href="#footer"] { 
    font-size: 0px;
}
 
 
[onclick="window.scroll({top: 0,behavior: 'smooth'})"] {
    font-size: 0px;
    text-shadow: unset !important;
}
 
 
* {
    outline: 0;
}

.alert-success {
    font-size: 15px;
    text-align: center;
    color: #ffffff;
    background: #31b7ff;
    border: 1px solid;
    border-color: #ffffff;
    font-weight: 900;
}

.alert-success:after{
    content: 'Вопросы/помощь c дизайном - solarinoo.beon.fun/';
    display: block;
    color: #ffffff;
    font-size: 10px;
    text-align: center;
}

.textareabg {
    background: #31b7ff;
    border: 1px solid #ffffff;
    margin: 10px 10px 20px;
    padding: 18px !important;
}

textarea {
    background: #31b7ff;
    color: #ffffff;
    border: 1px solid #ffffff;
}


.avatar-select-list {
    background: transparent;
    text-align: center;
    overflow-y: scroll;
}

.avatar-select-label {
/*filter: brightness(0.8) grayscale(1);*/
    margin: 2px;
    width: 90px;
    border:1px solid #ffffff; 
    transition: 0.3s;
}

.avatar-select-label:hover {
/*filter: brightness(1) grayscale(0);*/
    transition: 0.3s;
}

 
.avatar-select-label-selected {
/*filter: brightness(1) grayscale(0);*/
  width: 100px;
   border: 1px solid #ffffff; 
  transition: 0.3s;
}

input, select, .btn-outline-primary, .textareabg input[type="submit"], .textareabg input[type="button"], .left-menu-text input[type="submit"], button.btn.btn-secondary, button.btn.btn-primary {
    background: #31b7ff00;
    border: 1px solid #ffffff;
    color: #ffffff;
    font-weight: 100;
    font-size: 13px;
    cursor: pointer;
    font-family: "Kurale", serif;
    transition: 0.4s;
}

input:hover, select:hover,
.btn-outline-primary:hover,
.textareabg input[type="submit"]:hover,
.textareabg input[type="button"]:hover,
.left-menu-text input[type="submit"]:hover, 
button.btn.btn-secondary:hover, 
button.btn.btn-primary:hover {
    background: #ffffff;
    color: #000000;
    transition: 0.4s;
}


.modal-body {
    color: #ffffff;
    position: relative;
}

.modal-content {
    background: #31b7ff;
    border: 2px solid #ffffff;
    font-weight: bold;
}

.modal-header {
    border-bottom: none;
}

.modal-footer {
    border-top: none;
}

.user_footer, .div_user_img {
    border:2px solid #ffffff;
/*filter: brightness(0.9) grayscale(1);*/
} 


div#newpostform br,div#newpostform br+br+p {
    display: none;
}
 
span.emj-dropdown {
    padding: 0px;
}

form.messageform p {
    margin-bottom: 0px;
} 

.container-fluid {
    padding-left: 0px;
}

.container-fluid .row {
    margin-left: -15px!important;
}

.container-fluid.mt-5 {
    margin-top: 0px !important;
    padding-left: 0px!important;
}

.navbar-light .navbar-nav .nav-link {
    color: #fff;
    font-size: 20px;
}

.emj-dropdown {
    padding: 0px;
}

.emj-dropdown-content {
    background: #31b7ff;
    border: 1px solid #ffffff;
    width: 600px!important;
    height: 200px!important;
}

.tag_bar {
    margin-top: 3px;
    margin-bottom: 3px;
}

.tag_bar > span {
    display: inline-block;
    min-width: 15px;
 
}

.tag_bar > span:hover {
    color:#fff;
  transition: 0.3s;
}

::-webkit-scrollbar {
    height: 12px;
    width: 14px;
    background: #31b7ff;
}

::-webkit-scrollbar-thumb {
    height: 12px;
    width: 12px;
    border-top: 5px solid #31b7ff;
    border-bottom: 5px solid #31b7ff;
    border-left: 5px solid #31b7ff;
    border-right: 5px solid #31b7ff;
    background-color: #ffffff;
}

::-webkit-scrollbar-thumb:hover {
    background-color:#ffffff;
    transition: all .3s linear;
    -webkit-transition: all .3s linear;
    -moz-transition: all .3s linear; 
}


/*плеер*/

div#beon-fnplayer {
    position: relative;
    margin: 7px auto;
    margin-top: 30px;
    padding: 3px;
    background: transparent;
}

#fnplayer-slider > span { 
    font-size:0px!important;  
} 

#fnplayer-slider {
    height: 4px;
    background-color: #31b7ff !important;
}

#fnplayer-slider-inner {
    height: 4px;
    width: 0%;
    background-color: #ffffff;
}

#fnplayer-volume {
    height:4px;
    background-color: #ffffff;
}


#fnplayer-volume-inner {
    height:4px;
    width: 100%;
    background-color: #31b7ff !important;
    border: none;
}

#fnplayer-volume-mask {
    border:none!important;
}

#fnplayer-play {
    position: absolute;
    top: -22px;
    border-radius: 50px;
    background: #31b7ff;
    left: 0;
    margin: auto !important;
    right: 0;
    border-color: transparent transparent transparent #31b7ff!important;
    border-style:ridge;
    border-width: 10px 1px 10px 16px;
    z-index: 1;
}


#fnplayer-stop {
    position: absolute;
    top: -15px;
    left: 0;
    right: 0;
    margin: auto!important;
    background: #ffffff;
    height: 8px;
    width: 8px;
    z-index: 0;
}

#fnplayer-play.paused {
    border-style: inset;
    border-width: 10px 1px 10px 16px;
    background: #31b7ff;
    z-index: -1;
}

 

@media (max-width: 700px) {

#app > main > div.content > div.post-content > div:nth-child(2) > a {
    margin-left: 78px!important;
}

div#preview-area .post-content > div:nth-child(2) {
    margin-left: 80px!important;
}

div.post-content.post-page > div.post-header {
    margin-left: 80px!important;
}

p.left-menu-text {
margin-top: 10px;
}

.fas, .far {
    font-size: 0.9rem!important;
    padding: 0rem!important;
}

.tag_bar > * {
    padding: 0rem!important;
}

 .col-12  {

    font-size: 0.80rem;
}
span.comments_count span::before {
    font-size: 12px!important;
}

span.comments_count a {
    font-size: 14px!important;
margin-right: -20px!important;
}

.left-menu__friends {
display:none!important;
}

.fa-lock-open:before {
  display:none!important;
}

div#app {
    position: unset !important;
    width: 100% !important;
    min-width: unset !important;
    padding: 0 !important;
}

.left-menu {
    position: unset!important;
    width: 95%!important;
    margin: auto!important;
border-radius:0!important;
}

.content {
    padding: 0!important;
}

.hamburger-menu {
    position: unset!important;
}

.navbar-brand:before {
    position: ABSOLUTE !important;
    writing-mode: horizontal-tb !important;
    transform: rotate(0deg) !important;
    left: 10px !important;
    top: 15% !important;
    width: 119px !important;
    height: 35px !important;
    padding-left: 9px !important;
    padding-top: 0px !important;
}

ul.menu__box {
    width: 67%!important;
    height: 55%!important;
}

.menu__box {
    left: unset!important;
    right: -100%!important;
}

#menu__toggle:checked ~ .menu__box {
    left: unset!important;
    right: 1.5%!important;
}

.post-avatar img {
    width: 70px!important;
}

.left-menu > div.mobile_open_menu > h3 { 
    font-weight: 100;
    margin-bottom: 0.5rem!important;
    font-size: 18px!important;
}

.post-avatar {
    margin-top: -30px!important;
}

.post-content > div:first-child {
    margin-left: 75px !important;
}

.post-title {
    margin-left: 0!important;
    display: block!important;
margin-bottom: 12px!important;
}

.comment-content > div:first-child  {
    margin-left: 78px!important;
}

div.left-menu {
    line-height: normal;
    color: #31b7ff!important;
    padding: calc(16px - 3px) 16px;
    background: #ffffff9e;
    backdrop-filter: blur(3px);
    border: 1px solid #ffffff;
    border-radius: 6px;
    box-sizing: border-box;
    box-shadow: inset 0px 0px 10px rgba(49,183,255,69%);
    /*background: #31b7ff!important;*/
}

.text-right .load_ignored_comments {
    display: block;
    margin-bottom: 30px!important;
}

 body.bodybg {
    margin: 0;
    background: url() no-repeat left fixed, #31b7ff;
}

.emj-dropdown-content {
    background: #31b7ff;
    border: 1px solid #ffffff;
    width: 250px!important;
    height: 200px!important;
}
}
