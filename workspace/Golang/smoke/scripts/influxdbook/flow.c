/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 01/25/2023 12:28:11
    Flow details:
    Build details: 4.11.0 (build# 23)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("signin");
    ns_web_url ("signin",
        "URL=http://172.24.1.4:8086/signin",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/cc16dd8913.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/24.6e47f1218a.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/46c25bd08b.wasm", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/30.c522fdfd4c.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/351.335284ffd1.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("signin", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup");
    ns_web_url ("setup",
        "URL=http://172.24.1.4:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/76.4f05d3498e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/756cfeadfd.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/e71b678a99.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/8a04845132.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("setup", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health");
    ns_web_url ("health",
        "URL=http://172.24.1.4:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/e71b678a99.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8a04845132.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("health", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("signin_2");
    ns_web_url ("signin_2",
        "URL=http://172.24.1.4:8086/api/v2/signin",
        "METHOD=POST",
        "HEADER=authorization:Basic Y2F2aXNzb246Y2F2aXNzb24=",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/", END_INLINE,
            "URL=http://172.24.1.4:8086/signin", END_INLINE
    );

    ns_end_transaction("signin_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("me");
    ns_web_url ("me",
        "URL=http://172.24.1.4:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("me", NS_AUTO_STATUS);
    ns_page_think_time(0.014);

    //Page Auto split for Button 'Sign In' Clicked by User
    ns_start_transaction("flags");
    ns_web_url ("flags",
        "URL=http://172.24.1.4:8086/api/v2/flags",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("flags", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("orgs");
    ns_web_url ("orgs",
        "URL=http://172.24.1.4:8086/api/v2/orgs",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9", END_INLINE,
            "URL=http://172.24.1.4:8086/1.3300133c6a.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/4.64dda24b4e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5.e9e7a5463f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/6.71289d1e6f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/28.e798bcc63e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/65.0a6b523ddb.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/42.835ca16580.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/e6cef65982.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/e6cef65982.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("orgs", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards");
    ns_web_url ("dashboards",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/e3937801e3.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/6515f0452e.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("dashboards", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_2");
    ns_web_url ("health_2",
        "URL=http://172.24.1.4:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/e3937801e3.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/6515f0452e.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/load-data/sources", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("health_2", NS_AUTO_STATUS);
    ns_page_think_time(4.558);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X2_9a94465ff4_js");
    ns_web_url ("X2_9a94465ff4_js",
        "URL=http://172.24.1.4:8086/12.9a94465ff4.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/17.18769dc892.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/52.037f0c99ca.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/355.77a4ddc441.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/c5e11df30f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/7c232faa6b.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d282b5dc2d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/6a035ca694.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d831880c7d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5f2c6d9067.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/3dabdf9fea.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/057f237d97.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/ed5875c592.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/b4105a4388.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/c99ec09528.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/586aa8f23c.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8c756c1e65.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/74ba2b9c36.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/0ded195c90.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/59a7c64ae2.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/c8a5ffd429.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/884ed986bb.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9d0659f036.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/f0b1424537.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/668a77b3cc.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/682be7471d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/a67b2229c8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/23b3a029ff.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/c5025422d8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/42ba6a4383.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/66b3c62e64.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/c788b272da.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/21959a1bb5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/f4eb54ea6d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/a1d5e24cc1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/7aed1b3a51.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/175098a01b.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/38f67e6bee.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/3e004cc3d0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d1ea6afe6e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/e4e5aba343.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9f486156be.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/54f754f1b1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/58d80338f4.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/6588cd86ae.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/2dedac00ee.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/b1e7bbc2db.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/45a59bb23f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/ac851df440.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8144e25cd4.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/2cecf780cf.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/14cfaa0fa5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/111016e830.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/f0a88e9ba1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/89f49271c1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/1f411b102d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/6d99c7671e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/7c08d7e69e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/108a283f34.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d2188336d6.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/6fbb271634.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/096438488d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/a2543efad8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/614ca6e83a.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/53cb3a5f10.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/3e5a1246ef.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/3c5ef5ffee.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/0ad25e4b13.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d0ab476331.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/7735dfc101.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/bde183ff4d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/51c4fd1ca4.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/72514d6e49.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/1c13d904a5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/e934e583d4.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/28939e9ec4.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/f5d7d0f55b.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/37d8f470d8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/82ae570387.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/fbf149dcc8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/620134eb80.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/1e99876b35.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/2ba9e14599.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/d3fc177828.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X2_9a94465ff4_js", NS_AUTO_STATUS);
    ns_page_think_time(0.017);

//URL commented due to error code : ABORTED
    ns_start_transaction("sources");
    ns_web_url ("sources",
        "URL=http://172.24.1.4:8086/eda0280db9.svg",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/fc8660733b.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/17b573894e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/5b0c219f18.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/9e2d3a1b86.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/5077038fa7.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/24.6e47f1218a.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/46c25bd08b.wasm", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/30.c522fdfd4c.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/351.335284ffd1.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("sources", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup_2");
    ns_web_url ("setup_2",
        "URL=http://172.24.1.4:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("setup_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("me_2");
    ns_web_url ("me_2",
        "URL=http://172.24.1.4:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("me_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("flags_2");
    ns_web_url ("flags_2",
        "URL=http://172.24.1.4:8086/api/v2/flags",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("flags_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("orgs_2");
    ns_web_url ("orgs_2",
        "URL=http://172.24.1.4:8086/api/v2/orgs",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/3c5ef5ffee.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/0ad25e4b13.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/1e99876b35.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/2ba9e14599.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d3fc177828.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/eda0280db9.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/fc8660733b.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/17b573894e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5b0c219f18.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/82538a3fed.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/361066416c.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9e2d3a1b86.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5077038fa7.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/2985235df3.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/89c6158164.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/dc1b66a141.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/36705d208d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/f80a91ba03.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/cd591c8aa8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/42c70b53f0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8e3e50290e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/ea4e1d80a5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/1c28eea713.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/328f7c8f58.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/4e6a28f518.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/838442d56d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/818d5dd99a.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/1f87e13970.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5cb6c5fd31.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/00c1cd41e1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/056151997f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8e2eb4e81a.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/a6ea496e58.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/74a6a0b732.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/66612c168e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5e5fe5a981.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9bbd9cb9c8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9cc0108f08.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/c3a4fa94d9.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/58c83946f6.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/b5dc9994bf.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/b1fab729ac.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8b997283fb.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/b4acbf00d0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9b0bcfca5f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/50f28568a0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8cded58805.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/1cd26fdb60.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/4aaff929af.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/0f32ad2bfa.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/42c9967c69.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/1a429df9ec.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/7cfd23c46c.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8446666eb0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/1d07589b30.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("orgs_2", NS_AUTO_STATUS);
    ns_page_think_time(0.023);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("Xba575f55e_svg");
    ns_web_url ("Xba575f55e_svg",
        "URL=http://172.24.1.4:8086/4ba575f55e.svg",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/58696ffaf6.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/af99ebacc0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/notebooks", END_INLINE,
            "URL=http://172.24.1.4:8086/99cd4bcb0e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/fa714175dd.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/load-data/sources", END_INLINE,
            "URL=http://172.24.1.4:8086/ee8354c1b1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/09271a32a2.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/f11b83d401.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/70f2c0d968.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/42ab28d0bc.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/2ffe2ccff5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9afaef5b4f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/4496973677.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8e6336e716.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/80498d29ec.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9508221c37.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5c23880d6c.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/b5d0f62d88.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/ec1f844187.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/b4ed2bd8f1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/ba2b4c974f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/1f16734c1d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9b75438e96.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d92e2d897a.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/f97512804e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5f7fe9c4b5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/4addfd8db2.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/29.9e34b1b7f5.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8efb94a2b3.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/25a355b51e.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9763d95516.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("Xba575f55e_svg", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks");
    ns_web_url ("notebooks",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/notebooks/0aa5d7126c5cf000", END_INLINE
    );

    ns_end_transaction("notebooks", NS_AUTO_STATUS);
    ns_page_think_time(28.051);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X6_ea58b4208c_js");
    ns_web_url ("X6_ea58b4208c_js",
        "URL=http://172.24.1.4:8086/26.ea58b4208c.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X6_ea58b4208c_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets");
    ns_web_url ("buckets",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_2");
    ns_web_url ("notebooks_2",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query");
    ns_web_url ("query",
        "URL=http://172.24.1.4:8086/api/v2/query?orgID=01388c43be91e8d9",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n\t|> range(start: -1h, stop: now())\n\t|> filter(fn: (r) =>\n\t\t(true))\n\t|> keys()\n\t|> keep(columns: [\"_value\"])\n\t|> distinct()\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\"))\n\t|> sort()\n\t|> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_2");
    ns_web_url ("buckets_2",
        "URL=http://172.24.1.4:8086/api/v2/buckets?limit=100&orgID=01388c43be91e8d9",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/61ea17f16c.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/61ea17f16c.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/dashboards-list", END_INLINE
    );

    ns_end_transaction("buckets_2", NS_AUTO_STATUS);
    ns_page_think_time(31.144);

    //Page Auto split for 
    ns_start_transaction("X3_d4d607be2f_js");
    ns_web_url ("X3_d4d607be2f_js",
        "URL=http://172.24.1.4:8086/13.d4d607be2f.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/14.b5134f1a61.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/44.e83ac7053a.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X3_d4d607be2f_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_2");
    ns_web_url ("dashboards_2",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels");
    ns_web_url ("labels",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels", NS_AUTO_STATUS);
    ns_page_think_time(1.626);

    //Page Auto split for 
    ns_start_transaction("notebooks_3");
    ns_web_url ("notebooks_3",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/notebook/from/default", END_INLINE
    );

    ns_end_transaction("notebooks_3", NS_AUTO_STATUS);
    ns_page_think_time(34.536);

    //Page Auto split for Button 'New Notebook' Clicked by User
    ns_start_transaction("X5_797715d863_js");
    ns_web_url ("X5_797715d863_js",
        "URL=http://172.24.1.4:8086/25.797715d863.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X5_797715d863_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_4");
    ns_web_url ("notebooks_4",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("notebooks_5");
    ns_web_url ("notebooks_5",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks",
        "METHOD=POST",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"01388c43be91e8d9","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"seconds":3600,"lower":"now() - 1h","upper":null,"label":"Past 1h","duration":"1h","type":"selectable-duration","windowPeriod":10000},"refresh":{"status":"paused","interval":0,"duration":null,"inactivityTimeout":0,"infiniteDuration":false},"pipes":[{"type":"queryBuilder","buckets":[],"tags":[{"key":"_measurement","values":[],"aggregateFunctionType":"filter"}],"id":"local_ac7f6f2c-9a48-465c-8a05-851c65ba5ad4","title":"Build a Query","visible":true},{"type":"table","id":"local_441b2ba1-545a-4734-9b15-6144de7076c3","title":"Validate the Data","visible":true},{"type":"visualization","properties":{"type":"xy","shape":"chronograf-v2","geom":"line","xColumn":null,"yColumn":null,"position":"overlaid","hoverDimension":"auto","queries":[{"name":"","text":"","editMode":"builder","builderConfig":{"buckets":[],"tags":[{"key":"_measurement","values":[],"aggregateFunctionType":"filter"}],"functions":[{"name":"mean"}],"aggregateWindow":{"period":"auto","fillValues":false}}}],"colors":[{"type":"scale","hex":"#31C0F6","id":"1399e35d-70e4-46c9-8dcd-f80974c5eedb","name":"Nineteen Eighty Four","value":0},{"type":"scale","hex":"#A500A5","id":"3fb6579c-f3c4-43af-bfbb-065b01753f7d","name":"Nineteen Eighty Four","value":0},{"type":"scale","hex":"#FF7E27","id":"5f850be4-7cdf-4248-a5c8-3ac2fb8dc868","name":"Nineteen Eighty Four","value":0}],"legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"note":"","showNoteWhenEmpty":false,"axes":{"x":{"bounds":["",""],"label":"","prefix":"","suffix":"","base":"10","scale":"linear"},"y":{"bounds":["",""],"label":"","prefix":"","suffix":"","base":"10","scale":"linear"}},"generateXAxisTicks":[],"generateYAxisTicks":[],"xTotalTicks":null,"xTickStart":null,"xTickStep":null,"yTotalTicks":null,"yTickStart":null,"yTickStep":null},"id":"local_cf21816b-f701-4958-9ac6-b24241dae0a6","title":"Visualize the Result","visible":true}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/notebooks/0aa5ed353f381000", END_INLINE
    );

    ns_end_transaction("notebooks_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_6");
    ns_web_url ("notebooks_6",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_3");
    ns_web_url ("buckets_3",
        "URL=http://172.24.1.4:8086/api/v2/buckets?limit=100&orgID=01388c43be91e8d9",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xaa5ed353f381000");
    ns_web_url ("Xaa5ed353f381000",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks/0aa5ed353f381000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"01388c43be91e8d9","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2023-01-25T06:57:17.052605103Z","updatedAt":"2023-01-25T06:57:17.052605103Z","pipes":[{"buckets":[],"id":"local_ac7f6f2c-9a48-465c-8a05-851c65ba5ad4","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_441b2ba1-545a-4734-9b15-6144de7076c3","type":"table","title":"Validate the Data","visible":true},{"id":"local_cf21816b-f701-4958-9ac6-b24241dae0a6","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"1399e35d-70e4-46c9-8dcd-f80974c5eedb","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"3fb6579c-f3c4-43af-bfbb-065b01753f7d","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"5f850be4-7cdf-4248-a5c8-3ac2fb8dc868","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","period":"10s","title":"Visualize the Result","visible":true}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/tasks", END_INLINE
    );

    ns_end_transaction("Xaa5ed353f381000", NS_AUTO_STATUS);
    ns_page_think_time(39.746);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X1_661ecd307d_js");
    ns_web_url ("X1_661ecd307d_js",
        "URL=http://172.24.1.4:8086/41.661ecd307d.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X1_661ecd307d_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("tasks");
    ns_web_url ("tasks",
        "URL=http://172.24.1.4:8086/api/v2/tasks?orgID=01388c43be91e8d9&limit=500",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("tasks", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_2");
    ns_web_url ("labels_2",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/alerting", END_INLINE
    );

    ns_end_transaction("labels_2", NS_AUTO_STATUS);
    ns_page_think_time(41.129);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X1_518576b96f_js");
    ns_web_url ("X1_518576b96f_js",
        "URL=http://172.24.1.4:8086/31.518576b96f.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X1_518576b96f_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_3");
    ns_web_url ("labels_3",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_4");
    ns_web_url ("buckets_4",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables");
    ns_web_url ("variables",
        "URL=http://172.24.1.4:8086/api/v2/variables?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("variables", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("checks");
    ns_web_url ("checks",
        "URL=http://172.24.1.4:8086/api/v2/checks?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("checks", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationEndpoints");
    ns_web_url ("notificationEndpoints",
        "URL=http://172.24.1.4:8086/api/v2/notificationEndpoints?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notificationEndpoints", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationRules");
    ns_web_url ("notificationRules",
        "URL=http://172.24.1.4:8086/api/v2/notificationRules?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/0367a1dab7.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/0367a1dab7.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/settings/variables", END_INLINE
    );

    ns_end_transaction("notificationRules", NS_AUTO_STATUS);
    ns_page_think_time(42.812);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X2_371e55925f_js");
    ns_web_url ("X2_371e55925f_js",
        "URL=http://172.24.1.4:8086/62.371e55925f.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X2_371e55925f_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_4");
    ns_web_url ("labels_4",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_2");
    ns_web_url ("variables_2",
        "URL=http://172.24.1.4:8086/api/v2/variables?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("variables_2", NS_AUTO_STATUS);
    ns_page_think_time(4.602);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("notebooks_7");
    ns_web_url ("notebooks_7",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_7", NS_AUTO_STATUS);
    ns_page_think_time(1.974);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("notebooks_8");
    ns_web_url ("notebooks_8",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_8", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_5");
    ns_web_url ("buckets_5",
        "URL=http://172.24.1.4:8086/api/v2/buckets?limit=100&orgID=01388c43be91e8d9",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_5", NS_AUTO_STATUS);
    ns_page_think_time(1.672);

    //Page Auto split for 
    ns_start_transaction("notebooks_9");
    ns_web_url ("notebooks_9",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/notebooks/0aa5e3b1abd39000", END_INLINE
    );

    ns_end_transaction("notebooks_9", NS_AUTO_STATUS);
    ns_page_think_time(55.205);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("notebooks_10");
    ns_web_url ("notebooks_10",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_10", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_2");
    ns_web_url ("query_2",
        "URL=http://172.24.1.4:8086/api/v2/query?orgID=01388c43be91e8d9",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n\t|> range(start: -1h, stop: now())\n\t|> filter(fn: (r) =>\n\t\t(true))\n\t|> keys()\n\t|> keep(columns: [\"_value\"])\n\t|> distinct()\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\"))\n\t|> sort()\n\t|> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_6");
    ns_web_url ("buckets_6",
        "URL=http://172.24.1.4:8086/api/v2/buckets?limit=100&orgID=01388c43be91e8d9",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xaa5d7126c5cf000");
    ns_web_url ("Xaa5d7126c5cf000",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks/0aa5d7126c5cf000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"01388c43be91e8d9","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2023-01-25T05:20:34.225779571Z","updatedAt":"2023-01-25T06:34:21.971314303Z","pipes":[{"buckets":[{"id":"airSensor","name":"Air Sensor Data","type":"sample"}],"id":"local_461c7b96-4b7f-4f5b-a08b-41c3d2006632","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_0728a6c6-5a30-440a-9b97-15376cccdcaf","type":"table","title":"Validate the Data","visible":true},{"id":"local_a9465552-9681-447a-b701-d0295cefb3f1","period":"10s","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"ccdb1d82-38bb-4a54-b648-5423ea901c9e","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"de97d869-4fd3-4c72-a236-de387d1e62a7","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"d081f8f3-f2a4-4a44-b0db-ab1e2d830b75","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","title":"Visualize the Result","visible":true}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/data-explorer", END_INLINE
    );

    ns_end_transaction("Xaa5d7126c5cf000", NS_AUTO_STATUS);
    ns_page_think_time(56.935);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X3_fbd453f763_js");
    ns_web_url ("X3_fbd453f763_js",
        "URL=http://172.24.1.4:8086/33.fbd453f763.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/a592c9bd38.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X3_fbd453f763_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_7");
    ns_web_url ("buckets_7",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_7", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_3");
    ns_web_url ("variables_3",
        "URL=http://172.24.1.4:8086/api/v2/variables?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("variables_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_3");
    ns_web_url ("query_3",
        "URL=http://172.24.1.4:8086/api/v2/query?orgID=01388c43be91e8d9",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"regexp\"\n  \n  from(bucket: \"Cavisson\")\n  |> range(start: -1h, stop: now())\n  |> filter(fn: (r) => true)\n  |> keys()\n  |> keep(columns: [\"_value\"])\n  |> distinct()\n  |> filter(fn: (r) => r._value != \"_time\" and r._value != \"_start\" and r._value !=  \"_stop\" and r._value != \"_value\")\n  |> sort()\n  |> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_4");
    ns_web_url ("query_4",
        "URL=http://172.24.1.4:8086/api/v2/query?orgID=01388c43be91e8d9",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n\t|> range(start: -1h, stop: now())\n\t|> filter(fn: (r) =>\n\t\t(true))\n\t|> keys()\n\t|> keep(columns: [\"_value\"])\n\t|> distinct()\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\"))\n\t|> sort()\n\t|> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/load-data/buckets", END_INLINE
    );

    ns_end_transaction("query_4", NS_AUTO_STATUS);
    ns_page_think_time(59.762);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X8_55c62d8494_js");
    ns_web_url ("X8_55c62d8494_js",
        "URL=http://172.24.1.4:8086/38.55c62d8494.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X8_55c62d8494_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_8");
    ns_web_url ("buckets_8",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_8", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_5");
    ns_web_url ("labels_5",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("telegrafs");
    ns_web_url ("telegrafs",
        "URL=http://172.24.1.4:8086/api/v2/telegrafs?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/load-data/telegrafs", END_INLINE
    );

    ns_end_transaction("telegrafs", NS_AUTO_STATUS);
    ns_page_think_time(61.001);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X7_9216886c7f_js");
    ns_web_url ("X7_9216886c7f_js",
        "URL=http://172.24.1.4:8086/47.9216886c7f.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X7_9216886c7f_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_6");
    ns_web_url ("labels_6",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_9");
    ns_web_url ("buckets_9",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_9", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("telegrafs_2");
    ns_web_url ("telegrafs_2",
        "URL=http://172.24.1.4:8086/api/v2/telegrafs?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/load-data/scrapers", END_INLINE
    );

    ns_end_transaction("telegrafs_2", NS_AUTO_STATUS);
    ns_page_think_time(62.332);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X9_ee36090a31_js");
    ns_web_url ("X9_ee36090a31_js",
        "URL=http://172.24.1.4:8086/49.ee36090a31.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X9_ee36090a31_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_10");
    ns_web_url ("buckets_10",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_10", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("scrapers");
    ns_web_url ("scrapers",
        "URL=http://172.24.1.4:8086/api/v2/scrapers?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9/load-data/tokens", END_INLINE
    );

    ns_end_transaction("scrapers", NS_AUTO_STATUS);
    ns_page_think_time(63.612);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X6_fb4334c703_js");
    ns_web_url ("X6_fb4334c703_js",
        "URL=http://172.24.1.4:8086/46.fb4334c703.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X6_fb4334c703_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("authorizations");
    ns_web_url ("authorizations",
        "URL=http://172.24.1.4:8086/api/v2/authorizations?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/01388c43be91e8d9", END_INLINE
    );

    ns_end_transaction("authorizations", NS_AUTO_STATUS);
    ns_page_think_time(65.579);

    //Page Auto split for 
    ns_start_transaction("X2_835ca16580_js");
    ns_web_url ("X2_835ca16580_js",
        "URL=http://172.24.1.4:8086/42.835ca16580.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X2_835ca16580_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_3");
    ns_web_url ("dashboards_3",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_3");
    ns_web_url ("health_3",
        "URL=http://172.24.1.4:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_3", NS_AUTO_STATUS);
    ns_page_think_time(1.631);

    //Page Auto split for 
    ns_start_transaction("notebooks_11");
    ns_web_url ("notebooks_11",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_11", NS_AUTO_STATUS);
    ns_page_think_time(0.812);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("dashboards_4");
    ns_web_url ("dashboards_4",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_7");
    ns_web_url ("labels_7",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_7", NS_AUTO_STATUS);
    ns_page_think_time(1.136);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("labels_8");
    ns_web_url ("labels_8",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_8", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("tasks_2");
    ns_web_url ("tasks_2",
        "URL=http://172.24.1.4:8086/api/v2/tasks?orgID=01388c43be91e8d9&limit=500",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("tasks_2", NS_AUTO_STATUS);
    ns_page_think_time(0.931);

    //Page Auto split for 
    ns_start_transaction("labels_9");
    ns_web_url ("labels_9",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_9", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_11");
    ns_web_url ("buckets_11",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_11", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_4");
    ns_web_url ("variables_4",
        "URL=http://172.24.1.4:8086/api/v2/variables?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("variables_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationEndpoints_2");
    ns_web_url ("notificationEndpoints_2",
        "URL=http://172.24.1.4:8086/api/v2/notificationEndpoints?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notificationEndpoints_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("checks_2");
    ns_web_url ("checks_2",
        "URL=http://172.24.1.4:8086/api/v2/checks?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("checks_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationRules_2");
    ns_web_url ("notificationRules_2",
        "URL=http://172.24.1.4:8086/api/v2/notificationRules?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notificationRules_2", NS_AUTO_STATUS);
    ns_page_think_time(0.93);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("labels_10");
    ns_web_url ("labels_10",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_10", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_5");
    ns_web_url ("variables_5",
        "URL=http://172.24.1.4:8086/api/v2/variables?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("variables_5", NS_AUTO_STATUS);
    ns_page_think_time(1.207);

    //Page Auto split for 
    ns_start_transaction("labels_11");
    ns_web_url ("labels_11",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_11", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_6");
    ns_web_url ("variables_6",
        "URL=http://172.24.1.4:8086/api/v2/variables?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("variables_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationRules_3");
    ns_web_url ("notificationRules_3",
        "URL=http://172.24.1.4:8086/api/v2/notificationRules?orgID=01388c43be91e8d9&limit=100"
    );

    ns_end_transaction("notificationRules_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("checks_3");
    ns_web_url ("checks_3",
        "URL=http://172.24.1.4:8086/api/v2/checks?orgID=01388c43be91e8d9&limit=100"
    );

    ns_end_transaction("checks_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_12");
    ns_web_url ("buckets_12",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=01388c43be91e8d9&limit=100"
    );

    ns_end_transaction("buckets_12", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationEndpoints_3");
    ns_web_url ("notificationEndpoints_3",
        "URL=http://172.24.1.4:8086/api/v2/notificationEndpoints?orgID=01388c43be91e8d9"
    );

    ns_end_transaction("notificationEndpoints_3", NS_AUTO_STATUS);
    ns_page_think_time(0.881);

    //Page Auto split for 
    ns_start_transaction("labels_12");
    ns_web_url ("labels_12",
        "URL=http://172.24.1.4:8086/api/v2/labels?orgID=01388c43be91e8d9",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_12", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("tasks_3");
    ns_web_url ("tasks_3",
        "URL=http://172.24.1.4:8086/api/v2/tasks?orgID=01388c43be91e8d9&limit=500"
    );

    ns_end_transaction("tasks_3", NS_AUTO_STATUS);
    ns_page_think_time(3.188);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("dashboards_5");
    ns_web_url ("dashboards_5",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=01388c43be91e8d9&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_4");
    ns_web_url ("health_4",
        "URL=http://172.24.1.4:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_12");
    ns_web_url ("notebooks_12",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=01388c43be91e8d9"
    );

    ns_end_transaction("notebooks_12", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("me_3");
    ns_web_url ("me_3",
        "URL=http://172.24.1.4:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("me_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_5");
    ns_web_url ("health_5",
        "URL=http://172.24.1.4:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_6");
    ns_web_url ("dashboards_6",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=01388c43be91e8d9&limit=100",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/logout", END_INLINE
    );

    ns_end_transaction("dashboards_6", NS_AUTO_STATUS);
    ns_page_think_time(84.586);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X50_533ec77324_js");
    ns_web_url ("X50_533ec77324_js",
        "URL=http://172.24.1.4:8086/350.533ec77324.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X50_533ec77324_js", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("signout");
    ns_web_url ("signout",
        "URL=http://172.24.1.4:8086/api/v2/signout",
        "METHOD=POST",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/signin", END_INLINE,
            "URL=http://172.24.1.4:8086/76.4f05d3498e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("signout", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup_3");
    ns_web_url ("setup_3",
        "URL=http://172.24.1.4:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/756cfeadfd.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("setup_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_6");
    ns_web_url ("health_6",
        "URL=http://172.24.1.4:8086/health"
    );

    ns_end_transaction("health_6", NS_AUTO_STATUS);
    ns_page_think_time(2.225);

}
