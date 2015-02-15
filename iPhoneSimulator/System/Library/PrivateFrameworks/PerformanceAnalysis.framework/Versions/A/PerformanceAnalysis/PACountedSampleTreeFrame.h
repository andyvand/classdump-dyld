/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PACountedSampleFrame.h>

@class NSMutableSet;

@interface PACountedSampleTreeFrame : PACountedSampleFrame {

	unsigned long long _state;
	NSMutableSet* _children;

}

@property (readonly) NSMutableSet * children; 
@property (readonly) char isLeafFrame; 
@property (assign) unsigned long long state;               //@synthesize state=_state - In the implementation block
-(id)initWithSampleFrame:(id)arg1 andState:(unsigned long long)arg2 ;
-(char)isLeafFrame;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(NSMutableSet *)children;
@end

