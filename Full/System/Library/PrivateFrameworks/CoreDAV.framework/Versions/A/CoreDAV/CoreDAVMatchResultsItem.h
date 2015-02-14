/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem {

	CoreDAVLeafItem* _rank;
	CoreDAVLeafItem* _language;
	CoreDAVLeafItem* _region;
	CoreDAVLeafItem* _calendarDescription;

}

@property (nonatomic,retain) CoreDAVLeafItem * rank;                             //@synthesize rank=_rank - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * language;                         //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * region;                           //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * calendarDescription;              //@synthesize calendarDescription=_calendarDescription - In the implementation block
+(id)copyParseRules;
-(CoreDAVLeafItem *)region;
-(void)dealloc;
-(id)description;
-(CoreDAVLeafItem *)language;
-(void)setRegion:(CoreDAVLeafItem *)arg1 ;
-(void)setLanguage:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)calendarDescription;
-(CoreDAVLeafItem *)rank;
-(void)setRank:(CoreDAVLeafItem *)arg1 ;
-(void)setCalendarDescription:(CoreDAVLeafItem *)arg1 ;
@end

