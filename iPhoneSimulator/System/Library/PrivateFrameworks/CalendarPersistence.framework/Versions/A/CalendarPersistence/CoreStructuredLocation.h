/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALPropertyValue.h>

@class NSString;

@interface CoreStructuredLocation : CALPropertyValue

@property (retain) NSString * displayName; 
@property (retain) NSString * address; 
@property (retain) NSString * routeType; 
+(id)entityFromManagedObject:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)abURLString;
-(void)setAbURLString:(id)arg1 ;
-(void)setRouteType:(NSString *)arg1 ;
-(NSString *)routeType;
-(id)initWithGeoURLString:(id)arg1 ;
-(id)coordinates;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)setRadius:(double)arg1 ;
-(double)radius;
@end

