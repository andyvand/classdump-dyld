/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALFilter.h>

@class NSArray;

@interface CALPropertyFilter : CALFilter {

	NSArray* _keys;
	int _mode;

}
+(id)filterPropertiesNames:(id)arg1 withMode:(int)arg2 ;
-(void)dealloc;
-(void)applyTo:(id)arg1 ;
-(id)initWithPropertiesNames:(id)arg1 withMode:(int)arg2 ;
@end
