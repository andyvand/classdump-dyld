/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCStringPort, QCNumberPort, QCIndexPort, QCBooleanPort, NSMutableArray;

@interface QCOpenGLInfo : QCPatch {

	QCStringPort* outputVendor;
	QCStringPort* outputRenderer;
	QCNumberPort* outputVersion;
	QCIndexPort* outputVRAM;
	QCIndexPort* outputTextureUnits;
	QCIndexPort* outputMaxTextureSize;
	QCIndexPort* outputMaxRenderSize;
	QCIndexPort* outputBitsPerPixel;
	QCBooleanPort* outputFloatComponents;
	QCBooleanPort* outputCIAccelerated;
	NSMutableArray* _extensionPorts;

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
-(char)setup:(id)arg1 ;
-(void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3 ;
-(id)extensions;
-(char)_addExtension:(id)arg1 ;
-(void)_removeExtension:(id)arg1 ;
-(void)_updateInfo:(id)arg1 ;
-(void)setExtensions:(id)arg1 ;
@end

