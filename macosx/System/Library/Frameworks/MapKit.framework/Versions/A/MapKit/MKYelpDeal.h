/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/NSCopying.h>

@class NSString, NSDate, NSURL;

@interface MKYelpDeal : NSObject <NSCopying> {

	NSString* dealID;
	NSString* title;
	NSDate* startDate;
	NSDate* endDate;
	NSURL* url;

}

@property (nonatomic,retain) NSString * dealID; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSURL * url; 
+(id)dealWithJSONObject:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setDealID:(NSString *)arg1 ;
-(NSString *)dealID;
-(NSDate *)startDate;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setUrl:(NSURL *)arg1 ;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
@end

