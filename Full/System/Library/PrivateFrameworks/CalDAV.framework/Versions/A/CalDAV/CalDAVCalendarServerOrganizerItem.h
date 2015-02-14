/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVLeafItem* _commonName;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                    //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * commonName;              //@synthesize commonName=_commonName - In the implementation block
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(CoreDAVLeafItem *)commonName;
-(void)setCommonName:(CoreDAVLeafItem *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
@end

