/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/airportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <airportd/airportd-Structs.h>
#import <airportd/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface CWANQPCache : NSObject <NSCopying> {

	NSMutableSet* _cache;
	NSObject*<OS_dispatch_queue> _cacheMutex;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)queryCacheForNetwork:(id)arg1 elements:(unsigned long long)arg2 maxAge:(double)arg3 ;
-(void)updateCacheWithANQPElements:(id)arg1 ;
-(void)clearCacheForNetwork:(id)arg1 ;
-(void)__purgeANQPCache;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)conformsToProtocol:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)delegate;
@end
