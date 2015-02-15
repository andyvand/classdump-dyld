/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKGLSharedContextRegistry : NSObject {

	CFDictionaryRef _sharedContexts;
	CFDictionaryRef _contexts;
	CFSetRef _dirtyContexts;
	SCD_Struct_IK31* _lastResult;
	void* _lastOwner;
	CGLContextObject* _lastContext;

}
+(id)sharedInstance;
-(void)removeOwner:(void*)arg1 ;
-(SCD_Struct_IK31*)glImageInfoInContext:(CGLContextObject*)arg1 owner:(void*)arg2 createIfNeeded:(char)arg3 ;
-(void)makeContextReady:(CGLContextObject*)arg1 ;
-(void)removeTexturesInContext:(CGLContextObject*)arg1 owner:(void*)arg2 ;
-(void)declareContext:(CGLContextObject*)arg1 isSharedWith:(CGLContextObject*)arg2 ;
-(void)removeContext:(CGLContextObject*)arg1 ;
-(void)_associate:(CGLContextObject*)arg1 with:(CGLContextObject*)arg2 ;
-(CFDictionaryRef)sharedContexts;
-(void)_moveTexturesFromContext:(CGLContextObject*)arg1 toContext:(CGLContextObject*)arg2 ;
-(void)_removeTexturesInContext:(CGLContextObject*)arg1 ;
-(void)removeSharedTexturesWithOwner:(void*)arg1 ;
-(void)_checkSharedDictionaryConsistency;
-(char)isContext:(CGLContextObject*)arg1 sharedWith:(CGLContextObject*)arg2 ;
-(void)markDirty:(CGLContextObject*)arg1 ;
-(void)didCreateTexture:(unsigned)arg1 inContext:(CGLContextObject*)arg2 ;
-(void)didDeleteTexture:(unsigned)arg1 inContext:(CGLContextObject*)arg2 ;
-(void)willUseTexture:(unsigned)arg1 inContext:(CGLContextObject*)arg2 ;
-(id)init;
-(void)dealloc;
@end

