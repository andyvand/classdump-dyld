/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, ICSDocument, CoreDAVErrorItem, NSString;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem {

	CoreDAVItemWithHrefChildItem* _recipientHREF;
	CoreDAVLeafItem* _requestStatus;
	ICSDocument* _calendarData;
	CoreDAVErrorItem* _topLevelErrorItem;
	NSString* _responseDescription;

}

@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * recipientHREF;              //@synthesize recipientHREF=_recipientHREF - In the implementation block
@property (nonatomic,readonly) NSString * recipientString; 
@property (nonatomic,retain) CoreDAVLeafItem * requestStatus;                           //@synthesize requestStatus=_requestStatus - In the implementation block
@property (nonatomic,retain) ICSDocument * calendarData;                                //@synthesize calendarData=_calendarData - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * topLevelErrorItem;                      //@synthesize topLevelErrorItem=_topLevelErrorItem - In the implementation block
@property (nonatomic,retain) NSString * responseDescription;                            //@synthesize responseDescription=_responseDescription - In the implementation block
-(void)setRecipientHREF:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(void)setCalendarData:(ICSDocument *)arg1 ;
-(void)setTopLevelErrorItem:(CoreDAVErrorItem *)arg1 ;
-(void)_setCalendarDataWithLeafItem:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(CoreDAVLeafItem *)requestStatus;
-(void)setRequestStatus:(CoreDAVLeafItem *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(CoreDAVItemWithHrefChildItem *)recipientHREF;
-(CoreDAVErrorItem *)topLevelErrorItem;
-(NSString *)recipientString;
-(ICSDocument *)calendarData;
-(id)copyParseRules;
-(NSString *)responseDescription;
-(void)setResponseDescription:(NSString *)arg1 ;
@end
