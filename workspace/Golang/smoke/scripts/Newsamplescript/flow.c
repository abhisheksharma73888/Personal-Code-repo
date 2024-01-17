/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 01/12/2023 07:46:51
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
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://code.jquery.com/jquery-3.3.1.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:http://172.24.1.4:1323", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:1323/static/css/main.css", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:1323/static/image/goimg.png", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://172.24.1.4:1323/static/image/o.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);
    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_2");
    ns_web_url ("index_2",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_2", NS_AUTO_STATUS);
    ns_page_think_time(1.242);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("hello");
    ns_web_url ("hello",
        "URL=http://172.24.1.4:1323/hello",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("hello", NS_AUTO_STATUS);
    ns_page_think_time(1.138);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_3");
    ns_web_url ("index_3",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_3", NS_AUTO_STATUS);
    ns_page_think_time(1.939);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("postpg");
    ns_web_url ("postpg",
        "URL=http://172.24.1.4:1323/postpg",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("postpg", NS_AUTO_STATUS);
    ns_page_think_time(1.287);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_4");
    ns_web_url ("index_4",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_4", NS_AUTO_STATUS);
    ns_page_think_time(1.415);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("httpcall");
    ns_web_url ("httpcall",
        "URL=http://172.24.1.4:1323/httpcall",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("httpcall", NS_AUTO_STATUS);
    ns_page_think_time(1.782);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_5");
    ns_web_url ("index_5",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_5", NS_AUTO_STATUS);
    ns_page_think_time(1.626);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_6");
    ns_web_url ("index_6",
        "URL=http://172.24.1.4:1323/mux/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_6", NS_AUTO_STATUS);
    ns_page_think_time(1.268);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_7");
    ns_web_url ("index_7",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://code.jquery.com/jquery-3.3.1.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:http://172.24.1.4:1323", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_7", NS_AUTO_STATUS);
    ns_page_think_time(1.313);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("abhay");
    ns_web_url ("abhay",
        "URL=http://172.24.1.4:1323/json/abhi/karan/abhay",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("abhay", NS_AUTO_STATUS);
    ns_page_think_time(1.128);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_8");
    ns_web_url ("index_8",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_8", NS_AUTO_STATUS);
    ns_page_think_time(1.501);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("mysql");
    ns_web_url ("mysql",
        "URL=http://172.24.1.4:1323/mysql",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("mysql", NS_AUTO_STATUS);
    ns_page_think_time(4.686);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_9");
    ns_web_url ("index_9",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_9", NS_AUTO_STATUS);
    ns_page_think_time(3.039);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("mongodb");
    ns_web_url ("mongodb",
        "URL=http://172.24.1.4:1323/mongodb",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("mongodb", NS_AUTO_STATUS);
    ns_page_think_time(1.162);

    ns_start_transaction("mongodb_2");
    ns_web_url ("mongodb_2",
        "URL=http://172.24.1.4:1323/mongodb",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("mongodb_2", NS_AUTO_STATUS);
    ns_page_think_time(0.748);

    ns_start_transaction("mongodb_3");
    ns_web_url ("mongodb_3",
        "URL=http://172.24.1.4:1323/mongodb",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("mongodb_3", NS_AUTO_STATUS);
    ns_page_think_time(4.294);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("page_2");
    ns_web_url ("page_2",
        "URL=http://172.24.1.4:1323/page",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("page_2", NS_AUTO_STATUS);
    ns_page_think_time(43.213);

    ns_start_transaction("page");
    ns_web_url ("page",
        "URL=http://172.24.1.4:1323/static/image/requrired.txt",
        INLINE_URLS,
            "URL=http://172.24.1.4:1323/static/image/requrired.txt", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("page", NS_AUTO_STATUS);
    ns_page_think_time(0.712);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("about");
    ns_web_url ("about",
        "URL=http://172.24.1.4:1323/about",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("about", NS_AUTO_STATUS);
    ns_page_think_time(2.39);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_10");
    ns_web_url ("index_10",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_10", NS_AUTO_STATUS);
    ns_page_think_time(1.775);

    ns_start_transaction("index_11");
    ns_web_url ("index_11",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_11", NS_AUTO_STATUS);
    ns_page_think_time(2.176);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_12");
    ns_web_url ("index_12",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_12", NS_AUTO_STATUS);
    ns_page_think_time(2.059);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("hello_2");
    ns_web_url ("hello_2",
        "URL=http://172.24.1.4:1323/hello",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("hello_2", NS_AUTO_STATUS);
    ns_page_think_time(1.265);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_13");
    ns_web_url ("index_13",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_13", NS_AUTO_STATUS);
    ns_page_think_time(1.846);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("mysql_2");
    ns_web_url ("mysql_2",
        "URL=http://172.24.1.4:1323/mysql",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("mysql_2", NS_AUTO_STATUS);
    ns_page_think_time(1.2);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_14");
    ns_web_url ("index_14",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_14", NS_AUTO_STATUS);
    ns_page_think_time(1.58);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("cats");
    ns_web_url ("cats",
        "URL=http://172.24.1.4:1323/cats?name=Abhi&type=da%3Ca%20b%3E",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("cats", NS_AUTO_STATUS);
    ns_page_think_time(1.503);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_15");
    ns_web_url ("index_15",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_15", NS_AUTO_STATUS);
    ns_page_think_time(1.706);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("mongodb_4");
    ns_web_url ("mongodb_4",
        "URL=http://172.24.1.4:1323/mongodb",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("mongodb_4", NS_AUTO_STATUS);
    ns_page_think_time(2.493);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_16");
    ns_web_url ("index_16",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_16", NS_AUTO_STATUS);
    ns_page_think_time(3.612);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("postpg_2");
    ns_web_url ("postpg_2",
        "URL=http://172.24.1.4:1323/postpg",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("postpg_2", NS_AUTO_STATUS);
    ns_page_think_time(3.1);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_17");
    ns_web_url ("index_17",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_17", NS_AUTO_STATUS);
    ns_page_think_time(1.482);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_18");
    ns_web_url ("index_18",
        "URL=http://172.24.1.4:1323/mux/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_18", NS_AUTO_STATUS);
    ns_page_think_time(3.242);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_19");
    ns_web_url ("index_19",
        "URL=http://172.24.1.4:1323/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_19", NS_AUTO_STATUS);
    ns_page_think_time(1.915);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("httpcall_2");
    ns_web_url ("httpcall_2",
        "URL=http://172.24.1.4:1323/httpcall",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("httpcall_2", NS_AUTO_STATUS);
    ns_page_think_time(1.28);

    ns_start_transaction("httpcall_3");
    ns_web_url ("httpcall_3",
        "URL=http://172.24.1.4:1323/httpcall",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("httpcall_3", NS_AUTO_STATUS);
    ns_page_think_time(2.123);

}
