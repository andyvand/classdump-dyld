/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerMultiGetTask.h>

@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {

	char _getScheduleTags;
	char _getScheduleChanges;

}

@property (assign,nonatomic) char getScheduleTags;                 //@synthesize getScheduleTags=_getScheduleTags - In the implementation block
@property (assign,nonatomic) char getScheduleChanges;              //@synthesize getScheduleChanges=_getScheduleChanges - In the implementation block
-(void)setGetScheduleTags:(char)arg1 ;
-(void)setGetScheduleChanges:(char)arg1 ;
-(char)getScheduleTags;
-(char)getScheduleChanges;
-(id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(char)arg3 getScheduleChanges:(char)arg4 appSpecificCalendarItemClass:(Class)arg5 ;
-(id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(char)arg3 getScheduleChanges:(char)arg4 ;
-(id)copyAdditionalPropElements;
-(void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2 ;
@end

