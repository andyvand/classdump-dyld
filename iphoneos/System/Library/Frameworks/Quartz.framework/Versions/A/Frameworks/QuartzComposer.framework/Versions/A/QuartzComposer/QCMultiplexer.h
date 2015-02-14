/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCIndexPort, NSMutableArray, QCPort;

@interface QCMultiplexer : QCPatch {

	QCIndexPort* inputIndex;
	NSMutableArray* _inPorts;
	QCPort* _outPort;

}
+(id)serializedStateKeysWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
-(void)dealloc;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_forwardRenderingFlag;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(Class)portClass;
-(void)setPortClass:(Class)arg1 ;
-(unsigned long long)inputCount;
-(id)_activePort;
-(void)setInputCount:(unsigned long long)arg1 ;
@end

