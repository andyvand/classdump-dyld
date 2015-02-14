/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <Automator/NSCopying.h>

@class NSDate, NSMutableDictionary, NSMutableArray;

@interface AMWorkflowOptions : NSObject <NSCopying> {

	NSDate* _dateToRun;
	NSMutableDictionary* _repeatInfo;
	NSMutableArray* _pathsToWatch;
	NSMutableArray* _notificationsToWatch;

}
-(void)setDateToRun:(id)arg1 ;
-(void)setRepeatInfo:(id)arg1 ;
-(void)setPathsToWatch:(id)arg1 ;
-(void)setNotificationsToWatch:(id)arg1 ;
-(id)launchdplist;
-(id)dateToRun;
-(id)repeatInfo;
-(id)notificationsToWatch;
-(id)pathsToWatch;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)propertyList;
@end

