/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DiscRecording/DiscRecording-Structs.h>
@interface DRBurn : NSObject {

	void* _ref;

}
+(id)burnForDevice:(id)arg1 ;
+(char)isPropertyKey:(id)arg1 ;
+(id)layoutForImageFile:(id)arg1 ;
+(void)setupBindings;
+(void)initialize;
-(void)writeLayout:(id)arg1 ;
-(DRBurnObject*)_obj;
-(float)requestedBurnSpeed;
-(void)setRequestedBurnSpeed:(float)arg1 ;
-(char)appendable;
-(void)setAppendable:(char)arg1 ;
-(char)verifyDisc;
-(void)setVerifyDisc:(char)arg1 ;
-(id)completionAction;
-(void)setCompletionAction:(id)arg1 ;
-(char)burnUnderrunProtection;
-(void)setBurnUnderrunProtection:(char)arg1 ;
-(char)testBurn;
-(void)setTestBurn:(char)arg1 ;
-(char)_burnWriteLayoutPatchFixAvailable;
-(void)_DiscRecording_KVCSetterPlaceholder:(id)arg1 ;
-(id)_DiscRecording_KVCGetterPlaceholder;
-(void)setProperties:(id)arg1 ;
-(void)abort;
-(unsigned long long)_cfTypeID;
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)status;
-(id)device;
-(id)properties;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

