/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 01/10/2022 05:05:39
    Flow details:
    Build details: 4.7.1 (build# 13)
    Modification History:
-----------------------------------------------------------------------------*/

package com.cavisson.scripts.influxscript;
import pacJnvmApi.NSApi;

public class flow implements NsFlow
{
    public int execute(NSApi nsApi) throws Exception
    {
        int status = 0;

        status = nsApi.ns_start_transaction("variables");
        status = nsApi.ns_web_url ("variables",
            "URL=http://10.10.70.39:8086/signin?returnTo=/orgs/cc2b46247a491c7e/settings/variables",
            "HEADER=Upgrade-Insecure-Requests:1",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE,
                "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", END_INLINE,
                "URL=http://10.10.70.39:8086/6588f709b0.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/26.c9f12339d6.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/600ef94c90.wasm", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/32.5c02872a8b.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("variables", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("setup");
        status = nsApi.ns_web_url ("setup",
            "URL=http://10.10.70.39:8086/api/v2/setup",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/78.a8bcdf1568.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("setup", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("setup_2");
        status = nsApi.ns_web_url ("setup_2",
            "URL=http://10.10.70.39:8086/api/v2/setup",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/756cfeadfd.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/8a04845132.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/e71b678a99.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("setup_2", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("health");
        status = nsApi.ns_web_url ("health",
            "URL=http://10.10.70.39:8086/health",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/8a04845132.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/e71b678a99.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBmdpdGh1YgNjb20AAAEAAQAAKRAAAAAAAABZAAwAVQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE,
                "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBmdpdGh1YgNjb20AABwAAQAAKRAAAAAAAABZAAwAVQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE
        );

        status = nsApi.ns_end_transaction("health", NS_AUTO_STATUS);
    
    //Page Auto split for Method = POST
        status = nsApi.ns_start_transaction("signin");
        status = nsApi.ns_web_url ("signin",
            "URL=http://10.10.70.39:8086/api/v2/signin",
            "METHOD=POST",
            "HEADER=authorization:Basic YWJoaXNoZWs6Y2F2aXNzb24=",
            "HEADER=Origin:http://10.10.70.39:8086",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/settings/variables", END_INLINE
        );

        status = nsApi.ns_end_transaction("signin", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(28.048);

        //Page Auto split for Link 'image' Clicked by User
        status = nsApi.ns_start_transaction("me");
        status = nsApi.ns_web_url ("me",
            "URL=http://10.10.70.39:8086/api/v2/me",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("me", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("flags");
        status = nsApi.ns_web_url ("flags",
            "URL=http://10.10.70.39:8086/api/v2/flags",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("flags", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("me_2");
        status = nsApi.ns_web_url ("me_2",
            "URL=http://10.10.70.39:8086/api/v2/me",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("me_2", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("orgs");
        status = nsApi.ns_web_url ("orgs",
            "URL=http://10.10.70.39:8086/api/v2/orgs",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/3.82ddbdbd9f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/4.2d8e2b75b3.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/5.cd750d04e2.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/6.f9e6758d7e.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/30.1c5c894fc8.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/68.494044f5a6.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/c9783ceb2a.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/0.73ba69aef2.worker.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/c9783ceb2a.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/14.8c8278f9d1.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/65.cabf50a409.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("orgs", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("labels");
        status = nsApi.ns_web_url ("labels",
            "URL=http://10.10.70.39:8086/api/v2/labels?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("labels", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("variables_2");
        status = nsApi.ns_web_url ("variables_2",
            "URL=http://10.10.70.39:8086/api/v2/variables?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/load-data/sources", END_INLINE
        );

        status = nsApi.ns_end_transaction("variables_2", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(36.982);

        //Page Auto split for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("X3_c4b844a863_js");
        status = nsApi.ns_web_url ("X3_c4b844a863_js",
            "URL=http://10.10.70.39:8086/13.c4b844a863.js",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/42.89c7e17358.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/362.53978adc3f.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/load-data/buckets", END_INLINE
        );

        status = nsApi.ns_end_transaction("X3_c4b844a863_js", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(39.45);

        //Page Auto split for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("X1_7d4f98829c_js");
        status = nsApi.ns_web_url ("X1_7d4f98829c_js",
            "URL=http://10.10.70.39:8086/41.7d4f98829c.js",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("X1_7d4f98829c_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("buckets");
        status = nsApi.ns_web_url ("buckets",
            "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("buckets", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("labels_2");
        status = nsApi.ns_web_url ("labels_2",
            "URL=http://10.10.70.39:8086/api/v2/labels?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("labels_2", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("telegrafs");
        status = nsApi.ns_web_url ("telegrafs",
            "URL=http://10.10.70.39:8086/api/v2/telegrafs?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBGRvY3MKaW5mbHV4ZGF0YQNjb20AAAEAAQAAKRAAAAAAAABQAAwATAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE,
                "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBGRvY3MKaW5mbHV4ZGF0YQNjb20AABwAAQAAKRAAAAAAAABQAAwATAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/load-data/telegrafs", END_INLINE
        );

        status = nsApi.ns_end_transaction("telegrafs", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(42.668);

        //Page Auto split for Link 'image' Clicked by User
        status = nsApi.ns_start_transaction("X2_de00dea115_js");
        status = nsApi.ns_web_url ("X2_de00dea115_js",
            "URL=http://10.10.70.39:8086/52.de00dea115.js",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("X2_de00dea115_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("labels_3");
        status = nsApi.ns_web_url ("labels_3",
            "URL=http://10.10.70.39:8086/api/v2/labels?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("labels_3", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("buckets_2");
        status = nsApi.ns_web_url ("buckets_2",
            "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("buckets_2", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("telegrafs_2");
        status = nsApi.ns_web_url ("telegrafs_2",
            "URL=http://10.10.70.39:8086/api/v2/telegrafs?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/load-data/scrapers", END_INLINE
        );

        status = nsApi.ns_end_transaction("telegrafs_2", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(44.257);

        //Page Auto split for Button '' Clicked by User
        status = nsApi.ns_start_transaction("X4_97a4d02a36_js");
        status = nsApi.ns_web_url ("X4_97a4d02a36_js",
            "URL=http://10.10.70.39:8086/54.97a4d02a36.js",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("X4_97a4d02a36_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("scrapers");
        status = nsApi.ns_web_url ("scrapers",
            "URL=http://10.10.70.39:8086/api/v2/scrapers?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("scrapers", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("buckets_3");
        status = nsApi.ns_web_url ("buckets_3",
            "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/e3937801e3.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/e3937801e3.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/load-data/tokens", END_INLINE
        );

        status = nsApi.ns_end_transaction("buckets_3", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(45.594);

        //Page Auto split for Link 'image' Clicked by User
        status = nsApi.ns_start_transaction("X9_69bf60a4da_js");
        status = nsApi.ns_web_url ("X9_69bf60a4da_js",
            "URL=http://10.10.70.39:8086/49.69bf60a4da.js",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("X9_69bf60a4da_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("authorizations");
        status = nsApi.ns_web_url ("authorizations",
            "URL=http://10.10.70.39:8086/api/v2/authorizations?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/data-explorer", END_INLINE
        );

        status = nsApi.ns_end_transaction("authorizations", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(47.337);

        //Page Auto split for Link 'image' Clicked by User
        status = nsApi.ns_start_transaction("X6_aefa625aee_js");
        status = nsApi.ns_web_url ("X6_aefa625aee_js",
            "URL=http://10.10.70.39:8086/36.aefa625aee.js",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/a592c9bd38.svg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/61ea17f16c.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/0367a1dab7.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("X6_aefa625aee_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("buckets_4");
        status = nsApi.ns_web_url ("buckets_4",
            "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("buckets_4", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("variables_3");
        status = nsApi.ns_web_url ("variables_3",
            "URL=http://10.10.70.39:8086/api/v2/variables?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/61ea17f16c.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/0367a1dab7.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("variables_3", NS_AUTO_STATUS);
    
    //Page Auto split for Method = POST
        status = nsApi.ns_start_transaction("query");
        status = nsApi.ns_web_url ("query",
            "URL=http://10.10.70.39:8086/api/v2/query?orgID=cc2b46247a491c7e",
            "METHOD=POST",
            "HEADER=Content-Type:application/json",
            "HEADER=Origin:http://10.10.70.39:8086",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            BODY_BEGIN,
                "{"query":"import \"regexp\"\n  \n  from(bucket: \"influxdata\")\n  |> range(start: -1h, stop: now())\n  |> filter(fn: (r) => true)\n  |> keys()\n  |> keep(columns: [\"_value\"])\n  |> distinct()\n  |> filter(fn: (r) => r._value != \"_time\" and r._value != \"_start\" and r._value !=  \"_stop\" and r._value != \"_value\")\n  |> sort()\n  |> limit(n: 200)","dialect":{"annotations":["group","datatype","default"]}}",
            BODY_END
        );

        status = nsApi.ns_end_transaction("query", NS_AUTO_STATUS);
    
    //Page Auto split for Method = POST
        status = nsApi.ns_start_transaction("query_2");
        status = nsApi.ns_web_url ("query_2",
            "URL=http://10.10.70.39:8086/api/v2/query?orgID=cc2b46247a491c7e",
            "METHOD=POST",
            "HEADER=Content-Type:application/json",
            "HEADER=Origin:http://10.10.70.39:8086",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            BODY_BEGIN,
                "{"query":"import \"regexp\"\n  \n  from(bucket: \"influxdata\")\n  |> range(start: -1h, stop: now())\n  |> filter(fn: (r) => true)\n  |> keep(columns: [\"_measurement\"])\n  |> group()\n  |> distinct(column: \"_measurement\")\n  |> limit(n: 200)\n  |> sort()","dialect":{"annotations":["group","datatype","default"]}}",
            BODY_END,
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/notebooks", END_INLINE
        );

        status = nsApi.ns_end_transaction("query_2", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(54.671);

        //Page Auto split for Link 'image' Clicked by User
        status = nsApi.ns_start_transaction("X1_a293651708_js");
        status = nsApi.ns_web_url ("X1_a293651708_js",
            "URL=http://10.10.70.39:8086/31.a293651708.js",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/6d375d8acf.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/d2c48ab197.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=http://10.10.70.39:8086/9763d95516.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("X1_a293651708_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("notebooks");
        status = nsApi.ns_web_url ("notebooks",
            "URL=http://10.10.70.39:8086/api/v2private/notebooks?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/dashboards-list", END_INLINE
        );

        status = nsApi.ns_end_transaction("notebooks", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(58.055);

        //Page Auto split for Link 'image' Clicked by User
        status = nsApi.ns_start_transaction("X5_3ef833c89c_js");
        status = nsApi.ns_web_url ("X5_3ef833c89c_js",
            "URL=http://10.10.70.39:8086/15.3ef833c89c.js",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/47.84ba624f48.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("X5_3ef833c89c_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("dashboards");
        status = nsApi.ns_web_url ("dashboards",
            "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("dashboards", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("labels_4");
        status = nsApi.ns_web_url ("labels_4",
            "URL=http://10.10.70.39:8086/api/v2/labels?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("labels_4", NS_AUTO_STATUS);
    
    //Page Auto split for Method = POST
        status = nsApi.ns_start_transaction("json");
        status = nsApi.ns_web_url ("json",
            "URL=https://update.googleapis.com/service/update2/json?cup2key=10:3005751128&cup2hreq=5a0e0e63a4418db2f153ebcad1d19d31e2e75d7e4816737b04f4f0da00d85a34",
            "METHOD=POST",
            "HEADER=X-Goog-Update-AppId:oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,cmahhnpholdijhjokonmfdjbfmklppij,obedbbhbpmojnkanicioggnmelmoomoc,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,aemomkdncapdnfajjbbcbdebjljbpmpj,jflookgnkcckhobaglndicnbbgbonegd,hfnkpimlhhgieaddgfemjhofmfblmnib,ggkkehgbnfjpeggfpleeakpidbkibbmn,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jamhcnnkihinmdlkakkaopbjbbcngflc,pdafiollngonhoadbmdoemagnfpdphbe,eeigpngbgcognadeebkilcpcaedhellh",
            "HEADER=X-Goog-Update-Interactivity:bg",
            "HEADER=X-Goog-Update-Updater:chromium-90.0.4430.93",
            "HEADER=Content-Type:application/json",
            "HEADER=Sec-Fetch-Site:none",
            "HEADER=Sec-Fetch-Mode:no-cors",
            "HEADER=Sec-Fetch-Dest:empty",
            BODY_BEGIN,
                "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"oimompecagnajdejgnnjijobebaeigek","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.e80345a4828e2b82d049520da48dc125df0c2600b1e4591cd05c71bb661231e5"}]},"ping":{"ping_freshness":"{c3a8bfcc-a023-49b3-b206-cd73556b0dbf}","rd":5488},"updatecheck":{},"version":"4.10.2391.0"},{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","cohort":"1:bm1:11vf@0.01","cohorthint":"M54AndUp","cohortname":"M54AndUp","enabled":true,"packages":{"package":[{"fp":"1.dbbba5869c1d8946e5e23215c0404619fe82793d60eb89489b345ef55023e077"}]},"ping":{"ping_freshness":"{3795bd48-88f9-4b83-866d-6a0c76a45786}","rd":5488},"updatecheck":{},"version":"9.32.0"},{"appid":"cmahhnpholdijhjokonmfdjbfmklppij","cohort":"1:wr3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7"}]},"ping":{"ping_freshness":"{55be110d-2fa5-4fbb-a7be-aeb11ce75988}","rd":5488},"updatecheck":{},"version":"1.0.6"},{"accept_locale":"ENUS","appid":"obedbbhbpmojnkanicioggnmelmoomoc","cohort":"1:s6f:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.b8ceac0b104a703e754df60e62165a93ccfa8b3c454d931fbc53e82f3d8495df"}]},"ping":{"ping_freshness":"{472aff6e-d30d-4492-8157-04d4b58b1b1e}","rd":5488},"updatecheck":{},"version":"20220101.419492099"},{"appid":"giekcmmlnklenlaomppkphknjmnnpneh","cohort":"1:j5l:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace"}]},"ping":{"ping_freshness":"{dbfbbaeb-65fe-49c3-ab9a-10cd2dcdae6d}","rd":5488},"updatecheck":{},"version":"7"},{"appid":"khaoiebndkojlmppeemjhbpbandiljpe","cohort":"1:cux:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.d237485db9493e87035e3295dbaa1e24b727c7fb91b24401814fd88f2ab81c3c"}]},"ping":{"ping_freshness":"{475a9dd4-5a5e-4cce-8653-cdc1515473a6}","rd":5488},"updatecheck":{},"version":"47"},{"appid":"llkgjffcdpffmhiakmfcdcblohccpfmo","cohort":"1::","enabled":true,"ping":{"ping_freshness":"{0f3ec369-bfe4-4e7d-8855-03f7283b90ea}","rd":5488},"updatecheck":{},"version":"0.0.0.0"},{"appid":"aemomkdncapdnfajjbbcbdebjljbpmpj","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.c25787c5c76ff9c4c50a87d32802301c9ed80d934830d677bbc6629e290cb5aa"}]},"ping":{"ping_freshness":"{9b0ca6b3-8160-4076-abb9-f53fe9f66a58}","rd":5488},"updatecheck":{},"version":"1.0.6.0"},{"appid":"jflookgnkcckhobaglndicnbbgbonegd","cohort":"1:s7x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.715d11efc2de8af25b5a4ddfbf395e5b62bf0a55519b159ee0102ac300e760e8"}]},"ping":{"ping_freshness":"{492f65ed-b340-46c4-aa27-666f36873a5b}","rd":5488},"updatecheck":{},"version":"2761"},{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","cohort":"1:jcl:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.f70eabd1017f312f3202a9ae03c60526e8e639a12bba0bf92e3887b8f72ac2f6"}]},"ping":{"ping_freshness":"{f997e61e-b548-42cb-9302-bf83592d71f3}","rd":5488},"updatecheck":{},"version":"7089"},{"appid":"ggkkehgbnfjpeggfpleeakpidbkibbmn","cohort":"1:ut9:12fr@0.01","cohorthint":"M80ToM99","cohortname":"M80ToM99","enabled":true,"packages":{"package":[{"fp":"1.cf9ef903b56de506d39b612dba9b9ac8cbe066aefa1af94507a78954abdbfdf7"}]},"ping":{"ping_freshness":"{d6a48b53-a7bc-408a-b131-a6634083cbd2}","rd":5488},"updatecheck":{},"version":"2021.11.28.1202"},{"appid":"ojhpjlocmbogdgmfpkhlaaeamibhnphh","cohort":"1:w0x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0"}]},"ping":{"ping_freshness":"{c3a535c2-05e4-4216-8591-ebfc4e82c8bb}","rd":5488},"updatecheck":{},"version":"1"},{"appid":"jamhcnnkihinmdlkakkaopbjbbcngflc","cohort":"1:wvr:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.fa88746db68685be6e6bd0a58bfa85a6f4e66ae8e1e7cb133906c9593c9e7235"}]},"ping":{"ping_freshness":"{04d93757-3506-45d9-bbe1-1d68e238807b}","rd":5488},"updatecheck":{},"version":"99.0.4818.0"},{"appid":"pdafiollngonhoadbmdoemagnfpdphbe","cohort":"1:vz3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a"}]},"ping":{"ping_freshness":"{7260ad5a-214b-4321-bc1f-cad943ed6f68}","rd":5488},"updatecheck":{},"version":"2021.8.17.1300"},{"appid":"eeigpngbgcognadeebkilcpcaedhellh","cohort":"1:w59:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05"}]},"ping":{"ping_freshness":"{43f2c650-09e4-4da0-a4ed-04af6673f8e3}","rd":5488},"updatecheck":{},"version":"2020.11.2.164946"}],"arch":"x64","dedup":"cr","domainjoined":false,"hw":{"physmemory":16},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1977"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{c31aaf56-447f-47a9-a1a3-c0a86f2e6d40}","sessionid":"{21eb6723-45fc-4791-925c-d7589f772e99}","updaterversion":"90.0.4430.93"}}",
            BODY_END,
            INLINE_URLS,
                "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE,
                "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAHAABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/tasks", END_INLINE
        );

        status = nsApi.ns_end_transaction("json", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(61.979);

        //Page Auto split for Link 'image' Clicked by User
        status = nsApi.ns_start_transaction("X_ea285b6fad_js");
        status = nsApi.ns_web_url ("X_ea285b6fad_js",
            "URL=http://10.10.70.39:8086/8.ea285b6fad.js",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/45.5d6141e9a8.js", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("X_ea285b6fad_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("tasks");
        status = nsApi.ns_web_url ("tasks",
            "URL=http://10.10.70.39:8086/api/v2/tasks?orgID=cc2b46247a491c7e&limit=500",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("tasks", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("labels_5");
        status = nsApi.ns_web_url ("labels_5",
            "URL=http://10.10.70.39:8086/api/v2/labels?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/alerting", END_INLINE
        );

        status = nsApi.ns_end_transaction("labels_5", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(68.338);

        //Page Auto split for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("X3_b1ece16e60_js");
        status = nsApi.ns_web_url ("X3_b1ece16e60_js",
            "URL=http://10.10.70.39:8086/33.b1ece16e60.js",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("X3_b1ece16e60_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("checks");
        status = nsApi.ns_web_url ("checks",
            "URL=http://10.10.70.39:8086/api/v2/checks?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("checks", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("notificationEndpoints");
        status = nsApi.ns_web_url ("notificationEndpoints",
            "URL=http://10.10.70.39:8086/api/v2/notificationEndpoints?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("notificationEndpoints", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("notificationRules");
        status = nsApi.ns_web_url ("notificationRules",
            "URL=http://10.10.70.39:8086/api/v2/notificationRules?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("notificationRules", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("labels_6");
        status = nsApi.ns_web_url ("labels_6",
            "URL=http://10.10.70.39:8086/api/v2/labels?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("labels_6", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("buckets_5");
        status = nsApi.ns_web_url ("buckets_5",
            "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("buckets_5", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("variables_4");
        status = nsApi.ns_web_url ("variables_4",
            "URL=http://10.10.70.39:8086/api/v2/variables?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/alert-history", END_INLINE
        );

        status = nsApi.ns_end_transaction("variables_4", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(72.598);

        //Page Auto split for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("checks_2");
        status = nsApi.ns_web_url ("checks_2",
            "URL=http://10.10.70.39:8086/api/v2/checks?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("checks_2", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("notificationEndpoints_2");
        status = nsApi.ns_web_url ("notificationEndpoints_2",
            "URL=http://10.10.70.39:8086/api/v2/notificationEndpoints?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("notificationEndpoints_2", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("notificationRules_2");
        status = nsApi.ns_web_url ("notificationRules_2",
            "URL=http://10.10.70.39:8086/api/v2/notificationRules?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/alert-history?type=statuses", END_INLINE
        );

        status = nsApi.ns_end_transaction("notificationRules_2", NS_AUTO_STATUS);
    
    //Page Auto split for Method = POST
        status = nsApi.ns_start_transaction("query_3");
        status = nsApi.ns_web_url ("query_3",
            "URL=http://10.10.70.39:8086/api/v2/query?orgID=cc2b46247a491c7e",
            "METHOD=POST",
            "HEADER=Content-Type:application/json",
            "HEADER=Origin:http://10.10.70.39:8086",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            BODY_BEGIN,
                "{"query":"\nfrom(bucket: \"_monitoring\")\n  |> range(start: -1d, stop: 1641814509)\n  |> filter(fn: (r) => r._measurement == \"statuses\" and r._field == \"_message\")\n  |> filter(fn: (r) => exists r._check_id and exists r._value and exists r._check_name and exists r._level)\n  |> keep(columns: [\"_time\", \"_value\", \"_check_id\", \"_check_name\", \"_level\"])\n  |> rename(columns: {\"_time\": \"time\",\n                      \"_value\": \"message\",\n                      \"_check_id\": \"checkID\",\n                      \"_check_name\": \"checkName\",\n                      \"_level\": \"level\"})\n  |> group()\n  |> sort(columns: [\"time\"], desc: true)\n  |> limit(n: 100, offset: 0)\n","dialect":{"annotations":["group","datatype","default"]}}",
            BODY_END
        );

        status = nsApi.ns_end_transaction("query_3", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(2.525);

        //Page Auto split for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("labels_7");
        status = nsApi.ns_web_url ("labels_7",
            "URL=http://10.10.70.39:8086/api/v2/labels?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("labels_7", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("variables_5");
        status = nsApi.ns_web_url ("variables_5",
            "URL=http://10.10.70.39:8086/api/v2/variables?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/settings/templates", END_INLINE
        );

        status = nsApi.ns_end_transaction("variables_5", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(77.524);

        //Page Auto split for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("stacks");
        status = nsApi.ns_web_url ("stacks",
            "URL=http://10.10.70.39:8086/api/v2/stacks?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("stacks", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("buckets_6");
        status = nsApi.ns_web_url ("buckets_6",
            "URL=http://10.10.70.39:8086/api/v2/buckets?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("buckets_6", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("checks_3");
        status = nsApi.ns_web_url ("checks_3",
            "URL=http://10.10.70.39:8086/api/v2/checks?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("checks_3", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("dashboards_2");
        status = nsApi.ns_web_url ("dashboards_2",
            "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("dashboards_2", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("labels_8");
        status = nsApi.ns_web_url ("labels_8",
            "URL=http://10.10.70.39:8086/api/v2/labels?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("labels_8", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("notificationEndpoints_3");
        status = nsApi.ns_web_url ("notificationEndpoints_3",
            "URL=http://10.10.70.39:8086/api/v2/notificationEndpoints?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("notificationEndpoints_3", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("notificationRules_3");
        status = nsApi.ns_web_url ("notificationRules_3",
            "URL=http://10.10.70.39:8086/api/v2/notificationRules?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("notificationRules_3", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("tasks_2");
        status = nsApi.ns_web_url ("tasks_2",
            "URL=http://10.10.70.39:8086/api/v2/tasks?orgID=cc2b46247a491c7e&limit=500",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("tasks_2", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("telegrafs_3");
        status = nsApi.ns_web_url ("telegrafs_3",
            "URL=http://10.10.70.39:8086/api/v2/telegrafs?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("telegrafs_3", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("variables_6");
        status = nsApi.ns_web_url ("variables_6",
            "URL=http://10.10.70.39:8086/api/v2/variables?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/settings/labels", END_INLINE
        );

        status = nsApi.ns_end_transaction("variables_6", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(81.124);

        //Page Auto split for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("X7_91fbe5b8b4_js");
        status = nsApi.ns_web_url ("X7_91fbe5b8b4_js",
            "URL=http://10.10.70.39:8086/57.91fbe5b8b4.js",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("X7_91fbe5b8b4_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("labels_9");
        status = nsApi.ns_web_url ("labels_9",
            "URL=http://10.10.70.39:8086/api/v2/labels?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e/settings/secrets", END_INLINE
        );

        status = nsApi.ns_end_transaction("labels_9", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(83.689);

        //Page Auto split for Link 'A' Clicked by User
        status = nsApi.ns_start_transaction("X3_6e429fb381_js");
        status = nsApi.ns_web_url ("X3_6e429fb381_js",
            "URL=http://10.10.70.39:8086/53.6e429fb381.js",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("X3_6e429fb381_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("secrets");
        status = nsApi.ns_web_url ("secrets",
            "URL=http://10.10.70.39:8086/api/v2/orgs/cc2b46247a491c7e/secrets",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("secrets", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("secrets_2");
        status = nsApi.ns_web_url ("secrets_2",
            "URL=http://10.10.70.39:8086/api/v2/orgs/cc2b46247a491c7e/secrets"
        );

        status = nsApi.ns_end_transaction("secrets_2", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("me_3");
        status = nsApi.ns_web_url ("me_3",
            "URL=http://10.10.70.39:8086/api/v2/me"
        );

        status = nsApi.ns_end_transaction("me_3", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(1.791);

        //Page Auto split for Link 'image' Clicked by User
        status = nsApi.ns_start_transaction("labels_10");
        status = nsApi.ns_web_url ("labels_10",
            "URL=http://10.10.70.39:8086/api/v2/labels?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("labels_10", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("variables_7");
        status = nsApi.ns_web_url ("variables_7",
            "URL=http://10.10.70.39:8086/api/v2/variables?orgID=cc2b46247a491c7e",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/orgs/cc2b46247a491c7e", END_INLINE
        );

        status = nsApi.ns_end_transaction("variables_7", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(92.733);

        //Page Auto split for Link 'image' Clicked by User
        status = nsApi.ns_start_transaction("X9_305cb164e7_js");
        status = nsApi.ns_web_url ("X9_305cb164e7_js",
            "URL=http://10.10.70.39:8086/39.305cb164e7.js",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/6515f0452e.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
        );

        status = nsApi.ns_end_transaction("X9_305cb164e7_js", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("dashboards_3");
        status = nsApi.ns_web_url ("dashboards_3",
            "URL=http://10.10.70.39:8086/api/v2/dashboards?orgID=cc2b46247a491c7e&limit=100",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session"
        );

        status = nsApi.ns_end_transaction("dashboards_3", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("health_2");
        status = nsApi.ns_web_url ("health_2",
            "URL=http://10.10.70.39:8086/health",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/6515f0452e.woff2", "HEADER=Origin:http://10.10.70.39:8086", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
                "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBmdpdGh1YgNjb20AABwAAQAAKRAAAAAAAABZAAwAVQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", END_INLINE,
                "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBmdpdGh1YgNjb20AAAEAAQAAKRAAAAAAAABZAAwAVQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", END_INLINE,
                "URL=http://10.10.70.39:8086/logout", END_INLINE
        );

        status = nsApi.ns_end_transaction("health_2", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(97.139);

        //Page Auto split for Link 'image' Clicked by User
        status = nsApi.ns_start_transaction("X58_45925caeac_js");
        status = nsApi.ns_web_url ("X58_45925caeac_js",
            "URL=http://10.10.70.39:8086/358.45925caeac.js",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("X58_45925caeac_js", NS_AUTO_STATUS);
    
    //Page Auto split for Method = POST
        status = nsApi.ns_start_transaction("signout");
        status = nsApi.ns_web_url ("signout",
            "URL=http://10.10.70.39:8086/api/v2/signout",
            "METHOD=POST",
            "HEADER=Origin:http://10.10.70.39:8086",
            "HEADER=Accept-Language:en-US,en;q=0.9",
            "COOKIE=influxdb-oss-session",
            INLINE_URLS,
                "URL=http://10.10.70.39:8086/signin", END_INLINE
        );

        status = nsApi.ns_end_transaction("signout", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("setup_3");
        status = nsApi.ns_web_url ("setup_3",
            "URL=http://10.10.70.39:8086/api/v2/setup"
        );

        status = nsApi.ns_end_transaction("setup_3", NS_AUTO_STATUS);
    
    //Page Auto split for application/json type
        status = nsApi.ns_start_transaction("health_3");
        status = nsApi.ns_web_url ("health_3",
            "URL=http://10.10.70.39:8086/health",
            "HEADER=Accept-Language:en-US,en;q=0.9"
        );

        status = nsApi.ns_end_transaction("health_3", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(2.401);

        return status;
    }
}
