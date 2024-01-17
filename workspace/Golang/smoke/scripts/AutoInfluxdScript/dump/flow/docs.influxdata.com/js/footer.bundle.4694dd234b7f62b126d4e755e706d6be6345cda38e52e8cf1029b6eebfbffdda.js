// Expand the menu on click
$(".dropdown").click(function () {
  $(this).toggleClass("open")
})

//  Close the version dropdown by clicking anywhere else
$(document).click(function(e) {
  if ( $(e.target).closest('.dropdown').length === 0 ) {
    $(".dropdown").removeClass("open");
  }
});

;
///////////////////////////// Make headers linkable /////////////////////////////

var headingWhiteList = $("\
  .article--content h2, \
  .article--content h3, \
  .article--content h4, \
  .article--content h5, \
  .article--content h6 \
");

var headingBlackList = ("\
  .influxdbu-banner h4 \
");

headingElements = headingWhiteList.not(headingBlackList);

headingElements.each(function() {
    function getLink(element) {
      return ((element.attr('href') === undefined ) ? $(element).attr("id") : element.attr('href'))
    }
    var link = "<a href=\"#" + getLink($(this)) + "\"></a>"
    $(this).wrapInner( link );
  })

///////////////////////////////// Smooth Scroll /////////////////////////////////

var elementWhiteList = [
  ".tabs p a",
  ".code-tabs p a",
  ".children-links a",
  ".list-links a",
  "a.url-trigger",
  "a.fullscreen-close"
]

function scrollToAnchor(target) {
  var $target = $(target);
  if($target && $target.length > 0) {
    $('html, body').stop().animate({
      'scrollTop': ($target.offset().top)
    }, 400, 'swing', function () {
      window.location.hash = target;
    });

    // Unique accordion functionality
    // If the target is an accordion element, open the accordion after scrolling
    if ($target.hasClass('expand')) {
      if ($(target + ' .expand-label .expand-toggle').hasClass('open')) {}
      else {
        $(target + '> .expand-label').trigger('click');
      };
    };
  }
}

$('.article a[href^="#"]:not(' + elementWhiteList + ')').click(function (e) {
  e.preventDefault();
  scrollToAnchor(this.hash);
});

///////////////////////////// Left Nav Interactions /////////////////////////////

$(".children-toggle").click(function(e) {
  e.preventDefault()
  $(this).toggleClass('open');
  $(this).siblings('.children').toggleClass('open');
})

//////////////////////////// Mobile Contents Toggle ////////////////////////////

$('#contents-toggle-btn').click(function(e) {
  e.preventDefault();
  $(this).toggleClass('open');
  $('#nav-tree').toggleClass('open');
})

/////////////////////////////// Truncate Content ///////////////////////////////

$(".truncate-toggle").click(function(e) {
  e.preventDefault()
  var truncateParent = $(this).closest('.truncate')
  var truncateParentID = $(this).closest('.truncate')[0].id

  if (truncateParent.hasClass('closed')) {
    $(this)[0].href = `#${truncateParentID}`
  } else {
    $(this)[0].href = "#"
  }
  
  truncateParent.toggleClass('closed')
  truncateParent.find('.truncate-content').toggleClass('closed')
})

////////////////////////////// Expand Accordions ///////////////////////////////

$('.expand-label').click(function() {
  $(this).children('.expand-toggle').toggleClass('open')
  $(this).next('.expand-content').slideToggle(200)
})

// Expand accordions on load based on URL anchor
function openAccordionByHash() {
  var anchor = window.location.hash;

  function expandElement() {
    if ($(anchor).parents('.expand').length > 0) {
      return $(anchor).closest('.expand').children('.expand-label');
    } else if ($(anchor).hasClass('expand')){
      return $(anchor).children('.expand-label');
    }
  };

  if (expandElement() != null) {
    if (expandElement().children('.expand-toggle').hasClass('open')) {}
    else {
      expandElement().children('.expand-toggle').trigger('click');
    };
  };
};

// Open accordions by hash on page load.
openAccordionByHash()

////////////////////////// Inject tooltips on load //////////////////////////////

$('.tooltip').each( function(){
  $toolTipText = $('<div/>').addClass('tooltip-text').text($(this).attr('data-tooltip-text'));
  $toolTipElement = $('<div/>').addClass('tooltip-container').append($toolTipText);
  $(this).prepend($toolTipElement);
});

//////////////////// Style time cells in tables to not wrap ////////////////////

$('.article--content table').each(function() {
  var table = $(this);

  table.find('td').each(function() {
    let cellContent = $(this)[0].innerText

    if (/^\d{4}-\d{2}-\d{2}T\d{2}:\d{2}:\d{2}.*Z/.test(cellContent)) {
      $(this).addClass('nowrap')
    }
  })
})

;
// Fade content wrapper when focusing on search input
$('#algolia-search-input').focus(function() {
  $('.content-wrapper').fadeTo(300, .35);
})

// Hide search dropdown when leaving search input
$('#algolia-search-input').blur(function() {
  $('.content-wrapper').fadeTo(200, 1);
  $('.ds-dropdown-menu').hide();
})

;
// Count tag elements
function countTag(tag) {
  return $(".visible[data-tags*='" + tag + "']").length
}

function getFilterCounts() {
  $('#list-filters label').each(function() {
    var tagName = $('input', this).attr('name').replace(/[\W/]+/, "-");
    var tagCount = countTag(tagName);
    $(this).attr('data-count', '(' + tagCount + ')');
    if (tagCount <= 0) {
      $(this).fadeTo(200, 0.25);
    } else {
      $(this).fadeTo(400, 1.0);
    }
  })
}

// Get initial filter count on page load
getFilterCounts()

$("#list-filters input").click(function() {

  // List of tags to hide
  var tagArray = $("#list-filters input:checkbox:checked").map(function(){
      return $(this).attr('name').replace(/[\W]+/, "-");
    }).get();

  // List of tags to restore
  var restoreArray = $("#list-filters input:checkbox:not(:checked)").map(function(){
      return $(this).attr('name').replace(/[\W]+/, "-");
    }).get();

  // Actions for filter select
  if ( $(this).is(':checked') ) {
    $.each( tagArray, function( index, value ) {
      $(".filter-item.visible:not([data-tags~='" + value + "'])").removeClass('visible').fadeOut()
    })
  } else {
    $.each( restoreArray, function( index, value ) {
      $(".filter-item:not(.visible)[data-tags~='" + value + "']").addClass('visible').fadeIn()
    })
    $.each( tagArray, function( index, value ) {
      $(".filter-item.visible:not([data-tags~='" + value + "'])").removeClass('visible').hide()
    })
  }

  // Refresh filter count
  getFilterCounts()
});

;
////////////////////////////////////////////////////////////////////////////////
/////////////////////// General modal window interactions //////////////////////
////////////////////////////////////////////////////////////////////////////////

// Toggle the URL selector modal window
function toggleModal(modalID="") {
  if ($(".modal").hasClass("open")) {
    $(".modal").fadeOut(200).removeClass("open");
    $(".modal-content").delay(400).hide(0);
  } else {
    $(".modal").fadeIn(200).addClass("open");
    $(`${modalID}.modal-content`).show();
  }
}

// Close modal window on click
$("#modal-close, .modal-overlay").click(function(e) {
  e.preventDefault()
  toggleModal()
  
  // Remove modal query param ('view') if it exists
  const queryParams = new URLSearchParams(window.location.search);
  const anchor = window.location.hash;

  if (queryParams.get('view') !== null) {
    queryParams.delete('view');
    window.history.replaceState({}, '', `${location.pathname}${anchor}`);
  };
})
;
var placeholderUrls = {
  cloud: "https://cloud2.influxdata.com",
  oss: "http://localhost:8086"
}

var defaultUrls = {
  cloud: "https://us-west-2-1.aws.cloud2.influxdata.com",
  oss: "http://localhost:8086"
}

var elementSelector = ".article--content pre:not(.preserve)"

// Return the page context (cloud, oss/enterprise, other)
function context() {
  if (/\/influxdb\/cloud/.test(window.location.pathname)) {
    return "cloud"
  } else if (/\/(enterprise_|influxdb).*\/v[1-2]\.[0-9]{1,2}\//.test(window.location.pathname)) {
    return "oss/enterprise"
  } else {
    return "other"
  }
}

////////////////////////////////////////////////////////////////////////////////
///////////////////////// Session-management functions /////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Retrieve the user's InfluxDB preference (cloud or oss) from the influxdb_pref session cookie
// Default is cloud.
function getPreference() {
  return Cookies.get('influxdb_pref') || "cloud"
}

// Set the user's selected InfluxDB preference (cloud or oss)
function setPreference(preference) {
  Cookies.set('influxdb_pref', preference)
}

// Set the user's programming language (client library) preference.
function setApiLibPreference(preference) {
  Cookies.set('influx-docs-api-lib', preference)
}

// InfluxDB URL-Related Session keys
//
// influxdb_oss_url
// influxdb_cloud_url
// influxdb_prev_oss_url
// influxdb_prev_cloud_url
// influxdb_pref (cloud | oss)
// influxdb_custom_url

// Store the InfluxDB URL session cookies – influxdb_url and influxdb_prev_url
function storeUrl(context, newUrl, prevUrl) {
  Cookies.set('influxdb_prev_' + context + '_url', prevUrl)
  Cookies.set('influxdb_' + context + '_url', newUrl)
}

// Store custom URL session cookie – influxdb_custom_url
// Used to populate the custom URL field
function storeCustomUrl(customUrl) {
  Cookies.set('influxdb_custom_url', customUrl)
  $('input#custom[type=radio]').val(customUrl)
}

// Remove custom URL session cookie – influxdb_custom_url
// Used to clear the form when custom url input is left empty
function removeCustomUrl() {
  Cookies.remove('influxdb_custom_url')
}

////////////////////////////////////////////////////////////////////////////////
//////////////////////// InfluxDB URL utility functions ////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Preserve URLs in codeblocks that come just after or are inside a div
// with the class, .keep-url
function addPreserve() {
  $('.keep-url').each(function () {
    // For code blocks with no syntax highlighting
    $(this).next('pre').addClass('preserve')
    // For code blocks with no syntax highlighting inside of a link (API endpoint blocks)
    $(this).next('a').find('pre').addClass('preserve')
    // For code blocks with syntax highlighting
    $(this).next('.highlight').find('pre').addClass('preserve')
    // For code blocks inside .keep-url div
    // Special use case for codeblocks generated from yaml data / frontmatter
    $(this).find('pre').addClass('preserve')
  })
}

// Retrieve the previously selected cloud and oss URLs from the
// influxdb_cloud_url and influxdb_oss_url session cookies.
function getUrls() {
  var currentCloudUrl = Cookies.get('influxdb_cloud_url') || defaultUrls.cloud
  var currentOSSUrl = Cookies.get('influxdb_oss_url') || defaultUrls.oss
  var urls = {
    cloud: currentCloudUrl,
    oss: currentOSSUrl
  };
  return urls;
}

// Retrieve the previously selected cloud and oss URLs from the
// prev_influxdb_cloud_url and prev_influxdb_oss_url session cookies.
// This is used to update URLs whenever you switch between browser tabs.
function getPrevUrls() {
  var prevCloudUrl = Cookies.get('influxdb_prev_cloud_url') || defaultUrls.cloud
  var prevOSSUrl = Cookies.get('influxdb_prev_oss_url') || defaultUrls.oss
  var prevUrls = {
    cloud: prevCloudUrl,
    oss: prevOSSUrl
  };
  return prevUrls;
}

////////////////////////////////////////////////////////////////////////////////
///////////////// Preferred Client Library programming language  ///////////////
////////////////////////////////////////////////////////////////////////////////

function getVisitedApiLib() {
  const path = window.location.pathname.match(/client-libraries\/([a-zA-Z0-9]*)/)
  return path && path.length && path[1]
}

var selectedApiLib = getVisitedApiLib()
Cookies.set('influx-docs-api-lib', selectedApiLib)
  //selectedApiLib && setApiLibPreference(selectedApiLib);

// Iterate through code blocks and update InfluxDB urls
// Requires objects with cloud and oss keys and url values
function updateUrls(prevUrls, newUrls) {
  var preference = getPreference()
  var prevUrlsParsed = {
    cloud: {},
    oss: {}
  }

  var newUrlsParsed = {
    cloud: {},
    oss: {}
  }

  Object.keys(prevUrls).forEach(function(k) {
    try {
      prevUrlsParsed[k] = new URL(prevUrls[k])
    } catch {
      prevUrlsParsed[k] = { host: prevUrls[k] }
    }
  })

  Object.keys(newUrls).forEach(function(k) {
    try {
      newUrlsParsed[k] = new URL(newUrls[k])
    } catch {
      newUrlsParsed[k] = { host: newUrls[k] }
    }
  })

  /**
    * Match and replace <prev> host with <new> host
    * then replace <prev> URL with <new> URL.
  **/
  var cloudReplacements = [
    { replace: prevUrlsParsed.cloud, with: newUrlsParsed.cloud },
    { replace: prevUrlsParsed.oss, with: newUrlsParsed.cloud },
  ]
  var ossReplacements = [
    { replace: prevUrlsParsed.cloud, with: newUrlsParsed.cloud },
    { replace: prevUrlsParsed.oss, with: newUrlsParsed.oss },
  ]

  if (context() === "cloud") { var replacements = cloudReplacements  }
  else if (context() === "oss/enterprise") { var replacements = ossReplacements }
  else if ( preference === "cloud" ) { var replacements = cloudReplacements }
  else { var replacements = ossReplacements }

  replacements.forEach(function (o) {
    if (o.replace.origin != o.with.origin) {
      var fuzzyOrigin = new RegExp(o.replace.origin + "(:[0-9]+)?", "g");
      $(elementSelector).each(function() {
        $(this).html(
          $(this).html().replace(fuzzyOrigin, function(m){
            return o.with.origin || m;
          })
        );
      })
    }
  });

  function replaceWholename(startStr, endStr, replacement) {
    var startsWithSeparator = new RegExp('[/.]');
    var endsWithSeparator = new RegExp('[-.:]');
    if(!startsWithSeparator.test(startStr) && !endsWithSeparator.test(endStr)) {
      var newHost = startStr + replacement + endStr
      return startStr + replacement + endStr;
    }
  }

  replacements
  .map(function(o) {
     return {replace: o.replace.host, with: o.with.host}
   })
  .forEach(function (o) {
    if (o.replace != o.with) {
        var fuzzyHost = new RegExp("(.?)" + o.replace + "(.?)", "g");
       $(elementSelector).each(function() {
        $(this).html(
          $(this).html().replace(fuzzyHost, function(m, p1, p2) {
            var r = replaceWholename(p1, p2, o.with) || m;
            return r
          })
        );
      })
    }
  });
}

// Append the URL selector button to each codeblock with an InfluxDB Cloud or OSS URL
function appendUrlSelector() {

  var appendToUrls = [ placeholderUrls.cloud, placeholderUrls.oss ]

  if (context() === "cloud") {
    var selectorText = "InfluxDB Cloud Region"
  } else if (context() === "oss/enterprise") {
    var selectorText = "Change InfluxDB URL"
  } else {
    var selectorText = "InfluxDB Cloud or OSS?"
  }

  appendToUrls.forEach(function(url){
    $(elementSelector).each(function() {
      var code = $(this).html()
      if (code.includes(url)) {
        $(this).after("<div class='select-url'><a class='url-trigger' href='#'>" + selectorText + "</a></div>")
        $('.select-url').fadeIn(400)
      }
    });
  });
}

////////////////////////////////////////////////////////////////////////////////
///////////////////////////// Function executions //////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Add the preserve tag to code blocks that shouldn't be updated
addPreserve()

// Append URL selector buttons to code blocks
appendUrlSelector()

// Update URLs on load
updateUrls(placeholderUrls, getUrls())

// Set active radio button on page load
setRadioButtons(getUrls())

// Update URLs whenever you focus on the browser tab
$(window).focus(function() {
  updateUrls(getPrevUrls(), getUrls())
  setRadioButtons(getUrls())
});

////////////////////////////////////////////////////////////////////////////////
////////////////////////// Modal window interactions ///////////////////////////
////////////////////////////////////////////////////////////////////////////////

// General modal window interactions are controlled in modals.js

// Open the InfluxDB URL selector modal
$(".url-trigger").click(function(e) {
  e.preventDefault()
  toggleModal('#influxdb-url-list')
})

// Set the selected URL radio buttons to :checked
function setRadioButtons() {
  currentUrls = getUrls()
  $('input[name="influxdb-cloud-url"][value="' + currentUrls.cloud + '"]').prop("checked", true)
  $('input[name="influxdb-oss-url"][value="' + currentUrls.oss + '"]').prop("checked", true)
}


// Add checked to fake-radio if cluster is selected on page load
if ($("ul.clusters label input").is(":checked")) {
  var group = $("ul.clusters label input:checked").parent().parent().parent().siblings();
  $(".fake-radio", group).addClass("checked");
};

// Select first cluster when region is clicked
$("p.region").click(function () {
  if (!$(".fake-radio", this).hasClass("checked")) {
    $(".fake-radio", this).addClass("checked");
    $("+ ul.clusters li:first label", this).trigger("click");
  };
});

// Remove checked class from fake-radio when another region is selected
$(".region-group").click(function () {
  if (!$(".fake-radio", this).hasClass("checked")) {
    $(".fake-radio", !this).removeClass("checked");
    $(".fake-radio", this).addClass("checked");
  }
})

// Update URLs and URL preference when selected/clicked in the modal
$('input[name="influxdb-cloud-url"]').change(function() {
  var newUrl = $(this).val()
  storeUrl("cloud", newUrl, getUrls().cloud)
  updateUrls(getPrevUrls(), getUrls())
})
$('input[name="influxdb-cloud-url"]').click(function() {setPreference("cloud")})

$('input[name="influxdb-oss-url"]').change(function() {
  var newUrl = $(this).val()
  storeUrl("oss", newUrl, getUrls().oss)
  updateUrls(getPrevUrls(), getUrls())
  setPreference("oss")
})
$('input[name="influxdb-oss-url"]').click(function() {setPreference("oss")})

// Toggle preference tabs
function togglePrefBtns(el) {
  preference = el.length ? el.attr("id").replace("pref-", "") : "cloud"
  prefUrls = $("#" + preference + "-urls")

  el.addClass("active")
  el.siblings().removeClass("active")
  prefUrls.addClass("active").removeClass("inactive")
  prefUrls.siblings().addClass("inactive").removeClass("active")
  setPreference(preference)
}

// Select preference tab on click
$('#pref-tabs .pref-tab').click(function() {
  togglePrefBtns($(this))
})

// Select preference tab from cookie
function showPreference() {
  var preference = Cookies.get("influxdb_pref")
  prefTab = $("#pref-" + preference)
  togglePrefBtns(prefTab)
}

// Toggled preferred service on load
showPreference()

////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// Custom URLs //////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Validate custom URLs
function validateUrl(url) {
  try {
    new URL(url);
    return {valid: true, error: ""}
  } catch(e) {
    var validProtocol = /^http(s?)/
    var protocol = url.match(/http(s?):\/\//) ? url.match(/http(s?):\/\//)[0] : "";
    var domain = url.replace(protocol, "")
    /** validDomain = (Named host | IPv6 host | IPvFuture host)(:Port)? **/
    var validDomain = new RegExp(`([a-z0-9\-._~%]+`
                               + `|\[[a-f0-9:.]+\]`
                               + `|\[v[a-f0-9][a-z0-9\-._~%!$&'()*+,;=:]+\])`
                               + `(:[0-9]+)?`);
    if (validProtocol.test(protocol) == false) {
      return {valid: false, error: "Invalid protocol, use http[s]"}
    } else if (validDomain.test(domain) == false) {
      return {valid: false, error: "Invalid domain"}
    } else if (e) {
      return {valid: false, error: "Invalid URL"}
    }
  }
}

// Show validation errors
function showValidationMessage(validation) {
  $('#custom-url').addClass("error")
  $('#custom-url').attr("data-message", validation.error)
}

// Hide validation messages and replace the message attr with empty string
function hideValidationMessage() {
  $('#custom-url').removeClass("error").attr("data-message", "")
}

// Set the custom URL cookie and apply the change
// If the custom URL field is empty, it defaults to the OSS default
function applyCustomUrl() {
  var custUrl = $('#custom-url-field').val()
  let urlValidation = validateUrl(custUrl)
  if (custUrl.length > 0 ) {
    if (urlValidation.valid) {
      hideValidationMessage()
      storeCustomUrl(custUrl)
      storeUrl("oss", custUrl, getUrls().oss)
      updateUrls(getPrevUrls(), getUrls())
    } else {
      showValidationMessage(urlValidation)
    }

  } else {
    removeCustomUrl();
    hideValidationMessage()
    $('input[name="influxdb-oss-url"][value="' + defaultUrls.oss + '"]').trigger('click')
  }
}

// Trigger radio button on custom URL field focus
$('input#custom-url-field').focus(function(e) {
  $('input#custom[type="radio"]').trigger('click')
})

// Update URLs and close modal when using 'enter' to exit custom URL field
$("#custom-url").submit(function(e) {
  let url = $('#custom-url-field').val() ? $('#custom-url-field').val() : ""
  let urlValidation = validateUrl(url)

  e.preventDefault();
  if (url === "" | urlValidation.valid) {
    applyCustomUrl()
    $('#modal-close').trigger('click')
  } else {
    showValidationMessage(urlValidation)
  }
});

// Store the custom InfluxDB URL when exiting the field
$('#custom-url-field').blur(function() {
  applyCustomUrl()
})

/** Delay execution of a function `fn` for a number of milliseconds `ms`
  * e.g., delay a validation handler to avoid annoying the user.
  */
function delay(fn, ms) {
  let timer = 0
  return function(...args) {
    clearTimeout(timer)
    timer = setTimeout(fn.bind(this, ...args), ms || 0)
  }
}

function handleUrlValidation() {
  let url = $('#custom-url-field').val()
  let urlValidation = validateUrl(url)
  if (urlValidation.valid) {
    hideValidationMessage()
  } else {
    showValidationMessage(urlValidation)
  }
}
// When in erred state, revalidate custom URL on keyup
$(document).on("keyup", "#custom-url-field", delay(handleUrlValidation, 500));

// Populate the custom InfluxDB URL field on page load
if ( Cookies.get('influxdb_custom_url') != undefined ) {
  $('input#custom').val(Cookies.get('influxdb_custom_url'))
  $('#custom-url-field').val(Cookies.get('influxdb_custom_url'))
}

////////////////////////////////////////////////////////////////////////////////
/////////////////////////// Dynamically update URLs ////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Extract the protocol and hostname of referrer
referrerMatch = document.referrer.match(/^(?:[^\/]*\/){2}[^\/]+/g)
referrerHost = referrerMatch ? referrerMatch[0] : "";

// Check if the referrerHost is one of the cloud URLs
// cloudUrls is built dynamically in layouts/partials/footer/javascript.html
if (cloudUrls.includes(referrerHost)) {
  storeUrl("cloud", referrerHost, getUrls().cloud)
  updateUrls(getPrevUrls(), getUrls())
  setRadioButtons()
  setPreference("cloud")
  showPreference()
}

;
// Show the url feature callout on page load
if ( Cookies.get('influxdb_url_selector_seen') != 'true' ) {
  $('#callout-url-selector').fadeIn(300).removeClass('start-position')
}

// Set feature cookie when the button is clicked
$('button.url-trigger, #callout-url-selector .close').click(function() {
  if ( Cookies.get('influxdb_url_selector_seen') != 'true') {
    Cookies.set('influxdb_url_selector_seen', 'true')
    $('#callout-url-selector').fadeOut(200)
  }
})
;
//////////////////////////////// Tabbed Content ////////////////////////////////

/** 
  * NOTE: Tab <a> elements are whitelisted elements that do not trigger
  * smoothscroll when clicked. The whitelist is defined in content-interactions.js.
**/ 

function tabbedContent(container, tab, content) {

  // Add the active class to the first tab in each tab group,
  // in case it wasn't already set in the markup.
  $(container).each(function () {
    $(tab, this).removeClass('is-active');
    $(tab + ':first', this).addClass('is-active');
  });

  $(tab).on('click', function(e) {
    e.preventDefault();

    // Make sure the tab being clicked is marked as active, and make the rest inactive.
    $(this).addClass('is-active').siblings().removeClass('is-active');

    // Render the correct tab content based on the position of the tab being clicked.
    const activeIndex = $(tab).index(this);
    $(content).each(function(i) {
      if (i === activeIndex) {
        $(this).show();
        $(this).siblings(content).hide();
      }
    });
  });
}

tabbedContent('.code-tabs-wrapper', '.code-tabs p a', '.code-tab-content');
tabbedContent('.tabs-wrapper', '.tabs p a', '.tab-content');

// Retrieve the user's programming language (client library) preference.
function getApiLibPreference() {
  return Cookies.get('influx-docs-api-lib') || '';
}

function getTabQueryParam() {
  const queryParams = new URLSearchParams(window.location.search);
  return $('<textarea />').html(queryParams.get('t')).text();
}

// Add query param to .keep-tab paginated navigation buttons to persist tab
// selection when navigating between the pages.
function updateBtnURLs(tabId, op="update") {
  $('a.keep-tab').each(function () {
    var link = $(this)[0].href
    var tabStr = tabId.replace(/ /, '+')

    if (op === "delete") {
      $(this)[0].href=link.replace(/\?t.*$/, '')
    } else {
      $(this)[0].href=link.replace(/($)|(\?t=.*$)/, `?t=${tabStr}`)
    }
  });
}

function activateTabs(selector, tab) {
  const anchor = window.location.hash;
  if (tab !== "") {
    let targetTab = $(`${selector} a:contains("${tab}")`);
    if(!targetTab.length) {
      targetTab = Array.from(document.querySelectorAll(`${selector} a`))
                  .find(function(el) {
                    let targetText = el.text &&
                      el.text.toLowerCase().replace(/[^a-z0-9]/, '')
                    return targetText && tab.includes(targetText);
                  })
    }
    if(targetTab) {
      $(targetTab).click();
      scrollToAnchor(anchor);
    }
  }

  const queryParams = new URLSearchParams(window.location.search);
  $(`${selector} p a`).click(function() {
    if ($(this).is(':not(":first-child")')) {
      queryParams.set('t', $(this).html())
      window.history.replaceState({}, '', `${location.pathname}?${queryParams}${anchor}`);
      updateBtnURLs($(this).html())
    } else {
      queryParams.delete('t')
      window.history.replaceState({}, '', `${location.pathname}${anchor}`);
      updateBtnURLs($(this).html(), "delete")
    }
  })
};

//////////////////// Activate Tab with Cookie or Query Param ///////////////////
/**
  * Activate code-tabs based on the cookie then override with query param.
**/
var tab = getApiLibPreference();
(['.code-tabs']).forEach(selector => activateTabs(selector, tab), updateBtnURLs(tab));
tab = getTabQueryParam();
(['.tabs', '.code-tabs']).forEach(selector => activateTabs(selector, tab), updateBtnURLs(tab));

;
// Get notification cookie name
function notificationCookieName(el) {
  return "influx-" + $(el).attr('id') + "-notification-seen"
}

// Show notifications that are within scope and haven't been ssen
function showNotifications() {
  $('#docs-notifications > .notification').each(function() {

    // Check if the path includes paths defined in the data-scope attribute
    // of the notification html element
    function inScope(path, scope) {
      for(let i = 0; i < scope.length; i++){
        if (path.includes(scope[i])) {
          return true;
        };
      }
      return false;
    }

    var scope = $(this).data('scope').split(',')
    var pageInScope = inScope(window.location.pathname, scope)
    var notificationCookie = Cookies.get( notificationCookieName(this) )

    if (pageInScope && notificationCookie != 'true') {
      $(this).show().animate({right: 0, opacity: 1}, 200, 'swing')
    }
  });
}

// Hide a notification and set cookie as true
function hideNotification(el) {
  $(el).closest('.notification').animate({height: 0, opacity: 0}, 200, 'swing', function(){
    $(this).hide();
    Cookies.set(notificationCookieName(this), true);
  });
}

// Show notifications on page load
showNotifications()

// Hide a notification and set see cookie to true
$('.close-notification').click(function(e) {
  e.preventDefault();
  hideNotification(this);
})

$('.notification .show').click(function() {
  $(this).closest('.notification').toggleClass('min');
})
;
// Dynamically update keybindings or hotkeys
function getPlatform() {
  if (/Mac/.test(navigator.platform)) {
    return "osx"
  } else if (/Win/.test(navigator.platform)) {
    return "win"
  } else if (/Linux/.test(navigator.platform)) {
    return "linux"
  } else {
    return "other"
  }
}

const platform = getPlatform()

function addOSClass(osClass) {
  $('.keybinding').addClass(osClass)
}

function updateKeyBindings() {
  $('.keybinding').each(function() {
    var osx = $(this).data("osx")
    var linux = $(this).data("linux")
    var win = $(this).data("win")

    if (platform === "other") {
      if (win != linux) {
        var keybind = '<code class="osx">' + osx + '</code> for macOS, <code>' + linux + '</code> for Linux, and <code>' + win + '</code> for Windows';
      } else {
        var keybind = '<code>' + linux + '</code> for Linux and Windows and <code class="osx">' + osx + '</code> for macOS';
      }
    } else {
      var keybind = '<code>' + $(this).data(platform) + '</code>'
    }

    $(this).html(keybind)
  })
}

addOSClass(platform)
updateKeyBindings()

;
var codeBlockSelector = ".article--content pre";
var codeBlocks = $(codeBlockSelector);

var appendHTML = `
<div class="code-controls">
  <span class="code-controls-toggle"><span class='cf-icon More'></span></span>
  <ul class="code-control-options">
    <li class='copy-code'><span class='cf-icon Duplicate_New'></span> <span class="message">Copy</span></li>
    <li class='fullscreen-toggle'><span class='cf-icon ExpandB'></span> Fill window</li>
  </ul>
</div>
`

// Wrap all codeblocks with a new 'codeblock' div
$(codeBlocks).each(function() {
  $(this).wrap("<div class='codeblock'></div>");
});

// Append code controls to all codeblock divs
$('.codeblock').append(appendHTML);

//////////////////////////// CODE CONTROLS TOGGLING ////////////////////////////

// Click outside of the code-controls to close them
$(document).click(function() {
  $('.code-controls').removeClass('open')
});

// Click the code controls toggle to open code controls
$('.code-controls-toggle').click(function() {
  $(this).parent('.code-controls').toggleClass('open');
})

// Stop event propagation for clicks inside of the code-controls div
$('.code-controls').click(function(e) {
  e.stopPropagation();
});

/////////////////////////////// COPY TO CLIPBOARD //////////////////////////////

// Update button text during lifecycles
function updateText(element, currentText, newText) {
  let inner = (element)[0].innerHTML;
  inner = inner.replace(currentText, newText)
  
  element[0].innerHTML = inner
}

// Trigger copy success state lifecycle
function copyLifeCycle(element, state) {
  let stateData = ((state === 'success') ? {state: 'success', message: 'Copied!'} : {state: 'failed', message: 'Copy failed!'})

  updateText(element, 'Copy', stateData.message)
  element.addClass(stateData.state)

  setTimeout(function() {
    updateText(element, stateData.message, 'Copy');
    element.removeClass(stateData.state)
  }, 2500)
}

// Trigger copy failure state lifecycle

$('.copy-code').click(function() {
  let text = $(this).closest('.code-controls').prev('pre')[0].innerText

  const copyContent = async () => {
    try {
      await navigator.clipboard.writeText(text);
      copyLifeCycle($(this), 'success')
    } catch (err) {
      copyLifeCycle($(this), 'failed')
    }
  }

  copyContent()
})

/////////////////////////////// FULL WINDOW CODE ///////////////////////////////

/*
On click, open the fullscreen code modal and append a clone of the selected codeblock.
Disable scrolling on the body.
Disable user selection on everything but the fullscreen codeblock.
*/
$('.fullscreen-toggle').click(function() {
  var code = $(this).closest('.code-controls').prev('pre').clone();
  
  $('#fullscreen-code-placeholder').replaceWith(code[0]);
  $('body').css('overflow', 'hidden');
  $('body > div:not(.fullscreen-code)').css('user-select', 'none');
  $('.fullscreen-code').fadeIn();
})

/*
On click, close the fullscreen code block.
Reenable scrolling on the body.
Reenable user selection on everything.
Close the modal and replace the code block with the placeholder element.
*/
$('.fullscreen-close').click(function() {
  $('body').css('overflow', 'auto');
  $('body > div:not(.fullscreen-code)').css('user-select', '');
  $('.fullscreen-code').fadeOut();
  $('.fullscreen-code pre').replaceWith('<div id="fullscreen-code-placeholder"></div>')
});

;
/*
 * This file controls the interactions and life-cycles of the page feedback
 * buttons and modal.
 */

// Collect data from the page path
const pathArr = location.pathname.split('/').slice(1, -1)
const pageData = {
  host: location.hostname,
  path: location.pathname,
  product: pathArr[0],
  version: (/^v\d/.test(pathArr[1]) || pathArr[1]?.includes('cloud') ? pathArr[1].replace(/^v/, '') : "n/a"),
}

// Hijack form submission and send feedback data to be stored.
// Called by onSubmit in each feedback form.
function submitFeedbackForm(formID) {

  // Collect form data, structure as an object, and remove fname honeypot
  const formData = new FormData(document.forms[formID]);
  const formDataObj = Object.fromEntries(formData.entries());
  const {fname, ...feedbackData} = formDataObj;
  
  // Build lp fields from form data
  let fields = "";
  for (let key in feedbackData) {
    // Strip out newlines and escape double quotes if the field key is "feedback"
    if (key == "feedback-text") {
      fields += key + '="' + feedbackData[key].replace(/(\r\n|\n+|\r+)/gm, " ").replace(/(\")/gm, '\\"') + '",';
    } else {
      fields += key + "=" + feedbackData[key] + ",";
    }      
  }
  fields = fields.substring(0, fields.length -1);

  // Build lp using page data and the fields string
  const lp = `feedback,host=${pageData.host},path=${pageData.path},product=${pageData.product},version=${pageData.version} ${fields}`

  // Use a honeypot form field to detect a bot
  // If the value of the honeypot field is greater than 0, the submitter is a bot
  function isBot() {
    const honeypot = formData.get('fname');
    return (honeypot.length > 0)
  }
  
  // If the submitter is not a bot, send the feedback data
  if (!isBot()) {
    xhr = new XMLHttpRequest();
    xhr.open('POST', 'https://j32dswat7l.execute-api.us-east-1.amazonaws.com/prod');
    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');
    xhr.setRequestHeader('Access-Control-Allow-Origin', `${location.protocol}//${location.host}`);
    xhr.setRequestHeader('Content-Type', 'text/plain; charset=utf-8');
    xhr.setRequestHeader('Accept', 'application/json');
    xhr.send(lp);
  }

  return false;
}

/////////////////////////////// Click life-cycles //////////////////////////////

// Trigger the lifecycle of page feedback (yes/no) radio select buttons
function submitLifeCycle() {
  $('.helpful .loader-wrapper').fadeIn(200);
  $('.helpful #thank-you').delay(800).fadeIn(200);
  $('.helpful .loader-wrapper').delay(1000).hide(0);
}

// Submit the feedback form and close the feedback modal window.
// Called by onclick in the page-feedback modal submit button.
function submitLifeCycleAndClose() {
  submitFeedbackForm('pagefeedbacktext');
  $('.modal #page-feedback .loader-wrapper').css('display', 'flex').hide().fadeIn(200);
  $('.modal #page-feedback #thank-you').css('display', 'flex').hide().delay(800).fadeIn(200);
  $('.modal #page-feedback textarea').css('box-shadow', 'none')
  $('.modal #page-feedback .loader-wrapper').delay(1000).hide(0);
  setTimeout(function() {toggleModal()}, 1800);
  return false;
}

//////////////////////////////// Event triggers ////////////////////////////////

// Submit page feedback (yes/no) on radio select and trigger life cycle
$('#pagefeedback input[type=radio]').change(function() {
  $('form#pagefeedback').submit();
  submitLifeCycle()
})

// Toggle the feedback modal when user selects that the page is not helpful
$('#pagefeedback #not-helpful input[type=radio]').click(function() {
  setTimeout(function() {toggleModal('#page-feedback')}, 400);
})

// Toggle the feedback modal when user selects that the page is not helpful
$('.modal #no-thanks').click(function() {
  toggleModal();
})
;
$('.exp-btn').click(function() {
  var targetBtnElement = $(this).parent()
  $('.exp-btn > p', targetBtnElement).fadeOut(100);
  setTimeout(function() {
    $('.exp-btn-links', targetBtnElement).fadeIn(200)
    $('.exp-btn', targetBtnElement).addClass('open');
    $('.close-btn', targetBtnElement).fadeIn(200);
  }, 100);
})

$('.close-btn').click(function() {
  var targetBtnElement = $(this).parent().parent()
  $('.exp-btn-links', targetBtnElement).fadeOut(100)
  $('.exp-btn', targetBtnElement).removeClass('open');
  $(this).fadeOut(100);
  setTimeout(function() {
    $('p', targetBtnElement).fadeIn(100);
  }, 100);
})

/////////////////////////////// EXPANDING BUTTONS //////////////////////////////


;
/*
Interactions related to the Flux/InfluxDB version modal
*/

const fluxInfluxDBModal = '.modal-content#flux-influxdb-versions'
const pageType = ($(document).attr('title')).includes("package") ? "package" : "function";

// Check for deprecated or pending versions
function keysPresent() {
  var list = $(fluxInfluxDBModal + ' .version-list')

  return {
    pending: list.find('.pending').length !== 0,
    deprecated: list.find('.deprecated').length !== 0,
    supported: list.find('.supported').length !== 0,
  }
}

// Only execute if the Flux/InfluxDB modal is present in the DOM
if ($(fluxInfluxDBModal).length > 0) {
  var presentKeys = keysPresent()

  // Remove color key list items if the colors/states are present in the version list
  if (presentKeys.pending === false) { $(fluxInfluxDBModal + ' .color-key #pending-key' ).remove() }
  if (presentKeys.deprecated === false) { $(fluxInfluxDBModal + ' .color-key #deprecated-key' ).remove() }
  if (presentKeys.pending === false && presentKeys.deprecated === false) { $(fluxInfluxDBModal + ' .color-key' ).remove() }

  // If no versions are supported, remove and replace InfluxDB version tables
  if (Object.values(presentKeys).every(value => !value)) {
    $(fluxInfluxDBModal + ' .influxdb-versions > :not(".more-info")').remove();
    $(fluxInfluxDBModal + ' .influxdb-versions').prepend(`<p class="no-support">No versions of InfluxDB currently support this ${pageType}.</p>`)
  }
}


// Open version modal and add query param
const queryParams = new URLSearchParams(window.location.search);

function openFluxVersionModal() {
  const anchor = window.location.hash;

  toggleModal('#flux-influxdb-versions');
  queryParams.set('view', 'influxdb-support');
  window.history.replaceState({}, '', `${location.pathname}?${queryParams}${anchor}`);
};

// Check for the modal query param and open the modal if it exists
if (queryParams.get('view') !== null) {
  openFluxVersionModal();
};
