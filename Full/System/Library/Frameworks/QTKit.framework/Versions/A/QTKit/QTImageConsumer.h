/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QTImageConsumer <NSObject>
@optional
-(id)diagnosticString;
-(id)preferredAttributes;

@required
-(void)flushImageBuffersAfterHostTime:(unsigned long long)arg1;
-(void)setImageBuffer:(CVBufferRef)arg1 forHostTime:(unsigned long long)arg2;

@end

