(window.webpackJsonp=window.webpackJsonp||[]).push([[49],{100:function(e,t,r){var n=r(101);"string"==typeof n&&(n=[[e.i,n,""]]);var a={hmr:!0,transform:undefined,insertInto:void 0};r(17)(n,a);n.locals&&(e.exports=n.locals)},101:function(e,t,r){(t=r(16)(!1)).push([e.i,".flex-upgrade-content{display:flex;align-items:center}",""]),e.exports=t},1048:function(e,t,r){"use strict";r.d(t,"a",(function(){return f}));var n=r(2),a=r.n(n),o=r(8),s=r(3),i=r(19),c=r.n(i);class l extends n.Component{constructor(){super(...arguments),this.handleClick=()=>{const{id:e,mode:t,selected:r,onToggle:n}=this.props;t!==p.Read&&n&&(r===m.Selected?n(e,m.Unselected):r===m.Unselected&&n(e,m.Selected))}}render(){const{label:e,testID:t}=this.props;return a.a.createElement("li",{className:this.className,onClick:this.handleClick,"data-testid":t||"permissions--item"},this.checkbox,a.a.createElement("label",{className:"permissions-widget--item-label"},e))}get checkbox(){const{mode:e,selected:t}=this.props;return e===p.Write?a.a.createElement("div",{className:"permissions-widget--checkbox"},a.a.createElement("span",{className:`icon ${s.IconFont.Checkmark_New}`})):t===m.Selected?a.a.createElement("div",{className:"permissions-widget--icon"},a.a.createElement("span",{className:`icon ${s.IconFont.Checkmark_New}`})):a.a.createElement("div",{className:"permissions-widget--icon"},a.a.createElement("span",{className:`icon ${s.IconFont.Remove_New}`}))}get className(){const{selected:e,mode:t}=this.props;return c()("permissions-widget--item",{selected:e===m.Selected,unselected:e===m.Unselected,selectable:t===p.Write})}}var d=l;class u extends n.Component{constructor(){super(...arguments),this.handleSelectAll=()=>{const{id:e,onSelectAll:t}=this.props;t&&t(e)},this.handleDeselectAll=()=>{const{id:e,onDeselectAll:t}=this.props;t&&t(e)}}render(){const{title:e,testID:t}=this.props;return a.a.createElement("section",{className:"permissions-widget--section","data-testid":t||"permissions-section"},a.a.createElement("header",{className:"permissions-widget--section-heading"},a.a.createElement("h3",{className:"permissions-widget--section-title"},e),this.selectionButtons),a.a.createElement("ul",{className:"permissions-widget--section-list"},this.sectionItems))}get sectionItems(){const{children:e,mode:t}=this.props;return a.a.Children.map(e,(e=>e.type!==d?null:a.a.createElement(d,Object.assign({},e.props,{mode:t}))))}get selectionButtons(){const{mode:e,title:t}=this.props;if(e===p.Write)return a.a.createElement(s.FlexBox,{margin:s.ComponentSize.Small,direction:s.FlexDirection.Row,justifyContent:s.JustifyContent.FlexEnd},a.a.createElement(s.Button,{text:"Select All",size:s.ComponentSize.ExtraSmall,titleText:`Select all permissions within ${t}`,onClick:this.handleSelectAll}),a.a.createElement(s.Button,{text:"Deselect All",size:s.ComponentSize.ExtraSmall,titleText:`Deselect all permissions within ${t}`,onClick:this.handleDeselectAll}))}}var p,m,h=u;!function(e){e.Read="read",e.Write="write"}(p||(p={})),function(e){e.Selected="selected",e.Unselected="unselected"}(m||(m={}));class g extends n.Component{render(){return a.a.createElement("div",{className:this.className,style:this.style},a.a.createElement("div",{className:"permissions-widget--header"},this.headerText),a.a.createElement("div",{className:"permissions-widget--body"},a.a.createElement(s.DapperScrollbars,{autoHide:!1},this.sections)))}get className(){const{className:e}=this.props;return e?`permissions-widget ${e}`:"permissions-widget"}get sections(){const{children:e,mode:t}=this.props;return a.a.Children.map(e,(e=>e.type!==h?null:a.a.createElement(h,Object.assign({},e.props,{mode:t}))))}get style(){const{heightPixels:e}=this.props;return{height:`${e}px`}}get headerText(){const{mode:e}=this.props;return e===p.Read?"Summary of access permissions":e===p.Write?"Summary of access permissions, each item can be toggled ON or OFF":void 0}}g.defaultProps={heightPixels:500},g.Section=h,g.Item=d;var y=g,b=r(123);class f extends n.PureComponent{constructor(){super(...arguments),this.itemID=(e,t)=>`${e}-${t}-${e||"*"}-${e||"*"}`,this.handleDismiss=()=>{this.props.onDismissOverlay()}}render(){const{description:e}=this.props.auth,t=this.permissions;return a.a.createElement(s.Overlay.Container,{maxWidth:830},a.a.createElement(s.Overlay.Header,{title:e,onDismiss:this.handleDismiss,wrapText:!0}),a.a.createElement(s.Overlay.Body,null,a.a.createElement(b.c,{text:this.props.auth.token,label:e,type:"Token"}),a.a.createElement(y,{mode:p.Read,heightPixels:500},Object.keys(t).map((e=>a.a.createElement(y.Section,{key:e,id:e,title:e,mode:p.Read},t[e].map(((t,r)=>a.a.createElement(y.Item,{key:r,label:t,id:this.itemID(e,t),selected:m.Selected})))))))))}get permissions(){return this.props.auth.permissions.reduce(((e,{action:t,resource:r})=>{const{type:n}=r,a=Object(o.get)(r,"name","");let s=`${n}`;a&&(s=`${n}-${a}`);let i=Object(o.get)(e,s,[]);return a&&i?Object.assign(Object.assign({},e),{[s]:[...i,t]}):(i=Object(o.get)(e,s||r.type,[]),Object.assign(Object.assign({},e),{[n]:[...i,t]}))}),{})}}},110:function(e,t,r){"use strict";var n=r(306).CopyToClipboard;n.CopyToClipboard=n,e.exports=n},116:function(e,t,r){"use strict";var n=r(14),a=r(2),o=r.n(a),s=r(8),i=r(3),c=r(15),l=r(42);let d=class extends a.Component{constructor(e){super(e),this.handleSearch=()=>{this.props.onSearch(this.state.searchTerm)},this.handleBlur=e=>{this.setState({searchTerm:e.target.value},this.handleSearch)},this.handleChange=e=>{this.setState({searchTerm:e.target.value},this.handleSearch)},this.clear=()=>{this.setState({searchTerm:""},this.handleSearch)},this.state={searchTerm:this.props.searchTerm}}componentDidUpdate(e){this.props.searchTerm!==e.searchTerm&&this.setState({searchTerm:this.props.searchTerm})}UNSAFE_componentWillMount(){this.handleSearch=Object(s.debounce)(this.handleSearch,50)}render(){const{placeholderText:e,testID:t,tabIndex:r=0,autoFocus:n,size:a}=this.props,{searchTerm:s}=this.state;return o.a.createElement(l.a,null,o.a.createElement(i.Input,{icon:i.IconFont.Search_New,placeholder:e,value:s,onChange:this.handleChange,onBlur:this.handleBlur,testID:t,className:"search-widget-input",tabIndex:r,onClear:this.clear,autoFocus:n,size:a}))}};d.defaultProps={widthPixels:440,placeholderText:"Search...",searchTerm:"",testID:"search-widget",autoFocus:!1,tabIndex:0,size:i.ComponentSize.Small},d=Object(n.a)([c.a,Object(n.b)("design:paramtypes",[Object])],d),t.a=d},123:function(e,t,r){"use strict";r.d(t,"a",(function(){return d})),r.d(t,"d",(function(){return u})),r.d(t,"b",(function(){return p}));var n=r(2),a=r.n(n),o=r(4),s=r(3),i=r(145),c=r(13),l=r(10);const d=Object(n.createContext)({variables:{},update:e=>{},transform:e=>e}),u=(e,t)=>new Function("vars","var output="+JSON.stringify(e).replace(/<%=(.+?)%>/g,'"+(vars["$1".trim()])+"')+";return output;")(t),p=({variables:e,children:t})=>{const[r,o]=Object(n.useState)(e||{});return Object(n.useEffect)((()=>{e&&o(e)}),[e]),a.a.createElement(d.Provider,{value:{variables:r,update:o,transform:e=>u(e,r)}},t)};t.c=({text:e,label:t,testID:r,type:u,onCopy:p})=>{const{transform:m}=Object(n.useContext)(d),h=Object(o.d)(),g=m(e);return a.a.createElement("div",{className:"code-snippet","data-testid":r||"code-snippet"},a.a.createElement(s.DapperScrollbars,{autoHide:!1,autoSizeHeight:!0,className:"code-snippet--scroll"},a.a.createElement("div",{className:"code-snippet--text"},a.a.createElement("pre",null,a.a.createElement("code",null,g)))),a.a.createElement("div",{className:"code-snippet--footer"},a.a.createElement(i.a,{text:g,onCopy:()=>{"function"==typeof p&&p(),h(Object(l.c)(Object(c.Y)(`${g.slice(0,30).trimRight()}...`,null!=u?u:"Script")))}}),t&&a.a.createElement("label",{className:"code-snippet--label"},t)))}},136:function(e,t,r){"use strict";r.d(t,"a",(function(){return d}));var n=r(4),a=r(2),o=r(8);const s=/\w+\[\]/g,i=/\[\]?\./;class c extends a.PureComponent{constructor(e){super(e),this.createIndex=e=>Object(o.flatMap)(e,this.extractSuffixes).sort(),this.checkIndex=(e,t)=>{const r=e[Object(o.sortedIndex)(e,t)];return!(!r||!r.includes(t))},this.extractSuffixes=e=>{const t=new Array(e.length),r=e.toLocaleLowerCase();for(let e=0;e<t.length;e++)t[e]=r.slice(e);return t},this.collator=new Intl.Collator("en-us",{numeric:!0})}render(){return this.props.children(this.sorted)}get sorted(){return this.filtered.sort(((e,t)=>this.props.sortByKey?this.collator.compare(Object(o.get)(e,this.props.sortByKey),Object(o.get)(t,this.props.sortByKey)):this.collator.compare(e.name,t.name)))}get filtered(){const{list:e,labels:t,searchKeys:r}=this.props,{formattedSearchTerm:n}=this;if(Object(o.isEmpty)(n))return e;return e.filter((e=>{const a=Object.assign(Object.assign({},e),{labels:Object(o.get)(e,"labels",[]).map((e=>t[e]))});return r.some((e=>{const t=this.getKey(a,e),r=this.isStringArray(t);if(!r&&"object"==typeof t)throw new Error(`The value at key "${e}" is an object.  Take a look at "searchKeys" and\n             make sure you're indexing onto a primitive value`);if(r){const e=this.createIndex(t);return this.checkIndex(e,n)}return String(t).toLocaleLowerCase().includes(n)}))}))}isStringArray(e){return!!Array.isArray(e)&&!(!Object(o.isEmpty)(e)&&"string"!=typeof e[0])}get formattedSearchTerm(){return this.props.searchTerm.trimLeft().toLocaleLowerCase()}getKey(e,t){return t.match(s)?this.getInExactKey(e,t):Object(o.get)(e,t,"")}getInExactKey(e,t){return t.split(i).reduce(((e,t)=>Object(o.flatMap)(e,(e=>Object(o.get)(e,t,[])))),[e])}}const l=e=>({labels:e.resources.labels.byID});function d(){return Object(n.c)(l)(c)}},145:function(e,t,r){"use strict";var n=r(2),a=r.n(n),o=r(110),s=r.n(o),i=r(3);class c extends n.PureComponent{constructor(){super(...arguments),this.handleClickCopy=e=>{e.stopPropagation(),e.preventDefault()},this.handleCopyAttempt=()=>{const{onCopy:e}=this.props;e&&e()}}render(){const{text:e,testID:t,size:r}=this.props;return a.a.createElement(s.a,{text:e,onCopy:this.handleCopyAttempt},a.a.createElement(i.Button,{shape:i.ButtonShape.Default,size:r||i.ComponentSize.ExtraSmall,color:i.ComponentColor.Secondary,titleText:"Copy to Clipboard",text:"Copy to Clipboard",onClick:this.handleClickCopy,testID:null!=t?t:"button-copy"}))}}t.a=c},161:function(e,t,r){"use strict";var n=r(2),a=r(6);t.a=class extends n.PureComponent{render(){const{children:e}=this.props;return a.f?null:e}}},182:function(e,t,r){"use strict";var n=r(2),a=r.n(n),o=r(3),s=r(109),i=r(5);t.a=function({sortDirection:e,sortKey:t,sortType:r,onSelect:n,resourceType:c,width:l=210}){const d=(e=>{switch(e){case i.ResourceType.Dashboards:return[{label:"Name (A → Z)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Name (Z → A)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Modified (Oldest)",sortKey:"meta.updatedAt",sortType:s.a.Date,sortDirection:o.Sort.Ascending},{label:"Modified (Newest)",sortKey:"meta.updatedAt",sortType:s.a.Date,sortDirection:o.Sort.Descending}];case i.ResourceType.Tasks:return[{label:"Name (A → Z)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Name (Z → A)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Active",sortKey:"status",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Inactive",sortKey:"status",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Completed (Oldest)",sortKey:"latestCompleted",sortType:s.a.Date,sortDirection:o.Sort.Ascending},{label:"Completed (Newest)",sortKey:"latestCompleted",sortType:s.a.Date,sortDirection:o.Sort.Descending},{label:"Schedule (Most Often)",sortKey:"every",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Schedule (Least Often)",sortKey:"every",sortType:s.a.String,sortDirection:o.Sort.Descending}];case i.ResourceType.Variables:return[{label:"Name (A → Z)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Name (Z → A)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Type (A → Z)",sortKey:"arguments.type",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Type (Z → A)",sortKey:"arguments.type",sortType:s.a.String,sortDirection:o.Sort.Descending}];case i.ResourceType.Secrets:return[{label:"Name (A → Z)",sortKey:"id",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Name (Z → A)",sortKey:"id",sortType:s.a.String,sortDirection:o.Sort.Descending}];case i.ResourceType.Labels:return[{label:"Name (A → Z)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Name (Z → A)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Description (A → Z)",sortKey:"properties.description",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Description (Z → A)",sortKey:"properties.description",sortType:s.a.String,sortDirection:o.Sort.Descending}];case i.ResourceType.Templates:return[{label:"Name (A → Z)",sortKey:"meta.name",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Name (Z → A)",sortKey:"meta.name",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Description (A → Z)",sortKey:"meta.description",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Description (Z → A)",sortKey:"meta.description",sortType:s.a.String,sortDirection:o.Sort.Descending}];case i.ResourceType.Buckets:return[{label:"Name (A → Z)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Name (Z → A)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Retention (Ascending)",sortKey:"retentionRules[0].everySeconds",sortType:s.a.Float,sortDirection:o.Sort.Ascending},{label:"Retention (Descending)",sortKey:"retentionRules[0].everySeconds",sortType:s.a.Float,sortDirection:o.Sort.Descending}];case i.ResourceType.Telegrafs:return[{label:"Name (A → Z)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Name (Z → A)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Description (Ascending)",sortKey:"description",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Description (Descending)",sortKey:"description",sortType:s.a.String,sortDirection:o.Sort.Descending}];case i.ResourceType.Scrapers:return[{label:"Name (A → Z)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Name (Z → A)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"URL (Ascending)",sortKey:"url",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"URL (Descending)",sortKey:"url",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Bucket (Ascending)",sortKey:"bucket",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Bucket (Descending)",sortKey:"bucket",sortType:s.a.String,sortDirection:o.Sort.Descending}];case i.ResourceType.Authorizations:return[{label:"Description (A → Z)",sortKey:"description",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Description (Z → A)",sortKey:"description",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Status (Active)",sortKey:"status",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Status (Inactive)",sortKey:"status",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Date Created (Oldest)",sortKey:"createdAt",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Date Created (Newest)",sortKey:"createdAt",sortType:s.a.String,sortDirection:o.Sort.Descending}];case i.ResourceType.Flows:return[{label:"Name (A → Z)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Ascending},{label:"Name (Z → A)",sortKey:"name",sortType:s.a.String,sortDirection:o.Sort.Descending},{label:"Created (Oldest)",sortKey:"createdAt",sortType:s.a.Date,sortDirection:o.Sort.Ascending},{label:"Created (Newest)",sortKey:"createdAt",sortType:s.a.Date,sortDirection:o.Sort.Descending}]}})(c),{label:u}=d.find((n=>n.sortKey===t&&n.sortDirection===e&&n.sortType===r)),p=e=>{const{sortKey:t,sortDirection:r,sortType:a}=e;n(t,r,a)};return a.a.createElement(o.Dropdown,{button:(e,t)=>a.a.createElement(o.Dropdown.Button,{onClick:t,active:e,testID:"resource-sorter--button"},`Sort by ${u}`),menu:n=>a.a.createElement(o.Dropdown.Menu,{onCollapse:n},d.map((n=>a.a.createElement(o.Dropdown.Item,{key:`${n.sortKey}${n.sortDirection}`,value:n,onClick:p,testID:`resource-sorter--${n.sortKey}-${n.sortDirection}`,selected:n.sortKey===t&&n.sortType===r&&n.sortDirection===e},n.label)))),style:{flexBasis:`${l}px`,width:`${l}px`},testID:"resource-sorter"})}},240:function(e,t,r){"use strict";var n=r(2),a=r.n(n);t.a=({childrenLeft:e,childrenRight:t,width:r})=>{let n=a.a.createElement(a.a.Fragment,null),o=a.a.createElement(a.a.Fragment,null);return e&&(n=a.a.createElement("div",{className:"tabbed-page--header-left"},e)),t&&(o=a.a.createElement("div",{className:"tabbed-page--header-right"},t)),r?a.a.createElement("div",{className:"tabbed-page--header","data-testid":"tabbed-page--header",style:{width:r}},n,o):a.a.createElement("div",{className:"tabbed-page--header","data-testid":"tabbed-page--header"},n,o)}},2555:function(e,t,r){"use strict";r.r(t);var n=r(14),a=r(2),o=r.n(a),s=r(184),i=r(3),c=r(15),l=r(350),d=r(341),u=r(98),p=r(4),m=r(8),h=r(116),g=r(351),y=r(980),b=r(1048),f=r(109);class S extends a.PureComponent{constructor(e){super(e),this.memGetSortedResources=Object(g.a)(f.b),this.handleDismissOverlay=()=>{this.setState({isTokenOverlayVisible:!1})},this.handleClickDescription=e=>{const t=this.props.auths.find((t=>t.id===e));this.setState({isTokenOverlayVisible:!0,authInView:t})},this.state={isTokenOverlayVisible:!1,authInView:null}}render(){const{isTokenOverlayVisible:e,authInView:t}=this.state;return o.a.createElement(o.a.Fragment,null,o.a.createElement(i.ResourceList,null,o.a.createElement(i.ResourceList.Body,{emptyState:this.props.emptyState,testID:"token-list"},this.rows)),o.a.createElement(i.Overlay,{visible:e},o.a.createElement(b.a,{auth:t,onDismissOverlay:this.handleDismissOverlay})))}get rows(){const{auths:e,sortDirection:t,sortKey:r,sortType:n}=this.props;return this.memGetSortedResources(e,r,t,n).map((e=>o.a.createElement(y.a,{key:e.id,auth:e,onClickDescription:this.handleClickDescription})))}}var D,C=r(136),E=r(240),v=r(437),T=r(182),x=r(981),O=r(5),k=r(11);!function(e){e.Description="description",e.Status="status",e.CreatedAt="createdAt"}(D||(D={}));const w=Object(C.a)();class j extends a.PureComponent{constructor(e){super(e),this.handleSort=(e,t,r)=>{this.setState({sortKey:e,sortDirection:t,sortType:r})},this.handleClickColumn=(e,t)=>{const r=f.a.String;this.setState({sortKey:t,sortDirection:e,sortType:r})},this.handleChangeSearchTerm=e=>{this.setState({searchTerm:e})},this.state={searchTerm:"",sortKey:"description",sortDirection:i.Sort.Ascending,sortType:f.a.String}}render(){const{searchTerm:e,sortKey:t,sortDirection:r,sortType:n}=this.state,{tokens:a}=this.props,s=o.a.createElement(o.a.Fragment,null,o.a.createElement(h.a,{searchTerm:e,placeholderText:"Filter API Tokens...",onSearch:this.handleChangeSearchTerm,testID:"input-field--filter"}),o.a.createElement(T.a,{resourceType:O.ResourceType.Authorizations,sortDirection:r,sortKey:t,sortType:n,onSelect:this.handleSort,width:238})),c=o.a.createElement(v.a,null);return o.a.createElement(o.a.Fragment,null,o.a.createElement(i.FlexBox,{direction:i.FlexDirection.Column,alignItems:i.AlignItems.Center,margin:i.ComponentSize.Large},o.a.createElement(i.BannerPanel,{size:i.ComponentSize.ExtraSmall,gradient:i.Gradients.PolarExpress,icon:i.IconFont.Bell,hideMobileIcon:!0,textColor:i.InfluxColors.Yeti},o.a.createElement(x.a,null)),o.a.createElement(E.a,{childrenLeft:s,childrenRight:c}),o.a.createElement(w,{list:a,searchTerm:e,searchKeys:this.searchKeys},(a=>o.a.createElement(S,{auths:a,emptyState:this.emptyState,searchTerm:e,sortKey:t,sortDirection:r,sortType:n,onClickColumn:this.handleClickColumn})))))}get searchKeys(){return[D.Status,D.Description,D.CreatedAt]}get emptyState(){const{searchTerm:e}=this.state;return Object(m.isEmpty)(e)?o.a.createElement(i.EmptyState,{size:i.ComponentSize.Large},o.a.createElement(i.EmptyState.Text,null,"Looks like there aren't any ",o.a.createElement("b",null,"API Tokens"),", why not generate one?"),o.a.createElement(v.a,null)):o.a.createElement(i.EmptyState,{size:i.ComponentSize.Large},o.a.createElement(i.EmptyState.Text,null,"No API Tokens match your query"))}}var I=Object(p.c)((e=>({tokens:Object(k.a)(e,O.ResourceType.Authorizations)})))(Object(s.j)(j)),A=r(364),N=r(63),K=r(193);const $=`/${K.m}/${K.n}/load-data/${K.v}/generate`;let P=class extends a.Component{render(){return o.a.createElement(o.a.Fragment,null,o.a.createElement(i.Page,{titleTag:Object(N.a)(["API Tokens","Load Data"])},o.a.createElement(d.a,null),o.a.createElement(l.a,{activeTab:"tokens"},o.a.createElement(u.a,{resources:[O.ResourceType.Authorizations]},o.a.createElement(I,null)))),o.a.createElement(s.c,null,o.a.createElement(s.a,{path:`${$}/all-access`,component:A.c}),o.a.createElement(s.a,{path:`${$}/buckets`,component:A.d})))}};P=Object(n.a)([c.a],P);t.default=P},29:function(e,t,r){"use strict";r.d(t,"a",(function(){return n})),r.d(t,"b",(function(){return a})),r.d(t,"c",(function(){return o}));const n=e=>e.me,a=e=>e.me.quartzMe,o=e=>{var t,r;const{quartzMe:n}=e.me,a=null!==(t=null==n?void 0:n.isRegionBeta)&&void 0!==t&&t;return"free"===(null!==(r=null==n?void 0:n.accountType)&&void 0!==r?r:"free")&&!1===a}},306:function(e,t,r){"use strict";Object.defineProperty(t,"__esModule",{value:!0}),t.CopyToClipboard=void 0;var n=o(r(2)),a=o(r(307));function o(e){return e&&e.__esModule?e:{default:e}}function s(e){return s="function"==typeof Symbol&&"symbol"==typeof Symbol.iterator?function(e){return typeof e}:function(e){return e&&"function"==typeof Symbol&&e.constructor===Symbol&&e!==Symbol.prototype?"symbol":typeof e},s(e)}function i(e,t){var r=Object.keys(e);if(Object.getOwnPropertySymbols){var n=Object.getOwnPropertySymbols(e);t&&(n=n.filter((function(t){return Object.getOwnPropertyDescriptor(e,t).enumerable}))),r.push.apply(r,n)}return r}function c(e,t){if(null==e)return{};var r,n,a=function(e,t){if(null==e)return{};var r,n,a={},o=Object.keys(e);for(n=0;n<o.length;n++)r=o[n],t.indexOf(r)>=0||(a[r]=e[r]);return a}(e,t);if(Object.getOwnPropertySymbols){var o=Object.getOwnPropertySymbols(e);for(n=0;n<o.length;n++)r=o[n],t.indexOf(r)>=0||Object.prototype.propertyIsEnumerable.call(e,r)&&(a[r]=e[r])}return a}function l(e,t){if(!(e instanceof t))throw new TypeError("Cannot call a class as a function")}function d(e,t){for(var r=0;r<t.length;r++){var n=t[r];n.enumerable=n.enumerable||!1,n.configurable=!0,"value"in n&&(n.writable=!0),Object.defineProperty(e,n.key,n)}}function u(e,t){return!t||"object"!==s(t)&&"function"!=typeof t?m(e):t}function p(e){return p=Object.setPrototypeOf?Object.getPrototypeOf:function(e){return e.__proto__||Object.getPrototypeOf(e)},p(e)}function m(e){if(void 0===e)throw new ReferenceError("this hasn't been initialised - super() hasn't been called");return e}function h(e,t){return h=Object.setPrototypeOf||function(e,t){return e.__proto__=t,e},h(e,t)}function g(e,t,r){return t in e?Object.defineProperty(e,t,{value:r,enumerable:!0,configurable:!0,writable:!0}):e[t]=r,e}var y=function(e){function t(){var e,r;l(this,t);for(var o=arguments.length,s=new Array(o),i=0;i<o;i++)s[i]=arguments[i];return g(m(r=u(this,(e=p(t)).call.apply(e,[this].concat(s)))),"onClick",(function(e){var t=r.props,o=t.text,s=t.onCopy,i=t.children,c=t.options,l=n.default.Children.only(i),d=(0,a.default)(o,c);s&&s(o,d),l&&l.props&&"function"==typeof l.props.onClick&&l.props.onClick(e)})),r}var r,o,s;return function(e,t){if("function"!=typeof t&&null!==t)throw new TypeError("Super expression must either be null or a function");e.prototype=Object.create(t&&t.prototype,{constructor:{value:e,writable:!0,configurable:!0}}),t&&h(e,t)}(t,e),r=t,o=[{key:"render",value:function(){var e=this.props,t=(e.text,e.onCopy,e.options,e.children),r=c(e,["text","onCopy","options","children"]),a=n.default.Children.only(t);return n.default.cloneElement(a,function(e){for(var t=1;t<arguments.length;t++){var r=null!=arguments[t]?arguments[t]:{};t%2?i(r,!0).forEach((function(t){g(e,t,r[t])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(r)):i(r).forEach((function(t){Object.defineProperty(e,t,Object.getOwnPropertyDescriptor(r,t))}))}return e}({},r,{onClick:this.onClick}))}}],o&&d(r.prototype,o),s&&d(r,s),t}(n.default.PureComponent);t.CopyToClipboard=y,g(y,"defaultProps",{onCopy:void 0,options:void 0})},307:function(e,t,r){"use strict";var n=r(308),a={"text/plain":"Text","text/html":"Url",default:"Text"};e.exports=function(e,t){var r,o,s,i,c,l,d=!1;t||(t={}),r=t.debug||!1;try{if(s=n(),i=document.createRange(),c=document.getSelection(),(l=document.createElement("span")).textContent=e,l.style.all="unset",l.style.position="fixed",l.style.top=0,l.style.clip="rect(0, 0, 0, 0)",l.style.whiteSpace="pre",l.style.webkitUserSelect="text",l.style.MozUserSelect="text",l.style.msUserSelect="text",l.style.userSelect="text",l.addEventListener("copy",(function(n){if(n.stopPropagation(),t.format)if(n.preventDefault(),void 0===n.clipboardData){r&&console.warn("unable to use e.clipboardData"),r&&console.warn("trying IE specific stuff"),window.clipboardData.clearData();var o=a[t.format]||a.default;window.clipboardData.setData(o,e)}else n.clipboardData.clearData(),n.clipboardData.setData(t.format,e);t.onCopy&&(n.preventDefault(),t.onCopy(n.clipboardData))})),document.body.appendChild(l),i.selectNodeContents(l),c.addRange(i),!document.execCommand("copy"))throw new Error("copy command was unsuccessful");d=!0}catch(n){r&&console.error("unable to copy using execCommand: ",n),r&&console.warn("trying IE specific stuff");try{window.clipboardData.setData(t.format||"text",e),t.onCopy&&t.onCopy(window.clipboardData),d=!0}catch(n){r&&console.error("unable to copy using clipboardData: ",n),r&&console.error("falling back to prompt"),o=function(e){var t=(/mac os x/i.test(navigator.userAgent)?"⌘":"Ctrl")+"+C";return e.replace(/#{\s*key\s*}/g,t)}("message"in t?t.message:"Copy to clipboard: #{key}, Enter"),window.prompt(o,e)}}finally{c&&("function"==typeof c.removeRange?c.removeRange(i):c.removeAllRanges()),l&&document.body.removeChild(l),s()}return d}},308:function(e,t){e.exports=function(){var e=document.getSelection();if(!e.rangeCount)return function(){};for(var t=document.activeElement,r=[],n=0;n<e.rangeCount;n++)r.push(e.getRangeAt(n));switch(t.tagName.toUpperCase()){case"INPUT":case"TEXTAREA":t.blur();break;default:t=null}return e.removeAllRanges(),function(){"Caret"===e.type&&e.removeAllRanges(),e.rangeCount||r.forEach((function(t){e.addRange(t)})),t&&t.focus()}}},337:function(e,t,r){"use strict";r.d(t,"a",(function(){return l}));var n=r(2),a=r.n(n),o=r(184),s=r(4),i=r(34);const c=Object(o.j)((e=>{const{overlayID:t,onClose:r,match:a,history:o}=e,c=Object(s.d)();return Object(n.useEffect)((()=>(c(Object(i.d)(t,a.params,(()=>{r(o,a.params)}))),()=>{c(Object(i.b)())})),[t]),null}));function l(e,t,r){return class extends n.Component{render(){return a.a.createElement(e,Object.assign({},this.props,{onClose:r,overlayID:t}))}}}t.b=c},341:function(e,t,r){"use strict";var n=r(2),a=r.n(n),o=r(3),s=r(89);t.a=()=>a.a.createElement(o.Page.Header,{fullWidth:!1,testID:"load-data--header"},a.a.createElement(o.Page.Title,{title:"Load Data"}),a.a.createElement(s.a,null))},350:function(e,t,r){"use strict";var n=r(2),a=r.n(n),o=r(4),s=r(42),i=r(14),c=r(184),l=r(3),d=r(24),u=r(15),p=r(161);let m=class extends n.PureComponent{render(){const{activeTab:e,orgID:t,history:r}=this.props,n=e=>{r.push(`/orgs/${t}/load-data/${e}`)},o=[{text:"Sources",id:"sources",cloudExclude:!1,featureFlag:null},{text:"Buckets",id:"buckets",cloudExclude:!1,featureFlag:null},{text:"Telegraf",id:"telegrafs",cloudExclude:!1,featureFlag:null},{text:"Scrapers",id:"scrapers",cloudExclude:!0,featureFlag:null},{text:"API Tokens",id:"tokens",cloudExclude:!1,featureFlag:null}],s=o.find((t=>t.id===e)).text;return a.a.createElement(l.Tabs,{orientation:l.Orientation.Horizontal,size:l.ComponentSize.Large,dropdownBreakpoint:872,dropdownLabel:s},o.map((t=>{let r=a.a.createElement(l.Tabs.Tab,{testID:`${t.id}--tab`,key:t.id,text:t.text,id:t.id,onClick:n,active:t.id===e});return t.cloudExclude&&(r=a.a.createElement(p.a,{key:t.id},r)),t.featureFlag&&(r=a.a.createElement(d.a,{key:t.id,name:t.featureFlag},r)),r})))}};m=Object(i.a)([u.a],m);var h=Object(c.j)(m),g=r(9);const y=e=>("buckets"!==e||!Object(d.c)("fetchAllBuckets"))&&("tokens"!==e||!Object(d.c)("paginatedTokens")),b=Object(o.c)((e=>({orgID:Object(g.a)(e).id})));t.a=b((({activeTab:e,orgID:t,children:r})=>a.a.createElement(l.Page.Contents,{fullWidth:!1,scrollable:y(e),scrollbarSize:l.ComponentSize.Large,autoHideScrollbar:!0},a.a.createElement(l.Tabs.Container,{orientation:l.Orientation.Horizontal,stretchToFitHeight:!0},a.a.createElement(h,{activeTab:e,orgID:t}),a.a.createElement(s.a,null,a.a.createElement(l.Tabs.TabContents,null,r))))))},364:function(e,t,r){"use strict";r.d(t,"b",(function(){return o})),r.d(t,"j",(function(){return s})),r.d(t,"c",(function(){return i})),r.d(t,"f",(function(){return c})),r.d(t,"d",(function(){return l})),r.d(t,"a",(function(){return d})),r.d(t,"h",(function(){return u})),r.d(t,"i",(function(){return p})),r.d(t,"m",(function(){return m})),r.d(t,"g",(function(){return h})),r.d(t,"e",(function(){return g})),r.d(t,"o",(function(){return y})),r.d(t,"l",(function(){return b})),r.d(t,"n",(function(){return f})),r.d(t,"k",(function(){return S}));var n=r(337),a=r(193);const o=Object(n.a)(n.b,"add-note",((e,t)=>{e.push(`/orgs/${t.orgID}/dashboards/${t.dashboardID}`)})),s=Object(n.a)(n.b,"edit-note",((e,t)=>{e.push(`/orgs/${t.orgID}/dashboards/${t.dashboardID}`)})),i=Object(n.a)(n.b,"add-master-token",((e,t)=>{e.push(`/orgs/${t.orgID}/load-data/tokens`)})),c=Object(n.a)(n.b,"add-custom-token",((e,t)=>{e.push(`/orgs/${t.orgID}/load-data/tokens`)})),l=Object(n.a)(n.b,"add-token",((e,t)=>{e.push(`/orgs/${t.orgID}/load-data/tokens`)})),d=(Object(n.a)(n.b,"telegraf-config",((e,t)=>{e.push(`/orgs/${t.orgID}/load-data/telegrafs`)})),Object(n.a)(n.b,"telegraf-output",((e,t)=>{e.push(`/orgs/${t.orgID}/load-data/telegrafs`)})),Object(n.a)(n.b,"add-annotation",((e,t)=>{e.push(`/${a.m}/${t.orgID}/${a.g}`)}))),u=(Object(n.a)(n.b,"add-annotation",((e,t)=>{e.push(`/${a.m}/${t.orgID}/${a.e}/${t.dashboardID}`)})),Object(n.a)(n.b,"edit-annotation",((e,t)=>{e.push(`/${a.m}/${t.orgID}/${a.g}`)}))),p=Object(n.a)(n.b,"edit-annotation",((e,t)=>{e.push(`/${a.m}/${t.orgID}/${a.e}/${t.dashboardID}`)})),m=Object(n.a)(n.b,"check-threshold",((e,t)=>{e.push(`/${a.m}/${t.orgID}/alerting`)})),h=Object(n.a)(n.b,"deadman-check",((e,t)=>{e.push(`/${a.m}/${t.orgID}/alerting`)})),g=Object(n.a)(n.b,"create-variable",((e,t)=>{e.push(`/orgs/${t.orgID}/settings/variables`)})),y=Object(n.a)(n.b,"import-variable",((e,t)=>{e.push(`/orgs/${t.orgID}/settings/variables`)})),b=Object(n.a)(n.b,"rename-variable",((e,t)=>{e.push(`/orgs/${t.orgID}/settings/variables`)})),f=Object(n.a)(n.b,"update-variable",((e,t)=>{e.push(`/orgs/${t.orgID}/settings/variables`)})),S=Object(n.a)(n.b,"export-variable",((e,t)=>{e.push(`/orgs/${t.orgID}/settings/variables`)}))},437:function(e,t,r){"use strict";var n=r(2),a=r.n(n),o=r(4),s=r(184),i=r(3),c=r(9);t.a=Object(s.j)((({history:e})=>{const t=Object(o.e)(c.a),r="Read/Write API Token",n="All Access API Token",s=a=>{a===n?e.push(`/orgs/${t.id}/load-data/tokens/generate/all-access`):a===r&&e.push(`/orgs/${t.id}/load-data/tokens/generate/buckets`)};return a.a.createElement(i.Dropdown,{testID:"dropdown--gen-token",style:{width:"240px"},button:(e,t)=>a.a.createElement(i.Dropdown.Button,{active:e,onClick:t,icon:i.IconFont.Plus_New,color:i.ComponentColor.Primary,testID:"dropdown-button--gen-token",style:{textTransform:"uppercase",letterSpacing:"0.07em"}},"Generate API Token"),menu:e=>a.a.createElement(i.Dropdown.Menu,{onCollapse:e},a.a.createElement(i.Dropdown.Item,{testID:"dropdown-item generate-token--read-write",id:r,key:r,value:r,onClick:s},r),a.a.createElement(i.Dropdown.Item,{testID:"dropdown-item generate-token--all-access",id:n,key:n,value:n,onClick:s},n))})}))},50:function(e,t,r){"use strict";var n=r(2),a=r.n(n),o=r(4),s=r(19),i=r.n(s),c=r(184),l=r(3),d=r(77),u=r(29);t.a=({size:e=l.ComponentSize.Small,className:t,buttonText:r="Upgrade Now",metric:n})=>{const s=Object(o.e)(u.c),p=i()("upgrade-payg--button",{[`${t}`]:t}),m=Object(c.f)();return a.a.createElement(d.a,null,s&&a.a.createElement(l.Button,{icon:l.IconFont.CrownSolid_New,className:p,size:e,shape:l.ButtonShape.Default,onClick:()=>{n&&n(),m.push("/checkout")},text:r,style:{background:"linear-gradient(45deg, rgb(52, 187, 85) 0%, rgb(0, 163, 255) 100%)"},testID:"cloud-upgrade--button"}))}},53:function(e,t,r){"use strict";r.d(t,"a",(function(){return m}));var n=r(2),a=r.n(n),o=r(4),s=r(19),i=r.n(s),c=r(3),l=r(50),d=r(34),u=r(29),p=r(7);const m=({type:e,link:t,className:r,limitText:n})=>a.a.createElement("div",{className:`${r} rate-alert--content__free`},a.a.createElement("span",null,"Oh no! You hit the"," ",a.a.createElement("a",{href:t,className:"rate-alert--docs-link",target:"_blank",rel:"noreferrer"},"series cardinality"===e?"series cardinality":"query write")," ","limit ",null!=n?n:""," and your data stopped writing. Don’t lose important metrics."),a.a.createElement(c.FlexBox,{justifyContent:c.JustifyContent.Center,className:"rate-alert--button"},a.a.createElement(l.a,{className:"upgrade-payg--button__rate-alert",metric:()=>Object(p.a)(`user.limits.${e}.upgrade`)})));t.b=({className:e})=>{const t=Object(o.d)(),r=Object(o.e)(u.c),n=i()("rate-alert--content",{[`${e}`]:e});return r?a.a.createElement(m,{type:"series cardinality",link:"https://docs.influxdata.com/influxdb/v2.0/write-data/best-practices/resolve-high-cardinality/",className:n}):a.a.createElement("div",{className:`${n} rate-alert--content__payg`},a.a.createElement("span",null,"Data in has stopped because you've hit the"," ",a.a.createElement("a",{href:"https://docs.influxdata.com/influxdb/v2.0/write-data/best-practices/resolve-high-cardinality/",className:"rate-alert--docs-link",target:"_blank",rel:"noreferrer"},"series cardinality")," ","limit. Let's get it flowing again."),a.a.createElement(c.FlexBox,{justifyContent:c.JustifyContent.Center,className:"rate-alert--button"},a.a.createElement(c.Button,{className:"rate-alert-overlay-button",color:c.ComponentColor.Primary,size:c.ComponentSize.Small,onClick:()=>{t(Object(d.d)("rate-limit",null,(()=>t(d.b))))},text:"Inspect Series Cardinality"})))}},63:function(e,t,r){"use strict";r.d(t,"a",(function(){return s}));var n=r(9),a=r(124),o=r(6);const s=e=>{const t=Object(a.a)().getState(),r=Object(n.a)(t),s=o.f?"InfluxDB Cloud":"InfluxDB";return(r&&r.name?[...e,Object(n.a)(t).name,s]:[...e,s]).join(" | ")}},77:function(e,t,r){"use strict";var n=r(2),a=r(6);t.a=class extends n.PureComponent{render(){const{children:e}=this.props;return a.f?e:null}}},89:function(e,t,r){"use strict";var n=r(2),a=r.n(n),o=r(4),s=r(19),i=r.n(s),c=r(3),l=r(50),d=r(43),u=r(6),p=r(53),m=r(10),h=r(13),g=r(29),y=r(34);r(100);const b={sendNotify:m.c,handleShowOverlay:y.d,handleDismissOverlay:y.b};t.a=Object(o.c)((e=>{const t=Object(d.j)(e);return{status:Object(d.k)(e),resources:t,showUpgrade:Object(g.c)(e)}}),b)((({status:e,alertOnly:t,className:r,resources:o,showUpgrade:s,sendNotify:d,handleShowOverlay:m,handleDismissOverlay:g})=>{const y=()=>{m("write-limit",null,g)};Object(n.useEffect)((()=>{u.f&&"exceeded"===e&&o.includes("write")&&d(s?Object(h.Ud)("",a.a.createElement(p.a,{type:"write",link:"https://docs.influxdata.com/influxdb/v2.0/write-data/best-practices/optimize-writes/",className:"flex-upgrade-content"})):Object(h.Ud)("Data in has stopped because you've hit the query write limit. Let's get it flowing again: ",a.a.createElement(c.Button,{className:"rate-alert-overlay-button",color:c.ComponentColor.Primary,size:c.ComponentSize.Small,onClick:y,text:"Request Write Limit Increase"})))}),[s,e]);const b=i()("rate-alert",{[`${r}`]:r});return u.f&&"exceeded"===e&&o.includes("cardinality")?a.a.createElement(c.FlexBox,{direction:c.FlexDirection.Column,alignItems:c.AlignItems.Center,margin:c.ComponentSize.Large,className:b},a.a.createElement(c.BannerPanel,{size:c.ComponentSize.ExtraSmall,gradient:c.Gradients.PolarExpress,icon:c.IconFont.Cloud,hideMobileIcon:!0,textColor:c.InfluxColors.Yeti},a.a.createElement(p.b,null))):u.f&&!t?a.a.createElement(l.a,{className:"upgrade-payg--button__header"}):null}))},980:function(e,t,r){"use strict";var n=r(2),a=r.n(n),o=r(4),s=r(122),i=r(158),c=r(3),l=r(128);const d=Object(s.a)(l.l);class u extends n.PureComponent{constructor(){super(...arguments),this.changeToggle=()=>{const{auth:e,onUpdate:t}=this.props;"active"===e.status?e.status="inactive":e.status="active",t(e)},this.handleDelete=()=>{const{id:e,description:t}=this.props.auth;this.props.onDelete(e,t)},this.handleClickDescription=()=>{const{onClickDescription:e,auth:t}=this.props;e(t.id)},this.handleUpdateName=e=>{const{auth:t,onUpdate:r}=this.props;r(Object.assign(Object.assign({},t),{description:e}))}}render(){const{description:e}=this.props.auth,{auth:t}=this.props,r=this.isTokenEnabled?"Active":"Inactive",n=new Date(t.createdAt);return a.a.createElement(c.ResourceCard,{contextMenu:this.contextMenu,testID:`token-card ${t.description}`,disabled:!this.isTokenEnabled},a.a.createElement(c.ResourceCard.EditableName,{onUpdate:this.handleUpdateName,onClick:this.handleClickDescription,name:e,noNameString:l.i,testID:`token-name ${t.description}`}),a.a.createElement(c.ResourceCard.Meta,null,[a.a.createElement(a.a.Fragment,{key:t.id},"Created at: ",d.format(n))]),a.a.createElement(c.FlexBox,{margin:c.ComponentSize.Small},a.a.createElement(c.SlideToggle,{active:this.isTokenEnabled,size:c.ComponentSize.ExtraSmall,onChange:this.changeToggle}),a.a.createElement(c.InputLabel,{active:this.isTokenEnabled},r)))}get contextMenu(){return a.a.createElement(c.FlexBox,{margin:c.ComponentSize.ExtraSmall},a.a.createElement(c.ConfirmationButton,{color:c.ComponentColor.Colorless,icon:c.IconFont.Trash_New,shape:c.ButtonShape.Square,size:c.ComponentSize.ExtraSmall,confirmationLabel:"Yes, delete this token",onConfirm:this.handleDelete,confirmationButtonText:"Confirm",testID:"context-delete-menu"}))}get isTokenEnabled(){const{auth:e}=this.props;return"active"===e.status}}const p={onDelete:i.b,onUpdate:i.e},m=Object(o.c)(null,p);t.a=m(u)},981:function(e,t,r){"use strict";var n=r(2),a=r.n(n);t.a=()=>a.a.createElement("div",null,"Our Tokens UI is changing on ",a.a.createElement("b",null,"Jan 10th, 2022"),". After that day you'll only be able to view and safely store token details at the point of creation. If you lose access to token credentials you can generate a new token. Please copy any existing token credentials in your chosen safe location.")}}]);
//# sourceMappingURL=49.69bf60a4da.js.map