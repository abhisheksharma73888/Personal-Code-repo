/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 03/07/2022 05:41:54
    Flow details:
    Build details: 4.7.0 (build# 147)
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
        "URL=http://10.10.70.39:8086/signin",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/6588f709b0.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/26.c9f12339d6.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/600ef94c90.wasm", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/32.5c02872a8b.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("signin", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup");
    ns_web_url ("setup",
        "URL=http://10.10.70.39:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/78.a8bcdf1568.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/756cfeadfd.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8a04845132.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/e71b678a99.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("setup", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health");
    ns_web_url ("health",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/8a04845132.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/e71b678a99.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("health", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("dns_query");
    ns_web_url ("dns_query",
        "URL=https://chrome.cloudflare-dns.com/dns-query",
        "METHOD=POST",
        "HEADER=Accept-Language:*",
        "HEADER=Content-Type:application/dns-message"
    );

    ns_end_transaction("dns_query", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("signin_2");
    ns_web_url ("signin_2",
        "URL=http://10.10.70.39:8086/api/v2/signin",
        "METHOD=POST",
        "HEADER=authorization:Basic YWJoaXNoZWs6Y2F2aXNzb24=",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/", END_INLINE,
            "URL=http://10.10.70.39:8086/signin", END_INLINE
    );

    ns_end_transaction("signin_2", NS_AUTO_STATUS);
    ns_page_think_time(36.395);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("me");
    ns_web_url ("me",
        "URL=http://10.10.70.39:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("me", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("flags");
    ns_web_url ("flags",
        "URL=http://10.10.70.39:8086/api/v2/flags",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("flags", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("orgs");
    ns_web_url ("orgs",
        "URL=http://10.10.70.39:8086/api/v2/orgs",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de", END_INLINE,
            "URL=http://10.10.70.39:8086/3.82ddbdbd9f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/4.2d8e2b75b3.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/5.cd750d04e2.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/6.f9e6758d7e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/30.1c5c894fc8.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/0.73ba69aef2.worker.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/68.494044f5a6.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8.ea285b6fad.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/39.305cb164e7.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/c9783ceb2a.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/c9783ceb2a.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("orgs", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards");
    ns_web_url ("dashboards",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/e3937801e3.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/6515f0452e.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("dashboards", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_2");
    ns_web_url ("health_2",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/e3937801e3.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/6515f0452e.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("health_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("dns_query_2");
    ns_web_url ("dns_query_2",
        "URL=https://chrome.cloudflare-dns.com/dns-query",
        "METHOD=POST",
        "HEADER=Accept-Language:*",
        "HEADER=Content-Type:application/dns-message",
        BODY_BEGIN,
            "docs
influxdatacom     )      P  L",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/load-data/sources", END_INLINE
    );

    ns_end_transaction("dns_query_2", NS_AUTO_STATUS);
    ns_page_think_time(48.717);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("X3_c4b844a863_js");
    ns_web_url ("X3_c4b844a863_js",
        "URL=http://10.10.70.39:8086/13.c4b844a863.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/42.89c7e17358.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/362.53978adc3f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/c5e11df30f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/7c232faa6b.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/d282b5dc2d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/6a035ca694.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/d831880c7d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/5f2c6d9067.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/ed5875c592.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/b4105a4388.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/057f237d97.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/3dabdf9fea.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/c99ec09528.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/586aa8f23c.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8c756c1e65.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/74ba2b9c36.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/0ded195c90.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/59a7c64ae2.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/2fbe9316b6.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/884ed986bb.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9d0659f036.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/f0b1424537.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/668a77b3cc.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/682be7471d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/a67b2229c8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/23b3a029ff.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/c5025422d8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/42ba6a4383.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/66b3c62e64.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/c788b272da.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/21959a1bb5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/f4eb54ea6d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/a1d5e24cc1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/7aed1b3a51.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/175098a01b.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/38f67e6bee.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/3e004cc3d0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/d1ea6afe6e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/e4e5aba343.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9f486156be.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/54f754f1b1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/58d80338f4.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/6588cd86ae.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/2dedac00ee.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/b1e7bbc2db.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/45a59bb23f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/ac851df440.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8144e25cd4.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/2cecf780cf.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/14cfaa0fa5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/111016e830.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/f0a88e9ba1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/89f49271c1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/1f411b102d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/6d99c7671e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/7c08d7e69e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/108a283f34.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/d2188336d6.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/6fbb271634.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/096438488d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/a2543efad8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/614ca6e83a.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/53cb3a5f10.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/3e5a1246ef.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/3c5ef5ffee.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/0ad25e4b13.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/d0ab476331.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/7735dfc101.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/bde183ff4d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/51c4fd1ca4.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/72514d6e49.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/1c13d904a5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/e934e583d4.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/28939e9ec4.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/f5d7d0f55b.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/37d8f470d8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/82ae570387.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/fbf149dcc8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/620134eb80.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/1e99876b35.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/2ba9e14599.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/d3fc177828.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/eda0280db9.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/fc8660733b.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/17b573894e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/5b0c219f18.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/82538a3fed.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/361066416c.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9e2d3a1b86.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/5077038fa7.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/2985235df3.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/89c6158164.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/dc1b66a141.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/36705d208d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/f80a91ba03.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/cd591c8aa8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/42c70b53f0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8e3e50290e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/ea4e1d80a5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/1c28eea713.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/328f7c8f58.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/4e6a28f518.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/838442d56d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/818d5dd99a.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/1f87e13970.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/5cb6c5fd31.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/00c1cd41e1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/056151997f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8e2eb4e81a.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/a6ea496e58.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/74a6a0b732.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/66612c168e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/5e5fe5a981.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9bbd9cb9c8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9cc0108f08.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/c3a4fa94d9.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/58c83946f6.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/b5dc9994bf.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/b1fab729ac.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8b997283fb.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/b4acbf00d0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9b0bcfca5f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/50f28568a0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8cded58805.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/1cd26fdb60.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/4aaff929af.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/0f32ad2bfa.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/42c9967c69.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/1a429df9ec.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/7cfd23c46c.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8446666eb0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/1d07589b30.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/4ba575f55e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/58696ffaf6.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/af99ebacc0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/99cd4bcb0e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/fa714175dd.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/ee8354c1b1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/09271a32a2.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/f11b83d401.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/70f2c0d968.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/42ab28d0bc.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/2ffe2ccff5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9afaef5b4f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/4496973677.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8e6336e716.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/80498d29ec.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X3_c4b844a863_js", NS_AUTO_STATUS);
    ns_page_think_time(0.022);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X508221c37_svg");
    ns_web_url ("X508221c37_svg",
        "URL=http://10.10.70.39:8086/9508221c37.svg",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/load-data/buckets", END_INLINE,
            "URL=http://10.10.70.39:8086/5c23880d6c.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/b5d0f62d88.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/ec1f844187.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/b4ed2bd8f1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/ba2b4c974f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/1f16734c1d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9b75438e96.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/d92e2d897a.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/f97512804e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/5f7fe9c4b5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/4addfd8db2.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/41.7d4f98829c.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X508221c37_svg", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets");
    ns_web_url ("buckets",
        "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels");
    ns_web_url ("labels",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("telegrafs");
    ns_web_url ("telegrafs",
        "URL=http://10.10.70.39:8086/api/v2/telegrafs?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/load-data/telegrafs", END_INLINE
    );

    ns_end_transaction("telegrafs", NS_AUTO_STATUS);
    ns_page_think_time(53.324);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X2_de00dea115_js");
    ns_web_url ("X2_de00dea115_js",
        "URL=http://10.10.70.39:8086/52.de00dea115.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X2_de00dea115_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_2");
    ns_web_url ("labels_2",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_2");
    ns_web_url ("buckets_2",
        "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("telegrafs_2");
    ns_web_url ("telegrafs_2",
        "URL=http://10.10.70.39:8086/api/v2/telegrafs?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/load-data/scrapers", END_INLINE
    );

    ns_end_transaction("telegrafs_2", NS_AUTO_STATUS);
    ns_page_think_time(54.965);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X4_97a4d02a36_js");
    ns_web_url ("X4_97a4d02a36_js",
        "URL=http://10.10.70.39:8086/54.97a4d02a36.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X4_97a4d02a36_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("scrapers");
    ns_web_url ("scrapers",
        "URL=http://10.10.70.39:8086/api/v2/scrapers?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("scrapers", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_3");
    ns_web_url ("buckets_3",
        "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/load-data/tokens", END_INLINE
    );

    ns_end_transaction("buckets_3", NS_AUTO_STATUS);
    ns_page_think_time(56.493);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X9_69bf60a4da_js");
    ns_web_url ("X9_69bf60a4da_js",
        "URL=http://10.10.70.39:8086/49.69bf60a4da.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X9_69bf60a4da_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("authorizations");
    ns_web_url ("authorizations",
        "URL=http://10.10.70.39:8086/api/v2/authorizations?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/data-explorer", END_INLINE
    );

    ns_end_transaction("authorizations", NS_AUTO_STATUS);
    ns_page_think_time(66.745);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X6_aefa625aee_js");
    ns_web_url ("X6_aefa625aee_js",
        "URL=http://10.10.70.39:8086/36.aefa625aee.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X6_aefa625aee_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables");
    ns_web_url ("variables",
        "URL=http://10.10.70.39:8086/api/v2/variables?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/a592c9bd38.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/61ea17f16c.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/0367a1dab7.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("variables", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_4");
    ns_web_url ("buckets_4",
        "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/61ea17f16c.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/0367a1dab7.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("buckets_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query");
    ns_web_url ("query",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"regexp\"\n  \n  from(bucket: \"cavisson\")\n  |> range(start: -1h, stop: now())\n  |> filter(fn: (r) => true)\n  |> keys()\n  |> keep(columns: [\"_value\"])\n  |> distinct()\n  |> filter(fn: (r) => r._value != \"_time\" and r._value != \"_start\" and r._value !=  \"_stop\" and r._value != \"_value\")\n  |> sort()\n  |> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/notebooks", END_INLINE
    );

    ns_end_transaction("query", NS_AUTO_STATUS);
    ns_page_think_time(73.661);

    //Page Auto split for 
    ns_start_transaction("X1_a293651708_js");
    ns_web_url ("X1_a293651708_js",
        "URL=http://10.10.70.39:8086/31.a293651708.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/6d375d8acf.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/d2c48ab197.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9763d95516.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/bca2c14a04.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X1_a293651708_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks");
    ns_web_url ("notebooks",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json");
    ns_web_url ("json",
        "URL=https://update.googleapis.com/service/update2/json?cup2key=10:1609681388&cup2hreq=f1383197f39e8124f115f32467eb33c57fd2a61d37d90ad53f367ef4941bc8bb",
        "METHOD=POST",
        "HEADER=X-Goog-Update-AppId:gcmjkmgdlgnkkcocmoeiminaijmmjnii,cmahhnpholdijhjokonmfdjbfmklppij,obedbbhbpmojnkanicioggnmelmoomoc,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,hfnkpimlhhgieaddgfemjhofmfblmnib,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,eeigpngbgcognadeebkilcpcaedhellh,ojhpjlocmbogdgmfpkhlaaeamibhnphh,oimompecagnajdejgnnjijobebaeigek,llkgjffcdpffmhiakmfcdcblohccpfmo,pdafiollngonhoadbmdoemagnfpdphbe,aemomkdncapdnfajjbbcbdebjljbpmpj",
        "HEADER=X-Goog-Update-Interactivity:bg",
        "HEADER=X-Goog-Update-Updater:chromium-90.0.4430.93",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"cmahhnpholdijhjokonmfdjbfmklppij","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"accept_locale":"ENUS","appid":"obedbbhbpmojnkanicioggnmelmoomoc","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"khaoiebndkojlmppeemjhbpbandiljpe","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"giekcmmlnklenlaomppkphknjmnnpneh","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"jflookgnkcckhobaglndicnbbgbonegd","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"ggkkehgbnfjpeggfpleeakpidbkibbmn","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"jamhcnnkihinmdlkakkaopbjbbcngflc","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"eeigpngbgcognadeebkilcpcaedhellh","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"ojhpjlocmbogdgmfpkhlaaeamibhnphh","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"oimompecagnajdejgnnjijobebaeigek","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"llkgjffcdpffmhiakmfcdcblohccpfmo","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"pdafiollngonhoadbmdoemagnfpdphbe","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"aemomkdncapdnfajjbbcbdebjljbpmpj","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"1.0.5.0"}],"arch":"x64","dedup":"cr","domainjoined":false,"hw":{"physmemory":16},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.19042.1526"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{d48c040e-c48d-4f20-ae99-65fb78c6eca8}","sessionid":"{1bb02a69-d5a9-4f93-9897-18f0e7d2d37b}","updaterversion":"90.0.4430.93"}}",
        BODY_END
    );

    ns_end_transaction("json", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("dns_query_3");
    ns_web_url ("dns_query_3",
        "URL=https://chrome.cloudflare-dns.com/dns-query",
        "METHOD=POST",
        "HEADER=Accept-Language:*",
        "HEADER=Content-Type:application/dns-message",
        BODY_BEGIN,
            "update
googleapiscom     )      N  J",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/notebooks/08ffaf82de3d6000", END_INLINE
    );

    ns_end_transaction("dns_query_3", NS_AUTO_STATUS);
    ns_page_think_time(77.566);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X8_4eaeabd2e3_js");
    ns_web_url ("X8_4eaeabd2e3_js",
        "URL=http://10.10.70.39:8086/28.4eaeabd2e3.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X8_4eaeabd2e3_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_2");
    ns_web_url ("notebooks_2",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_5");
    ns_web_url ("buckets_5",
        "URL=http://10.10.70.39:8086/api/v2/buckets?limit=100&orgID=d4246aa7c059a2de",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_5", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_2");
    ns_web_url ("query_2",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n    |> range(start: -1h, stop: now())\n    |> filter(fn: (r) => true)\n    |> keys()\n    |> keep(columns: [\"_value\"])\n    |> distinct()\n    |> filter(fn: (r) => r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\")\n    |> sort()\n    |> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X8ffaf82de3d6000");
    ns_web_url ("X8ffaf82de3d6000",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/08ffaf82de3d6000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"d4246aa7c059a2de","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2022-03-03T07:48:43.000056193Z","updatedAt":"2022-03-03T07:48:54.932226805Z","pipes":[{"buckets":[],"id":"local_928898e6-8251-4a59-b2f6-18ce78956bc8","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}],"type":"queryBuilder","title":"Query Builder 1","visible":true},{"buckets":[{"type":"sample","name":"Air Sensor Data","id":"airSensor"}],"id":"local_a5d10589-1c9c-497a-ab69-9971d8896005","tags":[{"key":"_measurement","values":[],"aggregateFunctionType":"filter"}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_7fc9042b-41a1-4ce0-bf0c-6c3f346e9e0c","type":"table","title":"Validate the Data","visible":true},{"id":"local_41e825dd-ba55-4c27-99d9-db920ec8b7a3","period":"10s","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"f9be3064-8b78-48f9-a32c-411a4f2c8b8f","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"8ff93519-306c-421d-9f45-c282bef6518f","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"3d50718d-da51-4a3d-a048-644e7502e443","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","title":"Visualize the Result","visible":true}]},"id":"08ffaf82de3d6000"}",
        BODY_END
    );

    ns_end_transaction("X8ffaf82de3d6000", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_3");
    ns_web_url ("query_3",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"regexp\"\n  \n  from(bucket: \"cavisson\")\n  |> range(start: -1h, stop: now())\n  |> filter(fn: (r) => true)\n  |> keep(columns: [\"undefined\"])\n  |> group()\n  |> distinct(column: \"undefined\")\n  |> limit(n: 200)\n  |> sort()","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_4");
    ns_web_url ("query_4",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n    |> range(start: -1h, stop: now())\n    |> filter(fn: (r) => r[\"_measurement\"] == \"airSensors\")\n    |> keys()\n    |> keep(columns: [\"_value\"])\n    |> distinct()\n    |> filter(fn: (r) => r._value != \"_measurement\")\n    |> filter(fn: (r) => r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\")\n    |> sort()\n    |> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_4", NS_AUTO_STATUS);
    ns_page_think_time(2.483);

    //Page Auto split for 
    ns_start_transaction("me_2");
    ns_web_url ("me_2",
        "URL=http://10.10.70.39:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("me_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X8ffaf82de3d6000_2");
    ns_web_url ("X8ffaf82de3d6000_2",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/08ffaf82de3d6000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"d4246aa7c059a2de","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2022-03-03T07:48:43.000056193Z","updatedAt":"2022-03-03T07:48:54.932226805Z","pipes":[{"buckets":[],"id":"local_928898e6-8251-4a59-b2f6-18ce78956bc8","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}],"type":"queryBuilder","title":"Query Builder 1","visible":true},{"buckets":[{"type":"sample","name":"Air Sensor Data","id":"airSensor"}],"id":"local_a5d10589-1c9c-497a-ab69-9971d8896005","tags":[{"key":"_measurement","values":["airSensors"],"aggregateFunctionType":"filter"},{"key":"_field","values":[],"aggregateFunctionType":"filter"}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_7fc9042b-41a1-4ce0-bf0c-6c3f346e9e0c","type":"table","title":"Validate the Data","visible":true},{"id":"local_41e825dd-ba55-4c27-99d9-db920ec8b7a3","period":"10s","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"f9be3064-8b78-48f9-a32c-411a4f2c8b8f","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"8ff93519-306c-421d-9f45-c282bef6518f","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"3d50718d-da51-4a3d-a048-644e7502e443","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","title":"Visualize the Result","visible":true}]},"id":"08ffaf82de3d6000"}",
        BODY_END
    );

    ns_end_transaction("X8ffaf82de3d6000_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X8ffaf82de3d6000_3");
    ns_web_url ("X8ffaf82de3d6000_3",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/08ffaf82de3d6000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"d4246aa7c059a2de","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2022-03-03T07:48:43.000056193Z","updatedAt":"2022-03-03T07:48:54.932226805Z","pipes":[{"buckets":[],"id":"local_928898e6-8251-4a59-b2f6-18ce78956bc8","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}],"type":"queryBuilder","title":"Query Builder 1","visible":true},{"buckets":[{"type":"sample","name":"Air Sensor Data","id":"airSensor"}],"id":"local_a5d10589-1c9c-497a-ab69-9971d8896005","tags":[{"key":"_measurement","values":["airSensors"],"aggregateFunctionType":"filter"},{"key":"_field","values":["temperature"],"aggregateFunctionType":"filter"},{"values":[],"aggregateFunctionType":"filter"}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_7fc9042b-41a1-4ce0-bf0c-6c3f346e9e0c","type":"table","title":"Validate the Data","visible":true},{"id":"local_41e825dd-ba55-4c27-99d9-db920ec8b7a3","period":"10s","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"f9be3064-8b78-48f9-a32c-411a4f2c8b8f","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"8ff93519-306c-421d-9f45-c282bef6518f","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"3d50718d-da51-4a3d-a048-644e7502e443","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","title":"Visualize the Result","visible":true}]},"id":"08ffaf82de3d6000"}",
        BODY_END
    );

    ns_end_transaction("X8ffaf82de3d6000_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_5");
    ns_web_url ("query_5",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n    |> range(start: -1h, stop: now())\n    |> filter(fn: (r) => true)\n    |> keep(columns: [\"_measurement\"])\n    |> group()\n    |> distinct(column: \"_measurement\")\n    |> limit(n: 200)\n    |> sort()","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X8ffaf82de3d6000_4");
    ns_web_url ("X8ffaf82de3d6000_4",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/08ffaf82de3d6000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"d4246aa7c059a2de","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2022-03-03T07:48:43.000056193Z","updatedAt":"2022-03-03T07:48:54.932226805Z","pipes":[{"buckets":[],"id":"local_928898e6-8251-4a59-b2f6-18ce78956bc8","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}],"type":"queryBuilder","title":"Query Builder 1","visible":true},{"buckets":[{"type":"sample","name":"Air Sensor Data","id":"airSensor"}],"id":"local_a5d10589-1c9c-497a-ab69-9971d8896005","tags":[{"key":"_measurement","values":["airSensors"],"aggregateFunctionType":"filter"},{"key":"_field","values":["temperature"],"aggregateFunctionType":"filter"},{"key":"sensor_id","values":[],"aggregateFunctionType":"filter"}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_7fc9042b-41a1-4ce0-bf0c-6c3f346e9e0c","type":"table","title":"Validate the Data","visible":true},{"id":"local_41e825dd-ba55-4c27-99d9-db920ec8b7a3","period":"10s","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"f9be3064-8b78-48f9-a32c-411a4f2c8b8f","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"8ff93519-306c-421d-9f45-c282bef6518f","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"3d50718d-da51-4a3d-a048-644e7502e443","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","title":"Visualize the Result","visible":true}]},"id":"08ffaf82de3d6000"}",
        BODY_END
    );

    ns_end_transaction("X8ffaf82de3d6000_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_6");
    ns_web_url ("query_6",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n    |> range(start: -1h, stop: now())\n    |> filter(fn: (r) => r[\"_measurement\"] == \"airSensors\")\n    |> keep(columns: [\"_field\"])\n    |> group()\n    |> distinct(column: \"_field\")\n    |> limit(n: 200)\n    |> sort()","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X8ffaf82de3d6000_5");
    ns_web_url ("X8ffaf82de3d6000_5",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/08ffaf82de3d6000",
        "METHOD=PATCH"
    );

    ns_end_transaction("X8ffaf82de3d6000_5", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_7");
    ns_web_url ("query_7",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n    |> range(start: -1h, stop: now())\n    |> filter(fn: (r) => r[\"_measurement\"] == \"airSensors\" and r[\"_field\"] == \"temperature\")\n    |> keys()\n    |> keep(columns: [\"_value\"])\n    |> distinct()\n    |> filter(fn: (r) => r._value != \"_measurement\" and r._value != \"_field\")\n    |> filter(fn: (r) => r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\")\n    |> sort()\n    |> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/dashboards-list", END_INLINE
    );

    ns_end_transaction("query_7", NS_AUTO_STATUS);
    ns_page_think_time(118.103);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X5_3ef833c89c_js");
    ns_web_url ("X5_3ef833c89c_js",
        "URL=http://10.10.70.39:8086/15.3ef833c89c.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/47.84ba624f48.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X5_3ef833c89c_js", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_8");
    ns_web_url ("query_8",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n    |> range(start: -1h, stop: now())\n    |> filter(fn: (r) => r[\"_measurement\"] == \"airSensors\" and r[\"_field\"] == \"temperature\")\n    |> keep(columns: [\"sensor_id\"])\n    |> group()\n    |> distinct(column: \"sensor_id\")\n    |> limit(n: 200)\n    |> sort()","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_8", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_2");
    ns_web_url ("dashboards_2",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_3");
    ns_web_url ("labels_3",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/tasks", END_INLINE
    );

    ns_end_transaction("labels_3", NS_AUTO_STATUS);
    ns_page_think_time(122.475);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X5_5d6141e9a8_js");
    ns_web_url ("X5_5d6141e9a8_js",
        "URL=http://10.10.70.39:8086/45.5d6141e9a8.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X5_5d6141e9a8_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("tasks");
    ns_web_url ("tasks",
        "URL=http://10.10.70.39:8086/api/v2/tasks?orgID=d4246aa7c059a2de&limit=500",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("tasks", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_4");
    ns_web_url ("labels_4",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/alerting", END_INLINE
    );

    ns_end_transaction("labels_4", NS_AUTO_STATUS);
    ns_page_think_time(125.623);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("X3_b1ece16e60_js");
    ns_web_url ("X3_b1ece16e60_js",
        "URL=http://10.10.70.39:8086/33.b1ece16e60.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X3_b1ece16e60_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("checks");
    ns_web_url ("checks",
        "URL=http://10.10.70.39:8086/api/v2/checks?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("checks", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationEndpoints");
    ns_web_url ("notificationEndpoints",
        "URL=http://10.10.70.39:8086/api/v2/notificationEndpoints?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notificationEndpoints", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationRules");
    ns_web_url ("notificationRules",
        "URL=http://10.10.70.39:8086/api/v2/notificationRules?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notificationRules", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_5");
    ns_web_url ("labels_5",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_6");
    ns_web_url ("buckets_6",
        "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_2");
    ns_web_url ("variables_2",
        "URL=http://10.10.70.39:8086/api/v2/variables?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/settings/variables", END_INLINE
    );

    ns_end_transaction("variables_2", NS_AUTO_STATUS);
    ns_page_think_time(132.222);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("X5_cabf50a409_js");
    ns_web_url ("X5_cabf50a409_js",
        "URL=http://10.10.70.39:8086/65.cabf50a409.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X5_cabf50a409_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_6");
    ns_web_url ("labels_6",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_3");
    ns_web_url ("variables_3",
        "URL=http://10.10.70.39:8086/api/v2/variables?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/settings/templates", END_INLINE
    );

    ns_end_transaction("variables_3", NS_AUTO_STATUS);
    ns_page_think_time(133.846);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("stacks");
    ns_web_url ("stacks",
        "URL=http://10.10.70.39:8086/api/v2/stacks?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("stacks", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_7");
    ns_web_url ("buckets_7",
        "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_7", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("checks_2");
    ns_web_url ("checks_2",
        "URL=http://10.10.70.39:8086/api/v2/checks?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("checks_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_3");
    ns_web_url ("dashboards_3",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_7");
    ns_web_url ("labels_7",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_7", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationEndpoints_2");
    ns_web_url ("notificationEndpoints_2",
        "URL=http://10.10.70.39:8086/api/v2/notificationEndpoints?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notificationEndpoints_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationRules_2");
    ns_web_url ("notificationRules_2",
        "URL=http://10.10.70.39:8086/api/v2/notificationRules?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notificationRules_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("tasks_2");
    ns_web_url ("tasks_2",
        "URL=http://10.10.70.39:8086/api/v2/tasks?orgID=d4246aa7c059a2de&limit=500",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("tasks_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("telegrafs_3");
    ns_web_url ("telegrafs_3",
        "URL=http://10.10.70.39:8086/api/v2/telegrafs?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("telegrafs_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_4");
    ns_web_url ("variables_4",
        "URL=http://10.10.70.39:8086/api/v2/variables?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/settings/labels", END_INLINE
    );

    ns_end_transaction("variables_4", NS_AUTO_STATUS);
    ns_page_think_time(135.155);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X7_91fbe5b8b4_js");
    ns_web_url ("X7_91fbe5b8b4_js",
        "URL=http://10.10.70.39:8086/57.91fbe5b8b4.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X7_91fbe5b8b4_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_8");
    ns_web_url ("labels_8",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/settings/secrets", END_INLINE
    );

    ns_end_transaction("labels_8", NS_AUTO_STATUS);
    ns_page_think_time(136.407);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X3_6e429fb381_js");
    ns_web_url ("X3_6e429fb381_js",
        "URL=http://10.10.70.39:8086/53.6e429fb381.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X3_6e429fb381_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("secrets");
    ns_web_url ("secrets",
        "URL=http://10.10.70.39:8086/api/v2/orgs/d4246aa7c059a2de/secrets",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("secrets", NS_AUTO_STATUS);
    ns_page_think_time(2.912);

    //Page Auto split for 
    ns_start_transaction("dashboards_4");
    ns_web_url ("dashboards_4",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=d4246aa7c059a2de&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_3");
    ns_web_url ("health_3",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("dns_query_4");
    ns_web_url ("dns_query_4",
        "URL=https://chrome.cloudflare-dns.com/dns-query",
        "METHOD=POST",
        "HEADER=Accept-Language:*",
        "HEADER=Content-Type:application/dns-message",
        BODY_BEGIN,
            "docs
influxdatacom     )      P  L",
        BODY_END
    );

    ns_end_transaction("dns_query_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("dns_query_5");
    ns_web_url ("dns_query_5",
        "URL=https://chrome.cloudflare-dns.com/dns-query",
        "METHOD=POST",
        "HEADER=Accept-Language:*",
        "HEADER=Content-Type:application/dns-message",
        BODY_BEGIN,
            "githubcom     )      Y  U",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/members", END_INLINE
    );

    ns_end_transaction("dns_query_5", NS_AUTO_STATUS);
    ns_page_think_time(142.978);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("X0_6e9910241f_js");
    ns_web_url ("X0_6e9910241f_js",
        "URL=http://10.10.70.39:8086/60.6e9910241f.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X0_6e9910241f_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("owners");
    ns_web_url ("owners",
        "URL=http://10.10.70.39:8086/api/v2/orgs/d4246aa7c059a2de/owners",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("owners", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("members");
    ns_web_url ("members",
        "URL=http://10.10.70.39:8086/api/v2/orgs/d4246aa7c059a2de/members",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/about", END_INLINE
    );

    ns_end_transaction("members", NS_AUTO_STATUS);
    ns_page_think_time(144.524);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X5_00805a771f_js");
    ns_web_url ("X5_00805a771f_js",
        "URL=http://10.10.70.39:8086/55.00805a771f.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X5_00805a771f_js", NS_AUTO_STATUS);
    ns_page_think_time(11.896);

    //Page Auto split for Button '' Clicked by User
    ns_start_transaction("me_3");
    ns_web_url ("me_3",
        "URL=http://10.10.70.39:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/new", END_INLINE
    );

    ns_end_transaction("me_3", NS_AUTO_STATUS);
    ns_page_think_time(159.306);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("X60_561d26323b_js");
    ns_web_url ("X60_561d26323b_js",
        "URL=http://10.10.70.39:8086/360.561d26323b.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X60_561d26323b_js", NS_AUTO_STATUS);
    ns_page_think_time(4.42);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("notebooks_3");
    ns_web_url ("notebooks_3",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_3", NS_AUTO_STATUS);

    //Page Auto split for Method = DELETE
    ns_start_transaction("X8f6bb0c90095000");
    ns_web_url ("X8f6bb0c90095000",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/08f6bb0c90095000",
        "METHOD=DELETE",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("X8f6bb0c90095000", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("notebooks_4");
    ns_web_url ("notebooks_4",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks",
        "METHOD=POST",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"d4246aa7c059a2de","name":"Untitled Notebook (clone 1)","spec":{"name":"Untitled Notebook (clone 1)","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2022-03-03T07:48:43.000056193Z","updatedAt":"2022-03-07T12:10:28.782541074Z","pipes":[{"buckets":[],"id":"local_928898e6-8251-4a59-b2f6-18ce78956bc8","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}],"type":"queryBuilder","title":"Query Builder 1","visible":true},{"buckets":[{"id":"airSensor","name":"Air Sensor Data","type":"sample"}],"id":"local_a5d10589-1c9c-497a-ab69-9971d8896005","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":["airSensors"]},{"aggregateFunctionType":"filter","key":"_field","values":["temperature"]},{"aggregateFunctionType":"filter","key":"sensor_id","values":[]}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_7fc9042b-41a1-4ce0-bf0c-6c3f346e9e0c","type":"table","title":"Validate the Data","visible":true},{"id":"local_41e825dd-ba55-4c27-99d9-db920ec8b7a3","period":"10s","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"f9be3064-8b78-48f9-a32c-411a4f2c8b8f","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"8ff93519-306c-421d-9f45-c282bef6518f","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"3d50718d-da51-4a3d-a048-644e7502e443","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","title":"Visualize the Result","visible":true}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/d4246aa7c059a2de/notebooks/090512087c743000", END_INLINE
    );

    ns_end_transaction("notebooks_4", NS_AUTO_STATUS);
    ns_page_think_time(174.584);

    //Page Auto split for 
    ns_start_transaction("notebooks_5");
    ns_web_url ("notebooks_5",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=d4246aa7c059a2de",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_8");
    ns_web_url ("buckets_8",
        "URL=http://10.10.70.39:8086/api/v2/buckets?limit=100&orgID=d4246aa7c059a2de",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_8", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_9");
    ns_web_url ("query_9",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n    |> range(start: -1h, stop: now())\n    |> filter(fn: (r) => r[\"_measurement\"] == \"airSensors\" and r[\"_field\"] == \"temperature\")\n    |> keys()\n    |> keep(columns: [\"_value\"])\n    |> distinct()\n    |> filter(fn: (r) => r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\")\n    |> sort()\n    |> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_9", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_10");
    ns_web_url ("query_10",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\noption v = {timeRangeStart: -1h, timeRangeStop: now()}\n\nsample.data(set: \"airSensor\") |> range(start: v.timeRangeStart, stop: v.timeRangeStop)\n    |> filter(fn: (r) => r[\"_measurement\"] == \"airSensors\")\n    |> filter(fn: (r) => r[\"_field\"] == \"temperature\")\n    |> limit(n: 100)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_10", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_11");
    ns_web_url ("query_11",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n    |> range(start: -1h, stop: now())\n    |> filter(fn: (r) => true)\n    |> keep(columns: [\"_measurement\"])\n    |> group()\n    |> distinct(column: \"_measurement\")\n    |> limit(n: 200)\n    |> sort()","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_11", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_12");
    ns_web_url ("query_12",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=d4246aa7c059a2de",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\noption v = {timeRangeStart: -1h, timeRangeStop: now()}\n\nsample.data(set: \"airSensor\") |> range(start: v.timeRangeStart, stop: v.timeRangeStop)\n    |> filter(fn: (r) => r[\"_measurement\"] == \"airSensors\")\n    |> filter(fn: (r) => r[\"_field\"] == \"temperature\")","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/logout", END_INLINE
    );

    ns_end_transaction("query_12", NS_AUTO_STATUS);
    ns_page_think_time(184);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("X58_45925caeac_js");
    ns_web_url ("X58_45925caeac_js",
        "URL=http://10.10.70.39:8086/358.45925caeac.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X58_45925caeac_js", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("signout");
    ns_web_url ("signout",
        "URL=http://10.10.70.39:8086/api/v2/signout",
        "METHOD=POST",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("signout", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup_2");
    ns_web_url ("setup_2",
        "URL=http://10.10.70.39:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("setup_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_4");
    ns_web_url ("health_4",
        "URL=http://10.10.70.39:8086/health"
    );

    ns_end_transaction("health_4", NS_AUTO_STATUS);
    ns_page_think_time(6.531);

}
