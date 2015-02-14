/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalCalDAVSynchronousTaskGroup.h>
#import <CalendarPersistence/CoreDAVContainerInfoTaskGroupDelegate.h>

@class NSSet, NSString;

@interface CalCalDAVCalendarInfoTaskGroupWrapper : CalCalDAVSynchronousTaskGroup <CoreDAVContainerInfoTaskGroupDelegate> {

	NSSet* _containers;

}

@property (assign) NSSet * containers;                              //@synthesize containers=_containers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContainers:(NSSet *)arg1 ;
-(void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3 ;
-(NSSet *)containers;
@end

