/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString, __NSHostExtraIvars;

@interface NSHost : NSObject {

	NSArray* names;
	NSArray* addresses;
	id reserved;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * names; 
@property (copy,readonly) NSString * address; 
@property (copy,readonly) NSArray * addresses; 
@property (copy,readonly) NSString * localizedName; 
@property (nonatomic,retain) __NSHostExtraIvars * reserved; 
+(id)hostWithName:(id)arg1 ;
+(id)currentHost;
+(id)hostWithAddress:(id)arg1 ;
+(char)isHostCacheEnabled;
+(void)setHostCacheEnabled:(char)arg1 ;
+(void)flushHostCache;
-(id)_thingToResolve;
-(NSArray *)names;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(NSString *)localizedName;
-(void)setReserved:(__NSHostExtraIvars *)arg1 ;
-(__NSHostExtraIvars *)reserved;
-(id)initToResolve:(id)arg1 as:(int)arg2 ;
-(void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)resolveCurrentHostWithHandler:(/*^block*/id)arg1 ;
-(void)resolve:(/*^block*/id)arg1 ;
-(void)blockingResolveUntil:(int)arg1 ;
-(char)isEqualToHost:(id)arg1 ;
-(NSString *)address;
-(NSArray *)addresses;
@end
