/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface SSPurchaseResponse : NSObject <NSSecureCoding> {

	NSArray* _downloads;
	NSDictionary* _rawResponse;
	NSDictionary* _metrics;

}

@property (retain) NSArray * downloads;                 //@synthesize downloads=_downloads - In the implementation block
@property (retain) NSDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(char)supportsSecureCoding;
-(NSDictionary *)metrics;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 ;
-(NSArray *)downloads;
-(id)_newDownloadsFromItems:(id)arg1 withDSID:(id)arg2 ;
-(void)setDownloads:(NSArray *)arg1 ;
@end

