/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface WKCustomProtocol : NSURLProtocol {

	unsigned long long _customProtocolID;

}

@property (nonatomic,readonly) unsigned long long customProtocolID;              //@synthesize customProtocolID=_customProtocolID - In the implementation block
+(id)canonicalRequestForRequest:(id)arg1 ;
+(char)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(char)canInitWithRequest:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(unsigned long long)customProtocolID;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
@end

