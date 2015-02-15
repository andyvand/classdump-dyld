/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface EWSSRVRecord : NSObject {

	NSDictionary* _srvRecord;

}

@property (nonatomic,copy,readonly) NSString * host; 
@property (nonatomic,readonly) NSNumber * port; 
@property (nonatomic,readonly) NSNumber * priority; 
@property (nonatomic,readonly) NSNumber * weight; 
@property (nonatomic,copy,readonly) NSDictionary * srvRecord;              //@synthesize srvRecord=_srvRecord - In the implementation block
-(NSNumber *)weight;
-(id)initWithSRVRecord:(id)arg1 ;
-(NSDictionary *)srvRecord;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSNumber *)priority;
-(NSString *)host;
-(NSNumber *)port;
@end

