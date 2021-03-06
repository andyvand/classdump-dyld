/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {

	NSArray* _regions;
	FTMessageDelivery* _delivery;

}

@property (readonly) char isLoaded; 
@property (readonly) char isLoading; 
@property (readonly) NSArray * regions; 
@property (retain) FTMessageDelivery * _delivery;              //@synthesize delivery=_delivery - In the implementation block
@property (retain) NSArray * _regions;                         //@synthesize regions=_regions - In the implementation block
+(id)sharedInstance;
-(void)startLoading;
-(NSArray *)regions;
-(id)regionForID:(id)arg1 ;
-(char)isLoading;
-(void)dealloc;
-(char)isLoaded;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(NSArray *)_regions;
-(void)set_regions:(NSArray *)arg1 ;
-(FTMessageDelivery *)_delivery;
-(void)set_delivery:(FTMessageDelivery *)arg1 ;
@end

