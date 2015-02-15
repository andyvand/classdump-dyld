/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>

@class EKEventStore;

@interface EKUnarchiver : NSKeyedUnarchiver {

	EKEventStore* _eventStore;

}

@property (retain) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
@end

