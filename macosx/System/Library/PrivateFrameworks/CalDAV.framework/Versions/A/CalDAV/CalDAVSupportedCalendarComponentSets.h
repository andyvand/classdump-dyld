/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {

	NSMutableSet* _componentSets;

}
+(char)allowedCalendars:(id)arg1 contains:(id)arg2 ;
-(id)componentsAsString;
-(void)addCompSet:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyParseRules;
-(id)childrenToWrite;
@end

