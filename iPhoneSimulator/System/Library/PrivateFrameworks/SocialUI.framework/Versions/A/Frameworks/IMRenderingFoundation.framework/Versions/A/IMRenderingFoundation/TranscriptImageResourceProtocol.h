/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface TranscriptImageResourceProtocol : NSURLProtocol {

	int _previousScaleFactor;
	long long _previousMax;

}

@property (assign) int previousScaleFactor;              //@synthesize previousScaleFactor=_previousScaleFactor - In the implementation block
@property (assign) long long previousMax;                //@synthesize previousMax=_previousMax - In the implementation block
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)transcriptProtocolScheme;
+(void)shouldRegisterProtocol:(char)arg1 ;
+(char)canInitWithRequest:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(void)requestResourceData:(id)arg1 fromURL:(id)arg2 ;
-(id)_balloonColor:(id)arg1 fromMe:(char)arg2 is2x:(char)arg3 ;
-(id)_thoughtBalloonFromMe:(char)arg1 is2x:(char)arg2 ;
-(int)previousScaleFactor;
-(void)setPreviousScaleFactor:(int)arg1 ;
-(long long)previousMax;
-(void)setPreviousMax:(long long)arg1 ;
@end

