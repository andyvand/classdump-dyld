/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSNumber, NSString;

@interface SSMetricsMediaEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSNumber * itemIdentifier; 
@property (nonatomic,retain) NSString * locationDescription; 
@property (nonatomic,retain) NSString * mediaEventType; 
@property (nonatomic,retain) NSString * mediaURL; 
-(id)init;
-(id)mediaURL;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(void)setMediaEventType:(id)arg1 ;
-(void)setMediaURL:(id)arg1 ;
-(id)locationDescription;
-(void)setLocationDescription:(id)arg1 ;
-(id)mediaEventType;
-(id)itemIdentifier;
-(void)setItemIdentifier:(id)arg1 ;
@end
