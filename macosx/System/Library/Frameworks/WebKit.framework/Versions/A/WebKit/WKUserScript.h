/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/NSCopying.h>

@class NSString;

@interface WKUserScript : NSObject <NSCopying> {

	RetainPtr<NSString>* _source;
	long long _injectionTime;
	char _forMainFrameOnly;

}

@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,readonly) long long injectionTime; 
@property (getter=isForMainFrameOnly,nonatomic,readonly) char forMainFrameOnly; 
-(id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(char)arg3 ;
-(long long)injectionTime;
-(char)isForMainFrameOnly;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)source;
@end

