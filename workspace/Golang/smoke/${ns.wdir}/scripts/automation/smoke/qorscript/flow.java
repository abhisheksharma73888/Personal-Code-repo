/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 04/07/2021 11:17:31
    Flow details:
    Build details: 4.6.0 (build# 31)
    Modification History:
-----------------------------------------------------------------------------*/

package com.cavisson.scripts.qorscript;
import pacJnvmApi.NSApi;

public class flow implements NsFlow
{
    public int execute(NSApi nsApi) throws Exception
    {
        int status = 0;

        status = nsApi.ns_start_transaction("index");
        status = nsApi.ns_web_url ("index",
            "URL=http://10.10.30.5:7000/",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/dist/home_products.css", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/vendors/flexslider.css", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/dist/qor.css", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/vendors/jquery.js", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/dist/home_banner.css", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/images/logo.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://fonts.googleapis.com/css?family=Source+Sans+Pro:200,200i,300,300i,400,400i,600,600i,700,700i|Playfair+Display|Raleway", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/vendors/jquery.flexslider-min.js", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/dist/app.js", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/media_libraries/1/file.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/media_libraries/2/file.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/1/file.main.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/2/file.main.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/3/file.main.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/4/file.main.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/5/file.main.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://use.fontawesome.com/releases/v4.7.0/css/font-awesome-css.min.css", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/6/file.main.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://qor3.s3.amazonaws.com/medialibrary/arrow-left.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://qor3.s3.amazonaws.com/medialibrary/arrow-right.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/7/file.main.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/8/file.main.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/media_libraries/3/file.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/system/media_libraries/4/file.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/images/twitter.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/images/facebook.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/images/gplus.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=https://static-fe.payments-amazon.com/OffAmazonPayments/jp/sandbox/lpa/js/Widgets.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/images/youtube.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://10.10.30.5:7000/images/icon-arrow-down-big.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content", END_INLINE,
                "URL=http://fonts.gstatic.com/s/sourcesanspro/v14/6xKydSBYKcSV-LCoeQqfX1RYOo3i54rwlxdu.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://fonts.gstatic.com/s/sourcesanspro/v14/6xK3dSBYKcSV-LCoeQqfX1RYOo3qOK7l.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", END_INLINE,
                "URL=http://fonts.gstatic.com/s/playfairdisplay/v22/nuFvD-vYSZviVYUb_rj3ij__anPXJzDwcbmjWBN2PKdFvXDXbtM.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://fonts.gstatic.com/s/sourcesanspro/v14/6xKydSBYKcSV-LCoeQqfX1RYOo3ig4vwlxdu.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://fonts.gstatic.com/s/sourcesanspro/v14/6xKydSBYKcSV-LCoeQqfX1RYOo3i94_wlxdu.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://use.fontawesome.com/releases/v4.7.0/fonts/fontawesome-webfont.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://static-fe.payments-amazon.com/v2/login.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("index", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer");
        status = nsApi.ns_web_url ("sessionstabilizer",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("sessionstabilizer", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(4.99);

        //Page Auto splitted for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("login");
        status = nsApi.ns_web_url ("login",
            "URL=http://10.10.30.5:7000/auth/login",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=_session;publish2_publish_scheduled_time;pubilsh2_publish_draft_content",
            INLINE_URLS,
                "URL=http://fonts.googleapis.com/css?family=Source+Sans+Pro:200,200i,300,300i,400,400i,600,600i,700,700i|Playfair+Display|Raleway", END_INLINE,
                "URL=http://10.10.30.5:7000/dist/home_products.css", END_INLINE,
                "URL=http://10.10.30.5:7000/vendors/flexslider.css", END_INLINE,
                "URL=http://10.10.30.5:7000/auth/assets/qor_auth.css", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/dist/qor.css", END_INLINE,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=Accept-Language:en-US,en;q=0.9", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", END_INLINE
        );

        status = nsApi.ns_end_transaction("login", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_2");
        status = nsApi.ns_web_url ("sessionstabilizer_2",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay"
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_2", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(19.688);

        //Page Auto splitted for Button '' Clicked by User
        status = nsApi.ns_start_transaction("login_2");
        status = nsApi.ns_web_url ("login_2",
            "URL=http://10.10.30.5:7000/auth/password/login",
            "METHOD=POST",
            "HEADER=Content-Length:36",
            "HEADER=Cache-Control:max-age=0",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Content-Type:application/x-www-form-urlencoded",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session",
            BODY_BEGIN,
                "[key: "login"
value: "abhi@gmail.com"
, key: "password"
value: "abhi"
]",
            BODY_END,
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/auth/assets/qor_auth.css", END_INLINE,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("login_2", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_3");
        status = nsApi.ns_web_url ("sessionstabilizer_3",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay"
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_3", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(2.521);

        //Page Auto splitted for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("register");
        status = nsApi.ns_web_url ("register",
            "URL=http://10.10.30.5:7000/auth/register",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("register", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_4");
        status = nsApi.ns_web_url ("sessionstabilizer_4",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay"
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_4", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(21.341);

        //Page Auto splitted for Button '' Clicked by User
        status = nsApi.ns_start_transaction("index_2");
        status = nsApi.ns_web_url ("index_2",
            "URL=http://10.10.30.5:7000/auth/password/register",
            "METHOD=POST",
            "HEADER=Content-Length:58",
            "HEADER=Cache-Control:max-age=0",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Content-Type:application/x-www-form-urlencoded",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session",
            "REDIRECT=YES",
            "LOCATION=/",
            BODY_BEGIN,
                "[key: "login"
value: "abhi@gmail.com"
, key: "password"
value: "abhi"
, key: "confirm_password"
value: "abhi"
]",
            BODY_END,
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/", "HEADER=Cache-Control:max-age=0", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("index_2", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("plugins_win_json");
        status = nsApi.ns_web_url ("plugins_win_json",
            "URL=https://www.gstatic.com/chrome/config/plugins_3/plugins_win.json",
            "HEADER=Sec-Fetch-Site:none",
            "HEADER=Sec-Fetch-Mode:no-cors",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin/assets/stylesheets/action_bar.css?theme=action_bar", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/images/logo-qor.png?theme=action_bar", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/javascripts/datetimepicker.js", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/javascripts/publish2_inline_edit.js?theme=publish2", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/stylesheets/datetimepicker.css", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/stylesheets/publish2_inline_edit.css?theme=publish2", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin//assets/javascripts/action_bar_check.js?theme=action_bar", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=https://fonts.googleapis.com/icon?family=Material+Icons", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/dist/home_banner.css", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/media_libraries/1/file.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/admin//assets/javascripts/action_bar_inline_edit.js?theme=action_bar", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin//assets/stylesheets/action_bar_inline_edit.css?theme=action_bar", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("plugins_win_json", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_5");
        status = nsApi.ns_web_url ("sessionstabilizer_5",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=https://fonts.gstatic.com/s/materialicons/v83/flUhRq6tzZclQEJ-Vdg-IuiaDsNc.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/stylesheets/qor_admin_default.css", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/stylesheets/qor_demo.css", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/javascripts/vendors.js", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/javascripts/qor_admin_default.js", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/javascripts/qor_demo.js", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_5", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(3.843);

        //Page Auto splitted for Image Link '' Clicked by User
        status = nsApi.ns_start_transaction("multicolor_shirt_w");
        status = nsApi.ns_web_url ("multicolor_shirt_w",
            "URL=http://10.10.30.5:7000/products/multicolor-shirt_w",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://fonts.googleapis.com/icon?family=Material+Icons", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/stylesheets/action_bar.css?theme=action_bar", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/stylesheets/datetimepicker.css", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/stylesheets/publish2_inline_edit.css?theme=publish2", END_INLINE,
                "URL=http://10.10.30.5:7000/images/icon-fav.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/images/facebook-grey.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/images/twitter-grey.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/10/file.main.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/9/file.main.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin//assets/javascripts/action_bar_inline_edit.js?theme=action_bar", END_INLINE,
                "URL=http://10.10.30.5:7000/admin//assets/stylesheets/action_bar_inline_edit.css?theme=action_bar", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/1/file.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/images/icon-slider-arrow-left.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/images/icon-slider-arrow-right.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("multicolor_shirt_w", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_6");
        status = nsApi.ns_web_url ("sessionstabilizer_6",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/stylesheets/qor_admin_default.css", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/stylesheets/qor_demo.css", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_6", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(5.99);

        status = nsApi.ns_start_transaction("cart");
        status = nsApi.ns_web_url ("cart",
            "URL=http://10.10.30.5:7000/cart",
            "METHOD=PUT",
            "HEADER=Content-Length:64",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=X-Requested-With:XMLHttpRequest",
            "HEADER=Content-Type:application/x-www-form-urlencoded; charset=UTF-8",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session",
            BODY_BEGIN,
                "[key: "product_id"
value: "1"
, key: "color_variation_id"
value: "1"
, key: "size_variation_id"
value: "2"
, key: "quantity"
value: "1"
]",
            BODY_END
        );

        status = nsApi.ns_end_transaction("cart", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(0.033);

        //Page Auto splitted for Button '' Clicked by User
        status = nsApi.ns_start_transaction("cart_3");
        status = nsApi.ns_web_url ("cart_3",
            "URL=http://10.10.30.5:7000/cart",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("cart_3", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_7");
        status = nsApi.ns_web_url ("sessionstabilizer_7",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;_session", END_INLINE,
                "URL=https://d1oct1bdmx33tz.cloudfront.net/default/jp/sandbox/lwa/gold/medium/PwA.png", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_7", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(2.278);

        //Page Auto splitted for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("checkout");
        status = nsApi.ns_web_url ("checkout",
            "URL=http://10.10.30.5:7000/cart/checkout",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/images/creditcards.png", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("checkout", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_8");
        status = nsApi.ns_web_url ("sessionstabilizer_8",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/javascripts/vendors.js", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/javascripts/qor_admin_default.js", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/javascripts/qor_demo.js", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_8", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(3.733);

        //Page Auto splitted for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("index_3");
        status = nsApi.ns_web_url ("index_3",
            "URL=http://10.10.30.5:7000/",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("index_3", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_9");
        status = nsApi.ns_web_url ("sessionstabilizer_9",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_9", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(1.524);

        //Page Auto splitted for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("men");
        status = nsApi.ns_web_url ("men",
            "URL=http://10.10.30.5:7000/men",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", END_INLINE
        );

        status = nsApi.ns_end_transaction("men", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(0.073);

        status = nsApi.ns_start_transaction("index_4");
        status = nsApi.ns_web_url ("index_4",
            "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session"
        );

        status = nsApi.ns_end_transaction("index_4", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_10");
        status = nsApi.ns_web_url ("sessionstabilizer_10",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true"
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_10", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(2.028);

        //Page Auto splitted for Image Link '' Clicked by User
        status = nsApi.ns_start_transaction("index_5");
        status = nsApi.ns_web_url ("index_5",
            "URL=http://10.10.30.5:7000/",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("index_5", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_11");
        status = nsApi.ns_web_url ("sessionstabilizer_11",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_11", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(2.604);

        //Page Auto splitted for Image Link '' Clicked by User
        status = nsApi.ns_start_transaction("slogan_t_shirt_blue_light");
        status = nsApi.ns_web_url ("slogan_t_shirt_blue_light",
            "URL=http://10.10.30.5:7000/products/slogan-t-shirt_blue-light",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/6/file.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("slogan_t_shirt_blue_light", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_12");
        status = nsApi.ns_web_url ("sessionstabilizer_12",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_12", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(2.329);

        //Page Auto splitted for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("index_6");
        status = nsApi.ns_web_url ("index_6",
            "URL=http://10.10.30.5:7000/",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("index_6", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_13");
        status = nsApi.ns_web_url ("sessionstabilizer_13",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/#", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_13", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(104.703);

        //Page Auto splitted for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("index_11");
        status = nsApi.ns_web_url ("index_11",
            "URL=http://10.10.30.5:7000/",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("index_11", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(0.217);

        status = nsApi.ns_start_transaction("index_7");
        status = nsApi.ns_web_url ("index_7",
            "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("index_7", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_14");
        status = nsApi.ns_web_url ("sessionstabilizer_14",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay"
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_14", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(3.135);

        //Page Auto splitted for 
        status = nsApi.ns_start_transaction("title_new__better_qor_docume");
        status = nsApi.ns_web_url ("title_new__better_qor_docume",
            "URL=https://getqor.com/en/blogs/article/title=new,-better-qor-documentation-released",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Sec-Fetch-User:?1",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:navigate",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=https://getqor.com/source/normalize.css", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/main.css", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/login.css", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/jquery-1.11.3.js", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/images/qor-logo.svg", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/images/m-menu.svg", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/images/share-twitter.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/images/share-g+.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/system/assets/17/1200px-Jigsaw_puzzle_01_by_Scouten.20161209091916206040735.jpg", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/images/theplant-logo.png?1436944389", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/web-fonts/robotocondensed-regular-webfont.woff2", "HEADER=Origin:https://getqor.com", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://static.hotjar.com/c/hotjar-249442.js?sv=5", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/web-fonts/roboto-light-webfont.woff2", "HEADER=Origin:https://getqor.com", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://www.google-analytics.com/analytics.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://vars.hotjar.com/box-5e3cec51ed8e99df6977c199d27812d7.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:nested-navigate", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://qor.disqus.com/embed.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/web-fonts/roboto-regular-webfont.woff2", "HEADER=Origin:https://getqor.com", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat", END_INLINE,
                "URL=https://platform.twitter.com/widgets.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("title_new__better_qor_docume", NS_AUTO_STATUS);
    
    //Page Auto splitted for Method = POST
        status = nsApi.ns_start_transaction("collect");
        status = nsApi.ns_web_url ("collect",
            "URL=https://www.google-analytics.com/j/collect?v=1&_v=j89&a=755506800&t=pageview&_s=1&dl=https%3A%2F%2Fgetqor.com%2Fen%2Fblogs%2Farticle%2Ftitle%3Dnew%2C-better-qor-documentation-released&dr=http%3A%2F%2F10.10.30.5%3A7000%2F&ul=en-us&de=UTF-8&dt=QOR%20Go%20(Golang)%20SDK%20%3A%20New%2C%20Better%20QOR%20Documentation%20released!&sd=24-bit&sr=1366x768&vp=1349x607&je=0&_u=IEBAAEABAAAAAC~&jid=1815578670&gjid=347032235&cid=1230909809.1617817601&tid=UA-389151-11&_gid=1544911875.1617817601&_r=1&_slc=1&z=847067763",
            "METHOD=POST",
            "HEADER=Content-Length:0",
            "HEADER=Origin:https://getqor.com",
            "HEADER=Content-Type:text/plain",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=https://script.hotjar.com/modules.0cb976794ef50d89b299.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://disqus.com/next/config.js", "HEADER=Purpose:prefetch", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/styles/lounge.c82b267b396dfbc10ae5113342115da8.css", "HEADER=Purpose:prefetch", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/common.bundle.f485ba8b89bf2153fdb9f493ec342aed.js", "HEADER=Purpose:prefetch", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/lounge.bundle.5c8cd56736a07a84352a4d37a862a762.js", "HEADER=Purpose:prefetch", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://disqus.com/embed/comments/?base=default&f=qor&t_i=8-en&t_u=http%3A%2F%2Fgetqor.com%2Fen%2Fblogs%2Farticle%2Ftitle%3Dnew%2C-better-qor-documentation-released&t_d=New%2C%20Better%20QOR%20Documentation%20released!&t_t=New%2C%20Better%20QOR%20Documentation%20released!&s_o=default#version=a658a7c16140d8728cc859daf581cbbc", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:nested-navigate", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("collect", NS_AUTO_STATUS);
    
    //Page Auto splitted for Method = POST
        status = nsApi.ns_start_transaction("visit_data");
        status = nsApi.ns_web_url ("visit_data",
            "URL=https://in.hotjar.com/api/v2/client/sites/249442/visit-data?sv=5",
            "METHOD=POST",
            "HEADER=Content-Length:112",
            "HEADER=Origin:https://getqor.com",
            "HEADER=Content-Type:text/plain; charset=UTF-8",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=https://platform.twitter.com/widgets/widget_iframe.e16c6ecf9d86005b77fc7c17beced5d8.html?origin=https%3A%2F%2Fgetqor.com", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:nested-navigate", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/lounge.load.a658a7c16140d8728cc859daf581cbbc.js", "HEADER=Origin:https://disqus.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/common.bundle.f485ba8b89bf2153fdb9f493ec342aed.js", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/styles/lounge.c82b267b396dfbc10ae5113342115da8.css", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/lounge.bundle.5c8cd56736a07a84352a4d37a862a762.js", END_INLINE,
                "URL=https://disqus.com/next/config.js", END_INLINE
        );

        status = nsApi.ns_end_transaction("visit_data", NS_AUTO_STATUS);
    
    //Page Auto splitted for Ajax Header = XMLHttpRequest
        status = nsApi.ns_start_transaction("details");
        status = nsApi.ns_web_url ("details",
            "URL=https://disqus.com/api/3.0/forums/details?forum=qor&attach=forumFeatures&api_key=E8Uh5l5fHZ6gD8U3KycjAIAk46f68Zw7C6eW8WSjZvCLXebZ7p0r1yrYDrLilk2F",
            "HEADER=X-Requested-With:XMLHttpRequest",
            "HEADER=Sec-Fetch-Site:same-origin",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=https://tempest.services.disqus.com/ads-iframe/survey/?position=lightbox&shortname=qor&experiment=network_default_hidden&variant=fallthrough&service=dynamic&anchorColor=%230277bd&colorScheme=light&sourceUrl=https%3A%2F%2Fgetqor.com%2Fen%2Fblogs%2Farticle%2Ftitle%3Dnew%2C-better-qor-documentation-released&typeface=sans-serif&disqus_version=bb0e8f2", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:nested-navigate", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=disqus_unique", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/assets/img/svg-sprite.4da5413f5086c5755b46094b813dbfcd.svg", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/alfie_v4.63f1ab6d6b9d5807dc0c94ef3fe0b851.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/assets/img/loader.ba7c86e8b4b6135bb668d05223f8f127.gif", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/assets/img/sprite.654110a9206fd22f08cca0798e34a65e.png", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/assets/font/icons.4cc7a703d2fdfe684151ff8ac24d45f1.woff2", "HEADER=Origin:https://disqus.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://connect.facebook.net/en_US/sdk.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://cdn.viglink.com/images/pixel.gif?ch=1&rn=4.484097462163791", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://cdn.viglink.com/images/pixel.gif?ch=2&rn=4.484097462163791", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://apis.google.com/js/api.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("details", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(0.026);

        //Page Auto splitted for Image Link '' Clicked by User
        status = nsApi.ns_start_transaction("event_gif");
        status = nsApi.ns_web_url ("event_gif",
            "URL=https://referrer.disqus.com/juggler/event.gif?imp=788h7ai90m36h&experiment=network_default_hidden&variant=fallthrough&service=dynamic&area=lightbox&product=embed&forum=qor&zone=thread&page_url=https%3A%2F%2Fgetqor.com%2Fen%2Fblogs%2Farticle%2Ftitle%3Dnew%2C-better-qor-documentation-released&page_referrer=http%3A%2F%2F10.10.30.5%3A7000%2F&object_type=provider&event=activity&ad_product_name=iab_display&ad_product_layout=iab_display&bin=embed%3Apromoted_discovery%3Adynamic%3Anetwork_default_hidden%3Afallthrough&section=default&verb=call&adjective=1&forum_id=3908466",
            "HEADER=Sec-Fetch-Site:same-site",
            "HEADER=Sec-Fetch-Mode:no-cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=disqus_unique",
            INLINE_URLS,
                "URL=https://connect.facebook.net/en_US/sdk.js?hash=c436330564833a60874386e5c9db3f65&ua=modern_es6", "HEADER=Origin:https://disqus.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("event_gif", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(0.009);

        status = nsApi.ns_start_transaction("en");
        status = nsApi.ns_web_url ("en",
            "URL=https://getqor.com/en",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Sec-Fetch-User:?1",
            "HEADER=Sec-Fetch-Site:same-origin",
            "HEADER=Sec-Fetch-Mode:navigate",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress",
            INLINE_URLS,
                "URL=https://a.disquscdn.com/1617742046/images/noavatar92.png", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://syndication.twitter.com/settings?session_id=bf3bf59e20aa75aac54f93bb61431302b9a7d1e0", "HEADER=Origin:https://platform.twitter.com", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://getqor.com/source/images/logo-lacoste.png?1436944389", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/source/images/logo-asics.png?1436944389", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/source/images/logo-danone.png?1436944389", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/source/images/logo-onitsuka.png?1436944389", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/source/images/analogue-life.png?1436944389", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/1/Icon/icon_f_1.20150819081315454533903.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE
        );

        status = nsApi.ns_end_transaction("en", NS_AUTO_STATUS);
    
    //Page Auto splitted for Method = POST
        status = nsApi.ns_start_transaction("collect_2");
        status = nsApi.ns_web_url ("collect_2",
            "URL=https://www.google-analytics.com/j/collect?v=1&_v=j89&a=80034003&t=pageview&_s=1&dl=https%3A%2F%2Fgetqor.com%2Fen&ul=en-us&de=UTF-8&dt=QOR%20Go%20(Golang)%20SDK%3A%20the%20Go%20Open%20Source%20E-Commerce%20%26%20CMS%20SDK&sd=24-bit&sr=1366x768&vp=1349x607&je=0&_u=AACAAEABAAAAAC~&jid=&gjid=&cid=1230909809.1617817601&tid=UA-389151-11&_gid=1544911875.1617817601&_slc=1&z=1581032828",
            "METHOD=POST",
            "HEADER=Content-Length:0",
            "HEADER=Origin:https://getqor.com",
            "HEADER=Content-Type:text/plain",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=https://vars.hotjar.com/box-5e3cec51ed8e99df6977c199d27812d7.html", END_INLINE,
                "URL=https://getqor.com/source/web-fonts/robotocondensed-light-webfont.woff2", "HEADER=Origin:https://getqor.com", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE
        );

        status = nsApi.ns_end_transaction("collect_2", NS_AUTO_STATUS);
    
    //Page Auto splitted for Method = POST
        status = nsApi.ns_start_transaction("visit_data_2");
        status = nsApi.ns_web_url ("visit_data_2",
            "URL=https://in.hotjar.com/api/v2/client/sites/249442/visit-data?sv=5",
            "METHOD=POST",
            "HEADER=Content-Length:112",
            "HEADER=Origin:https://getqor.com",
            "HEADER=Content-Type:text/plain; charset=UTF-8",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            BODY_BEGIN,
                "{"r_value":1,"is_vpv":false,"session_only":false,"rec_value":1,"user_id":"bf6d1ae9-16c6-5ecd-962b-f492c10d29f9"}",
            BODY_END,
            INLINE_URLS,
                "URL=https://getqor.com/system/features/2/Icon/icon_f_2.20150819081315476896931.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/3/Icon/icon_f_3.20150819081315481852792.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/4/Icon/icon_f_4.20150819081315489088778.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/5/Icon/icon_f_5.20150819081315493077778.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/6/Icon/icon_f_6.20150819081315498531018.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/7/Icon/icon_f_7.20150819081315501701767.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/8/Icon/icon_f_9.20150819081315507180830.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/9/Icon/icon_f_8.20150819081315510976145.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/10/Icon/icon_f_10.20150819081315516490134.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/11/Icon/f-icon-33.20150826025815505666400.svg", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/12/Icon/book.20150826022715066547565.svg", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/1/imgurl/admin-2.20160217082916427542543.jpg", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/2/imgurl/publish-pixelmator.20160217082316049002216.jpg", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/3/ImgUrl/f-03.20150818061015679524512.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/4/ImgUrl/f-04.20150818061115029428778.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/5/ImgUrl/f-05.20150818061115242184012.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/6/imgurl/workers.20151202092915491429653.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/7/ImgUrl/f-07.20150818061115417925169.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/features/8/ImgUrl/f-08.20150818061115518422410.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/system/examples/1/ImgUrl/tutorail-image.20150818061015114099992.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE,
                "URL=https://getqor.com/en/blogs/article/title=new,-better-qor-documentation-released", END_INLINE
        );

        status = nsApi.ns_end_transaction("visit_data_2", NS_AUTO_STATUS);
    
    //Page Auto splitted for Method = POST
        status = nsApi.ns_start_transaction("collect_3");
        status = nsApi.ns_web_url ("collect_3",
            "URL=https://www.google-analytics.com/j/collect?v=1&_v=j89&a=569897298&t=pageview&_s=1&dl=https%3A%2F%2Fgetqor.com%2Fen%2Fblogs%2Farticle%2Ftitle%3Dnew%2C-better-qor-documentation-released&dr=http%3A%2F%2F10.10.30.5%3A7000%2F&ul=en-us&de=UTF-8&dt=QOR%20Go%20(Golang)%20SDK%20%3A%20New%2C%20Better%20QOR%20Documentation%20released!&sd=24-bit&sr=1366x768&vp=1349x607&je=0&_u=AACAAEABAAAAAC~&jid=&gjid=&cid=1230909809.1617817601&tid=UA-389151-11&_gid=1544911875.1617817601&_slc=1&z=103420154",
            "METHOD=POST",
            "HEADER=Content-Length:0",
            "HEADER=Origin:https://getqor.com",
            "HEADER=Content-Type:text/plain",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("collect_3", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(114.215);

        status = nsApi.ns_start_transaction("title_new__better_qor_docume_2");
        status = nsApi.ns_web_url ("title_new__better_qor_docume_2",
            "URL=https://platform.twitter.com/widgets/widget_iframe.e16c6ecf9d86005b77fc7c17beced5d8.html?origin=https%3A%2F%2Fgetqor.com",
            INLINE_URLS,
                "URL=https://vars.hotjar.com/box-5e3cec51ed8e99df6977c199d27812d7.html", END_INLINE
        );

        status = nsApi.ns_end_transaction("title_new__better_qor_docume_2", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("settings");
        status = nsApi.ns_web_url ("settings",
            "URL=https://syndication.twitter.com/settings?session_id=e3803c1e7e5a7a884cb3c7887a56cddc326240f0",
            "HEADER=Origin:https://platform.twitter.com",
            "HEADER=Sec-Fetch-Site:same-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=https://disqus.com/embed/comments/?base=default&f=qor&t_i=8-en&t_u=http%3A%2F%2Fgetqor.com%2Fen%2Fblogs%2Farticle%2Ftitle%3Dnew%2C-better-qor-documentation-released&t_d=New%2C%20Better%20QOR%20Documentation%20released!&t_t=New%2C%20Better%20QOR%20Documentation%20released!&s_o=default#version=a658a7c16140d8728cc859daf581cbbc", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:nested-navigate", "HEADER=Accept-Language:en-US,en;q=0.9", "HEADER=If-None-Match:W/\"lounge:view:5431023092.cea0a878836e1fae2de8cf372e429286.2\"", "HEADER=If-Modified-Since:Tue, 23 Mar 2021 20:38:54 GMT", "COOKIE=disqus_unique;__jid", END_INLINE
        );

        status = nsApi.ns_end_transaction("settings", NS_AUTO_STATUS);
    
    //Page Auto splitted for Method = POST
        status = nsApi.ns_start_transaction("visit_data_3");
        status = nsApi.ns_web_url ("visit_data_3",
            "URL=https://in.hotjar.com/api/v2/client/sites/249442/visit-data?sv=5",
            "METHOD=POST",
            "HEADER=Content-Length:112",
            "HEADER=Origin:https://getqor.com",
            "HEADER=Content-Type:text/plain; charset=UTF-8",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            BODY_BEGIN,
                "{"r_value":1,"is_vpv":false,"session_only":false,"rec_value":1,"user_id":"bf6d1ae9-16c6-5ecd-962b-f492c10d29f9"}",
            BODY_END,
            INLINE_URLS,
                "URL=https://c.disquscdn.com/next/embed/lounge.load.a658a7c16140d8728cc859daf581cbbc.js", END_INLINE,
                "URL=https://getqor.com/source/favicon.png", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat;_hjid;_hjFirstSeen;_hjIncludedInPageviewSample;_hjAbsoluteSessionInProgress", END_INLINE
        );

        status = nsApi.ns_end_transaction("visit_data_3", NS_AUTO_STATUS);
    
    //Page Auto splitted for Ajax Header = XMLHttpRequest
        status = nsApi.ns_start_transaction("details_2");
        status = nsApi.ns_web_url ("details_2",
            "URL=https://disqus.com/api/3.0/forums/details?forum=qor&attach=forumFeatures&api_key=E8Uh5l5fHZ6gD8U3KycjAIAk46f68Zw7C6eW8WSjZvCLXebZ7p0r1yrYDrLilk2F",
            "HEADER=X-Requested-With:XMLHttpRequest",
            "HEADER=Sec-Fetch-Site:same-origin",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=disqus_unique;__jid",
            INLINE_URLS,
                "URL=https://tempest.services.disqus.com/ads-iframe/survey/?position=lightbox&shortname=qor&experiment=network_default_hidden&variant=fallthrough&service=dynamic&anchorColor=%230277bd&colorScheme=light&sourceUrl=https%3A%2F%2Fgetqor.com%2Fen%2Fblogs%2Farticle%2Ftitle%3Dnew%2C-better-qor-documentation-released&typeface=sans-serif&disqus_version=bb0e8f2", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:nested-navigate", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=disqus_unique", END_INLINE,
                "URL=https://a.disquscdn.com/1617742046/images/noavatar92.png", END_INLINE,
                "URL=https://referrer.disqus.com/juggler/event.gif?imp=788gr2o3p7s879&experiment=network_default_hidden&variant=fallthrough&service=dynamic&area=lightbox&product=embed&forum=qor&zone=thread&page_url=https%3A%2F%2Fgetqor.com%2Fen%2Fblogs%2Farticle%2Ftitle%3Dnew%2C-better-qor-documentation-released&page_referrer=http%3A%2F%2F10.10.30.5%3A7000%2F&object_type=provider&event=activity&ad_product_name=iab_display&ad_product_layout=iab_display&bin=embed%3Apromoted_discovery%3Adynamic%3Anetwork_default_hidden%3Afallthrough&section=default&verb=call&adjective=1&forum_id=3908466", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=disqus_unique", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/assets/img/svg-sprite.4da5413f5086c5755b46094b813dbfcd.svg", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/assets/img/loader.ba7c86e8b4b6135bb668d05223f8f127.gif", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/assets/img/sprite.654110a9206fd22f08cca0798e34a65e.png", END_INLINE,
                "URL=https://c.disquscdn.com/next/embed/assets/font/icons.4cc7a703d2fdfe684151ff8ac24d45f1.woff2", END_INLINE,
                "URL=https://cdn.viglink.com/images/pixel.gif?ch=1&rn=0.5078678886390036", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://cdn.viglink.com/images/pixel.gif?ch=2&rn=0.5078678886390036", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://connect.facebook.net/en_US/sdk.js", END_INLINE,
                "URL=https://apis.google.com/js/api.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://connect.facebook.net/en_US/sdk.js?hash=c436330564833a60874386e5c9db3f65&ua=modern_es6", END_INLINE
        );

        status = nsApi.ns_end_transaction("details_2", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(114.708);

        status = nsApi.ns_start_transaction("index_8");
        status = nsApi.ns_web_url ("index_8",
            "URL=http://10.10.30.5:7000/",
            INLINE_URLS,
                "URL=https://c.disquscdn.com/js/dist/prebid.4.30.0-zeta-ssp.js", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/vendors/jquery.js", END_INLINE,
                "URL=http://use.fontawesome.com/6a90f27203.css", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/images/logo-qor.png?theme=action_bar", END_INLINE,
                "URL=https://fonts.googleapis.com/css?family=Source+Sans+Pro:200,200i,300,300i,400,400i,600,600i,700,700i|Playfair+Display|Raleway", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/javascripts/datetimepicker.js", END_INLINE,
                "URL=http://10.10.30.5:7000/admin/assets/javascripts/publish2_inline_edit.js?theme=publish2", END_INLINE,
                "URL=http://10.10.30.5:7000/admin//assets/javascripts/action_bar_check.js?theme=action_bar", END_INLINE,
                "URL=http://10.10.30.5:7000/vendors/jquery.flexslider-min.js", END_INLINE,
                "URL=http://10.10.30.5:7000/dist/app.js", END_INLINE,
                "URL=http://10.10.30.5:7000/images/logo.png", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/media_libraries/2/file.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/1/file.main.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/2/file.main.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/3/file.main.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/4/file.main.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/5/file.main.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/6/file.main.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/7/file.main.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/8/file.main.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/media_libraries/3/file.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/media_libraries/4/file.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/images/twitter.png", END_INLINE,
                "URL=http://10.10.30.5:7000/images/facebook.png", END_INLINE,
                "URL=http://10.10.30.5:7000/images/gplus.png", END_INLINE,
                "URL=http://10.10.30.5:7000/images/youtube.png", END_INLINE,
                "URL=http://use.fontawesome.com/releases/v4.7.0/css/font-awesome-css.min.css", END_INLINE,
                "URL=https://fonts.gstatic.com/s/sourcesanspro/v14/6xKydSBYKcSV-LCoeQqfX1RYOo3i54rwlxdu.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://fonts.gstatic.com/s/sourcesanspro/v14/6xK3dSBYKcSV-LCoeQqfX1RYOo3qOK7l.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://use.fontawesome.com/releases/v4.7.0/fonts/fontawesome-webfont.woff2", END_INLINE,
                "URL=https://fonts.gstatic.com/s/sourcesanspro/v14/6xKydSBYKcSV-LCoeQqfX1RYOo3i94_wlxdu.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://fonts.gstatic.com/s/sourcesanspro/v14/6xKydSBYKcSV-LCoeQqfX1RYOo3ig4vwlxdu.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/images/icon-arrow-down-big.png", END_INLINE,
                "URL=https://fonts.gstatic.com/s/playfairdisplay/v22/nuFvD-vYSZviVYUb_rj3ij__anPXJzDwcbmjWBN2PKdFvXDXbtM.woff2", "HEADER=Origin:http://10.10.30.5:7000", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("index_8", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_15");
        status = nsApi.ns_web_url ("sessionstabilizer_15",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_15", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(6.304);

        //Page Auto splitted for Image Link '' Clicked by User
        status = nsApi.ns_start_transaction("crossover_back_w_2");
        status = nsApi.ns_web_url ("crossover_back_w_2",
            "URL=http://10.10.30.5:7000/products/crossover-back_w",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/images/icon-fav.png", END_INLINE,
                "URL=http://10.10.30.5:7000/images/facebook-grey.png", END_INLINE,
                "URL=https://fonts.googleapis.com/css?family=Source+Sans+Pro:200,200i,300,300i,400,400i,600,600i,700,700i|Playfair+Display|Raleway", END_INLINE,
                "URL=http://10.10.30.5:7000/images/twitter-grey.png", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/10/file.main.jpg", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/9/file.main.jpg", END_INLINE
        );

        status = nsApi.ns_end_transaction("crossover_back_w_2", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(0.208);

        status = nsApi.ns_start_transaction("crossover_back_w");
        status = nsApi.ns_web_url ("crossover_back_w",
            "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/system/product_images/8/file.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/images/icon-slider-arrow-left.png", END_INLINE,
                "URL=http://10.10.30.5:7000/images/icon-slider-arrow-right.png", END_INLINE
        );

        status = nsApi.ns_end_transaction("crossover_back_w", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_16");
        status = nsApi.ns_web_url ("sessionstabilizer_16",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay"
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_16", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(1.598);

        //Page Auto splitted for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("index_12");
        status = nsApi.ns_web_url ("index_12",
            "URL=http://10.10.30.5:7000/",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("index_12", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(0.264);

        status = nsApi.ns_start_transaction("index_9");
        status = nsApi.ns_web_url ("index_9",
            "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("index_9", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_17");
        status = nsApi.ns_web_url ("sessionstabilizer_17",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/#", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_17", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(136.396);

        //Page Auto splitted for Image Link '' Clicked by User
        status = nsApi.ns_start_transaction("cropped_bell_top_gr_ch_2");
        status = nsApi.ns_web_url ("cropped_bell_top_gr_ch_2",
            "URL=http://10.10.30.5:7000/products/cropped-bell-top_gr-ch",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=Accept-Language:en-US,en;q=0.9", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", END_INLINE,
                "URL=http://10.10.30.5:7000/system/product_images/2/file.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("cropped_bell_top_gr_ch_2", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(0.001);

        status = nsApi.ns_start_transaction("cropped_bell_top_gr_ch");
        status = nsApi.ns_web_url ("cropped_bell_top_gr_ch",
            "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session"
        );

        status = nsApi.ns_end_transaction("cropped_bell_top_gr_ch", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_18");
        status = nsApi.ns_web_url ("sessionstabilizer_18",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay"
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_18", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(9.395);

        status = nsApi.ns_start_transaction("cart_2");
        status = nsApi.ns_web_url ("cart_2",
            "URL=http://10.10.30.5:7000/cart",
            "METHOD=PUT",
            "HEADER=Content-Length:64",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=X-Requested-With:XMLHttpRequest",
            "HEADER=Content-Type:application/x-www-form-urlencoded; charset=UTF-8",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            BODY_BEGIN,
                "[key: "product_id"
value: "2"
, key: "color_variation_id"
value: "2"
, key: "size_variation_id"
value: "6"
, key: "quantity"
value: "1"
]",
            BODY_END
        );

        status = nsApi.ns_end_transaction("cart_2", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(0.014);

        //Page Auto splitted for Button '' Clicked by User
        status = nsApi.ns_start_transaction("cart_4");
        status = nsApi.ns_web_url ("cart_4",
            "URL=http://10.10.30.5:7000/cart",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/system/product_images/1/file.jpg", END_INLINE,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=Accept-Language:en-US,en;q=0.9", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", END_INLINE
        );

        status = nsApi.ns_end_transaction("cart_4", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_19");
        status = nsApi.ns_web_url ("sessionstabilizer_19",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_19", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(6.226);

        //Page Auto splitted for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("index_10");
        status = nsApi.ns_web_url ("index_10",
            "URL=http://10.10.30.5:7000/",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://use.fontawesome.com/6a90f27203.css", "HEADER=Accept-Language:en-US,en;q=0.9", "HEADER=If-None-Match:W/\"32adbef3fe8dffb60afd89d1dcd537e5\"", "HEADER=If-Modified-Since:Thu, 03 Aug 2017 06:56:25 GMT", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide01.20210407140129989682.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE,
                "URL=http://10.10.30.5:7000/system/qor_widget_settings/home%20page%20banner/image/slide02.20210407140130195091.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("index_10", NS_AUTO_STATUS);
    
    //Page Auto splitted for application/json type
        status = nsApi.ns_start_transaction("sessionstabilizer_20");
        status = nsApi.ns_web_url ("sessionstabilizer_20",
            "URL=https://payments-jp-sandbox.amazon.com/gp/widgets/sessionstabilizer?countryOfEstablishment=JP&ledgerCurrency=JPY&isSandbox=true",
            "HEADER=Origin:http://10.10.30.5:7000",
            "HEADER=Sec-Fetch-Site:cross-site",
            "HEADER=Sec-Fetch-Mode:cors",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=ubid-main;session-token;session-id;session-id-time;session-id-apay",
            INLINE_URLS,
                "URL=http://10.10.30.5:7000/admin//action_bar/inline_edit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=publish2_publish_scheduled_time;pubilsh2_publish_draft_content;language;amazon-pay-connectedAuth;_session", END_INLINE
        );

        status = nsApi.ns_end_transaction("sessionstabilizer_20", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(3.624);

        return status;
    }
}
