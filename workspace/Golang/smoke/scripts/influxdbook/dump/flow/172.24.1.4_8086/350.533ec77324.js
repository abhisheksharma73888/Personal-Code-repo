(window.webpackJsonp=window.webpackJsonp||[]).push([[350],{2527:function(o,t,n){"use strict";n.r(t);var e=n(2),i=n(4),s=n(16),c=n(6),a=n(23),r=n(787);t.default=({history:o})=>{const t=Object(i.d)();return Object(e.useEffect)(()=>{const n=()=>{t(Object(r.h)()),t({type:"USER_LOGGED_OUT"})};Object(a.c)("authSessionCookieOn")||n(),(async()=>{if(c.f){const o=Object(a.c)("authSessionCookieOn")?new URL(`${window.location.origin}${c.k}`).href:`${c.l}${c.i}`;return Object(a.c)("authSessionCookieOn")&&n(),void(window.location.href=o)}{Object(a.c)("authSessionCookieOn")&&n();const t=await Object(s.postSignout)({});if(204!==t.status)throw new Error(t.data.message);o.push("/signin")}})()},[t,o]),null}}}]);
//# sourceMappingURL=350.533ec77324.js.map
