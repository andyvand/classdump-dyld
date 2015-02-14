/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/GFNodeManager.h>

@interface QCNodeManager : GFNodeManager {

	void** _unused2[4];

}
-(id)instantiateNodeWithName:(id)arg1 ;
-(void)registerNodeWithClass:(Class)arg1 identifier:(id)arg2 ;
-(id)nodeNames;
-(void)registerNode:(id)arg1 withName:(id)arg2 ;
-(void)loadPlugInAtPath:(id)arg1 ;
-(void)loadPlugInFromComposition:(id)arg1 name:(id)arg2 ;
-(void)registerNodeWithClass:(Class)arg1 identifier:(id)arg2 isPrivate:(char)arg3 ;
-(id)attributesFromComposition:(id)arg1 ;
-(id)_patchFromComposition:(id)arg1 ;
-(id)_attributesFromComposition:(id)arg1 ;
-(id)_patchFromCompositionPath:(id)arg1 ;
-(id)_attributesFromCompositionPath:(id)arg1 ;
-(char)isNodePrivateWithName:(id)arg1 ;
@end

