/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer, NSDictionary;

@interface CAContext : NSObject

@property (readonly) unsigned contextId; 
@property (retain) CALayer * layer; 
@property (assign) unsigned displayNumber; 
@property (assign) unsigned displayMask; 
@property (assign) unsigned eventMask; 
@property (assign) int restrictedHostProcessId; 
@property (assign) CGColorSpaceRef colorSpace; 
@property (readonly) NSDictionary * options; 
@property (readonly) char valid; 
+(id)localContextWithOptions:(id)arg1 ;
+(void)setClientPort:(unsigned)arg1 ;
+(void)setAllowsCGSConnections:(char)arg1 ;
+(char)allowsCGSConnections;
+(id)remoteContextWithOptions:(id)arg1 ;
+(id)contextWithCGSConnection:(unsigned)arg1 options:(id)arg2 ;
+(id)objectForSlot:(unsigned)arg1 ;
+(id)localContext;
+(id)remoteContext;
+(id)currentContext;
+(id)allContexts;
-(void)setFencePort:(unsigned)arg1 ;
-(void)setFence:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)deleteSlot:(unsigned)arg1 ;
-(unsigned)createSlot;
-(void)setObject:(id)arg1 forSlot:(unsigned)arg2 ;
-(void)invalidate;
-(unsigned)createFencePort;
-(void)setFencePort:(unsigned)arg1 commitHandler:(/*^block*/id)arg2 ;
@end

