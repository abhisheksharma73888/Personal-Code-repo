/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 04/24/2023 11:35:27
    Flow details:
    Build details: 4.12.0 (build# 33)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=http://10.10.70.39:8086/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/cc16dd8913.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/24.6e47f1218a.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/46c25bd08b.wasm", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/30.c522fdfd4c.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/351.335284ffd1.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup");
    ns_web_url ("setup",
        "URL=http://10.10.70.39:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("setup", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("me");
    ns_web_url ("me",
        "URL=http://10.10.70.39:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/signin", END_INLINE,
            "URL=http://10.10.70.39:8086/76.4f05d3498e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("me", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup_2");
    ns_web_url ("setup_2",
        "URL=http://10.10.70.39:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/756cfeadfd.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://10.10.70.39:8086/e71b678a99.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://10.10.70.39:8086/8a04845132.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("setup_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health");
    ns_web_url ("health",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/e71b678a99.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/8a04845132.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("health", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("signin");
    ns_web_url ("signin",
        "URL=http://10.10.70.39:8086/api/v2/signin",
        "METHOD=POST",
        "HEADER=authorization:Basic Y2F2aXNzb246Y2F2aXNzb24=",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/", END_INLINE
    );

    ns_end_transaction("signin", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("me_2");
    ns_web_url ("me_2",
        "URL=http://10.10.70.39:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("me_2", NS_AUTO_STATUS);

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
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3", END_INLINE,
            "URL=http://10.10.70.39:8086/1.3300133c6a.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/4.64dda24b4e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/5.e9e7a5463f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/6.71289d1e6f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/28.e798bcc63e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/65.0a6b523ddb.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/42.835ca16580.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://10.10.70.39:8086/e6cef65982.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/e6cef65982.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("orgs", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards");
    ns_web_url ("dashboards",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://10.10.70.39:8086/e3937801e3.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://10.10.70.39:8086/6515f0452e.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("dashboards", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_2");
    ns_web_url ("health_2",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/e3937801e3.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/6515f0452e.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/notebooks", END_INLINE
    );

    ns_end_transaction("health_2", NS_AUTO_STATUS);
    ns_page_think_time(21.877);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X9_9e34b1b7f5_js");
    ns_web_url ("X9_9e34b1b7f5_js",
        "URL=http://10.10.70.39:8086/29.9e34b1b7f5.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/8efb94a2b3.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/25a355b51e.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9763d95516.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/bca2c14a04.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X9_9e34b1b7f5_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks");
    ns_web_url ("notebooks",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/notebooks/0b18744fe8676000", END_INLINE
    );

    ns_end_transaction("notebooks", NS_AUTO_STATUS);
    ns_page_think_time(25.316);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X6_ea58b4208c_js");
    ns_web_url ("X6_ea58b4208c_js",
        "URL=http://10.10.70.39:8086/26.ea58b4208c.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X6_ea58b4208c_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets");
    ns_web_url ("buckets",
        "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_2");
    ns_web_url ("notebooks_2",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query");
    ns_web_url ("query",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=f99b06f47a4821f3",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n\t|> range(start: -1h, stop: now())\n\t|> filter(fn: (r) =>\n\t\t(r[\"_measurement\"] == \"airSensors\" and r[\"_field\"] == \"temperature\" and r[\"sensor_id\"] == \"TLM0103\"))\n\t|> keys()\n\t|> keep(columns: [\"_value\"])\n\t|> distinct()\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\"))\n\t|> sort()\n\t|> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_2");
    ns_web_url ("buckets_2",
        "URL=http://10.10.70.39:8086/api/v2/buckets?limit=100&orgID=f99b06f47a4821f3",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://10.10.70.39:8086/61ea17f16c.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/61ea17f16c.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("buckets_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_2");
    ns_web_url ("dashboards_2",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_3");
    ns_web_url ("health_3",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/load-data/sources", END_INLINE
    );

    ns_end_transaction("health_3", NS_AUTO_STATUS);
    ns_page_think_time(30.743);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X2_9a94465ff4_js");
    ns_web_url ("X2_9a94465ff4_js",
        "URL=http://10.10.70.39:8086/12.9a94465ff4.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/52.037f0c99ca.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/355.77a4ddc441.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
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
            "URL=http://10.10.70.39:8086/c8a5ffd429.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
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
            "URL=http://10.10.70.39:8086/80498d29ec.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/9508221c37.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
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
            "URL=http://10.10.70.39:8086/4addfd8db2.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X2_9a94465ff4_js", NS_AUTO_STATUS);
    ns_page_think_time(0.738);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("notebooks_3");
    ns_web_url ("notebooks_3",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/notebook/from/default", END_INLINE
    );

    ns_end_transaction("notebooks_3", NS_AUTO_STATUS);
    ns_page_think_time(37.39);

    //Page Auto split for Button 'New Notebook' Clicked by User
    ns_start_transaction("X5_797715d863_js");
    ns_web_url ("X5_797715d863_js",
        "URL=http://10.10.70.39:8086/25.797715d863.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X5_797715d863_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xb18744fe8676000");
    ns_web_url ("Xb18744fe8676000",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/0b18744fe8676000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"f99b06f47a4821f3","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2023-04-24T05:54:24.28975999Z","updatedAt":"2023-04-24T05:56:30.532196721Z","pipes":[{"buckets":[{"id":"airSensor","name":"Air Sensor Data","type":"sample"}],"id":"local_0766c5ca-d0e2-43c5-ad43-4b789c1fd82f","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":["airSensors"]},{"aggregateFunctionType":"filter","key":"_field","values":["temperature"]},{"aggregateFunctionType":"filter","key":"sensor_id","values":["TLM0103"]},{"aggregateFunctionType":"filter","values":[]}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_e1d3fd0c-8f0d-4c4a-9bb8-963ea04e36df","type":"table","title":"Validate the Data","visible":true},{"id":"local_5b561870-f03e-4600-8a8f-c5c55de0075f","period":"10s","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"f8528790-2578-4e2b-9c76-49c43f844644","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"cf15a8fd-8bd0-4b9f-bf44-1416221d8e55","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"4769b94a-0082-4d1f-89c6-f838c1fb1c39","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","title":"Visualize the Result","visible":true}]}}",
        BODY_END
    );

    ns_end_transaction("Xb18744fe8676000", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_4");
    ns_web_url ("notebooks_4",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("notebooks_5");
    ns_web_url ("notebooks_5",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks",
        "METHOD=POST",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"f99b06f47a4821f3","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"seconds":3600,"lower":"now() - 1h","upper":null,"label":"Past 1h","duration":"1h","type":"selectable-duration","windowPeriod":10000},"refresh":{"status":"paused","interval":0,"duration":null,"inactivityTimeout":0,"infiniteDuration":false},"pipes":[{"type":"queryBuilder","buckets":[],"tags":[{"key":"_measurement","values":[],"aggregateFunctionType":"filter"}],"id":"local_34feb9f5-fdbc-4f38-9699-21dbadb17275","title":"Build a Query","visible":true},{"type":"table","id":"local_369cd151-b3bf-4400-a5da-a9875d8d9564","title":"Validate the Data","visible":true},{"type":"visualization","properties":{"type":"xy","shape":"chronograf-v2","geom":"line","xColumn":null,"yColumn":null,"position":"overlaid","hoverDimension":"auto","queries":[{"name":"","text":"","editMode":"builder","builderConfig":{"buckets":[],"tags":[{"key":"_measurement","values":[],"aggregateFunctionType":"filter"}],"functions":[{"name":"mean"}],"aggregateWindow":{"period":"auto","fillValues":false}}}],"colors":[{"type":"scale","hex":"#31C0F6","id":"d4cf0467-03f1-43e5-8522-cb3b100cb141","name":"Nineteen Eighty Four","value":0},{"type":"scale","hex":"#A500A5","id":"8ab0fa52-6fec-4826-85c5-d6977846476b","name":"Nineteen Eighty Four","value":0},{"type":"scale","hex":"#FF7E27","id":"a74cbb17-648d-4950-bdba-5819b1f4a6fe","name":"Nineteen Eighty Four","value":0}],"legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"note":"","showNoteWhenEmpty":false,"axes":{"x":{"bounds":["",""],"label":"","prefix":"","suffix":"","base":"10","scale":"linear"},"y":{"bounds":["",""],"label":"","prefix":"","suffix":"","base":"10","scale":"linear"}},"generateXAxisTicks":[],"generateYAxisTicks":[],"xTotalTicks":null,"xTickStart":null,"xTickStep":null,"yTotalTicks":null,"yTickStart":null,"yTickStep":null},"id":"local_d5882961-aea3-4d68-b896-b6f504200bf7","title":"Visualize the Result","visible":true}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/notebooks/0b187689ee276000", END_INLINE
    );

    ns_end_transaction("notebooks_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_6");
    ns_web_url ("notebooks_6",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_3");
    ns_web_url ("buckets_3",
        "URL=http://10.10.70.39:8086/api/v2/buckets?limit=100&orgID=f99b06f47a4821f3",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xb187689ee276000");
    ns_web_url ("Xb187689ee276000",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/0b187689ee276000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"f99b06f47a4821f3","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2023-04-24T06:04:07.992354081Z","updatedAt":"2023-04-24T06:04:07.992354081Z","pipes":[{"buckets":[],"id":"local_34feb9f5-fdbc-4f38-9699-21dbadb17275","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_369cd151-b3bf-4400-a5da-a9875d8d9564","type":"table","title":"Validate the Data","visible":true},{"id":"local_d5882961-aea3-4d68-b896-b6f504200bf7","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"d4cf0467-03f1-43e5-8522-cb3b100cb141","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"8ab0fa52-6fec-4826-85c5-d6977846476b","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"a74cbb17-648d-4950-bdba-5819b1f4a6fe","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","period":"10s","title":"Visualize the Result","visible":true}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/dashboards-list", END_INLINE
    );

    ns_end_transaction("Xb187689ee276000", NS_AUTO_STATUS);
    ns_page_think_time(40.128);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X3_d4d607be2f_js");
    ns_web_url ("X3_d4d607be2f_js",
        "URL=http://10.10.70.39:8086/13.d4d607be2f.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/14.b5134f1a61.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/44.e83ac7053a.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X3_d4d607be2f_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels");
    ns_web_url ("labels",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_3");
    ns_web_url ("dashboards_3",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/tasks", END_INLINE
    );

    ns_end_transaction("dashboards_3", NS_AUTO_STATUS);
    ns_page_think_time(41.465);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X1_661ecd307d_js");
    ns_web_url ("X1_661ecd307d_js",
        "URL=http://10.10.70.39:8086/41.661ecd307d.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X1_661ecd307d_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("tasks");
    ns_web_url ("tasks",
        "URL=http://10.10.70.39:8086/api/v2/tasks?orgID=f99b06f47a4821f3&limit=500",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("tasks", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_2");
    ns_web_url ("labels_2",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/alerting", END_INLINE
    );

    ns_end_transaction("labels_2", NS_AUTO_STATUS);
    ns_page_think_time(42.781);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X1_518576b96f_js");
    ns_web_url ("X1_518576b96f_js",
        "URL=http://10.10.70.39:8086/31.518576b96f.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X1_518576b96f_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_3");
    ns_web_url ("labels_3",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_4");
    ns_web_url ("buckets_4",
        "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables");
    ns_web_url ("variables",
        "URL=http://10.10.70.39:8086/api/v2/variables?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("variables", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("checks");
    ns_web_url ("checks",
        "URL=http://10.10.70.39:8086/api/v2/checks?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("checks", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationEndpoints");
    ns_web_url ("notificationEndpoints",
        "URL=http://10.10.70.39:8086/api/v2/notificationEndpoints?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notificationEndpoints", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationRules");
    ns_web_url ("notificationRules",
        "URL=http://10.10.70.39:8086/api/v2/notificationRules?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://10.10.70.39:8086/0367a1dab7.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/0367a1dab7.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/settings/variables", END_INLINE
    );

    ns_end_transaction("notificationRules", NS_AUTO_STATUS);
    ns_page_think_time(44.295);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X2_371e55925f_js");
    ns_web_url ("X2_371e55925f_js",
        "URL=http://10.10.70.39:8086/62.371e55925f.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X2_371e55925f_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_4");
    ns_web_url ("labels_4",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_2");
    ns_web_url ("variables_2",
        "URL=http://10.10.70.39:8086/api/v2/variables?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("variables_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_4");
    ns_web_url ("health_4",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_4");
    ns_web_url ("dashboards_4",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/data-explorer", END_INLINE
    );

    ns_end_transaction("dashboards_4", NS_AUTO_STATUS);
    ns_page_think_time(51.347);

    //Page Auto split for 
    ns_start_transaction("X3_fbd453f763_js");
    ns_web_url ("X3_fbd453f763_js",
        "URL=http://10.10.70.39:8086/33.fbd453f763.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/a592c9bd38.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X3_fbd453f763_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_5");
    ns_web_url ("buckets_5",
        "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_3");
    ns_web_url ("variables_3",
        "URL=http://10.10.70.39:8086/api/v2/variables?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("variables_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_2");
    ns_web_url ("query_2",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=f99b06f47a4821f3",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"regexp\"\n  \n  from(bucket: \"cavisson\")\n  |> range(start: -1h, stop: now())\n  |> filter(fn: (r) => true)\n  |> keys()\n  |> keep(columns: [\"_value\"])\n  |> distinct()\n  |> filter(fn: (r) => r._value != \"_time\" and r._value != \"_start\" and r._value !=  \"_stop\" and r._value != \"_value\")\n  |> sort()\n  |> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_3");
    ns_web_url ("query_3",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=f99b06f47a4821f3",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n\t|> range(start: -1h, stop: now())\n\t|> filter(fn: (r) =>\n\t\t(r[\"_measurement\"] == \"airSensors\" and r[\"_field\"] == \"temperature\" and r[\"sensor_id\"] == \"TLM0103\"))\n\t|> keys()\n\t|> keep(columns: [\"_value\"])\n\t|> distinct()\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_measurement\"))\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\"))\n\t|> sort()\n\t|> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_3", NS_AUTO_STATUS);
    ns_page_think_time(0.813);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("notebooks_7");
    ns_web_url ("notebooks_7",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_7", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("notebooks_8");
    ns_web_url ("notebooks_8",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks",
        "METHOD=POST",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"f99b06f47a4821f3","name":"Untitled Notebook (clone 2)","spec":{"name":"Untitled Notebook (clone 2)","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2023-04-24T05:57:03.881001096Z","updatedAt":"2023-04-24T05:58:11.352700823Z","pipes":[{"buckets":[{"id":"airSensor","name":"Air Sensor Data","type":"sample"}],"id":"local_59241ed7-56ff-4f93-aadd-8e7d790f01b3","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":["airSensors"]},{"aggregateFunctionType":"filter","key":"_field","values":["co"]},{"aggregateFunctionType":"filter","key":"sensor_id","values":["TLM0100"]},{"aggregateFunctionType":"filter","values":[]}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_beac61bb-1d40-462a-97db-4927d619cb2a","type":"table","title":"Validate the Data","visible":true},{"id":"local_a9e57df2-1e36-4a2f-9544-18d98e476753","period":"10s","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"f8528790-2578-4e2b-9c76-49c43f844644","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"cf15a8fd-8bd0-4b9f-bf44-1416221d8e55","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"4769b94a-0082-4d1f-89c6-f838c1fb1c39","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","title":"Visualize the Result","visible":true}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/notebooks/0b18769c00676000", END_INLINE
    );

    ns_end_transaction("notebooks_8", NS_AUTO_STATUS);
    ns_page_think_time(56.693);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("notebooks_9");
    ns_web_url ("notebooks_9",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_9", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_4");
    ns_web_url ("query_4",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=f99b06f47a4821f3",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n\t|> range(start: -1h, stop: now())\n\t|> filter(fn: (r) =>\n\t\t(r[\"_measurement\"] == \"airSensors\" and r[\"_field\"] == \"co\" and r[\"sensor_id\"] == \"TLM0100\"))\n\t|> keys()\n\t|> keep(columns: [\"_value\"])\n\t|> distinct()\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\"))\n\t|> sort()\n\t|> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_6");
    ns_web_url ("buckets_6",
        "URL=http://10.10.70.39:8086/api/v2/buckets?limit=100&orgID=f99b06f47a4821f3",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_5");
    ns_web_url ("dashboards_5",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_5");
    ns_web_url ("health_5",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_6");
    ns_web_url ("health_6",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_6");
    ns_web_url ("dashboards_6",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/dashboards", END_INLINE
    );

    ns_end_transaction("dashboards_6", NS_AUTO_STATUS);
    ns_page_think_time(67.331);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X52_1e6fdd5220_js");
    ns_web_url ("X52_1e6fdd5220_js",
        "URL=http://10.10.70.39:8086/352.1e6fdd5220.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X52_1e6fdd5220_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("labels_5");
    ns_web_url ("labels_5",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_7");
    ns_web_url ("dashboards_7",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_7", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_7");
    ns_web_url ("health_7",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_7", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_8");
    ns_web_url ("dashboards_8",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_8", NS_AUTO_STATUS);
    ns_page_think_time(1.239);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("labels_6");
    ns_web_url ("labels_6",
        "URL=http://10.10.70.39:8086/api/v2/labels?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("labels_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_7");
    ns_web_url ("buckets_7",
        "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_7", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("variables_4");
    ns_web_url ("variables_4",
        "URL=http://10.10.70.39:8086/api/v2/variables?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("variables_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationEndpoints_2");
    ns_web_url ("notificationEndpoints_2",
        "URL=http://10.10.70.39:8086/api/v2/notificationEndpoints?orgID=f99b06f47a4821f3"
    );

    ns_end_transaction("notificationEndpoints_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("checks_2");
    ns_web_url ("checks_2",
        "URL=http://10.10.70.39:8086/api/v2/checks?orgID=f99b06f47a4821f3&limit=100"
    );

    ns_end_transaction("checks_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notificationRules_2");
    ns_web_url ("notificationRules_2",
        "URL=http://10.10.70.39:8086/api/v2/notificationRules?orgID=f99b06f47a4821f3&limit=100"
    );

    ns_end_transaction("notificationRules_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_8");
    ns_web_url ("health_8",
        "URL=http://10.10.70.39:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_8", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_9");
    ns_web_url ("dashboards_9",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=f99b06f47a4821f3&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_9", NS_AUTO_STATUS);
    ns_page_think_time(1.62);

    //Page Auto split for 
    ns_start_transaction("notebooks_10");
    ns_web_url ("notebooks_10",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_10", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("me_3");
    ns_web_url ("me_3",
        "URL=http://10.10.70.39:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("me_3", NS_AUTO_STATUS);

    //Page Auto split for Method = DELETE
    ns_start_transaction("Xb1874de88a76000");
    ns_web_url ("Xb1874de88a76000",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/0b1874de88a76000",
        "METHOD=DELETE",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("Xb1874de88a76000", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_11");
    ns_web_url ("notebooks_11",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_11", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("notebooks_12");
    ns_web_url ("notebooks_12",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks",
        "METHOD=POST",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"f99b06f47a4821f3","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"seconds":3600,"lower":"now() - 1h","upper":null,"label":"Past 1h","duration":"1h","type":"selectable-duration","windowPeriod":10000},"refresh":{"status":"paused","interval":0,"duration":null,"inactivityTimeout":0,"infiniteDuration":false},"pipes":[{"type":"queryBuilder","buckets":[],"tags":[{"key":"_measurement","values":[],"aggregateFunctionType":"filter"}],"id":"local_ba037cdf-2193-47ae-a5b9-eb191b8f15c6","title":"Build a Query","visible":true},{"type":"table","id":"local_7174fef4-1684-4197-a085-33e9cee9f281","title":"Validate the Data","visible":true},{"type":"visualization","properties":{"type":"xy","shape":"chronograf-v2","geom":"line","xColumn":null,"yColumn":null,"position":"overlaid","hoverDimension":"auto","queries":[{"name":"","text":"","editMode":"builder","builderConfig":{"buckets":[],"tags":[{"key":"_measurement","values":[],"aggregateFunctionType":"filter"}],"functions":[{"name":"mean"}],"aggregateWindow":{"period":"auto","fillValues":false}}}],"colors":[{"type":"scale","hex":"#31C0F6","id":"d4cf0467-03f1-43e5-8522-cb3b100cb141","name":"Nineteen Eighty Four","value":0},{"type":"scale","hex":"#A500A5","id":"8ab0fa52-6fec-4826-85c5-d6977846476b","name":"Nineteen Eighty Four","value":0},{"type":"scale","hex":"#FF7E27","id":"a74cbb17-648d-4950-bdba-5819b1f4a6fe","name":"Nineteen Eighty Four","value":0}],"legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"note":"","showNoteWhenEmpty":false,"axes":{"x":{"bounds":["",""],"label":"","prefix":"","suffix":"","base":"10","scale":"linear"},"y":{"bounds":["",""],"label":"","prefix":"","suffix":"","base":"10","scale":"linear"}},"generateXAxisTicks":[],"generateYAxisTicks":[],"xTotalTicks":null,"xTickStart":null,"xTickStep":null,"yTotalTicks":null,"yTickStart":null,"yTickStep":null},"id":"local_dfe45b86-9cf0-4c61-b3c0-232739981f97","title":"Visualize the Result","visible":true}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/notebooks/0b1876b447676000", END_INLINE
    );

    ns_end_transaction("notebooks_12", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_13");
    ns_web_url ("notebooks_13",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_13", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_8");
    ns_web_url ("buckets_8",
        "URL=http://10.10.70.39:8086/api/v2/buckets?limit=100&orgID=f99b06f47a4821f3",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_8", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xb1876b447676000");
    ns_web_url ("Xb1876b447676000",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/0b1876b447676000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"f99b06f47a4821f3","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2023-04-24T06:04:51.357473458Z","updatedAt":"2023-04-24T06:04:51.357473458Z","pipes":[{"buckets":[],"id":"local_ba037cdf-2193-47ae-a5b9-eb191b8f15c6","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_7174fef4-1684-4197-a085-33e9cee9f281","type":"table","title":"Validate the Data","visible":true},{"id":"local_dfe45b86-9cf0-4c61-b3c0-232739981f97","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"d4cf0467-03f1-43e5-8522-cb3b100cb141","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"8ab0fa52-6fec-4826-85c5-d6977846476b","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"a74cbb17-648d-4950-bdba-5819b1f4a6fe","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","period":"10s","title":"Visualize the Result","visible":true}]}}",
        BODY_END
    );

    ns_end_transaction("Xb1876b447676000", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_5");
    ns_web_url ("query_5",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=f99b06f47a4821f3",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n\t|> range(start: -1h, stop: now())\n\t|> filter(fn: (r) =>\n\t\t(true))\n\t|> keys()\n\t|> keep(columns: [\"_value\"])\n\t|> distinct()\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\"))\n\t|> sort()\n\t|> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xb1876b447676000_2");
    ns_web_url ("Xb1876b447676000_2",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/0b1876b447676000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"f99b06f47a4821f3","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2023-04-24T06:04:51.357473458Z","updatedAt":"2023-04-24T06:04:51.357473458Z","pipes":[{"buckets":[{"type":"sample","name":"Air Sensor Data","id":"airSensor"}],"id":"local_ba037cdf-2193-47ae-a5b9-eb191b8f15c6","tags":[{"key":"_measurement","values":["airSensors"],"aggregateFunctionType":"filter"},{"values":[],"aggregateFunctionType":"filter"}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_7174fef4-1684-4197-a085-33e9cee9f281","type":"table","title":"Validate the Data","visible":true},{"id":"local_dfe45b86-9cf0-4c61-b3c0-232739981f97","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"d4cf0467-03f1-43e5-8522-cb3b100cb141","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"8ab0fa52-6fec-4826-85c5-d6977846476b","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"a74cbb17-648d-4950-bdba-5819b1f4a6fe","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","period":"10s","title":"Visualize the Result","visible":true}]}}",
        BODY_END
    );

    ns_end_transaction("Xb1876b447676000_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_6");
    ns_web_url ("query_6",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=f99b06f47a4821f3",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n\t|> range(start: -1h, stop: now())\n\t|> filter(fn: (r) =>\n\t\t(r[\"_measurement\"] == \"airSensors\" and r[\"_field\"] == \"temperature\" and r[\"sensor_id\"] == \"TLM0103\"))\n\t|> keys()\n\t|> keep(columns: [\"_value\"])\n\t|> distinct()\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_measurement\" and r._value != \"_field\"))\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\"))\n\t|> sort()\n\t|> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_6", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_7");
    ns_web_url ("query_7",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=f99b06f47a4821f3",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n\t|> range(start: -1h, stop: now())\n\t|> filter(fn: (r) =>\n\t\t(r[\"_measurement\"] == \"airSensors\"))\n\t|> keys()\n\t|> keep(columns: [\"_value\"])\n\t|> distinct()\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_measurement\"))\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\"))\n\t|> sort()\n\t|> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_7", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xb1876b447676000_3");
    ns_web_url ("Xb1876b447676000_3",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/0b1876b447676000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"f99b06f47a4821f3","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2023-04-24T06:04:51.357473458Z","updatedAt":"2023-04-24T06:04:51.357473458Z","pipes":[{"buckets":[{"type":"sample","name":"Air Sensor Data","id":"airSensor"}],"id":"local_ba037cdf-2193-47ae-a5b9-eb191b8f15c6","tags":[{"key":"_measurement","values":["airSensors"],"aggregateFunctionType":"filter"},{"key":"_field","values":[],"aggregateFunctionType":"filter"}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_7174fef4-1684-4197-a085-33e9cee9f281","type":"table","title":"Validate the Data","visible":true},{"id":"local_dfe45b86-9cf0-4c61-b3c0-232739981f97","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"d4cf0467-03f1-43e5-8522-cb3b100cb141","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"8ab0fa52-6fec-4826-85c5-d6977846476b","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"a74cbb17-648d-4950-bdba-5819b1f4a6fe","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","period":"10s","title":"Visualize the Result","visible":true}]}}",
        BODY_END
    );

    ns_end_transaction("Xb1876b447676000_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xb1876b447676000_4");
    ns_web_url ("Xb1876b447676000_4",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks/0b1876b447676000",
        "METHOD=PATCH"
    );

    ns_end_transaction("Xb1876b447676000_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_10");
    ns_web_url ("dashboards_10",
        "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=f99b06f47a4821f3&limit=100"
    );

    ns_end_transaction("dashboards_10", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_9");
    ns_web_url ("health_9",
        "URL=http://10.10.70.39:8086/health"
    );

    ns_end_transaction("health_9", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_8");
    ns_web_url ("query_8",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=f99b06f47a4821f3",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n\t|> range(start: -1h, stop: now())\n\t|> filter(fn: (r) =>\n\t\t(r[\"_measurement\"] == \"airSensors\" and r[\"_field\"] == \"temperature\" and r[\"sensor_id\"] == \"TLM0103\"))\n\t|> keys()\n\t|> keep(columns: [\"_value\"])\n\t|> distinct()\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_measurement\" and r._value != \"_field\" and r._value != \"sensor_id\"))\n\t|> filter(fn: (r) =>\n\t\t(r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\"))\n\t|> sort()\n\t|> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_8", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_9");
    ns_web_url ("query_9",
        "URL=http://10.10.70.39:8086/api/v2/query?orgID=f99b06f47a4821f3",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://10.10.70.39:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"regexp\"\n  \n  from(bucket: \"cavisson\")\n  |> range(start: -1h, stop: now())\n  |> filter(fn: (r) => true)\n  |> keep(columns: [\"_measurement\"])\n  |> group()\n  |> distinct(column: \"_measurement\")\n  |> limit(n: 200)\n  |> sort()","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_9", NS_AUTO_STATUS);
    ns_page_think_time(1.474);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_2");
    ns_web_url ("index_2",
        "URL=https://docs.influxdata.com/influxdb/latest/query-data/get-started/",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://docs.influxdata.com/influxdb/v2.7/query-data/get-started/", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-User:?1", "HEADER=Sec-Fetch-Dest:document", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://cdn.jsdelivr.net/npm/docsearch.js@2/dist/cdn/docsearch.min.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://docs.influxdata.com/light-theme.8f975579533d7187452010b267683e94bba629b86609e734b6e45de36e1677f9.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://docs.influxdata.com/dark-theme.56ede7c71d3385876a1c762e207372a1699e829612d789f952885f820d50394a.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://docs.influxdata.com/api.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fonts.googleapis.com/css2?family=IBM+Plex+Mono:ital,wght@0,500;0,700;1,500;1,700&family=Rubik:ital,wght@0,400;0,500;0,700;1,400;1,500;1,700&display=swap", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://docs.influxdata.com/js/header.bundle.4b70807d8751241611718c633f2afad781467972f9ec796b340b8431446c187d.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://cdn.jsdelivr.net/npm/docsearch.js@2/dist/cdn/docsearch.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://docs.influxdata.com/js/footer.bundle.4694dd234b7f62b126d4e755e706d6be6345cda38e52e8cf1029b6eebfbffdda.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://static.scarf.sh/a.png?x-pxid=5581ee6b-3e7c-42b8-a507-38ea055c35ca", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/gtm.js?id=GTM-WXRH9C", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://munchkin.marketo.net/munchkin.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://docs.influxdata.com/dark-theme.6ef27fcb081a911c01ebe3cc69744211f03fb524846a05ba0bc894b8c7899374.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://docs.influxdata.com/light-theme.b9796198db2f4e595588f9612cc06faa5b6f61322119b20af095d82a792468f7.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=https://docs.influxdata.com/fonts/proxima-nova-semibold.otf", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://docs.influxdata.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=https://docs.influxdata.com/fonts/icomoon-v2.ttf?itn2ph", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://docs.influxdata.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=https://docs.influxdata.com/fonts/proxima-nova-bold.otf", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://docs.influxdata.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=https://docs.influxdata.com/fonts/icomoon-v4.woff2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://docs.influxdata.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=https://docs.influxdata.com/fonts/proxima-nova-medium.otf", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://docs.influxdata.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://docs.influxdata.com/svgs/slack.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://munchkin.marketo.net/163/munchkin.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googleoptimize.com/optimize.js?id=GTM-W93T2C8", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://snap.licdn.com/li.lms-analytics/insight.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google-analytics.com/analytics.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/866720798/?random=1682316316938&cv=11&fst=1682316316938&bg=ffffff&guid=ON&async=1&gtm=45He34j0&u_w=1536&u_h=864&url=https%3A%2F%2Fdocs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&hn=www.googleadservices.com&frm=0&tiba=Get%20started%20with%20Flux%20and%20InfluxDB%20%7C%20InfluxDB%20OSS%202.7%20Documentation&auid=331063393.1682316317&uaa=x86&uab=64&uafvl=%2520Not%2520A%253BBrand%3B99.0.0.0%7CChromium%3B104.0.5112.124&uamb=0&uap=Windows&uapv=15.0.0&uaw=1&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://bat.bing.com/bat.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.redditstatic.com/ads/pixel.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://admind-cloud-storage.firebaseapp.com/assets/js/app.bundle.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("visitWebPage");
    ns_web_url ("visitWebPage",
        "URL=https://972-gdu-533.mktoresp.com/webevents/visitWebPage?_mchNc=1682316317050&_mchCn=&_mchId=972-GDU-533&_mchTk=_mch-influxdata.com-1682316317049-73502&_mchHo=docs.influxdata.com&_mchPo=&_mchRu=%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&_mchPc=https%3A&_mchVr=163&_mchEcid=&_mchHa=&_mchRe=&_mchQp=",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Origin:https://docs.influxdata.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("visitWebPage", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("token");
    ns_web_url ("token",
        "URL=https://cdn.linkedin.oribi.io/partner/32953/domain/docs.influxdata.com/token",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Origin:https://docs.influxdata.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://px.ads.linkedin.com/collect?v=2&fmt=js&pid=32953&time=1682316317130&url=https%3A%2F%2Fdocs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/866720798/?random=1682316316938&cv=11&fst=1682316000000&bg=ffffff&guid=ON&async=1&gtm=45He34j0&u_w=1536&u_h=864&url=https%3A%2F%2Fdocs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&frm=0&tiba=Get%20started%20with%20Flux%20and%20InfluxDB%20%7C%20InfluxDB%20OSS%202.7%20Documentation&fmt=3&is_vtc=1&random=4197497613&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/866720798/?random=1682316316938&cv=11&fst=1682316000000&bg=ffffff&guid=ON&async=1&gtm=45He34j0&u_w=1536&u_h=864&url=https%3A%2F%2Fdocs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&frm=0&tiba=Get%20started%20with%20Flux%20and%20InfluxDB%20%7C%20InfluxDB%20OSS%202.7%20Documentation&fmt=3&is_vtc=1&random=4197497613&rmt_tld=1&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://alb.reddit.com/rp.gif?ts=1682316317277&id=t2_pxlh0vso&event=PageVisit&m.itemCount=undefined&m.value=&m.valueDecimal=undefined&m.currency=undefined&m.transactionId=&m.customEventName=&m.products=&uuid=57de13f6-3295-4700-8541-754176b012df&aaid=&em=&external_id=&idfa=&integration=gtm&opt_out=0&sh=1536&sw=864&v=rdt_65e23bc4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("token", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect");
    ns_web_url ("collect",
        "URL=https://www.google-analytics.com/j/collect?v=1&_v=j99&a=712861197&t=pageview&_s=1&dl=https%3A%2F%2Fdocs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&dp=docs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&ul=en-us&de=UTF-8&dt=Get%20started%20with%20Flux%20and%20InfluxDB%20%7C%20InfluxDB%20OSS%202.7%20Documentation&sd=24-bit&sr=1536x864&vp=1198x567&je=0&_u=aEBAAEABQAAAACAAI~&jid=286600323&gjid=1211809254&cid=1412212591.1682316317&tid=UA-45024174-13&_gid=2029417635.1682316317&_r=1&_slc=1&gtm=45He34j0n71WXRH9C&cd3=(not%20set)&z=2122963426",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://docs.influxdata.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("collect", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_2");
    ns_web_url ("collect_2",
        "URL=https://www.google-analytics.com/j/collect?v=1&_v=j99&a=712861197&t=pageview&_s=1&dl=https%3A%2F%2Fdocs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&dp=docs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&ul=en-us&de=UTF-8&dt=Get%20started%20with%20Flux%20and%20InfluxDB%20%7C%20InfluxDB%20OSS%202.7%20Documentation&sd=24-bit&sr=1536x864&vp=1198x567&je=0&_u=aEDAAEABQAAAACAAI~&jid=1697449100&gjid=1181550937&cid=1412212591.1682316317&tid=UA-45024174-12&_gid=2029417635.1682316317&_r=1&_slc=1&gtm=45He34j0n71WXRH9C&cd3=(not%20set)&z=1593328008",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://docs.influxdata.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            //URL commented due to error code : ABORTED
            //"URL=https://api.ipify.org/?format=jsonp&callback=getIP", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : ABORTED
            //"URL=https://www.googletagmanager.com/gtag/js?id=G-CNWQ54SDD8&l=dataLayer&cx=c", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_3");
    ns_web_url ("collect_3",
        "URL=https://www.google-analytics.com/j/collect?v=1&_v=j99&a=712861197&t=pageview&_s=1&dl=https%3A%2F%2Fdocs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&dp=docs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&ul=en-us&de=UTF-8&dt=Get%20started%20with%20Flux%20and%20InfluxDB%20%7C%20InfluxDB%20OSS%202.7%20Documentation&sd=24-bit&sr=1536x864&vp=1198x567&je=0&_u=aGDAAEABQAAAACAAI~&jid=808105915&gjid=1287526570&cid=1412212591.1682316317&tid=UA-45024174-4&_gid=2029417635.1682316317&_r=1&_slc=1&gtm=45He34j0n71WXRH9C&cd3=(not%20set)&cd5=1412212591.1682316317&cd8=11&cd10=1&cd11=20230424113517&cd12=Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20WOW64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F104.0.5112.124%20Safari%2F537.36&z=952029583",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://docs.influxdata.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://px.ads.linkedin.com/collect?v=2&fmt=js&pid=32953&time=1682316317130&url=https%3A%2F%2Fdocs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&cookiesTest=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://bat.bing.com/p/action/17534276.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=17534276&tm=gtm002&Ver=2&mid=6860ed40-6ec7-4b6a-8392-23447b6e17ac&sid=fc9db080e26511eda26a812737e67ca9&vid=fc9e0990e26511ed9b62e1e49976081a&vids=1&msclkid=N&uach=pv%3D15.0.0&pi=918639831&lg=en-US&sw=1536&sh=864&sc=24&tl=Get%20started%20with%20Flux%20and%20InfluxDB%20%7C%20InfluxDB%20OSS%202.7%20Documentation&p=https%3A%2F%2Fdocs.influxdata.com%2Finfluxdb%2Fv2.7%2Fquery-data%2Fget-started%2F&r=&lt=1272&evt=pageLoad&sv=1&rn=216647", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_4");
    ns_web_url ("collect_4",
        "URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j99&tid=UA-45024174-4&cid=1412212591.1682316317&jid=808105915&gjid=1287526570&_gid=2029417635.1682316317&_u=aGDAAEABQAAAACAAI~&z=389800663",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://docs.influxdata.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("collect_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("X");
    ns_web_url ("X",
        "URL=https://bat.bing.com/actionp/0?ti=17534276&tm=gtm002&Ver=2&mid=6860ed40-6ec7-4b6a-8392-23447b6e17ac&sid=fc9db080e26511eda26a812737e67ca9&vid=fc9e0990e26511ed9b62e1e49976081a&vids=1&msclkid=N&evt=pageHide",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Origin:https://docs.influxdata.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3/notebooks", END_INLINE,
            "URL=http://10.10.70.39:8086/orgs/f99b06f47a4821f3", END_INLINE
    );

    ns_end_transaction("X", NS_AUTO_STATUS);
    ns_page_think_time(108.14);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("notebooks_14");
    ns_web_url ("notebooks_14",
        "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=f99b06f47a4821f3",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_14", NS_AUTO_STATUS);
    ns_page_think_time(4.283);

}
