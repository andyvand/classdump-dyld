/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVPrincipal;
@class NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup {

	id<CalDAVPrincipal> _principal;
	char _isCancellingTaskGroups;
	NSMutableSet* _outstandingTaskGroups;

}

@property (nonatomic,readonly) id<CalDAVPrincipal> principal;                     //@synthesize principal=_principal - In the implementation block
@property (nonatomic,readonly) NSMutableSet * outstandingTaskGroups;              //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
-(NSMutableSet *)outstandingTaskGroups;
-(void)_tearDownAllTaskGroupsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithPrincipal:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<CalDAVPrincipal>)principal;
-(void)cancelTaskGroup;
-(void)bailWithError:(id)arg1 ;
@end

