/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {

	NSMutableSet* _responses;
	NSMutableSet* _successfulICS;
	NSMutableSet* _failedResponseItems;

}

@property (nonatomic,retain) NSMutableSet * responses;                        //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSMutableSet * successfulICS;                    //@synthesize successfulICS=_successfulICS - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedResponseItems;              //@synthesize failedResponseItems=_failedResponseItems - In the implementation block
-(void)setSuccessfulICS:(NSMutableSet *)arg1 ;
-(void)setFailedResponseItems:(NSMutableSet *)arg1 ;
-(void)addNewTopLevelItem:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSMutableSet *)responses;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(NSMutableSet *)failedResponseItems;
-(NSMutableSet *)successfulICS;
-(void)setResponses:(NSMutableSet *)arg1 ;
-(id)copyParseRules;
@end

