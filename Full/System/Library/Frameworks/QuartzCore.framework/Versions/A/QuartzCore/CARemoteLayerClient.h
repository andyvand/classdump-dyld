/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CALayer;

@interface CARemoteLayerClient : NSObject {

	id _impl;

}

@property (readonly) unsigned clientId; 
@property (retain) CALayer * layer; 
-(id)initWithServerPort:(unsigned)arg1 ;
-(void)dealloc;
-(CALayer *)layer;
-(void)invalidate;
-(void)setLayer:(CALayer *)arg1 ;
-(id)context;
-(unsigned)clientId;
@end

