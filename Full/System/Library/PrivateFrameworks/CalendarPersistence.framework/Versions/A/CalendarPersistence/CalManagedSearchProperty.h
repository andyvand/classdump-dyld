/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>

@class NSString, CalManagedCalDAVPrincipal;

@interface CalManagedSearchProperty : CalManagedObject

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * namespace; 
@property (nonatomic,retain) CalManagedCalDAVPrincipal * principal; 
@property (nonatomic,retain,readonly) NSString * CDVStringWithNameSpace; 
+(id)entityName;
-(NSString *)CDVStringWithNameSpace;
@end
