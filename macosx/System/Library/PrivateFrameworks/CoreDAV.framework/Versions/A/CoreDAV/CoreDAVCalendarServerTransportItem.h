/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVItemWithHrefChildItem;

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem {

	CoreDAVLeafItem* _apsBundleID;
	CoreDAVLeafItem* _courierServer;
	CoreDAVItemWithHrefChildItem* _subscriptionURL;
	CoreDAVItemWithHrefChildItem* _tokenURL;
	CoreDAVLeafItem* _apsEnv;
	CoreDAVLeafItem* _refreshInterval;
	CoreDAVLeafItem* _xmppServer;
	CoreDAVLeafItem* _xmppURI;

}

@property (nonatomic,retain) CoreDAVLeafItem * apsBundleID;                               //@synthesize apsBundleID=_apsBundleID - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * courierServer;                             //@synthesize courierServer=_courierServer - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * subscriptionURL;              //@synthesize subscriptionURL=_subscriptionURL - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * tokenURL;                     //@synthesize tokenURL=_tokenURL - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * apsEnv;                                    //@synthesize apsEnv=_apsEnv - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * refreshInterval;                           //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * xmppServer;                                //@synthesize xmppServer=_xmppServer - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * xmppURI;                                   //@synthesize xmppURI=_xmppURI - In the implementation block
+(id)copyParseRules;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setSubscriptionURL:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(CoreDAVItemWithHrefChildItem *)subscriptionURL;
-(CoreDAVLeafItem *)refreshInterval;
-(void)setRefreshInterval:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVItemWithHrefChildItem *)tokenURL;
-(CoreDAVLeafItem *)apsBundleID;
-(CoreDAVLeafItem *)courierServer;
-(CoreDAVLeafItem *)apsEnv;
-(CoreDAVLeafItem *)xmppServer;
-(CoreDAVLeafItem *)xmppURI;
-(void)setTokenURL:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(void)setApsBundleID:(CoreDAVLeafItem *)arg1 ;
-(void)setCourierServer:(CoreDAVLeafItem *)arg1 ;
-(void)setApsEnv:(CoreDAVLeafItem *)arg1 ;
-(void)setXmppServer:(CoreDAVLeafItem *)arg1 ;
-(void)setXmppURI:(CoreDAVLeafItem *)arg1 ;
@end

