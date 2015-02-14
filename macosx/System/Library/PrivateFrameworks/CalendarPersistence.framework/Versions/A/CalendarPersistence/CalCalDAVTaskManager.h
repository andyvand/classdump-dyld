/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalTaskManager.h>
#import <CalendarPersistence/CoreDAVTaskManager.h>

@class NSRunLoop, NSString;

@interface CalCalDAVTaskManager : CalTaskManager <CoreDAVTaskManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
-(void)submitQueuedCoreDAVTask:(id)arg1 ;
-(void)submitIndependentCoreDAVTask:(id)arg1 ;
-(void)coreDAVTaskRequestModal:(id)arg1 ;
-(void)coreDAVTaskEndModal:(id)arg1 ;
-(void)coreDAVTaskDidFinish:(id)arg1 ;
@end

