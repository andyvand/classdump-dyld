/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalStoreRemoteManagedNode.h>

@class NSArray;

@interface CalStoreRemoteManagedGroup : CalStoreRemoteManagedNode

@property (nonatomic,readonly) NSArray * calendars; 
+(char)supportsSecureCoding;
-(char)removeWithError:(id*)arg1 ;
-(id)saveWithError:(id*)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSArray *)calendars;
@end

