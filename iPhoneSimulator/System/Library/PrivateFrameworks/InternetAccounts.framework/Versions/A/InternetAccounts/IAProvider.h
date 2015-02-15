/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface IAProvider : NSObject {

	NSString* _providerType;
	NSMutableArray* _servicesProvided;

}

@property (nonatomic,retain) NSArray * serviceTypesProvided;              //@synthesize servicesProvided=_servicesProvided - In the implementation block
@property (readonly) NSString * providerType;                             //@synthesize providerType=_providerType - In the implementation block
+(char)providerTypeIsAList:(id)arg1 ;
+(id)aListProviderIDs;
+(id)dataProviderIDs;
-(NSArray *)serviceTypesProvided;
-(id)initWithProviderType:(id)arg1 ;
-(void)setServiceTypesProvided:(NSArray *)arg1 ;
-(NSString *)providerType;
-(id)description;
@end

