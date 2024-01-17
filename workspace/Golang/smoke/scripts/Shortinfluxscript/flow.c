/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 01/13/2023 03:18:31
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
            "URL=http://172.24.1.4:8086/6588f709b0.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/26.c9f12339d6.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/600ef94c90.wasm", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/32.5c02872a8b.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("signin", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup");
    ns_web_url ("setup",
        "URL=http://172.24.1.4:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/78.a8bcdf1568.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("setup", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup_2");
    ns_web_url ("setup_2",
        "URL=http://172.24.1.4:8086/api/v2/setup",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/756cfeadfd.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/8a04845132.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/e71b678a99.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("setup_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health");
    ns_web_url ("health",
        "URL=http://172.24.1.4:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/8a04845132.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/e71b678a99.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
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
    ns_page_think_time(18.251);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("me");
    ns_web_url ("me",
        "URL=http://172.24.1.4:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("me", NS_AUTO_STATUS);

    //Page Auto split for application/json type
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
            "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348", END_INLINE,
            "URL=http://172.24.1.4:8086/3.82ddbdbd9f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/4.2d8e2b75b3.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5.cd750d04e2.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/6.f9e6758d7e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/30.1c5c894fc8.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/68.494044f5a6.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/c9783ceb2a.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/0.73ba69aef2.worker.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/c9783ceb2a.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8.ea285b6fad.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/39.305cb164e7.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("orgs", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards");
    ns_web_url ("dashboards",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=6dc474be0df93348&limit=100",
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
            "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348/notebooks", END_INLINE
    );

    ns_end_transaction("health_2", NS_AUTO_STATUS);
    ns_page_think_time(22.261);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X1_a293651708_js");
    ns_web_url ("X1_a293651708_js",
        "URL=http://172.24.1.4:8086/31.a293651708.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/6d375d8acf.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d2c48ab197.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9763d95516.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X1_a293651708_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks");
    ns_web_url ("notebooks",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks", NS_AUTO_STATUS);
    ns_page_think_time(34.077);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("Xa969ec2e9380000_5");
    ns_web_url ("Xa969ec2e9380000_5",
        "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348/notebooks/0a969ec2e9380000",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("Xa969ec2e9380000_5", NS_AUTO_STATUS);
    ns_page_think_time(32.014);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X8_4eaeabd2e3_js");
    ns_web_url ("X8_4eaeabd2e3_js",
        "URL=http://172.24.1.4:8086/28.4eaeabd2e3.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X8_4eaeabd2e3_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets");
    ns_web_url ("buckets",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=6dc474be0df93348&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_2");
    ns_web_url ("notebooks_2",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query");
    ns_web_url ("query",
        "URL=http://172.24.1.4:8086/api/v2/query?orgID=6dc474be0df93348",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n    |> range(start: -1h, stop: now())\n    |> filter(fn: (r) => r[\"_measurement\"] == \"airSensors\" and r[\"_field\"] == \"co\" and r[\"sensor_id\"] == \"TLM0100\")\n    |> keys()\n    |> keep(columns: [\"_value\"])\n    |> distinct()\n    |> filter(fn: (r) => r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\")\n    |> sort()\n    |> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_2");
    ns_web_url ("buckets_2",
        "URL=http://172.24.1.4:8086/api/v2/buckets?limit=100&orgID=6dc474be0df93348",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/0367a1dab7.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=http://172.24.1.4:8086/61ea17f16c.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/0367a1dab7.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/61ea17f16c.woff2", "HEADER=Origin:http://172.24.1.4:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("buckets_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_3");
    ns_web_url ("health_3",
        "URL=http://172.24.1.4:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_2");
    ns_web_url ("dashboards_2",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=6dc474be0df93348&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348/load-data/sources", END_INLINE
    );

    ns_end_transaction("dashboards_2", NS_AUTO_STATUS);
    ns_page_think_time(29.554);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("X3_c4b844a863_js");
    ns_web_url ("X3_c4b844a863_js",
        "URL=http://172.24.1.4:8086/13.c4b844a863.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/42.89c7e17358.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/362.53978adc3f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/c5e11df30f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/7c232faa6b.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d282b5dc2d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/6a035ca694.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d831880c7d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5f2c6d9067.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/ed5875c592.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/b4105a4388.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/057f237d97.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/3dabdf9fea.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/c99ec09528.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/586aa8f23c.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8c756c1e65.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/74ba2b9c36.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/0ded195c90.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/59a7c64ae2.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/2fbe9316b6.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
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
            "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348/load-data/buckets", END_INLINE
    );

    ns_end_transaction("X3_c4b844a863_js", NS_AUTO_STATUS);
    ns_page_think_time(31.46);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("Xc08d7e69e_svg");
    ns_web_url ("Xc08d7e69e_svg",
        "URL=http://172.24.1.4:8086/7c08d7e69e.svg",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/108a283f34.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/d2188336d6.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/6fbb271634.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/096438488d.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/a2543efad8.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/614ca6e83a.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/53cb3a5f10.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/3e5a1246ef.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/3c5ef5ffee.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/0ad25e4b13.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
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
            "URL=http://172.24.1.4:8086/1d07589b30.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/4ba575f55e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/58696ffaf6.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/af99ebacc0.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/99cd4bcb0e.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/fa714175dd.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/ee8354c1b1.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/09271a32a2.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/f11b83d401.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/70f2c0d968.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/42ab28d0bc.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/2ffe2ccff5.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/9afaef5b4f.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/4496973677.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/8e6336e716.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/80498d29ec.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("Xc08d7e69e_svg", NS_AUTO_STATUS);
    ns_page_think_time(0.065);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X508221c37_svg");
    ns_web_url ("X508221c37_svg",
        "URL=http://172.24.1.4:8086/9508221c37.svg",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/5c23880d6c.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X508221c37_svg", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_3");
    ns_web_url ("notebooks_3",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
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
            "URL=http://172.24.1.4:8086/41.7d4f98829c.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/notebook/from/default", END_INLINE
    );

    ns_end_transaction("notebooks_3", NS_AUTO_STATUS);
    ns_page_think_time(35.608);

    //Page Auto split for Button 'New Notebook' Clicked by User
    ns_start_transaction("X7_e2ac77987e_js");
    ns_web_url ("X7_e2ac77987e_js",
        "URL=http://172.24.1.4:8086/27.e2ac77987e.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X7_e2ac77987e_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_4");
    ns_web_url ("notebooks_4",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
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
            "{"orgID":"6dc474be0df93348","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"seconds":3600,"lower":"now() - 1h","upper":null,"label":"Past 1h","duration":"1h","type":"selectable-duration","windowPeriod":10000},"refresh":{"status":"paused","interval":0,"duration":null,"inactivityTimeout":0,"infiniteDuration":false},"pipes":[{"type":"queryBuilder","buckets":[],"tags":[{"key":"_measurement","values":[],"aggregateFunctionType":"filter"}],"id":"local_34eacea7-9815-4f65-bc4b-88a2e0596e7d","title":"Build a Query","visible":true},{"type":"table","id":"local_096e81e5-9353-4d84-a487-9585092aa091","title":"Validate the Data","visible":true},{"type":"visualization","properties":{"type":"xy","shape":"chronograf-v2","geom":"line","xColumn":null,"yColumn":null,"position":"overlaid","hoverDimension":"auto","queries":[{"name":"","text":"","editMode":"builder","builderConfig":{"buckets":[],"tags":[{"key":"_measurement","values":[],"aggregateFunctionType":"filter"}],"functions":[{"name":"mean"}],"aggregateWindow":{"period":"auto","fillValues":false}}}],"colors":[{"type":"scale","hex":"#31C0F6","id":"4c3f5338-9385-4ba3-8313-544182bb10f4","name":"Nineteen Eighty Four","value":0},{"type":"scale","hex":"#A500A5","id":"4b8011f4-0551-4337-9f65-2104b8b8dc10","name":"Nineteen Eighty Four","value":0},{"type":"scale","hex":"#FF7E27","id":"19abbaa4-8cd1-46de-8af1-cb190dc4ec09","name":"Nineteen Eighty Four","value":0}],"legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"note":"","showNoteWhenEmpty":false,"axes":{"x":{"bounds":["",""],"label":"","prefix":"","suffix":"","base":"10","scale":"linear"},"y":{"bounds":["",""],"label":"","prefix":"","suffix":"","base":"10","scale":"linear"}},"generateXAxisTicks":[],"generateYAxisTicks":[],"xTotalTicks":null,"xTickStart":null,"xTickStep":null,"yTotalTicks":null,"yTickStart":null,"yTickStep":null},"id":"local_cb657aac-0d2d-4470-ad1c-7bfacae5fff8","title":"Visualize the Result","visible":true}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348/notebooks/0a96a13068f80000", END_INLINE
    );

    ns_end_transaction("notebooks_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_6");
    ns_web_url ("notebooks_6",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_3");
    ns_web_url ("buckets_3",
        "URL=http://172.24.1.4:8086/api/v2/buckets?limit=100&orgID=6dc474be0df93348",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xa96a13068f80000");
    ns_web_url ("Xa96a13068f80000",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks/0a96a13068f80000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"6dc474be0df93348","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2023-01-13T09:47:56.195113406Z","updatedAt":"2023-01-13T09:47:56.195113406Z","pipes":[{"buckets":[],"id":"local_34eacea7-9815-4f65-bc4b-88a2e0596e7d","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_096e81e5-9353-4d84-a487-9585092aa091","type":"table","title":"Validate the Data","visible":true},{"id":"local_cb657aac-0d2d-4470-ad1c-7bfacae5fff8","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"4c3f5338-9385-4ba3-8313-544182bb10f4","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"4b8011f4-0551-4337-9f65-2104b8b8dc10","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"19abbaa4-8cd1-46de-8af1-cb190dc4ec09","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","period":"10s","title":"Visualize the Result","visible":true}]},"id":"0a96a13068f80000"}",
        BODY_END
    );

    ns_end_transaction("Xa96a13068f80000", NS_AUTO_STATUS);
    ns_page_think_time(0.647);

    //Page Auto split for 
    ns_start_transaction("notebooks_7");
    ns_web_url ("notebooks_7",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_7", NS_AUTO_STATUS);
    ns_page_think_time(1.55);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("notebooks_8");
    ns_web_url ("notebooks_8",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_8", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_4");
    ns_web_url ("buckets_4",
        "URL=http://172.24.1.4:8086/api/v2/buckets?limit=100&orgID=6dc474be0df93348",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_4", NS_AUTO_STATUS);
    ns_page_think_time(1.328);

    //Page Auto split for 
    ns_start_transaction("notebooks_9");
    ns_web_url ("notebooks_9",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_9", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xa969ec2e9380000_6");
    ns_web_url ("Xa969ec2e9380000_6",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks/0a969ec2e9380000",
        "METHOD=PATCH",
        "HEADER=content-type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"orgID":"6dc474be0df93348","name":"Untitled Notebook","spec":{"name":"Untitled Notebook","readOnly":false,"range":{"duration":"1h","label":"Past 1h","lower":"now() - 1h","seconds":3600,"type":"selectable-duration","upper":null,"windowPeriod":10000},"refresh":{"duration":null,"inactivityTimeout":0,"infiniteDuration":false,"interval":0,"status":"paused"},"createdAt":"2023-01-13T09:37:19.780447624Z","updatedAt":"2023-01-13T09:38:17.243901643Z","pipes":[{"buckets":[{"id":"airSensor","name":"Air Sensor Data","type":"sample"}],"id":"local_848d186e-d4c7-4e8c-90d0-78d469eabb12","tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":["airSensors"]},{"aggregateFunctionType":"filter","key":"_field","values":["co"]},{"aggregateFunctionType":"filter","key":"sensor_id","values":["TLM0100"]},{"aggregateFunctionType":"filter","values":[]}],"type":"queryBuilder","title":"Build a Query","visible":true},{"id":"local_95ff8f57-ff79-496f-92d4-c8257a8a99ee","type":"table","title":"Validate the Data","visible":true},{"id":"local_e6caa15e-aeb8-4b57-b8bf-d058e2dbfab9","period":"10s","properties":{"axes":{"x":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""},"y":{"base":"10","bounds":["",""],"label":"","prefix":"","scale":"linear","suffix":""}},"colors":[{"hex":"#31C0F6","id":"7d2f49b0-ce91-4745-8788-3b9828c42e84","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#A500A5","id":"4502e11f-4f8b-4330-871f-f18769a27bc8","name":"Nineteen Eighty Four","type":"scale","value":0},{"hex":"#FF7E27","id":"19a2a444-46c0-453d-bd3f-12c9387ee669","name":"Nineteen Eighty Four","type":"scale","value":0}],"generateXAxisTicks":[],"generateYAxisTicks":[],"geom":"line","hoverDimension":"auto","legendColorizeRows":true,"legendOpacity":1,"legendOrientationThreshold":100000000,"note":"","position":"overlaid","queries":[{"builderConfig":{"aggregateWindow":{"fillValues":false,"period":"auto"},"buckets":[],"functions":[{"name":"mean"}],"tags":[{"aggregateFunctionType":"filter","key":"_measurement","values":[]}]},"editMode":"builder","name":"","text":""}],"shape":"chronograf-v2","showNoteWhenEmpty":false,"staticLegend":{"colorizeRows":true,"heightRatio":0,"opacity":1,"orientationThreshold":100000000,"show":false,"widthRatio":1},"type":"xy","xColumn":null,"xTickStart":null,"xTickStep":null,"xTotalTicks":null,"yColumn":null,"yTickStart":null,"yTickStep":null,"yTotalTicks":null},"type":"visualization","title":"Visualize the Result","visible":true}]},"id":"0a969ec2e9380000"}",
        BODY_END
    );

    ns_end_transaction("Xa969ec2e9380000_6", NS_AUTO_STATUS);
    ns_page_think_time(1.127);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("notebooks_10");
    ns_web_url ("notebooks_10",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_10", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_5");
    ns_web_url ("buckets_5",
        "URL=http://172.24.1.4:8086/api/v2/buckets?limit=100&orgID=6dc474be0df93348",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_5", NS_AUTO_STATUS);
    ns_page_think_time(1.986);

    //Page Auto split for 
    ns_start_transaction("notebooks_11");
    ns_web_url ("notebooks_11",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_11", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_4");
    ns_web_url ("health_4",
        "URL=http://172.24.1.4:8086/health"
    );

    ns_end_transaction("health_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_3");
    ns_web_url ("dashboards_3",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=6dc474be0df93348&limit=100"
    );

    ns_end_transaction("dashboards_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_12");
    ns_web_url ("notebooks_12",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_12", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_13");
    ns_web_url ("notebooks_13",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348"
    );

    ns_end_transaction("notebooks_13", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_6");
    ns_web_url ("buckets_6",
        "URL=http://172.24.1.4:8086/api/v2/buckets?limit=100&orgID=6dc474be0df93348"
    );

    ns_end_transaction("buckets_6", NS_AUTO_STATUS);
    ns_page_think_time(1.621);

    ns_start_transaction("Xa969ec2e9380000");
    ns_web_url ("Xa969ec2e9380000",
        "URL=http://172.24.1.4:8086/26.c9f12339d6.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/600ef94c90.wasm", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/32.5c02872a8b.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("Xa969ec2e9380000", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup_3");
    ns_web_url ("setup_3",
        "URL=http://172.24.1.4:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("setup_3", NS_AUTO_STATUS);

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
            "URL=http://172.24.1.4:8086/3.82ddbdbd9f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/4.2d8e2b75b3.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/5.cd750d04e2.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/6.f9e6758d7e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/30.1c5c894fc8.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/0.73ba69aef2.worker.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/68.494044f5a6.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:8086/28.4eaeabd2e3.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("orgs_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_7");
    ns_web_url ("buckets_7",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=6dc474be0df93348&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_7", NS_AUTO_STATUS);
    ns_page_think_time(0.088);

    ns_start_transaction("Xa969ec2e9380000_2");
    ns_web_url ("Xa969ec2e9380000_2",
        "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348/notebooks/0a969ec2e9380000",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/600ef94c90.wasm", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("Xa969ec2e9380000_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup_4");
    ns_web_url ("setup_4",
        "URL=http://172.24.1.4:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("setup_4", NS_AUTO_STATUS);
    ns_page_think_time(0.072);

    ns_start_transaction("Xa969ec2e9380000_3");
    ns_web_url ("Xa969ec2e9380000_3",
        "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348/notebooks/0a969ec2e9380000",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/600ef94c90.wasm", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("Xa969ec2e9380000_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup_5");
    ns_web_url ("setup_5",
        "URL=http://172.24.1.4:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("setup_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("me_3");
    ns_web_url ("me_3",
        "URL=http://172.24.1.4:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("me_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("flags_3");
    ns_web_url ("flags_3",
        "URL=http://172.24.1.4:8086/api/v2/flags",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("flags_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("orgs_3");
    ns_web_url ("orgs_3",
        "URL=http://172.24.1.4:8086/api/v2/orgs",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/0.73ba69aef2.worker.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("orgs_3", NS_AUTO_STATUS);
    ns_page_think_time(0.018);

    ns_start_transaction("Xa969ec2e9380000_4");
    ns_web_url ("Xa969ec2e9380000_4",
        "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348/notebooks/0a969ec2e9380000",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            //URL commented due to error code : ABORTED
            //"URL=http://172.24.1.4:8086/api/v2/buckets?orgID=6dc474be0df93348&limit=100", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=influxdb-oss-session", END_INLINE,
            "URL=http://172.24.1.4:8086/600ef94c90.wasm", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("Xa969ec2e9380000_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup_6");
    ns_web_url ("setup_6",
        "URL=http://172.24.1.4:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("setup_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("me_4");
    ns_web_url ("me_4",
        "URL=http://172.24.1.4:8086/api/v2/me",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("me_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("flags_4");
    ns_web_url ("flags_4",
        "URL=http://172.24.1.4:8086/api/v2/flags",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("flags_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("orgs_4");
    ns_web_url ("orgs_4",
        "URL=http://172.24.1.4:8086/api/v2/orgs",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/0.73ba69aef2.worker.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("orgs_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_8");
    ns_web_url ("buckets_8",
        "URL=http://172.24.1.4:8086/api/v2/buckets?orgID=6dc474be0df93348&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("buckets_8", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_14");
    ns_web_url ("notebooks_14",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_14", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("query_2");
    ns_web_url ("query_2",
        "URL=http://172.24.1.4:8086/api/v2/query?orgID=6dc474be0df93348",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:http://172.24.1.4:8086",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        BODY_BEGIN,
            "{"query":"import \"influxdata/influxdb/sample\"\n\nsample.data(set: \"airSensor\")\n    |> range(start: -1h, stop: now())\n    |> filter(fn: (r) => r[\"_measurement\"] == \"airSensors\" and r[\"_field\"] == \"co\" and r[\"sensor_id\"] == \"TLM0100\")\n    |> keys()\n    |> keep(columns: [\"_value\"])\n    |> distinct()\n    |> filter(fn: (r) => r._value != \"_time\" and r._value != \"_start\" and r._value != \"_stop\" and r._value != \"_value\")\n    |> sort()\n    |> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
        BODY_END
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("buckets_9");
    ns_web_url ("buckets_9",
        "URL=http://172.24.1.4:8086/api/v2/buckets?limit=100&orgID=6dc474be0df93348",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348", END_INLINE,
            "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348/notebooks/0a969ec2e9380000", END_INLINE
    );

    ns_end_transaction("buckets_9", NS_AUTO_STATUS);
    ns_page_think_time(60.45);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X_ea285b6fad_js");
    ns_web_url ("X_ea285b6fad_js",
        "URL=http://172.24.1.4:8086/8.ea285b6fad.js",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/39.305cb164e7.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X_ea285b6fad_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_4");
    ns_web_url ("dashboards_4",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=6dc474be0df93348&limit=100",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("dashboards_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_5");
    ns_web_url ("health_5",
        "URL=http://172.24.1.4:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/orgs/6dc474be0df93348/notebooks", END_INLINE
    );

    ns_end_transaction("health_5", NS_AUTO_STATUS);
    ns_page_think_time(62.169);

    //Page Auto split for 
    ns_start_transaction("X1_a293651708_js_2");
    ns_web_url ("X1_a293651708_js_2",
        "URL=http://172.24.1.4:8086/31.a293651708.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X1_a293651708_js_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("notebooks_15");
    ns_web_url ("notebooks_15",
        "URL=http://172.24.1.4:8086/api/v2private/notebooks?orgID=6dc474be0df93348",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("notebooks_15", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_6");
    ns_web_url ("health_6",
        "URL=http://172.24.1.4:8086/health",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("health_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("dashboards_5");
    ns_web_url ("dashboards_5",
        "URL=http://172.24.1.4:8086/api/v2/dashboards?orgID=6dc474be0df93348&limit=100",
        INLINE_URLS,
            "URL=http://172.24.1.4:8086/logout", END_INLINE
    );

    ns_end_transaction("dashboards_5", NS_AUTO_STATUS);
    ns_page_think_time(65.779);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("X58_45925caeac_js");
    ns_web_url ("X58_45925caeac_js",
        "URL=http://172.24.1.4:8086/358.45925caeac.js",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("X58_45925caeac_js", NS_AUTO_STATUS);

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
            "URL=http://172.24.1.4:8086/78.a8bcdf1568.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("signout", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("setup_7");
    ns_web_url ("setup_7",
        "URL=http://172.24.1.4:8086/api/v2/setup",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=influxdb-oss-session"
    );

    ns_end_transaction("setup_7", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("health_7");
    ns_web_url ("health_7",
        "URL=http://172.24.1.4:8086/health"
    );

    ns_end_transaction("health_7", NS_AUTO_STATUS);
    ns_page_think_time(1.949);

}
