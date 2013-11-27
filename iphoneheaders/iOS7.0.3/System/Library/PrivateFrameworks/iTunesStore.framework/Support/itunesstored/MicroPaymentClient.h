/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSMutableSet, NSNumber;

@interface MicroPaymentClient : NSManagedObject

@property (nonatomic,@dynamic,retain) NSString * identifier; 
@property (nonatomic,@dynamic,retain) NSDate * lastQueueCheckDate; 
@property (nonatomic,@dynamic,retain) NSMutableSet * payments; 
@property (nonatomic,@dynamic,retain) NSNumber * sandboxed; 
@property (nonatomic,@dynamic,retain) NSString * bundleVersion; 
@property (nonatomic,@dynamic,retain) NSNumber * storeIdentifier; 
@property (nonatomic,@dynamic,retain) NSNumber * storeVersion; 
@property (nonatomic,@dynamic,retain) NSString * vendorIdentifier; 
@property (nonatomic,@dynamic,retain) NSNumber * usesIdentityAttributes; 
+(id)entityForContext:(id)arg1 ;
-(id)mergeResponse:(id)arg1 withOptions:(int)arg2 ;
-(id)replacePayment:(id)arg1 withPurchaseResponse:(id)arg2 ;
@end
