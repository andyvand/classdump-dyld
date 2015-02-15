/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALFilter.h>

@class NSArray;

@interface CALSubComponentFilter : CALFilter {

	NSArray* _classes;
	int _mode;

}
+(id)filterSubComponentsWithClasses:(id)arg1 withMode:(int)arg2 ;
-(void)dealloc;
-(void)applyTo:(id)arg1 ;
-(id)initWithSubComponentsWithClasses:(id)arg1 withMode:(int)arg2 ;
@end

