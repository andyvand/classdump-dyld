/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSNumber, NSString;


@protocol EKProtocolStructuredLocation <EKProtocolObject>
@property (nonatomic,copy,readonly) NSNumber * radiusNumber; 
@property (retain,readonly) NSString * uuid; 
@required
-(NSString *)uuid;
-(id)title;
-(id)abURLString;
-(id)geoURLString;
-(id)routeType;
-(NSNumber *)radiusNumber;
-(id)address;

@end

